__int64 __fastcall uu_pr::build_options::{{closure}}(__int64 a1, void *a2, __int64 a3)
{
  unsigned __int64 v4; // rdx
  int v5; // eax
  const void *v6; // r14
  signed __int64 v7; // rbp
  void *v8; // r15
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v17; // [rsp+8h] [rbp-F0h]
  char **v18; // [rsp+10h] [rbp-E8h] BYREF
  __int64 v19; // [rsp+18h] [rbp-E0h]
  void *dest; // [rsp+20h] [rbp-D8h]
  __int64 v21; // [rsp+28h] [rbp-D0h]
  __int64 v22; // [rsp+30h] [rbp-C8h]
  __int64 v23; // [rsp+38h] [rbp-C0h]
  int v24; // [rsp+40h] [rbp-B8h]
  int v25; // [rsp+44h] [rbp-B4h]
  char v26; // [rsp+48h] [rbp-B0h]
  __int16 v27; // [rsp+50h] [rbp-A8h]
  unsigned __int64 v28; // [rsp+58h] [rbp-A0h] BYREF
  __int64 v29; // [rsp+60h] [rbp-98h]
  unsigned __int64 v30; // [rsp+68h] [rbp-90h]
  char v31[8]; // [rsp+70h] [rbp-88h] BYREF
  __int64 v32; // [rsp+78h] [rbp-80h]
  _QWORD v33[2]; // [rsp+80h] [rbp-78h] BYREF
  _QWORD v34[3]; // [rsp+90h] [rbp-68h] BYREF
  char v35; // [rsp+A8h] [rbp-50h]
  __int128 v36; // [rsp+B0h] [rbp-48h] BYREF
  __int64 v37; // [rsp+C0h] [rbp-38h]

  LODWORD(v18) = 0;
  core::char::methods::encode_utf8_raw(58LL, &v18, 4LL);
  if ( v4 >= 0x100 )
    core::result::unwrap_failed(
      "char len should be less than 255backreferences are not supported\x01",
      32LL,
      v34,
      &anon_cf3a0699d036d4a433c5534177ef0521_7_llvm_15788873575520176247,
      &anon_02b40c0e5390e28ea90696fc8ba4da26_29_llvm_16801938774416938183);
  v5 = (int)v18;
  v18 = 0LL;
  v19 = a3;
  dest = a2;
  v21 = a3;
  v22 = 0LL;
  v23 = a3;
  v24 = v5;
  v25 = 58;
  v26 = v4;
  v27 = 1;
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v28, &v18);
  if ( !v29 || (v29 & 7) != 0 || v30 >> 59 )
    core::panicking::panic_nounwind(anon_b8e768ed0ddf17f1539d76bb5aedca5a_38_llvm_9157631453777517788, 162LL);
  if ( v30 <= 1 )
    core::panicking::panic_bounds_check(1LL, v30, &anon_7c75ec29d226220b36fc1f3bbd3b01ef_136_llvm_17389174869910011146);
  v6 = *(const void **)(v29 + 16);
  v7 = *(_QWORD *)(v29 + 24);
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v18, v7, 0LL);
  v17 = v19;
  if ( v18 )
    alloc::raw_vec::handle_error(v19, dest);
  v8 = dest;
  core::intrinsics::copy_nonoverlapping::precondition_check(v6, dest, 1LL, 1LL, v7);
  memcpy(v8, v6, v7);
  if ( !v8 || v7 < 0 )
    core::panicking::panic_nounwind(anon_475f815846da37737caa07221b879fb7_10_llvm_234892413440793941, 162LL);
  core::num::<impl core::str::traits::FromStr for usize>::from_str(v31, v8, v7);
  if ( (v31[0] & 1) != 0 )
  {
    v34[0] = 0LL;
    v34[1] = a2;
    v34[2] = a3;
    v35 = 1;
    v33[0] = v34;
    v33[1] = <os_display::Quoted as core::fmt::Display>::fmt;
    v18 = &anon_7c75ec29d226220b36fc1f3bbd3b01ef_134_llvm_17389174869910011146;
    v19 = 1LL;
    dest = v33;
    v21 = 1LL;
    v22 = 0LL;
    alloc::fmt::format::format_inner(&v36, &v18, v9, v10, v11, v12);
    v13 = 0x8000000000000001LL;
    *(_QWORD *)(a1 + 24) = v37;
    *(_OWORD *)(a1 + 8) = v36;
  }
  else
  {
    *(_QWORD *)(a1 + 8) = v32;
    v13 = 0x8000000000000005LL;
  }
  *(_QWORD *)a1 = v13;
  if ( v28 )
  {
    if ( v28 >> 60 )
      core::panicking::panic_nounwind(anon_e45d65516cdf6c355a9aa2094419ed73_18_llvm_7530283562111826792, 69LL);
    v14 = 16 * v28;
    v18 = (char **)v29;
    v19 = 8LL;
    v15 = 2LL;
  }
  else
  {
    v15 = 1LL;
    v14 = 0LL;
  }
  (&v18)[v15] = (char **)v14;
  if ( v19 && dest )
    _rust_dealloc(v18, dest, v19);
  if ( v17 )
    _rust_dealloc(v8, v17, 1LL);
  return a1;
}
