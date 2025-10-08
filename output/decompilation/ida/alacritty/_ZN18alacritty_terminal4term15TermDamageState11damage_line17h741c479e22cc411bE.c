__int64 __fastcall alacritty_terminal::term::TermDamageState::damage_line(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v6; // r15
  __int64 result; // rax

  if ( a3 >= a2 )
    core::panicking::panic_bounds_check(a3, a2, &off_877980);
  v6 = 3 * a3;
  *(_QWORD *)(a1 + 8 * v6 + 8) = core::cmp::Ord::min(*(_QWORD *)(a1 + 24 * a3 + 8), a4);
  result = core::cmp::Ord::max(*(_QWORD *)(a1 + 8 * v6 + 16), a5);
  *(_QWORD *)(a1 + 8 * v6 + 16) = result;
  return result;
}