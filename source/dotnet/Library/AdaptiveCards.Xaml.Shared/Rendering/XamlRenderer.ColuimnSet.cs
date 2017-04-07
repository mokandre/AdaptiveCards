﻿using System;
using System.Collections.Generic;
using System.Threading.Tasks;
using System.Windows;
using AdaptiveCards.Rendering;
#if WPF
using System.Windows.Controls;
using System.Windows.Shapes;
#elif XAMARIN
using Xamarin.Forms;
#endif

namespace AdaptiveCards.Rendering
{
    public partial class XamlRenderer
        : AdaptiveRenderer<FrameworkElement, RenderContext>
    {

        /// <summary>
        /// ColumnSet
        /// </summary>
        /// <param name="columnSet"></param>
        /// <returns></returns>
        protected override FrameworkElement Render(ColumnSet columnSet, RenderContext context)
        {
            var uiColumnSet = new Grid();
            uiColumnSet.Style = this.GetStyle("Adaptive.ColumnSet");

            foreach (var column in columnSet.Columns)
            {
                FrameworkElement uiColumn = this.Render(column, context);

                // Add vertical Seperator
                if (uiColumnSet.ColumnDefinitions.Count > 0)
                {
                    var uiSep = new Grid();
                    uiSep.Style = this.GetStyle($"Adaptive.VerticalSeparator");
#if WPF
                    uiSep.VerticalAlignment = VerticalAlignment.Stretch;
#elif XAMARIN
                                // TOOD: check xamarin separator visual
                                //sep.VerticalAlignment = VerticalAlignment.Stretch;
#endif
                    SeparationOption sepStyle;
                    switch (column.Separation)
                    {
                        case SeparationStyle.None:
                            sepStyle = context.Options.Column.Separation.None;
                            break;

                        case SeparationStyle.Default:
                        default:
                            sepStyle = context.Options.Column.Separation.Default;
                            break;

                        case SeparationStyle.Strong:
                            sepStyle = context.Options.Column.Separation.Strong;
                            break;

                    }
                    uiSep.Margin = new Thickness(sepStyle.Spacing / 2, 0, sepStyle.Spacing / 2, 0);
#if WPF
                    uiSep.Width = sepStyle.Thickness;
                    if (sepStyle.Color != null)
                        uiSep.Background = this.GetColorBrush(sepStyle.Color);
#elif XAMARIN
                            // TODO
#endif
                    uiColumnSet.ColumnDefinitions.Add(new ColumnDefinition() { Width = GridLength.Auto });
                    Grid.SetColumn(uiSep, uiColumnSet.ColumnDefinitions.Count - 1);
                    uiColumnSet.Children.Add(uiSep);

                }


                // do some sizing magic using the magic GridUnitType.Star
                var size = column.Size?.ToLower();
                if (size == null || size == ColumnSize.Stretch.ToLower())
                    uiColumnSet.ColumnDefinitions.Add(new ColumnDefinition() { Width = new GridLength(1, GridUnitType.Star) });
                else if (size == ColumnSize.Auto.ToLower())
                    uiColumnSet.ColumnDefinitions.Add(new ColumnDefinition() { Width = GridLength.Auto });
                else
                {
                    double val;
                    if (double.TryParse(size, out val))
                        uiColumnSet.ColumnDefinitions.Add(new ColumnDefinition() { Width = new GridLength(val, GridUnitType.Star) });
                    else
                        uiColumnSet.ColumnDefinitions.Add(new ColumnDefinition() { Width = GridLength.Auto });
                }

                Grid.SetColumn(uiColumn, uiColumnSet.ColumnDefinitions.Count - 1);
                uiColumnSet.Children.Add(uiColumn);
            }

            return uiColumnSet;
        }

    }
}