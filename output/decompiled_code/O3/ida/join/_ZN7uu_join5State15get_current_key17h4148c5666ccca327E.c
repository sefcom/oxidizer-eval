__int64 __fastcall uu_join::State::get_current_key(__int64 a1)
{
  if ( !*(_QWORD *)(a1 + 16) )
    core::panicking::panic_bounds_check(0LL, 0LL, &off_135FF0);
  return uu_join::Line::get_field(*(_QWORD **)(a1 + 8), *(_QWORD *)(a1 + 64));
}
