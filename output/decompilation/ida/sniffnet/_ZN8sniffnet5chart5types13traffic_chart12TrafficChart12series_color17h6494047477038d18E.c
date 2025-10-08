__int64 __fastcall sniffnet::chart::types::traffic_chart::TrafficChart::series_color(__int64 a1, int a2)
{
  _BYTE v3[16]; // [rsp+8h] [rbp-60h] BYREF
  _BYTE v4[16]; // [rsp+18h] [rbp-50h] BYREF
  _BYTE v5[64]; // [rsp+28h] [rbp-40h] BYREF

  sniffnet::gui::styles::types::style_type::StyleType::get_palette(v3, a1);
  if ( a2 )
    return sniffnet::gui::styles::types::palette::to_rgb_color(v5);
  else
    return sniffnet::gui::styles::types::palette::to_rgb_color(v4);
}