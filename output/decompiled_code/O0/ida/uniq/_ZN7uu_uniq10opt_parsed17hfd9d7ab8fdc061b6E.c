__int64 __fastcall uu_uniq::opt_parsed(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r14
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r14
  __int64 v10; // r15
  __int64 v11; // r12
  __int64 v12; // rax
  _BYTE v14[8]; // [rsp+0h] [rbp-188h] BYREF
  __int64 v15; // [rsp+8h] [rbp-180h]
  _QWORD v16[2]; // [rsp+10h] [rbp-178h] BYREF
  _QWORD v17[2]; // [rsp+20h] [rbp-168h] BYREF
  _QWORD v18[3]; // [rsp+30h] [rbp-158h] BYREF
  _QWORD v19[4]; // [rsp+48h] [rbp-140h] BYREF
  _QWORD v20[3]; // [rsp+68h] [rbp-120h] BYREF
  char v21; // [rsp+80h] [rbp-108h]
  _QWORD v22[4]; // [rsp+88h] [rbp-100h] BYREF
  char **v23; // [rsp+A8h] [rbp-E0h] BYREF
  __int128 v24; // [rsp+B0h] [rbp-D8h]
  __int128 v25; // [rsp+C0h] [rbp-C8h]
  __int128 v26; // [rsp+D0h] [rbp-B8h]
  __int128 v27; // [rsp+E0h] [rbp-A8h]
  _QWORD v28[6]; // [rsp+F0h] [rbp-98h] BYREF
  _OWORD v29[6]; // [rsp+120h] [rbp-68h] BYREF

  v16[0] = a2;
  v16[1] = a3;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v23, a4, a2, a3);
  v17[0] = a2;
  v17[1] = a3;
  if ( v23 )
  {
    v29[3] = v27;
    v29[2] = v26;
    v29[1] = v25;
    v29[0] = v24;
    v22[0] = v17;
    v22[1] = <&T as core::fmt::Display>::fmt;
    v22[2] = v29;
    v22[3] = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    v28[0] = &anon_fc8b0a57c72ccea5fed8d71b627fdd79_4_llvm_18322555434409866145;
    v28[1] = 2LL;
    v28[4] = 0LL;
    v28[2] = v22;
    v28[3] = 2LL;
    core::panicking::panic_fmt(v28, &off_11CAE0);
  }
  v5 = v24;
  if ( !(_QWORD)v24 )
  {
    *(_OWORD *)a1 = 0LL;
    return a1;
  }
  if ( !*(_QWORD *)(v24 + 8) || *(__int64 *)(v24 + 16) < 0 )
    goto LABEL_16;
  core::num::<impl core::str::traits::FromStr for usize>::from_str(v14);
  if ( (v14[0] & 1) == 0 )
  {
    v6 = v15;
    *(_QWORD *)(a1 + 8) = 1LL;
    *(_QWORD *)(a1 + 16) = v6;
    *(_QWORD *)a1 = 0LL;
    return a1;
  }
  if ( v14[1] == 2 )
  {
    *(_QWORD *)(a1 + 8) = 1LL;
    *(_QWORD *)(a1 + 16) = -1LL;
    *(_QWORD *)a1 = 0LL;
    return a1;
  }
  v7 = *(_QWORD *)(v5 + 8);
  if ( !v7 || (v8 = *(_QWORD *)(v5 + 16), v8 < 0) )
LABEL_16:
    core::panicking::panic_nounwind(anon_2b0791c695ceb2ee6d0f035c0283b4dc_21_llvm_18417733653787042214, 162LL);
  v20[0] = 0LL;
  v20[1] = v7;
  v20[2] = v8;
  v21 = 0;
  v19[0] = v16;
  v19[1] = <&T as core::fmt::Display>::fmt;
  v19[2] = v20;
  v19[3] = <os_display::Quoted as core::fmt::Display>::fmt;
  v23 = &off_11CAF8;
  *(_QWORD *)&v24 = 2LL;
  *((_QWORD *)&v24 + 1) = v19;
  v25 = 2uLL;
  alloc::fmt::format::format_inner(v18, &v23);
  v9 = v18[0];
  v10 = v18[1];
  v11 = v18[2];
  v12 = alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
  if ( !v12 )
    alloc::alloc::handle_alloc_error(8LL, 32LL);
  *(_QWORD *)v12 = v9;
  *(_QWORD *)(v12 + 8) = v10;
  *(_QWORD *)(v12 + 16) = v11;
  *(_DWORD *)(v12 + 24) = 1;
  *(_QWORD *)(a1 + 8) = v12;
  *(_QWORD *)(a1 + 16) = &anon_f907210316a4f48a9c7de5c93e2a79ff_265_llvm_5503381581801417789;
  *(_QWORD *)a1 = 1LL;
  return a1;
}
