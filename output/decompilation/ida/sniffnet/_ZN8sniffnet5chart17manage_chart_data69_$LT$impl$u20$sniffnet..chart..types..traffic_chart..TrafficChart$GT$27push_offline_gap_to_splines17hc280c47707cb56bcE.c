void __fastcall sniffnet::chart::manage_chart_data::<impl sniffnet::chart::types::traffic_chart::TrafficChart>::push_offline_gap_to_splines(
        __int64 a1,
        int a2)
{
  int v2; // eax
  int v3; // r15d
  float v4; // [rsp+Ch] [rbp-3Ch]

  if ( a2 )
  {
    v2 = 0;
    do
    {
      v3 = v2 + 1;
      v4 = (float)(*(_DWORD *)(a1 + 416) + v2);
      sniffnet::chart::manage_chart_data::update_series(a1 + 256, 0LL, 0LL, v4, 0.0);
      sniffnet::chart::manage_chart_data::update_series(a1 + 208, 0LL, 0LL, v4, 0.0);
      sniffnet::chart::manage_chart_data::update_series(a1 + 352, 0LL, 0LL, v4, 0.0);
      sniffnet::chart::manage_chart_data::update_series(a1 + 304, 0LL, 0LL, v4, 0.0);
      v2 = v3;
    }
    while ( a2 != v3 );
  }
  *(_DWORD *)(a1 + 416) += a2;
}