__int64 __fastcall sniffnet::gui::types::timing_events::TimingEvents::thumbnail_enter_now(__int64 a1)
{
  __int64 result; // rax
  int v2; // edx

  result = std::time::Instant::now(a1);
  *(_QWORD *)(a1 + 104) = result;
  *(_DWORD *)(a1 + 112) = v2;
  return result;
}