_BOOL8 __fastcall sniffnet::gui::types::timing_events::TimingEvents::was_just_thumbnail_click(__int64 a1)
{
  unsigned int v1; // edx

  return !std::time::Instant::elapsed(a1 + 120) && v1 < 0x2FAF0800;
}