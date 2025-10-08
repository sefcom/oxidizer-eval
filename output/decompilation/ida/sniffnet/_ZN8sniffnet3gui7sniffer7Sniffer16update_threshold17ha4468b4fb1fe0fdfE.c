__int64 __fastcall sniffnet::gui::sniffer::Sniffer::update_threshold(__int64 a1)
{
  __int64 result; // rax
  char v2; // cl
  __int64 v3; // [rsp+0h] [rbp-28h] BYREF
  __int128 v4; // [rsp+8h] [rbp-20h]
  char v5; // [rsp+1Ah] [rbp-Eh]

  sniffnet::gui::types::timing_events::TimingEvents::threshold_adjust_expired_take(&v3, a1 + 1672);
  result = v3;
  if ( v3 != 2 )
  {
    v2 = v5;
    *(_QWORD *)(a1 + 1168) = v3;
    *(_BYTE *)(a1 + 1194) = v2;
    *(_OWORD *)(a1 + 1176) = v4;
  }
  return result;
}