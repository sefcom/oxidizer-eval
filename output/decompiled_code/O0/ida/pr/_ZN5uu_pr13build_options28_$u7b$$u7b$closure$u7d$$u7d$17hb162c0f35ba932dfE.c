__int64 __fastcall uu_pr::build_options::{{closure}}(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  __int64 v3; // r12
  __int64 v4; // r13
  _QWORD *v5; // rbp
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r15
  __int64 v9; // rdx
  __int64 v10; // r12
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned __int64 v15; // rax
  char **v17; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v18; // [rsp+8h] [rbp-B0h]
  _QWORD *v19; // [rsp+10h] [rbp-A8h]
  __int64 v20; // [rsp+18h] [rbp-A0h]
  __int64 v21; // [rsp+20h] [rbp-98h]
  _BYTE v22[8]; // [rsp+30h] [rbp-88h] BYREF
  __int64 v23; // [rsp+38h] [rbp-80h]
  _QWORD v24[2]; // [rsp+40h] [rbp-78h] BYREF
  _QWORD v25[3]; // [rsp+50h] [rbp-68h] BYREF
  char v26; // [rsp+68h] [rbp-50h]
  __int128 v27; // [rsp+70h] [rbp-48h] BYREF
  __int64 v28; // [rsp+80h] [rbp-38h]

  regex_automata::util::captures::Captures::get_group(&v17, a2 + 16, 1LL);
  if ( !v17 || (v2 = *(_QWORD *)(a2 + 56)) == 0 )
    core::option::unwrap_failed(&anon_7c75ec29d226220b36fc1f3bbd3b01ef_143_llvm_17389174869910011146);
  v3 = *(_QWORD *)(a2 + 64);
  v4 = v18;
  v5 = v19;
  v6 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(
         v18,
         v19,
         v2,
         v3);
  if ( !v6 )
    core::str::slice_error_fail(v2, v3, v4, v5, &anon_f7be525e746154e34cdd400086c42546_15_llvm_11761240801109542047);
  v8 = core::str::<impl str>::trim_matches(v6, v7);
  v10 = v9;
  core::num::<impl core::str::traits::FromStr for usize>::from_str(v22, v8, v9);
  if ( (v22[0] & 1) != 0 )
  {
    v25[0] = 0LL;
    v25[1] = v8;
    v25[2] = v10;
    v26 = 1;
    v24[0] = v25;
    v24[1] = <os_display::Quoted as core::fmt::Display>::fmt;
    v17 = &anon_7c75ec29d226220b36fc1f3bbd3b01ef_145_llvm_17389174869910011146;
    v18 = 1LL;
    v19 = v24;
    v20 = 1LL;
    v21 = 0LL;
    alloc::fmt::format::format_inner(&v27, &v17, v11, v12, v13, v14);
    v15 = 0x8000000000000001LL;
    *(_QWORD *)(a1 + 24) = v28;
    *(_OWORD *)(a1 + 8) = v27;
  }
  else
  {
    *(_QWORD *)(a1 + 8) = v23;
    v15 = 0x8000000000000005LL;
  }
  *(_QWORD *)a1 = v15;
  core::ptr::drop_in_place<regex_automata::util::captures::Captures>(a2 + 16);
  return a1;
}
