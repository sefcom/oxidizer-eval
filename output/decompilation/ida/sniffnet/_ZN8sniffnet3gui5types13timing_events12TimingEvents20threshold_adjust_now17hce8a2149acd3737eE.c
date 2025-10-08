__int64 __fastcall sniffnet::gui::types::timing_events::TimingEvents::threshold_adjust_now(__int64 a1, _OWORD *a2)
{
  __int64 result; // rax
  int v3; // edx
  __int128 v4; // xmm1

  result = std::time::Instant::now(a1);
  *(_QWORD *)a1 = result;
  *(_DWORD *)(a1 + 8) = v3;
  v4 = a2[1];
  *(_OWORD *)(a1 + 16) = *a2;
  *(_OWORD *)(a1 + 32) = v4;
  return result;
}