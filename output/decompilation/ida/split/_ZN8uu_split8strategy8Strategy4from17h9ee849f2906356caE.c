__int64 __fastcall uu_split::strategy::Strategy::from(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v5; // r13
  char v6; // bp
  char v7; // bl
  char v8; // al
  __int64 result; // rax
  const char *v10; // rdx
  _QWORD *(__fastcall *v11)(_QWORD *, __int64); // r8
  __int64 (__fastcall *v12)(); // r9
  __int64 v13; // rcx
  _QWORD *v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  __int128 v19; // xmm0
  __int128 v20; // xmm0
  __int64 v21; // rcx
  __m256i v22; // [rsp+10h] [rbp-D8h] BYREF
  __int64 v23; // [rsp+30h] [rbp-B8h]
  __int64 v24; // [rsp+38h] [rbp-B0h]
  __int128 v25; // [rsp+40h] [rbp-A8h]
  __int64 v26; // [rsp+50h] [rbp-98h]
  __int128 v27; // [rsp+60h] [rbp-88h]
  __int64 v28; // [rsp+70h] [rbp-78h]
  int v29; // [rsp+80h] [rbp-68h] BYREF
  __int64 v30; // [rsp+88h] [rbp-60h]
  __int128 v31; // [rsp+A0h] [rbp-48h] BYREF
  __int64 v32; // [rsp+B0h] [rbp-38h]

  v24 = a4;
  v5 = clap_builder::parser::matches::arg_matches::ArgMatches::value_source(a2, aLines, 5LL);
  v6 = clap_builder::parser::matches::arg_matches::ArgMatches::value_source(a2, aBytes_0, 5LL);
  v7 = clap_builder::parser::matches::arg_matches::ArgMatches::value_source(a2, aLineBytes, 10LL);
  v8 = clap_builder::parser::matches::arg_matches::ArgMatches::value_source(a2, aNumber, 6LL);
  if ( v8 == 3 )
  {
    if ( a3 )
    {
      if ( v7 == 2 || v6 == 2 || v5 == 2 )
        goto LABEL_38;
      goto LABEL_10;
    }
    if ( v5 == 2 )
    {
      if ( v7 == 2 || v6 == 2 )
        goto LABEL_38;
      goto LABEL_19;
    }
    if ( v6 == 2 )
    {
      if ( v7 == 2 )
        goto LABEL_38;
      goto LABEL_29;
    }
    if ( v7 != 2 )
      goto LABEL_44;
LABEL_39:
    v10 = aLineBytes;
    v11 = uu_split::strategy::Strategy::LineBytes;
    v12 = uu_split::strategy::StrategyError::Bytes;
    v15 = 10LL;
    return uu_split::strategy::Strategy::from::get_and_parse(a1, a2, v10, v15, v11, v12);
  }
  if ( a3 )
  {
    if ( v7 == 2 || v6 == 2 || v5 == 2 || v8 == 2 )
      goto LABEL_38;
LABEL_10:
    uucore::features::parser::parse_size::parse_size_u64_max(&v29, a3, v24);
    if ( v29 == 4 )
    {
      result = v30;
    }
    else
    {
      uu_split::strategy::Strategy::from::{{closure}}(&v22, a3, v24, &v29);
      result = v22.m256i_i64[1];
      v13 = v22.m256i_i64[0];
      v25 = *(_OWORD *)&v22.m256i_u64[2];
      v26 = v23;
      if ( v22.m256i_i64[0] != 4 )
      {
        *(_QWORD *)(a1 + 32) = v26;
        *(_OWORD *)(a1 + 16) = v25;
        *(_QWORD *)a1 = v13;
        *(_QWORD *)(a1 + 8) = result;
        return result;
      }
    }
    if ( !result )
    {
      v16 = core::fmt::num::imp::<impl usize>::_fmt(0LL, &v22, 20LL);
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v31, v16, v17);
      *(_QWORD *)a1 = 0LL;
      *(_QWORD *)(a1 + 8) = 1LL;
      *(_OWORD *)(a1 + 16) = v31;
      result = v32;
      *(_QWORD *)(a1 + 32) = v32;
      return result;
    }
    v14 = (_QWORD *)a1;
    *(_QWORD *)(a1 + 8) = 6LL;
    *(_QWORD *)(a1 + 16) = result;
LABEL_23:
    *v14 = 4LL;
    return result;
  }
  if ( v5 == 2 )
  {
    if ( v7 == 2 || v6 == 2 || v8 == 2 )
      goto LABEL_38;
LABEL_19:
    v10 = aLines;
    v11 = uu_split::strategy::Strategy::Lines;
    v12 = uu_split::strategy::StrategyError::Lines;
LABEL_30:
    v15 = 5LL;
    return uu_split::strategy::Strategy::from::get_and_parse(a1, a2, v10, v15, v11, v12);
  }
  if ( v6 == 2 )
  {
    if ( v8 != 2 && v7 != 2 )
    {
LABEL_29:
      v10 = aBytes_0;
      v11 = uu_split::strategy::Strategy::Bytes;
      v12 = uu_split::strategy::StrategyError::Bytes;
      goto LABEL_30;
    }
    goto LABEL_38;
  }
  if ( v7 == 2 )
  {
    if ( v8 != 2 )
      goto LABEL_39;
LABEL_38:
    result = a1;
    *(_QWORD *)a1 = 3LL;
    return result;
  }
  if ( v8 != 2 )
  {
LABEL_44:
    result = a1;
    *(_QWORD *)(a1 + 8) = 6LL;
    *(_QWORD *)(a1 + 16) = 1000LL;
    *(_QWORD *)a1 = 4LL;
    return result;
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v22, a2, aNumber, 6LL);
  v18 = clap_builder::parser::error::MatchesError::unwrap(aNumber, 6LL, &v22);
  if ( !v18 )
    core::option::unwrap_failed(&off_10AE00);
  uu_split::strategy::NumberType::from(v22.m256i_i64, *(_QWORD *)(v18 + 8), *(_QWORD *)(v18 + 16));
  if ( v22.m256i_i32[0] == 2 )
  {
    result = v22.m256i_i64[3];
    v19 = *(_OWORD *)&v22.m256i_u64[1];
    v27 = *(_OWORD *)&v22.m256i_u64[1];
    v28 = v22.m256i_i64[3];
    v14 = (_QWORD *)a1;
    *(_QWORD *)(a1 + 24) = v22.m256i_i64[3];
    *(_OWORD *)(a1 + 8) = v19;
    goto LABEL_23;
  }
  result = v22.m256i_i64[2];
  v26 = v22.m256i_i64[2];
  v20 = *(_OWORD *)v22.m256i_i8;
  v21 = v22.m256i_i64[3];
  v27 = *(_OWORD *)v22.m256i_i8;
  v28 = v22.m256i_i64[2];
  *(_QWORD *)(a1 + 24) = v22.m256i_i64[2];
  *(_OWORD *)(a1 + 8) = v20;
  *(_QWORD *)a1 = 2LL;
  *(_QWORD *)(a1 + 32) = v21;
  return result;
}