__int64 __fastcall uu_expand::next_tabstop(unsigned __int64 *a1, __int64 a2, unsigned __int64 a3, char a4)
{
  unsigned __int64 v4; // rbx
  __int64 v6; // rdx
  __int64 *v7; // rax
  unsigned __int64 v8; // rcx
  __int64 v10; // rdx
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rcx
  __int64 v13; // rcx
  char **v15; // rdx
  __int64 v16; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 *v17; // [rsp+8h] [rbp-30h]
  _QWORD v18[5]; // [rsp+10h] [rbp-28h] BYREF

  v4 = a3;
  v18[0] = a3;
  if ( !a4 )
  {
    if ( a2 == 1 )
    {
      v8 = *a1;
      if ( !*a1 )
        core::panicking::panic_const::panic_const_rem_by_zero(&off_11ED50);
      goto LABEL_9;
    }
    v16 = (__int64)a1;
    v17 = &a1[a2];
    v7 = (__int64 *)((__int64 (__fastcall *)(__int64 *, _QWORD *))<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::find)(
                      &v16,
                      v18);
    if ( !v7 )
      return 1LL;
    goto LABEL_18;
  }
  if ( a4 != 1 )
  {
    v16 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(a2 - 1, a1, a2, &off_11EDB0);
    v17 = (unsigned __int64 *)(v16 + 8 * v10);
    v7 = (__int64 *)((__int64 (__fastcall *)(__int64 *, _QWORD *))<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::find)(
                      &v16,
                      v18);
    if ( !v7 )
    {
      if ( !a2 )
      {
        v15 = &off_11EDC8;
LABEL_28:
        core::panicking::panic_bounds_check(-1LL, 0LL, v15);
      }
      if ( a2 == 1 )
        core::panicking::panic_bounds_check(-1LL, 1LL, &off_11EDE0);
      v11 = a1[a2 - 1];
      if ( !v11 )
        core::panicking::panic_const::panic_const_div_by_zero(&off_11EDF8);
      v4 -= a1[a2 - 2];
      if ( (v11 | v4) >> 32 )
        v12 = v4 / v11;
      else
        v12 = (unsigned int)v4 / (unsigned int)v11;
      v13 = v11 * (v12 + 1);
      return v13 - v4;
    }
LABEL_18:
    v13 = *v7;
    return v13 - v4;
  }
  v16 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(a2 - 1, a1, a2, &off_11ED68);
  v17 = (unsigned __int64 *)(v16 + 8 * v6);
  v7 = (__int64 *)((__int64 (__fastcall *)(__int64 *, _QWORD *))<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::find)(
                    &v16,
                    v18);
  if ( v7 )
    goto LABEL_18;
  if ( !a2 )
  {
    v15 = &off_11ED80;
    goto LABEL_28;
  }
  v8 = a1[a2 - 1];
  if ( !v8 )
    core::panicking::panic_const::panic_const_rem_by_zero(&off_11ED98);
LABEL_9:
  if ( (v8 | v4) >> 32 )
    return v8 - v4 % v8;
  else
    return v8 - (unsigned int)v4 % (unsigned int)v8;
}
