_OWORD *__fastcall uu_pr::parse_usize(_OWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int128 v10; // xmm0
  _QWORD *v12; // [rsp+8h] [rbp-140h] BYREF
  __int64 (__fastcall *v13)(); // [rsp+10h] [rbp-138h]
  __int128 *v14; // [rsp+18h] [rbp-130h]
  __int64 (__fastcall *v15)(); // [rsp+20h] [rbp-128h]
  char **v16; // [rsp+28h] [rbp-120h] BYREF
  __int128 v17; // [rsp+30h] [rbp-118h]
  __int64 v18; // [rsp+40h] [rbp-108h]
  __int64 v19; // [rsp+48h] [rbp-100h]
  char **v20; // [rsp+58h] [rbp-F0h] BYREF
  __int128 v21; // [rsp+60h] [rbp-E8h]
  __int128 v22; // [rsp+70h] [rbp-D8h]
  __int128 v23; // [rsp+80h] [rbp-C8h]
  __int128 v24; // [rsp+90h] [rbp-B8h]
  _QWORD v25[2]; // [rsp+A0h] [rbp-A8h] BYREF
  _QWORD v26[2]; // [rsp+B0h] [rbp-98h] BYREF
  __int128 v27; // [rsp+C0h] [rbp-88h] BYREF
  __int128 v28; // [rsp+D0h] [rbp-78h]
  __int128 v29; // [rsp+E0h] [rbp-68h]
  __int128 v30; // [rsp+F0h] [rbp-58h]
  __int128 v31; // [rsp+100h] [rbp-48h]
  __int128 v32; // [rsp+110h] [rbp-38h]
  __int64 v33; // [rsp+120h] [rbp-28h]

  v25[0] = a3;
  v25[1] = a4;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v20);
  v26[0] = a3;
  v26[1] = a4;
  if ( v20 )
  {
    v30 = v24;
    v29 = v23;
    v28 = v22;
    v27 = v21;
    v12 = v26;
    v13 = <&T as core::fmt::Display>::fmt;
    v14 = &v27;
    v15 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    v16 = &anon_fc8b0a57c72ccea5fed8d71b627fdd79_4_llvm_18322555434409866145;
    *(_QWORD *)&v17 = 2LL;
    v19 = 0LL;
    *((_QWORD *)&v17 + 1) = &v12;
    v18 = 2LL;
    core::panicking::panic_fmt(&v16, &off_2C7B70);
  }
  if ( !(_QWORD)v21 )
    goto LABEL_4;
  <alloc::string::String as core::clone::Clone>::clone(&v16);
  v12 = v25;
  v13 = <&T as core::fmt::Display>::fmt;
  v20 = (char **)&anon_7c75ec29d226220b36fc1f3bbd3b01ef_78_llvm_17389174869910011146;
  *(_QWORD *)&v21 = 1LL;
  *((_QWORD *)&v21 + 1) = &v12;
  v22 = 1uLL;
  alloc::fmt::format::format_inner(&v27, &v20, v6, v7, v8, v9);
  v31 = v17;
  v32 = v27;
  v33 = v28;
  if ( v16 != (char **)0x8000000000000000LL )
  {
    v20 = v16;
    v21 = v31;
    v22 = v32;
    *(_QWORD *)&v23 = v33;
    uu_pr::parse_usize::{{closure}}(&v27, &v20, &v20);
    v10 = v27;
    a1[1] = v28;
    *a1 = v10;
  }
  else
  {
LABEL_4:
    *(_QWORD *)a1 = 0x8000000000000006LL;
  }
  return a1;
}
