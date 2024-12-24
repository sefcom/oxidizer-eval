__int64 __fastcall uu_unexpand::next_tabstop(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // [rsp+8h] [rbp-20h] BYREF
  _QWORD v5[3]; // [rsp+10h] [rbp-18h] BYREF

  v4 = a3;
  if ( a2 == 1 )
  {
    if ( !*a1 )
      core::panicking::panic_const::panic_const_rem_by_zero(&off_11EC48);
  }
  else
  {
    v5[0] = a1;
    v5[1] = &a1[a2];
    if ( !<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::find(v5, &v4) )
      return 0LL;
  }
  return 1LL;
}
