_QWORD *__fastcall uu_dd::parseargs::Parser::parse_operand(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v6; // rbx
  __int64 v7; // r15
  __int64 v8; // r14
  __int64 v9; // rbx
  __int64 v10; // r12
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r12
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rsi
  __int64 v19; // rcx
  __int8 v20; // al
  __m256i v22; // [rsp+18h] [rbp-80h] BYREF
  __int64 v23; // [rsp+38h] [rbp-60h]
  __int64 v24; // [rsp+40h] [rbp-58h]
  __int64 v25; // [rsp+48h] [rbp-50h] BYREF
  __int64 v26; // [rsp+50h] [rbp-48h]
  __int64 v27; // [rsp+58h] [rbp-40h]
  __int64 v28; // [rsp+60h] [rbp-38h]

  v6 = (_QWORD *)a1;
  core::str::<impl str>::split_once(&v25, a3, a4);
  v7 = v25;
  if ( !v25 )
    goto LABEL_44;
  v8 = v26;
  v9 = v27;
  v10 = v28;
  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v25, v26, aBs, 2LL) )
  {
    uu_dd::parseargs::Parser::parse_bytes(&v22, v9, v10);
    v11 = v22.m256i_i64[1];
    v12 = v22.m256i_i64[0];
    if ( v22.m256i_i64[0] == 14 )
    {
      *(_QWORD *)a2 = 1LL;
      *(_QWORD *)(a2 + 8) = v11;
LABEL_20:
      v6 = (_QWORD *)a1;
      *(_QWORD *)a1 = 14LL;
      return v6;
    }
    goto LABEL_26;
  }
  v24 = v9;
  v23 = v10;
  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, aCbs, 3LL) )
  {
    uu_dd::parseargs::Parser::parse_bytes(&v22, v24, v23);
    v11 = v22.m256i_i64[1];
    v12 = v22.m256i_i64[0];
    if ( v22.m256i_i64[0] == 14 )
    {
      *(_QWORD *)(a2 + 48) = 1LL;
      *(_QWORD *)(a2 + 56) = v11;
      goto LABEL_20;
    }
LABEL_26:
    v6 = (_QWORD *)a1;
    *(_OWORD *)(a1 + 16) = *(_OWORD *)&v22.m256i_u64[2];
    *(_QWORD *)a1 = v12;
    *(_QWORD *)(a1 + 8) = v11;
    return v6;
  }
  v13 = v24;
  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, aConv, 4LL) )
  {
    *(_BYTE *)(a2 + 192) = 1;
    uu_dd::parseargs::Parser::parse_conv_flags(&v22, a2, v13, v23);
    goto LABEL_10;
  }
  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, aCount, 5LL) )
  {
    uu_dd::parseargs::Parser::parse_n(&v22, v24, v23);
    v15 = v22.m256i_i64[1];
    v16 = v22.m256i_i64[0];
    v17 = v22.m256i_i64[2];
    if ( v22.m256i_i64[0] == 14 )
    {
      *(_QWORD *)(a2 + 96) = v22.m256i_i64[1];
      *(_QWORD *)(a2 + 104) = v17;
      goto LABEL_20;
    }
LABEL_39:
    v18 = v22.m256i_i64[3];
    v6 = (_QWORD *)a1;
    *(_QWORD *)a1 = v16;
    *(_QWORD *)(a1 + 8) = v15;
    *(_QWORD *)(a1 + 16) = v17;
    *(_QWORD *)(a1 + 24) = v18;
    return v6;
  }
  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, aIbs, 3LL) )
  {
    uu_dd::parseargs::Parser::parse_bytes(&v22, v24, v23);
    v11 = v22.m256i_i64[1];
    v12 = v22.m256i_i64[0];
    if ( v22.m256i_i64[0] == 14 )
    {
      *(_QWORD *)(a2 + 16) = 1LL;
      *(_QWORD *)(a2 + 24) = v11;
      goto LABEL_20;
    }
    goto LABEL_26;
  }
  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, aIf, 2LL) )
  {
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v22, v24, v23);
    core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(a2 + 112);
    *(_QWORD *)(a2 + 128) = v22.m256i_i64[2];
    *(_OWORD *)(a2 + 112) = *(_OWORD *)v22.m256i_i8;
    goto LABEL_20;
  }
  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, aIflag, 5LL) )
  {
    uu_dd::parseargs::Parser::parse_input_flags(&v22, a2, v24, v23);
    goto LABEL_10;
  }
  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, aObs, 3LL) )
  {
    uu_dd::parseargs::Parser::parse_bytes(&v22, v24, v23);
    v11 = v22.m256i_i64[1];
    v12 = v22.m256i_i64[0];
    if ( v22.m256i_i64[0] == 14 )
    {
      *(_QWORD *)(a2 + 32) = 1LL;
      *(_QWORD *)(a2 + 40) = v11;
      goto LABEL_20;
    }
    goto LABEL_26;
  }
  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, aOf, 2LL) )
  {
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v22, v24, v23);
    core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(a2 + 136);
    *(_QWORD *)(a2 + 152) = v22.m256i_i64[2];
    *(_OWORD *)(a2 + 136) = *(_OWORD *)v22.m256i_i8;
    goto LABEL_20;
  }
  if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, aOflag, 5LL) )
  {
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, aSeek, 4LL)
      || (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, aOseek, 5LL) )
    {
      uu_dd::parseargs::Parser::parse_n(&v22, v24, v23);
      v15 = v22.m256i_i64[1];
      v16 = v22.m256i_i64[0];
      v17 = v22.m256i_i64[2];
      if ( v22.m256i_i64[0] == 14 )
      {
        *(_QWORD *)(a2 + 80) = v22.m256i_i64[1];
        *(_QWORD *)(a2 + 88) = v17;
        goto LABEL_20;
      }
      goto LABEL_39;
    }
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, aSkip, 4LL)
      || (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, aIseek, 5LL) )
    {
      uu_dd::parseargs::Parser::parse_n(&v22, v24, v23);
      v15 = v22.m256i_i64[1];
      v16 = v22.m256i_i64[0];
      v17 = v22.m256i_i64[2];
      if ( v22.m256i_i64[0] == 14 )
      {
        *(_QWORD *)(a2 + 64) = v22.m256i_i64[1];
        *(_QWORD *)(a2 + 72) = v17;
        goto LABEL_20;
      }
      goto LABEL_39;
    }
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, aStatus, 6LL) )
    {
      uu_dd::parseargs::Parser::parse_status_level(&v22, v24, v23);
      v19 = v22.m256i_i64[0];
      v20 = v22.m256i_i8[8];
      if ( v22.m256i_i64[0] != 14 )
      {
        v6 = (_QWORD *)a1;
        *(_QWORD *)(a1 + 24) = v22.m256i_i64[3];
        *(_OWORD *)(a1 + 9) = *(_OWORD *)((char *)&v22.m256i_u64[1] + 1);
        *(_QWORD *)a1 = v19;
        *(_BYTE *)(a1 + 8) = v20;
        return v6;
      }
      *(_BYTE *)(a2 + 208) = v22.m256i_i8[8];
      goto LABEL_20;
    }
    v6 = (_QWORD *)a1;
LABEL_44:
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v6 + 1, a3, a4);
    *v6 = 0LL;
    return v6;
  }
  uu_dd::parseargs::Parser::parse_output_flags(&v22, a2, v24, v23);
LABEL_10:
  v14 = v22.m256i_i64[0];
  if ( v22.m256i_i64[0] == 14 )
    goto LABEL_20;
  v6 = (_QWORD *)a1;
  *(_QWORD *)(a1 + 24) = v22.m256i_i64[3];
  *(_OWORD *)(a1 + 8) = *(_OWORD *)&v22.m256i_u64[1];
  *(_QWORD *)a1 = v14;
  return v6;
}