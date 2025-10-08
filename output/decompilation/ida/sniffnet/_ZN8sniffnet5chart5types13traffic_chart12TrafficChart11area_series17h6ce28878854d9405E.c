__int64 __fastcall sniffnet::chart::types::traffic_chart::TrafficChart::area_series(__int64 a1, __int64 a2, int a3)
{
  __int64 v5; // rax
  char v6; // cl
  _BOOL8 v7; // rdx
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // r14
  __int64 v11; // rax
  float v12; // xmm0_4
  __int16 v14; // [rsp+4h] [rbp-E4h] BYREF
  char v15; // [rsp+6h] [rbp-E2h]
  float v16; // [rsp+8h] [rbp-E0h]
  float v17; // [rsp+Ch] [rbp-DCh]
  _QWORD v18[3]; // [rsp+10h] [rbp-D8h] BYREF
  _BYTE v19[24]; // [rsp+28h] [rbp-C0h] BYREF
  _BYTE v20[24]; // [rsp+40h] [rbp-A8h] BYREF
  _QWORD v21[12]; // [rsp+58h] [rbp-90h] BYREF
  float v22; // [rsp+B8h] [rbp-30h]

  v5 = sniffnet::chart::types::traffic_chart::TrafficChart::series_color(a2, a3);
  v14 = v5;
  v15 = BYTE2(v5);
  sniffnet::gui::styles::types::style_type::StyleType::get_extension(v21, a2);
  v6 = *(_BYTE *)(a2 + 439);
  v8 = 256LL;
  if ( a3 )
    v8 = 208LL;
  v9 = 352LL;
  if ( a3 )
    v9 = 304LL;
  v17 = v22;
  if ( v6 )
    v9 = v8;
  v7 = v6 == 2;
  if ( *(_QWORD *)(a2 + v9 + 16) == 1LL )
  {
    v16 = *(float *)&byte_273728[4 * v7];
    v10 = *(_QWORD *)(a2 + v9 + 8);
    v11 = alloc::alloc::Global::alloc_impl(4LL, 16LL, 0LL);
    if ( !v11 )
      alloc::alloc::handle_alloc_error(4LL, 16LL);
    v12 = v16 * *(float *)(v10 + 16);
    *(_DWORD *)v11 = 0;
    *(float *)(v11 + 4) = v12;
    *(_DWORD *)(v11 + 8) = 1036831949;
    *(float *)(v11 + 12) = v12;
    v18[0] = 2LL;
    v18[1] = v11;
    v18[2] = 2LL;
  }
  else
  {
    sniffnet::chart::types::traffic_chart::sample_spline(v18, v9 + a2, *(float *)&byte_273728[4 * v7]);
  }
  plotters::style::color::Color::mix(v20, &v14, v17);
  plotters::series::area_series::AreaSeries<DB,X,Y>::new(v21, v18, v20);
  <plotters::style::shape::ShapeStyle as core::convert::From<T>>::from(v20, &v14);
  plotters::style::shape::ShapeStyle::stroke_width(v19, v20, 1LL);
  return plotters::series::area_series::AreaSeries<DB,X,Y>::border_style(a1, v21, v19);
}