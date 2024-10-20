_QWORD *__fastcall uu_pr::build_options::{{closure}}(_QWORD *a1, __int64 a2)
{
  const void *v2; // r15
  size_t v3; // rdx
  size_t v4; // r14
  void *v5; // r12
  void *v6; // r13
  _QWORD v8[2]; // [rsp+8h] [rbp-110h] BYREF
  __int64 v9; // [rsp+18h] [rbp-100h] BYREF
  void *dest[2]; // [rsp+20h] [rbp-F8h]
  __int128 v11; // [rsp+30h] [rbp-E8h]
  __int128 v12; // [rsp+40h] [rbp-D8h]
  __int128 v13; // [rsp+50h] [rbp-C8h]
  _QWORD v14[4]; // [rsp+60h] [rbp-B8h] BYREF
  _QWORD v15[6]; // [rsp+80h] [rbp-98h] BYREF
  _OWORD v16[6]; // [rsp+B0h] [rbp-68h] BYREF

  clap_builder::parser::matches::arg_matches::ArgMatches::try_contains_id(
    &v9,
    a2,
    anon_7c75ec29d226220b36fc1f3bbd3b01ef_18_llvm_17389174869910011146,
    12LL);
  v8[0] = anon_7c75ec29d226220b36fc1f3bbd3b01ef_18_llvm_17389174869910011146;
  v8[1] = 12LL;
  if ( (v9 & 1) != 0 )
  {
    v16[3] = v13;
    v16[2] = v12;
    v16[1] = v11;
    v16[0] = *(_OWORD *)dest;
    v14[0] = v8;
    v14[1] = <&T as core::fmt::Display>::fmt;
    v14[2] = v16;
    v14[3] = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    v15[0] = &anon_4999ac20243338206a266e5086c65117_158_llvm_11097290929893828502;
    v15[1] = 2LL;
    v15[4] = 0LL;
    v15[2] = v14;
    v15[3] = 2LL;
    core::panicking::panic_fmt(v15, &anon_21d6120f1bf3ae8083dd7bd30f6eb60d_413_llvm_13186119769495240950);
  }
  if ( (v9 & 0x100) != 0 )
  {
    LODWORD(v16[0]) = 0;
    v2 = (const void *)core::char::methods::encode_utf8_raw(9LL, v16, 4LL);
    v4 = v3;
    alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v9, v3, 0LL);
    v5 = dest[0];
    if ( v9 )
      alloc::raw_vec::handle_error(dest[0], dest[1]);
    v6 = dest[1];
    core::intrinsics::copy_nonoverlapping::precondition_check(v2, dest[1], 1LL, 1LL, v4);
    memcpy(v6, v2, v4);
    *a1 = v5;
    a1[1] = v6;
    a1[2] = v4;
    a1[3] = 5LL;
    a1[4] = 1LL;
  }
  else
  {
    *a1 = 0x8000000000000000LL;
  }
  return a1;
}
