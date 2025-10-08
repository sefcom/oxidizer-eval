__int64 __fastcall sniffnet::chart::types::traffic_chart::TrafficChart::set_margins_and_label_areas(
        char a1,
        char a2,
        __int64 a3)
{
  __int64 result; // rax

  if ( (a1 & 1) != 0 )
  {
    plotters::chart::builder::ChartBuilder<DB>::margin_right(a3, 0LL);
    plotters::chart::builder::ChartBuilder<DB>::margin_left(a3);
    plotters::chart::builder::ChartBuilder<DB>::margin_bottom(a3);
    return plotters::chart::builder::ChartBuilder<DB>::margin_top(a3, 5LL);
  }
  else
  {
    plotters::chart::builder::ChartBuilder<DB>::margin_right(a3, 25LL);
    plotters::chart::builder::ChartBuilder<DB>::margin_top(a3, 6LL);
    result = plotters::chart::builder::ChartBuilder<DB>::set_label_area_size(a3, 2LL, 55LL);
    if ( (a2 & 1) != 0 )
      return plotters::chart::builder::ChartBuilder<DB>::set_label_area_size(a3, 1LL, 40LL);
  }
  return result;
}