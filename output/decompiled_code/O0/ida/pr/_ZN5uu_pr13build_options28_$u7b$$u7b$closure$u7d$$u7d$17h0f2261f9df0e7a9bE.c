_QWORD *__fastcall uu_pr::build_options::{{closure}}(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  __int64 v4; // rsi
  __int64 v6; // rdx
  const void *v7; // r14
  size_t v8; // rdx
  size_t v9; // r13
  void *v10; // r15
  __int64 v11; // r14
  __int64 v12; // r14
  __int64 v13; // r12
  __int64 v14; // rax
  size_t v15; // rdx
  const void *v16; // r15
  void *v17; // r14
  __int64 v18; // rsi
  __int64 v19; // rcx
  const void *v20; // r15
  size_t v21; // rdx
  size_t v22; // r14
  __int64 v23; // rbp
  void *v24; // r12
  void *v25; // rdx
  __int64 v26; // rax
  int v28; // [rsp+4h] [rbp-84h] BYREF
  __int64 v29; // [rsp+8h] [rbp-80h]
  void *v30; // [rsp+10h] [rbp-78h]
  __int64 v31; // [rsp+18h] [rbp-70h] BYREF
  __int64 v32; // [rsp+20h] [rbp-68h]
  void *dest; // [rsp+28h] [rbp-60h]
  _QWORD *v34; // [rsp+30h] [rbp-58h]
  char v35[8]; // [rsp+38h] [rbp-50h] BYREF
  __int64 v36; // [rsp+40h] [rbp-48h]
  char v37[8]; // [rsp+48h] [rbp-40h] BYREF
  __int64 v38; // [rsp+50h] [rbp-38h]

  v4 = *(_QWORD *)(a3 + 8);
  if ( !v4 )
    goto LABEL_25;
  v6 = *(_QWORD *)(a3 + 16);
  if ( v6 < 0 )
    goto LABEL_25;
  core::num::<impl core::str::traits::FromStr for usize>::from_str(v35, v4, v6);
  v34 = a2;
  if ( (v35[0] & 1) != 0 )
  {
    v12 = *(_QWORD *)(a3 + 8);
    if ( v12 )
    {
      v13 = *(_QWORD *)(a3 + 16);
      if ( v13 >= 0 )
      {
        v14 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(
                0LL,
                1LL,
                *(_QWORD *)(a3 + 8),
                *(_QWORD *)(a3 + 16));
        if ( !v14 )
          core::str::slice_error_fail(
            v12,
            v13,
            0LL,
            1LL,
            &anon_7c75ec29d226220b36fc1f3bbd3b01ef_129_llvm_17389174869910011146);
        v16 = (const void *)v14;
        v9 = v15;
        alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v31, v15, 0LL);
        v29 = v32;
        if ( !v31 )
        {
          v17 = dest;
          core::intrinsics::copy_nonoverlapping::precondition_check(v16, dest, 1LL, 1LL, v9);
          v30 = v17;
          memcpy(v17, v16, v9);
          a2 = v34;
          if ( (v35[0] & 1) == 0 )
            goto LABEL_6;
          goto LABEL_12;
        }
LABEL_26:
        alloc::raw_vec::handle_error(v29, dest);
      }
    }
LABEL_25:
    core::panicking::panic_nounwind(anon_475f815846da37737caa07221b879fb7_10_llvm_234892413440793941, 162LL);
  }
  v28 = 0;
  v7 = (const void *)core::char::methods::encode_utf8_raw(9LL, &v28, 4LL);
  v9 = v8;
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v31, v8, 0LL);
  v29 = v32;
  if ( v31 )
    goto LABEL_26;
  v10 = dest;
  core::intrinsics::copy_nonoverlapping::precondition_check(v7, dest, 1LL, 1LL, v9);
  v30 = v10;
  memcpy(v10, v7, v9);
  if ( (v35[0] & 1) == 0 )
  {
LABEL_6:
    v11 = v36;
    goto LABEL_24;
  }
LABEL_12:
  v18 = *(_QWORD *)(a3 + 8);
  if ( !v18 )
    goto LABEL_25;
  v19 = *(_QWORD *)(a3 + 16);
  if ( v19 < 0 )
    goto LABEL_25;
  if ( (unsigned __int64)v19 <= 1 )
  {
    if ( v19 != 1 )
LABEL_16:
      core::str::slice_error_fail(
        *(_QWORD *)(a3 + 8),
        *(_QWORD *)(a3 + 16),
        1LL,
        v19,
        &anon_7c75ec29d226220b36fc1f3bbd3b01ef_130_llvm_17389174869910011146);
  }
  else if ( *(char *)(v18 + 1) <= -65 )
  {
    goto LABEL_16;
  }
  core::num::<impl core::str::traits::FromStr for usize>::from_str(v37, v18 + 1, v19 - 1);
  v28 = 0;
  v20 = (const void *)core::char::methods::encode_utf8_raw(9LL, &v28, 4LL);
  v22 = v21;
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v31, v21, 0LL);
  v23 = v32;
  if ( v31 )
    alloc::raw_vec::handle_error(v32, dest);
  v24 = dest;
  core::intrinsics::copy_nonoverlapping::precondition_check(v20, dest, 1LL, 1LL, v22);
  memcpy(v24, v20, v22);
  v11 = 5LL;
  if ( (v37[0] & 1) == 0 )
    v11 = v38;
  if ( v23 )
    _rust_dealloc(v24, v23, 1LL);
  a2 = v34;
LABEL_24:
  v25 = v30;
  v26 = *a2;
  a1[3] = v11;
  *a1 = v29;
  a1[1] = v25;
  a1[2] = v9;
  a1[4] = v26;
  return a1;
}
