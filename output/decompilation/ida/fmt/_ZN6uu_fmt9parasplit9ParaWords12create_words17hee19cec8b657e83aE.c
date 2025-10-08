_QWORD *__fastcall uu_fmt::parasplit::ParaWords::create_words(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  __int64 v3; // rax
  _QWORD *result; // rax
  __int64 v5; // r14
  __int64 v6; // rcx
  __int64 v7; // r15
  __int64 v8; // r13
  __int64 v9; // r12
  __int64 v10; // rax
  __int64 v11; // rdx
  char **v12; // r8
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // [rsp+0h] [rbp-178h] BYREF
  __int64 v19; // [rsp+8h] [rbp-170h] BYREF
  __int64 v20; // [rsp+10h] [rbp-168h]
  __int64 v21; // [rsp+18h] [rbp-160h]
  __int64 v22; // [rsp+20h] [rbp-158h]
  __int64 *v23; // [rsp+28h] [rbp-150h]
  char v24; // [rsp+58h] [rbp-120h]
  char v25; // [rsp+88h] [rbp-F0h]
  _QWORD v26[9]; // [rsp+90h] [rbp-E8h] BYREF
  char v27; // [rsp+D9h] [rbp-9Fh]
  char v28; // [rsp+119h] [rbp-5Fh]
  _BYTE v29[88]; // [rsp+120h] [rbp-58h] BYREF

  v1 = *(_QWORD *)(a1 + 32);
  if ( *(_BYTE *)(v1 + 104) )
  {
    v2 = *(_QWORD *)(v1 + 8);
    v3 = v2 + 24LL * *(_QWORD *)(v1 + 16);
    v26[0] = v2;
    v26[1] = v3;
    v27 = 2;
    v28 = 2;
    return (_QWORD *)alloc::vec::Vec<T,A>::extend_desugared(a1, v26);
  }
  v5 = *(_QWORD *)(a1 + 24);
  if ( *(_BYTE *)(v5 + 72) || *(_BYTE *)(v5 + 73) == 1 )
  {
    if ( !*(_QWORD *)(v1 + 16) )
      core::panicking::panic_bounds_check(0LL, 0LL, &off_F05B0);
    v6 = *(_QWORD *)(v1 + 8);
    v7 = *(_QWORD *)(v1 + 80);
    v8 = *(_QWORD *)(v6 + 8);
    v9 = *(_QWORD *)(v6 + 16);
    v10 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(
            v7,
            v8,
            v9);
    if ( !v10 )
    {
      v12 = &off_F05C8;
      goto LABEL_14;
    }
  }
  else
  {
    if ( !*(_QWORD *)(v1 + 16) )
      core::panicking::panic_bounds_check(0LL, 0LL, &off_F0580);
    v13 = *(_QWORD *)(v1 + 8);
    v7 = *(_QWORD *)(v1 + 96);
    v8 = *(_QWORD *)(v13 + 8);
    v9 = *(_QWORD *)(v13 + 16);
    v10 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(
            v7,
            v8,
            v9);
    if ( !v10 )
    {
      v12 = &off_F0598;
LABEL_14:
      core::str::slice_error_fail(v8, v9, v7, v9, v12);
    }
  }
  uu_fmt::parasplit::WordSplit::new(v29, v5, v10, v11);
  alloc::vec::Vec<T,A>::extend_desugared(a1, v29);
  result = *(_QWORD **)(a1 + 32);
  v16 = result[2];
  if ( v16 > 1 )
  {
    v18 = result[12];
    v17 = *(_QWORD *)(a1 + 24);
    v19 = result[1];
    v20 = v19 + 24 * v16;
    v21 = 1LL;
    v22 = v17;
    v23 = &v18;
    v24 = 2;
    v25 = 2;
    return (_QWORD *)((__int64 (__fastcall *)(__int64, __int64 *, __int64, __int64, __int64, __int64, __int64))alloc::vec::Vec<T,A>::extend_desugared)(
                       a1,
                       &v19,
                       v17,
                       v20,
                       v14,
                       v15,
                       v18);
  }
  return result;
}