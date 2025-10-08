__int64 __fastcall uu_expand::next_tabstop(unsigned __int64 *a1, __int64 a2, unsigned __int64 a3, char a4)
{
  unsigned __int64 v4; // rbx
  __int64 v6; // r12
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 *v10; // rax
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v21; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 *v22; // [rsp+8h] [rbp-30h]
  _QWORD v23[5]; // [rsp+10h] [rbp-28h] BYREF

  v4 = a3;
  v23[0] = a3;
  if ( !a4 )
  {
    if ( a2 == 1 )
    {
      v11 = *a1;
      if ( !*a1 )
        core::panicking::panic_const::panic_const_rem_by_zero(&off_E89B0);
      goto LABEL_9;
    }
    v21 = (__int64)a1;
    v22 = &a1[a2];
    v10 = (__int64 *)((__int64 (__fastcall *)(__int64 *, _QWORD *))<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::find)(
                       &v21,
                       v23);
    if ( !v10 )
      return 1LL;
    goto LABEL_18;
  }
  v6 = a2 - 1;
  if ( a4 != 1 )
  {
    v21 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(a2 - 1, a1, a2, &off_E8A10);
    v22 = (unsigned __int64 *)(v21 + 8 * v13);
    v10 = (__int64 *)((__int64 (__fastcall *)(__int64 *, _QWORD *, __int64, unsigned __int64 *, __int64, __int64))<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::find)(
                       &v21,
                       v23,
                       v13,
                       v22,
                       v14,
                       v15);
    if ( !v10 )
    {
      if ( !a2 )
        core::panicking::panic_bounds_check(v6, 0LL, &off_E8A28);
      if ( a2 == 1 )
        core::panicking::panic_bounds_check(-1LL, 1LL, &off_E8A40);
      v16 = a1[a2 - 1];
      if ( !v16 )
        core::panicking::panic_const::panic_const_div_by_zero(&off_E8A58);
      v4 -= a1[a2 - 2];
      if ( (v16 | v4) >> 32 )
        v17 = v4 / v16;
      else
        v17 = (unsigned int)v4 / (unsigned int)v16;
      v18 = v16 * (v17 + 1);
      return v18 - v4;
    }
LABEL_18:
    v18 = *v10;
    return v18 - v4;
  }
  v21 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(a2 - 1, a1, a2, &off_E89C8);
  v22 = (unsigned __int64 *)(v21 + 8 * v7);
  v10 = (__int64 *)((__int64 (__fastcall *)(__int64 *, _QWORD *, __int64, unsigned __int64 *, __int64, __int64))<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::find)(
                     &v21,
                     v23,
                     v7,
                     v22,
                     v8,
                     v9);
  if ( v10 )
    goto LABEL_18;
  if ( !a2 )
    core::panicking::panic_bounds_check(v6, 0LL, &off_E89E0);
  v11 = a1[a2 - 1];
  if ( !v11 )
    core::panicking::panic_const::panic_const_rem_by_zero(&off_E89F8);
LABEL_9:
  if ( (v11 | v4) >> 32 )
    v12 = v4 % v11;
  else
    v12 = (unsigned int)v4 % (unsigned int)v11;
  return v11 - v12;
}