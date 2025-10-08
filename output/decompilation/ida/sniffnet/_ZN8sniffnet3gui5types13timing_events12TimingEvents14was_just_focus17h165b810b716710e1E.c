_BOOL8 __fastcall sniffnet::gui::types::timing_events::TimingEvents::was_just_focus(__int64 a1)
{
  unsigned int v1; // edx

  return !std::time::Instant::elapsed(a1 + 48) && v1 < 0xBEBC200;
}