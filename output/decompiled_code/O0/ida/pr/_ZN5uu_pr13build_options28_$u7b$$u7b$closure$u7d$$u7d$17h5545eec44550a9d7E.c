_QWORD *__fastcall uu_pr::build_options::{{closure}}(_QWORD *a1, __int64 a2, _QWORD *a3)
{
  __int64 v4; // r15
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // rcx
  __int128 *v13; // [rsp+0h] [rbp-118h] BYREF
  __int64 (__fastcall *v14)(); // [rsp+8h] [rbp-110h]
  __int128 *v15; // [rsp+10h] [rbp-108h]
  __int64 (__fastcall *v16)(); // [rsp+18h] [rbp-100h]
  _BYTE v17[8]; // [rsp+20h] [rbp-F8h] BYREF
  __int64 v18; // [rsp+28h] [rbp-F0h]
  _QWORD v19[2]; // [rsp+30h] [rbp-E8h] BYREF
  __int128 v20; // [rsp+40h] [rbp-D8h] BYREF
  __int128 **v21; // [rsp+50h] [rbp-C8h]
  __int64 v22; // [rsp+58h] [rbp-C0h]
  __int64 v23; // [rsp+60h] [rbp-B8h]
  __int128 v24; // [rsp+70h] [rbp-A8h] BYREF
  __int128 v25; // [rsp+80h] [rbp-98h]
  __int128 v26; // [rsp+90h] [rbp-88h]
  __int128 v27; // [rsp+A0h] [rbp-78h]
  char **v28; // [rsp+B8h] [rbp-60h] BYREF
  __int128 v29; // [rsp+C0h] [rbp-58h]
  __int128 v30; // [rsp+D0h] [rbp-48h]
  __int128 v31; // [rsp+E0h] [rbp-38h]
  __int128 v32; // [rsp+F0h] [rbp-28h]

  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v28);
  v19[0] = anon_7c75ec29d226220b36fc1f3bbd3b01ef_10_llvm_17389174869910011146;
  v19[1] = 5LL;
  if ( v28 )
  {
    v27 = v32;
    v26 = v31;
    v25 = v30;
    v24 = v29;
    v13 = (__int128 *)v19;
    v14 = <&T as core::fmt::Display>::fmt;
    v15 = &v24;
    v16 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    *(_QWORD *)&v20 = &anon_fc8b0a57c72ccea5fed8d71b627fdd79_4_llvm_18322555434409866145;
    *((_QWORD *)&v20 + 1) = 2LL;
    v23 = 0LL;
    v21 = &v13;
    v22 = 2LL;
    core::panicking::panic_fmt(&v20, &anon_7c75ec29d226220b36fc1f3bbd3b01ef_137_llvm_17389174869910011146);
  }
  v4 = v29;
  if ( !(_QWORD)v29 )
    core::option::unwrap_failed(&anon_7c75ec29d226220b36fc1f3bbd3b01ef_138_llvm_17389174869910011146);
  v5 = a3[1];
  if ( !v5 )
    goto LABEL_13;
  v6 = a3[2];
  if ( v6 < 0 )
    goto LABEL_13;
  core::num::<impl core::str::traits::FromStr for usize>::from_str(v17, v5, v6);
  if ( (v17[0] & 1) == 0 )
  {
    a1[1] = v18;
    *a1 = 0x8000000000000005LL;
    goto LABEL_10;
  }
  v10 = *(_QWORD *)(v4 + 8);
  if ( !v10 || (v11 = *(_QWORD *)(v4 + 16), v11 < 0) )
LABEL_13:
    core::panicking::panic_nounwind(anon_475f815846da37737caa07221b879fb7_10_llvm_234892413440793941, 162LL);
  *(_QWORD *)&v24 = 0LL;
  *((_QWORD *)&v24 + 1) = v10;
  *(_QWORD *)&v25 = v11;
  BYTE8(v25) = 1;
  v13 = &v24;
  v14 = <os_display::Quoted as core::fmt::Display>::fmt;
  v28 = &anon_7c75ec29d226220b36fc1f3bbd3b01ef_140_llvm_17389174869910011146;
  *(_QWORD *)&v29 = 1LL;
  *((_QWORD *)&v29 + 1) = &v13;
  v30 = 1uLL;
  alloc::fmt::format::format_inner(&v20, &v28, v7, v11, v8, v9);
  *a1 = 0x8000000000000001LL;
  *(_OWORD *)(a1 + 1) = v20;
  a1[3] = v21;
LABEL_10:
  if ( *a3 )
    _rust_dealloc(a3[1], *a3, 1LL);
  return a1;
}
