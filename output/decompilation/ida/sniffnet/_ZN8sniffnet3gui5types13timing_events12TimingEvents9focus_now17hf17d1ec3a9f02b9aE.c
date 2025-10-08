__int64 __fastcall sniffnet::gui::types::timing_events::TimingEvents::focus_now(__int64 a1)
{
  __int64 result; // rax
  int v2; // edx

  result = std::time::Instant::now();
  *(_QWORD *)(a1 + 48) = result;
  *(_DWORD *)(a1 + 56) = v2;
  return result;
}