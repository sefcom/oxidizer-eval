__int64 __fastcall alacritty::display::damage::FrameDamage::damage_line(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 *a3)
{
  unsigned __int64 v4; // rdi
  __int64 v5; // r15
  unsigned __int64 v6; // r14
  __int64 result; // rax

  v4 = *a3;
  if ( *a3 >= a2 )
    core::panicking::panic_bounds_check(v4, a2, &off_882330);
  v5 = 3 * v4;
  v6 = a3[2];
  *(_QWORD *)(a1 + 8 * v5 + 8) = core::cmp::Ord::min(*(_QWORD *)(a1 + 24 * v4 + 8), a3[1]);
  result = core::cmp::Ord::max(*(_QWORD *)(a1 + 24 * v4 + 16), v6);
  *(_QWORD *)(a1 + 8 * v5 + 16) = result;
  return result;
}