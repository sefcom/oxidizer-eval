__int64 __fastcall alacritty::display::bell::VisualBell::ring(__int64 a1)
{
  __int64 v1; // rax
  int v2; // edx

  v1 = std::time::Instant::now();
  *(_QWORD *)(a1 + 16) = v1;
  *(_DWORD *)(a1 + 24) = v2;
  return alacritty::display::bell::VisualBell::intensity_at_instant(a1, v1);
}