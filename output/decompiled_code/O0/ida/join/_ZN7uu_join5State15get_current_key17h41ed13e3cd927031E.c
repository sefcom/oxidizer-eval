__int64 __fastcall uu_join::State::get_current_key(_QWORD *a1)
{
  _QWORD *v2; // rdi
  unsigned __int64 v3; // rcx

  v2 = (_QWORD *)a1[1];
  if ( !v2 || ((unsigned __int8)v2 & 7) != 0 || (v3 = a1[2], v3 >= 0x2AAAAAAAAAAAAABLL) )
    core::panicking::panic_nounwind(anon_88bd953382d64e16d63aef396fcf2aa0_53_llvm_18377431372254846744, 162LL);
  if ( !v3 )
    core::panicking::panic_bounds_check(0LL, 0LL, &off_131288);
  return uu_join::Line::get_field(v2, a1[8]);
}
