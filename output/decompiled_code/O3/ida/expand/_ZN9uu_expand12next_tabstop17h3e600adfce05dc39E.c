        __int64 a6)
{
  unsigned __int64 v6; // rbx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 *v11; // rax
  unsigned __int64 v12; // rcx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned __int64 v17; // rsi
  unsigned __int64 v18; // rcx
  __int64 v19; // rcx
  char **v21; // rdx
  unsigned __int64 *v22; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 *v23; // [rsp+8h] [rbp-30h]
  _QWORD v24[5]; // [rsp+10h] [rbp-28h] BYREF

  v6 = a3;
  v24[0] = a3;
  if ( !(_BYTE)a4 )
  {
    if ( a2 == 1 )
    {
      v12 = *a1;
      if ( !*a1 )
        core::panicking::panic_const::panic_const_rem_by_zero(&off_11ED50);
      goto LABEL_9;
    }
    v22 = a1;
    v23 = &a1[a2];
    v11 = (__int64 *)((__int64 (__fastcall *)(unsigned __int64 **, _QWORD *, unsigned __int64, __int64, __int64, __int64))<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::find)(
                       &v22,
                       v24,
                       a3,
                       a4,
                       a5,
                       a6);
    if ( !v11 )
      return 1LL;
    goto LABEL_18;
  }
  if ( (unsigned __int8)a4 != 1 )
  {
    v22 = (unsigned __int64 *)<core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(
                                a2 - 1,
                                a1,
                                a2,
                                &off_11EDB0);
    v23 = &v22[v14];
    v11 = (__int64 *)((__int64 (__fastcall *)(unsigned __int64 **, _QWORD *, __int64, unsigned __int64 *, __int64, __int64))<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::find)(
                       &v22,
                       v24,
                       v14,
                       v23,
                       v15,
                       v16);
    if ( !v11 )
    {
      if ( !a2 )
      {
        v21 = &off_11EDC8;
LABEL_28:
        core::panicking::panic_bounds_check(-1LL, 0LL, v21);
      }
      if ( a2 == 1 )
        core::panicking::panic_bounds_check(-1LL, 1LL, &off_11EDE0);
      v17 = a1[a2 - 1];
      if ( !v17 )
        core::panicking::panic_const::panic_const_div_by_zero(&off_11EDF8);
      v6 -= a1[a2 - 2];
      if ( (v17 | v6) >> 32 )
        v18 = v6 / v17;
      else
        v18 = (unsigned int)v6 / (unsigned int)v17;
      v19 = v17 * (v18 + 1);
      return v19 - v6;
    }
LABEL_18:
    v19 = *v11;
    return v19 - v6;
  }
  v22 = (unsigned __int64 *)<core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(
                              a2 - 1,
                              a1,
                              a2,
                              &off_11ED68);
  v23 = &v22[v8];
  v11 = (__int64 *)((__int64 (__fastcall *)(unsigned __int64 **, _QWORD *, __int64, unsigned __int64 *, __int64, __int64))<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::find)(
                     &v22,
                     v24,
                     v8,
                     v23,
                     v9,
                     v10);
  if ( v11 )
    goto LABEL_18;
  if ( !a2 )
  {
    v21 = &off_11ED80;
    goto LABEL_28;
  }
  v12 = a1[a2 - 1];
  if ( !v12 )
    core::panicking::panic_const::panic_const_rem_by_zero(&off_11ED98);
LABEL_9:
  if ( (v12 | v6) >> 32 )
    return v12 - v6 % v12;
  else
    return v12 - (unsigned int)v6 % (unsigned int)v12;
}
