__int64 __fastcall sniffnet::gui::types::timing_events::TimingEvents::thumbnail_click_now(__int64 a1)
{
  __int64 result; // rax
  int v2; // edx

  result = std::time::Instant::now(a1);
  *(_QWORD *)(a1 + 120) = result;
  *(_DWORD *)(a1 + 128) = v2;
  return result;
}