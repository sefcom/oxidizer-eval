__int64 __fastcall uu_pr::build_options::{{closure}}(__int64 a1)
{
  __int64 v1; // r14
  __int64 v2; // r15
  __int64 v3; // r12
  __int64 v4; // r13
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r14
  __int64 v9; // [rsp+8h] [rbp-40h] BYREF
  __int64 v10; // [rsp+10h] [rbp-38h]
  __int64 v11; // [rsp+18h] [rbp-30h]

  regex_automata::util::captures::Captures::get_group(&v9, a1 + 16, 1LL);
  if ( !v9 || (v1 = *(_QWORD *)(a1 + 56)) == 0 )
    core::option::unwrap_failed(&anon_7c75ec29d226220b36fc1f3bbd3b01ef_135_llvm_17389174869910011146);
  v2 = *(_QWORD *)(a1 + 64);
  v3 = v10;
  v4 = v11;
  v5 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(
         v10,
         v11,
         v1,
         v2);
  if ( !v5 )
    core::str::slice_error_fail(v1, v2, v3, v4, &anon_f7be525e746154e34cdd400086c42546_15_llvm_11761240801109542047);
  v7 = core::str::<impl str>::trim_matches(v5, v6);
  core::ptr::drop_in_place<regex_automata::util::captures::Captures>(a1 + 16);
  return v7;
}
