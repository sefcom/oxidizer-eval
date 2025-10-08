__int64 __fastcall alacritty::display::damage::DamageTracker::damage_vi_cursor(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = core::intrinsics::typed_swap_nonoverlapping(a1, a2);
  if ( !*(_BYTE *)(a1 + 72) )
  {
    if ( *(_DWORD *)a1 == 1 )
      result = alacritty::display::damage::FrameDamage::damage_point(
                 *(_QWORD *)(a1 + 32),
                 *(_QWORD *)(a1 + 40),
                 *(_QWORD *)(a1 + 8),
                 *(_QWORD *)(a1 + 16));
    if ( *(_DWORD *)a2 == 1 )
      return alacritty::display::damage::FrameDamage::damage_point(
               *(_QWORD *)(a1 + 32),
               *(_QWORD *)(a1 + 40),
               *(_QWORD *)(a2 + 8),
               *(_QWORD *)(a2 + 16));
  }
  return result;
}