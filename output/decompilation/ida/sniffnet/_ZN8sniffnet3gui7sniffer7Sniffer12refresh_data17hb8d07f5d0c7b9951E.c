__int64 __fastcall sniffnet::gui::sniffer::Sniffer::refresh_data(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  __int128 v4; // xmm0
  __int64 v5; // rax
  _OWORD v7[2]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v8; // [rsp+20h] [rbp-28h]

  sniffnet::networking::types::info_traffic::InfoTraffic::refresh(a1 + 800);
  if ( (*(_OWORD *)(a1 + 960) ^ (0LL - *(_OWORD *)(a1 + 976))) != (unsigned __int128)0LL )
  {
    v8 = *(_QWORD *)(a1 + 1200);
    v4 = *(_OWORD *)(a1 + 1168);
    v7[1] = *(_OWORD *)(a1 + 1184);
    v7[0] = v4;
    v5 = ((__int64 (__fastcall *)(__int64, _OWORD *, __int64, __int64, _QWORD))sniffnet::notifications::notify_and_log::notify_and_log)(
           a1 + 1808,
           v7,
           a2,
           a1 + 1104,
           *(_QWORD *)(a1 + 720));
    if ( *(_BYTE *)(a1 + 2436) || *(_BYTE *)(a1 + 2439) <= 1u )
      *(_QWORD *)(a1 + 2376) += v5;
    sniffnet::chart::manage_chart_data::<impl sniffnet::chart::types::traffic_chart::TrafficChart>::update_charts_data(
      a1 + 16,
      a2,
      a3);
    sniffnet::networking::types::host_data_states::HostDataStates::update_states(a1 + 1872, a1 + 496);
  }
  return core::ptr::drop_in_place<sniffnet::networking::types::info_traffic::InfoTraffic>(a2);
}