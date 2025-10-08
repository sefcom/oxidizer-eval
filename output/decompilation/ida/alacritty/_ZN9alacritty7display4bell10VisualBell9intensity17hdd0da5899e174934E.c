__int64 __fastcall alacritty::display::bell::VisualBell::intensity(__int64 a1)
{
  __int64 v1; // rax

  v1 = std::time::Instant::now();
  return alacritty::display::bell::VisualBell::intensity_at_instant(a1, v1);
}