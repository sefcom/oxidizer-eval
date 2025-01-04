_QWORD *__fastcall uu_split::strategy::Strategy::from(_QWORD *a1, __int64 a2, _QWORD *a3)
{
  char v4; // r13
  char v5; // r12
  char v6; // bp
  char v7; // al
  const char *v8; // rdx
  _QWORD *(__fastcall *v9)(_QWORD *, __int64); // r8
  __int64 (__fastcall *v10)(__int64, __int128 *); // r9
  __int64 v11; // rax
  __int64 v12; // rcx
  _QWORD *v13; // rbx
  _QWORD *v14; // rdi
  __int128 v15; // xmm0
  __int64 v16; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  __int128 v20; // xmm0
  __int64 v21; // rcx
  __int128 v22; // xmm0
  __int128 v24; // [rsp+10h] [rbp-D8h] BYREF
  __int128 v25; // [rsp+20h] [rbp-C8h]
  __int128 v26; // [rsp+30h] [rbp-B8h] BYREF
  __int128 v27; // [rsp+40h] [rbp-A8h]
  __int64 v28; // [rsp+50h] [rbp-98h] BYREF
  _BYTE v29[24]; // [rsp+58h] [rbp-90h]
  __int64 v30; // [rsp+70h] [rbp-78h]
  __int64 v31; // [rsp+78h] [rbp-70h] BYREF
  __int128 v32; // [rsp+80h] [rbp-68h]
  __int64 v33; // [rsp+90h] [rbp-58h]
  __int64 v34; // [rsp+98h] [rbp-50h] BYREF
  __int128 v35; // [rsp+A0h] [rbp-48h]
  __int64 v36; // [rsp+B0h] [rbp-38h]

  v4 = clap_builder::parser::matches::arg_matches::ArgMatches::value_source(
         a2,
         anon_94f0aa2b13bdb41c7ee8957331b484de_14_llvm_15137177309397333750,
         5LL);
  v5 = clap_builder::parser::matches::arg_matches::ArgMatches::value_source(
         a2,
         anon_94f0aa2b13bdb41c7ee8957331b484de_12_llvm_15137177309397333750,
         5LL);
  v6 = clap_builder::parser::matches::arg_matches::ArgMatches::value_source(
         a2,
         anon_94f0aa2b13bdb41c7ee8957331b484de_13_llvm_15137177309397333750,
         10LL);
  v7 = clap_builder::parser::matches::arg_matches::ArgMatches::value_source(
         a2,
         anon_94f0aa2b13bdb41c7ee8957331b484de_17_llvm_15137177309397333750,
         6LL);
  if ( v7 == 3 )
  {
    if ( *a3 == 0x8000000000000000LL )
    {
      if ( v4 == 2 )
      {
        if ( v5 == 2 || v6 == 2 )
          goto LABEL_42;
        goto LABEL_12;
      }
      if ( v5 == 2 )
      {
        if ( v6 == 2 )
          goto LABEL_42;
LABEL_32:
        v8 = anon_94f0aa2b13bdb41c7ee8957331b484de_12_llvm_15137177309397333750;
        v9 = uu_split::strategy::Strategy::Bytes;
        v10 = uu_split::strategy::StrategyError::Bytes;
        goto LABEL_33;
      }
      if ( v6 != 2 )
      {
LABEL_49:
        v13 = a1;
        a1[1] = 6LL;
        a1[2] = 1000LL;
        *a1 = 4LL;
        return v13;
      }
LABEL_44:
      v8 = anon_94f0aa2b13bdb41c7ee8957331b484de_13_llvm_15137177309397333750;
      v9 = uu_split::strategy::Strategy::LineBytes;
      v10 = uu_split::strategy::StrategyError::Bytes;
      v16 = 10LL;
      goto LABEL_34;
    }
    if ( v4 == 2 || v5 == 2 || v6 == 2 )
      goto LABEL_42;
    goto LABEL_21;
  }
  if ( *a3 != 0x8000000000000000LL )
  {
    if ( v4 == 2 || v5 == 2 || v6 == 2 || v7 == 2 )
      goto LABEL_42;
LABEL_21:
    uucore::parser::parse_size::parse_size_u64_max(&v26, a3[1], a3[2]);
    if ( (_DWORD)v26 == 3 )
    {
      v11 = *((_QWORD *)&v26 + 1);
    }
    else
    {
      v25 = v27;
      v24 = v26;
      uu_split::strategy::Strategy::from::{{closure}}(&v28, a3, &v24);
      v12 = v28;
      v11 = *(_QWORD *)v29;
      v32 = *(_OWORD *)&v29[8];
      v33 = v30;
      if ( v28 != 4 )
      {
        v13 = a1;
        a1[4] = v33;
        *((_OWORD *)a1 + 1) = v32;
        *a1 = v12;
        a1[1] = v11;
        return v13;
      }
    }
    v13 = a1;
    v31 = v11;
    v14 = a1 + 2;
    if ( v11 )
    {
      *v14 = v11;
      v15 = xmmword_18100;
    }
    else
    {
      <T as alloc::string::ToString>::to_string(v14, &v31);
      v15 = xmmword_18050;
    }
    *(_OWORD *)a1 = v15;
    return v13;
  }
  if ( v4 == 2 )
  {
    if ( v5 == 2 || v6 == 2 || v7 == 2 )
      goto LABEL_42;
LABEL_12:
    v8 = anon_94f0aa2b13bdb41c7ee8957331b484de_14_llvm_15137177309397333750;
    v9 = uu_split::strategy::Strategy::Lines;
    v10 = uu_split::strategy::StrategyError::Lines;
LABEL_33:
    v16 = 5LL;
LABEL_34:
    v13 = a1;
    uu_split::strategy::Strategy::from::get_and_parse(a1, a2, v8, v16, v9, v10);
    return v13;
  }
  if ( v5 == 2 )
  {
    if ( v6 == 2 || v7 == 2 )
      goto LABEL_42;
    goto LABEL_32;
  }
  if ( v6 == 2 )
  {
    if ( v7 == 2 )
    {
LABEL_42:
      v13 = a1;
      *a1 = 3LL;
      return v13;
    }
    goto LABEL_44;
  }
  if ( v7 != 2 )
    goto LABEL_49;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(
    &v28,
    a2,
    anon_94f0aa2b13bdb41c7ee8957331b484de_17_llvm_15137177309397333750,
    6LL);
  v18 = clap_builder::parser::error::MatchesError::unwrap(
          anon_94f0aa2b13bdb41c7ee8957331b484de_17_llvm_15137177309397333750,
          6LL,
          &v28);
  if ( !v18 )
    core::option::unwrap_failed(&off_148F18);
  uu_split::strategy::NumberType::from(&v34, *(_QWORD *)(v18 + 8), *(_QWORD *)(v18 + 16));
  if ( (_DWORD)v34 == 2 )
  {
    *(_QWORD *)&v25 = v36;
    v24 = v35;
    v13 = a1;
  }
  else
  {
    core::ops::function::FnOnce::call_once(&v28, &v34);
    v19 = v28;
    v24 = *(_OWORD *)v29;
    *(_QWORD *)&v25 = *(_QWORD *)&v29[16];
    v13 = a1;
    if ( v28 != 4 )
    {
      v21 = v30;
      *(_QWORD *)&v27 = v25;
      v22 = v24;
      v26 = v24;
      a1[3] = v25;
      *(_OWORD *)(a1 + 1) = v22;
      *a1 = v19;
      a1[4] = v21;
      return v13;
    }
  }
  *(_QWORD *)&v27 = v25;
  v20 = v24;
  v26 = v24;
  v13[3] = v25;
  *(_OWORD *)(v13 + 1) = v20;
  *v13 = 4LL;
  return v13;
}
