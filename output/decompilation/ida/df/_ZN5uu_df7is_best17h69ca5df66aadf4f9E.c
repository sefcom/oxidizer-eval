char __fastcall uu_df::is_best(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v4; // rax
  _QWORD *v5; // r13
  __int64 v6; // r14
  __int64 v7; // r15
  _QWORD v9[7]; // [rsp+0h] [rbp-38h] BYREF

  v9[0] = a1;
  v9[1] = a1 + 152 * a2;
  v4 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v9);
  if ( !v4 )
    return 1;
  v5 = (_QWORD *)v4;
  v6 = a3[1];
  v7 = a3[2];
  while ( !(unsigned __int8)alloc::vec::partial_eq::<impl core::cmp::PartialEq<alloc::vec::Vec<U,A2>> for alloc::vec::Vec<T,A1>>::eq(
                              v5[1],
                              v5[2],
                              v6,
                              v7)
       || !uu_df::mount_info_lt(a3, v5) )
  {
    v5 = (_QWORD *)<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v9);
    if ( !v5 )
      return 1;
  }
  return 0;
}
