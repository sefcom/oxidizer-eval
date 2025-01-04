__int64 __fastcall uu_join::State::print_first_line(__int64 a1, __int64 a2, __int64 a3)
{
  if ( !*(_QWORD *)(a1 + 16) )
    core::panicking::panic_bounds_check(0LL, 0LL, &off_132668);
  return uu_join::State::print_line(a1, a2, *(_QWORD *)(a1 + 8), a3);
}
