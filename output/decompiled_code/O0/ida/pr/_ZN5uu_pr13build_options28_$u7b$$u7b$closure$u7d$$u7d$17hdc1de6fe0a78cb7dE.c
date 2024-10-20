__int64 __fastcall uu_pr::build_options::{{closure}}(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // r15
  __int64 v4; // r12
  void *v5; // r13
  __int64 v6; // rax
  __int64 v7; // rdx
  void *v8; // r13
  __int64 v9; // rdx
  __int64 v10; // rbp
  unsigned __int64 v11; // rdx
  int v12; // eax
  char *v13; // r15
  signed __int64 v14; // rbx
  void *v15; // r12
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v24; // [rsp+0h] [rbp-F8h]
  char **v25; // [rsp+8h] [rbp-F0h] BYREF
  __int64 v26; // [rsp+10h] [rbp-E8h]
  void *dest; // [rsp+18h] [rbp-E0h]
  __int64 v28; // [rsp+20h] [rbp-D8h]
  __int64 v29; // [rsp+28h] [rbp-D0h]
  __int64 v30; // [rsp+30h] [rbp-C8h]
  int v31; // [rsp+38h] [rbp-C0h]
  int v32; // [rsp+3Ch] [rbp-BCh]
  char v33; // [rsp+40h] [rbp-B8h]
  __int16 v34; // [rsp+48h] [rbp-B0h]
  __int64 v35; // [rsp+50h] [rbp-A8h]
  unsigned __int64 v36; // [rsp+58h] [rbp-A0h] BYREF
  __int64 v37; // [rsp+60h] [rbp-98h]
  unsigned __int64 v38; // [rsp+68h] [rbp-90h]
  char v39[8]; // [rsp+70h] [rbp-88h] BYREF
  __int64 v40; // [rsp+78h] [rbp-80h]
  _QWORD v41[2]; // [rsp+80h] [rbp-78h] BYREF
  _QWORD v42[3]; // [rsp+90h] [rbp-68h] BYREF
  char v43; // [rsp+A8h] [rbp-50h]
  __int128 v44; // [rsp+B0h] [rbp-48h] BYREF
  __int64 v45; // [rsp+C0h] [rbp-38h]

  v35 = a2 + 16;
  regex_automata::util::captures::Captures::get_group(&v25, a2 + 16, 1LL);
  if ( !v25 || (v2 = *(_QWORD *)(a2 + 56)) == 0 )
    core::option::unwrap_failed(&anon_7c75ec29d226220b36fc1f3bbd3b01ef_131_llvm_17389174869910011146);
  v3 = *(_QWORD *)(a2 + 64);
  v4 = v26;
  v5 = dest;
  v6 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(
         v26,
         dest,
         v2,
         v3);
  if ( !v6 )
    core::str::slice_error_fail(v2, v3, v4, v5, &anon_f7be525e746154e34cdd400086c42546_15_llvm_11761240801109542047);
  v8 = (void *)core::str::<impl str>::trim_matches(v6, v7);
  v10 = v9;
  LODWORD(v25) = 0;
  core::char::methods::encode_utf8_raw(58LL, &v25, 4LL);
  if ( v11 >= 0x100 )
    core::result::unwrap_failed(
      "char len should be less than 255backreferences are not supported\x01",
      32LL,
      v42,
      &anon_cf3a0699d036d4a433c5534177ef0521_7_llvm_15788873575520176247,
      &anon_02b40c0e5390e28ea90696fc8ba4da26_29_llvm_16801938774416938183);
  v12 = (int)v25;
  v25 = 0LL;
  v26 = v10;
  dest = v8;
  v28 = v10;
  v29 = 0LL;
  v30 = v10;
  v31 = v12;
  v32 = 58;
  v33 = v11;
  v34 = 1;
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v36, &v25);
  if ( !v37 || (v37 & 7) != 0 || v38 >> 59 )
    core::panicking::panic_nounwind(anon_b8e768ed0ddf17f1539d76bb5aedca5a_38_llvm_9157631453777517788, 162LL);
  if ( !v38 )
    core::panicking::panic_bounds_check(0LL, 0LL, &anon_7c75ec29d226220b36fc1f3bbd3b01ef_132_llvm_17389174869910011146);
  v13 = *(char **)v37;
  v14 = *(_QWORD *)(v37 + 8);
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v25, v14, 0LL);
  v24 = v26;
  if ( v25 )
    alloc::raw_vec::handle_error(v26, dest);
  v15 = dest;
  core::intrinsics::copy_nonoverlapping::precondition_check(v13, dest, 1LL, 1LL, v14);
  memcpy(v15, v13, v14);
  if ( !v15 || v14 < 0 )
    core::panicking::panic_nounwind(anon_475f815846da37737caa07221b879fb7_10_llvm_234892413440793941, 162LL);
  core::num::<impl core::str::traits::FromStr for usize>::from_str(v39, v15, v14);
  if ( (v39[0] & 1) != 0 )
  {
    v42[0] = 0LL;
    v42[1] = v8;
    v42[2] = v10;
    v43 = 1;
    v41[0] = v42;
    v41[1] = <os_display::Quoted as core::fmt::Display>::fmt;
    v25 = &anon_7c75ec29d226220b36fc1f3bbd3b01ef_134_llvm_17389174869910011146;
    v26 = 1LL;
    dest = v41;
    v28 = 1LL;
    v29 = 0LL;
    alloc::fmt::format::format_inner(&v44, &v25, v16, v17, v18, v19);
    v20 = 0x8000000000000001LL;
    *(_QWORD *)(a1 + 24) = v45;
    *(_OWORD *)(a1 + 8) = v44;
  }
  else
  {
    *(_QWORD *)(a1 + 8) = v40;
    v20 = 0x8000000000000005LL;
  }
  *(_QWORD *)a1 = v20;
  if ( v36 )
  {
    if ( v36 >> 60 )
      core::panicking::panic_nounwind(anon_e45d65516cdf6c355a9aa2094419ed73_18_llvm_7530283562111826792, 69LL);
    v21 = 16 * v36;
    v25 = (char **)v37;
    v26 = 8LL;
    v22 = 2LL;
  }
  else
  {
    v22 = 1LL;
    v21 = 0LL;
  }
  (&v25)[v22] = (char **)v21;
  if ( v26 && dest )
    _rust_dealloc(v25, dest, v26);
  if ( v24 )
    _rust_dealloc(v15, v24, 1LL);
  core::ptr::drop_in_place<regex_automata::util::captures::Captures>(v35);
  return a1;
}
