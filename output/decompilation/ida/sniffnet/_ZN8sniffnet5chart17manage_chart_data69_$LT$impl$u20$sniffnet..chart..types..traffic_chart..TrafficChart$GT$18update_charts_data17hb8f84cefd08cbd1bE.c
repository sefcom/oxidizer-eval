void __fastcall sniffnet::chart::manage_chart_data::<impl sniffnet::chart::types::traffic_chart::TrafficChart>::update_charts_data(
        __int64 a1,
        __int64 a2,
        unsigned __int8 a3)
{
  int v4; // eax
  double v5; // xmm0_8
  double v6; // xmm0_8
  float v7; // [rsp+4h] [rbp-54h]
  int v8; // [rsp+8h] [rbp-50h]
  int v9; // [rsp+Ch] [rbp-4Ch]
  double v10; // [rsp+10h] [rbp-48h]
  double v11; // [rsp+20h] [rbp-38h]

  *(_BYTE *)(a1 + 438) = a3;
  v4 = *(_DWORD *)(a1 + 416);
  if ( !v4 )
    *(_OWORD *)(a1 + 400) = *(_OWORD *)a2;
  v7 = (float)v4;
  *(_DWORD *)(a1 + 416) = v4 + 1;
  *(_QWORD *)&v11 = COERCE_UNSIGNED_INT64(_floatuntisf(*(_QWORD *)(a2 + 208), *(_QWORD *)(a2 + 216))) ^ 0x8000000080000000LL;
  v5 = _floatuntisf(*(_QWORD *)(a2 + 192), *(_QWORD *)(a2 + 200));
  v8 = LODWORD(v5);
  *(_QWORD *)&v10 = COERCE_UNSIGNED_INT64(_floatuntisf(*(_QWORD *)(a2 + 176), *(_QWORD *)(a2 + 184))) ^ 0x8000000080000000LL;
  v6 = _floatuntisf(*(_QWORD *)(a2 + 160), *(_QWORD *)(a2 + 168));
  v9 = LODWORD(v6);
  sniffnet::chart::manage_chart_data::update_series(a1 + 208, *(unsigned __int8 *)(a1 + 437), a3, v7, v11);
  *(float *)(a1 + 420) = sniffnet::chart::manage_chart_data::get_min(*(_QWORD *)(a1 + 216), *(_QWORD *)(a1 + 224));
  sniffnet::chart::manage_chart_data::update_series(
    a1 + 256,
    *(unsigned __int8 *)(a1 + 437),
    a3,
    v7,
    COERCE_DOUBLE((unsigned __int64)v8));
  *(float *)(a1 + 424) = sniffnet::chart::manage_chart_data::get_max(*(_QWORD *)(a1 + 264), *(_QWORD *)(a1 + 272));
  sniffnet::chart::manage_chart_data::update_series(a1 + 304, *(unsigned __int8 *)(a1 + 437), a3, v7, v10);
  *(float *)(a1 + 428) = sniffnet::chart::manage_chart_data::get_min(*(_QWORD *)(a1 + 312), *(_QWORD *)(a1 + 320));
  sniffnet::chart::manage_chart_data::update_series(
    a1 + 352,
    *(unsigned __int8 *)(a1 + 437),
    a3,
    v7,
    COERCE_DOUBLE((unsigned __int64)v9));
  *(float *)(a1 + 432) = sniffnet::chart::manage_chart_data::get_max(*(_QWORD *)(a1 + 360), *(_QWORD *)(a1 + 368));
}