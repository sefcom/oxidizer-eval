__int64 __fastcall alacritty::display::damage::FrameDamage::damage_point(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4)
{
  __int64 v5; // r15
  __int64 result; // rax

  if ( a3 >= a2 )
    core::panicking::panic_bounds_check(a3, a2, &off_882348);
  v5 = 3 * a3;
  *(_QWORD *)(a1 + 8 * v5 + 8) = core::cmp::Ord::min(*(_QWORD *)(a1 + 24 * a3 + 8), a4);
  result = core::cmp::Ord::max(*(_QWORD *)(a1 + 8 * v5 + 16), a4);
  *(_QWORD *)(a1 + 8 * v5 + 16) = result;
  return result;
}