        unsigned __int64 *a5)
{
  unsigned __int64 v7; // rdi
  unsigned __int64 v9; // r12
  __int64 v10; // r14
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r13
  __int64 v16; // rax
  unsigned int v17; // edx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r13
  __int64 *v21; // rdi
  __int64 v22; // rsi
  unsigned int v23; // edx
  char **v24; // r8
  __int64 v25; // [rsp+8h] [rbp-40h] BYREF
  __int64 v26; // [rsp+10h] [rbp-38h]
  __int64 v27; // [rsp+18h] [rbp-30h]

  v7 = *a5;
  if ( a3 && v7 > a4 )
    return 3LL;
  v9 = a5[1];
  if ( v9 )
  {
    if ( v7 == 1 )
    {
      v10 = 0LL;
      if ( !*((_BYTE *)a5 + 16) )
        goto LABEL_16;
    }
    else
    {
      if ( !a3 )
        core::option::unwrap_failed(&off_1FFB98);
      v12 = v7 - 1;
      if ( v12 >= a4 )
        core::panicking::panic_bounds_check(v12, a4, &off_1FFBB0);
      v10 = *(_QWORD *)(a3 + 16 * v12);
      if ( !*((_BYTE *)a5 + 16) )
        goto LABEL_16;
    }
    v13 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(
            v10,
            a1,
            a2);
    if ( !v13 )
    {
      v24 = &off_1FFBC8;
      goto LABEL_23;
    }
    v27 = 0LL;
    v25 = v13;
    v26 = v14 + v13;
    v15 = v14;
    v16 = core::iter::traits::iterator::Iterator::try_fold(&v25);
    v10 += core::option::Option<T>::map_or(v16, v17, v15);
LABEL_16:
    v18 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(
            v10,
            a1,
            a2);
    if ( v18 )
    {
      v20 = v19;
      v27 = 0LL;
      v25 = v18;
      v26 = v19 + v18;
      v21 = &v25;
      if ( core::iter::traits::iterator::Iterator::advance_by(&v25, v9 - 1) )
      {
        v22 = 1114112LL;
      }
      else
      {
        v21 = (__int64 *)<core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(&v25);
        v22 = v23;
      }
      return 3LL * (v10 + core::option::Option<T>::map_or(v21, v22, v20) >= a2);
    }
    v24 = &off_1FFBE0;
LABEL_23:
    core::str::slice_error_fail(a1, a2, v10, a2, v24);
  }
  if ( !a3 )
    core::option::unwrap_failed(&off_1FFB68);
  v11 = v7 - 1;
  if ( v11 >= a4 )
    core::panicking::panic_bounds_check(v11, a4, &off_1FFB80);
  return (*(_QWORD *)(a3 + 16 * v11 + 8) == 0LL) + 1LL;
}
