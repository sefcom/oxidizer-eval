__int64 __fastcall sniffnet::chart::types::traffic_chart::TrafficChart::font(__int64 a1, __int64 a2, double a3)
{
  unsigned __int8 font_weight; // al
  __int64 v4; // rax
  __int16 v6; // [rsp+4h] [rbp-124h] BYREF
  char v7; // [rsp+6h] [rbp-122h]
  _QWORD v8[10]; // [rsp+8h] [rbp-120h] BYREF
  _BYTE v9[16]; // [rsp+58h] [rbp-D0h] BYREF
  _BYTE v10[88]; // [rsp+68h] [rbp-C0h] BYREF
  _BYTE v11[104]; // [rsp+C0h] [rbp-68h] BYREF

  v8[0] = aSarasaMonoScFo;
  v8[1] = 27LL;
  *(double *)&v8[2] = a3;
  <plotters::style::font::font_desc::FontDesc as core::convert::From<(&str,T)>>::from(v11, v8);
  font_weight = sniffnet::gui::styles::types::style_type::StyleType::get_font_weight(a2);
  plotters::style::font::font_desc::FontDesc::style(v10, v11, font_weight);
  sniffnet::gui::styles::types::style_type::StyleType::get_palette(v8, a2);
  v4 = sniffnet::gui::styles::types::palette::to_rgb_color(v9);
  v6 = v4;
  v7 = BYTE2(v4);
  plotters::style::font::font_desc::FontDesc::color(a1, v10, &v6);
  core::ptr::drop_in_place<plotters::style::font::font_desc::FontDesc>(v10);
  return core::ptr::drop_in_place<plotters::style::font::font_desc::FontDesc>(v11);
}