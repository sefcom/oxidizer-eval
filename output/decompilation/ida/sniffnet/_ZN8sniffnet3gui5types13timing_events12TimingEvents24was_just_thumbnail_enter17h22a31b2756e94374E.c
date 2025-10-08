bool __fastcall sniffnet::gui::types::timing_events::TimingEvents::was_just_thumbnail_enter(__int64 a1)
{
  __int64 v1; // rax

  v1 = std::time::Instant::elapsed(a1 + 104);
  return v1 != 1 && v1 == 0;
}