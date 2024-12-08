_QWORD *__fastcall uu_fmt::parasplit::ParaWords::create_words(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  __int64 v3; // rax
  _QWORD *result; // rax
  __int64 v5; // rbx
  __int64 v6; // r13
  __int64 v7; // rcx
  __int64 v8; // r14
  __int64 v9; // r12
  __int64 v10; // r15
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  char **v18; // r8
  char **v19; // rdx
  __int64 v20; // [rsp+0h] [rbp-178h] BYREF
  __int64 v21; // [rsp+8h] [rbp-170h] BYREF
  __int64 v22; // [rsp+10h] [rbp-168h]
  __int64 v23; // [rsp+18h] [rbp-160h]
  __int64 v24; // [rsp+20h] [rbp-158h]
  __int64 *v25; // [rsp+28h] [rbp-150h]
  char v26; // [rsp+58h] [rbp-120h]
  char v27; // [rsp+88h] [rbp-F0h]
  _QWORD v28[9]; // [rsp+90h] [rbp-E8h] BYREF
  char v29; // [rsp+D9h] [rbp-9Fh]
  char v30; // [rsp+119h] [rbp-5Fh]
  _BYTE v31[88]; // [rsp+120h] [rbp-58h] BYREF

  v1 = *(_QWORD *)(a1 + 32);
  if ( *(_BYTE *)(v1 + 104) )
  {
    v2 = *(_QWORD *)(v1 + 8);
    v3 = v2 + 24LL * *(_QWORD *)(v1 + 16);
    v28[0] = v2;
    v28[1] = v3;
    v29 = 2;
    v30 = 2;
    return (_QWORD *)<alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<T,I>>::spec_extend(a1, v28);
  }
  v5 = *(_QWORD *)(a1 + 24);
  if ( *(_BYTE *)(v5 + 72) || *(_BYTE *)(v5 + 73) )
  {
    if ( *(_QWORD *)(v1 + 16) )
    {
      v6 = a1;
      v7 = *(_QWORD *)(v1 + 8);
      v8 = *(_QWORD *)(v1 + 80);
      v9 = *(_QWORD *)(v7 + 8);
      v10 = *(_QWORD *)(v7 + 16);
      v11 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(
              v8,
              v9,
              v10);
      if ( v11 )
        goto LABEL_7;
      v18 = &off_127A18;
LABEL_16:
      core::str::slice_error_fail(v9, v10, v8, v10, v18);
    }
    v19 = &off_127A00;
LABEL_14:
    core::panicking::panic_bounds_check(0LL, 0LL, v19);
  }
  if ( !*(_QWORD *)(v1 + 16) )
  {
    v19 = &off_1279D0;
    goto LABEL_14;
  }
  v6 = a1;
  v17 = *(_QWORD *)(v1 + 8);
  v8 = *(_QWORD *)(v1 + 96);
  v9 = *(_QWORD *)(v17 + 8);
  v10 = *(_QWORD *)(v17 + 16);
  v11 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(
          v8,
          v9,
          v10);
  if ( !v11 )
  {
    v18 = &off_1279E8;
    goto LABEL_16;
  }
LABEL_7:
  uu_fmt::parasplit::WordSplit::new((__int64)v31, v5, v11, v12);
  <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<T,I>>::spec_extend(v6, v31);
  result = *(_QWORD **)(v6 + 32);
  v15 = result[2];
  if ( v15 > 1 )
  {
    v20 = result[12];
    v16 = *(_QWORD *)(v6 + 24);
    v21 = result[1];
    v22 = v21 + 24 * v15;
    v23 = 1LL;
    v24 = v16;
    v25 = &v20;
    v26 = 2;
    v27 = 2;
    return (_QWORD *)((__int64 (__fastcall *)(__int64, __int64 *, __int64, __int64, __int64, __int64, __int64))<alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<T,I>>::spec_extend)(
                       v6,
                       &v21,
                       v16,
                       v22,
                       v13,
                       v14,
                       v20);
  }
  return result;
}
