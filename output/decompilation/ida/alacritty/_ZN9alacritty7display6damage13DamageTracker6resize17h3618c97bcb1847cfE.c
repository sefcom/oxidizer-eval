__int64 __fastcall alacritty::display::damage::DamageTracker::resize(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  *(_QWORD *)(a1 + 176) = a2;
  *(_QWORD *)(a1 + 184) = a3;
  alacritty::display::damage::FrameDamage::reset(a1 + 24);
  result = alacritty::display::damage::FrameDamage::reset(a1 + 80);
  *(_BYTE *)(a1 + 72) = 1;
  return result;
}