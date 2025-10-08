__int64 __fastcall uu_join::State::get_current_key(_QWORD *a1)
{
  if ( !a1[2] )
    core::panicking::panic_bounds_check(0LL, 0LL, &off_FE508);
  return uu_join::Line::get_field(a1[1], a1[8]);
}