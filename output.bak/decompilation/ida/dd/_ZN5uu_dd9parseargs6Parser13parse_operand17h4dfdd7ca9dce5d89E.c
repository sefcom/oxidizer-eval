__int64 __fastcall uu_dd::parseargs::Parser::parse_operand(__int64 a1, _BYTE *a2, __int64 a3, __int64 a4)
{
  _QWORD *v6; // rbx
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rbx
  __int64 v10; // r12
  __int64 result; // rax
  __int64 v12; // rcx
  _BYTE *v13; // rcx
  _BYTE *v14; // rcx
  __int64 v15; // r12
  _BYTE *v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rcx
  _BYTE *v19; // rdx
  _BYTE *v20; // rcx
  _BYTE *v21; // r14
  _BYTE *v22; // rcx
  _BYTE *v23; // rdx
  _BYTE *v24; // rdx
  __int64 v25; // rsi
  __int64 v26; // rcx
  __m256i v27; // [rsp+10h] [rbp-88h] BYREF
  _BYTE *v28; // [rsp+30h] [rbp-68h]
  __int64 v29; // [rsp+38h] [rbp-60h]
  __int64 v30; // [rsp+40h] [rbp-58h]
  __int64 v31; // [rsp+48h] [rbp-50h] BYREF
  __int64 v32; // [rsp+50h] [rbp-48h]
  __int64 v33; // [rsp+58h] [rbp-40h]
  __int64 v34; // [rsp+60h] [rbp-38h]

  v6 = (_QWORD *)a1;
  core::str::<impl str>::split_once(&v31, a3, a4);
  v7 = v31;
  if ( !v31 )
    goto LABEL_45;
  v28 = a2;
  v8 = v32;
  v9 = v33;
  v10 = v34;
  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v31, v32, aBs, 2LL) )
  {
    uu_dd::parseargs::Parser::parse_bytes(&v27);
    result = v27.m256i_i64[1];
    v12 = v27.m256i_i64[0];
    if ( v27.m256i_i64[0] == 14 )
    {
      v13 = v28;
      *(_QWORD *)v28 = 1LL;
      *((_QWORD *)v13 + 1) = result;
LABEL_21:
      result = a1;
      *(_QWORD *)a1 = 14LL;
      return result;
    }
    goto LABEL_27;
  }
  v30 = v9;
  v29 = v10;
  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, aCbs, 3LL) )
  {
    uu_dd::parseargs::Parser::parse_bytes(&v27);
    result = v27.m256i_i64[1];
    v12 = v27.m256i_i64[0];
    if ( v27.m256i_i64[0] == 14 )
    {
      v14 = v28;
      *((_QWORD *)v28 + 6) = 1LL;
      *((_QWORD *)v14 + 7) = result;
      goto LABEL_21;
    }
    goto LABEL_27;
  }
  v15 = v30;
  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, aConv, 4LL) )
  {
    v16 = v28;
    v28[192] = 1;
    uu_dd::parseargs::Parser::parse_conv_flags((__int64)&v27, v16, v15, v29);
    goto LABEL_10;
  }
  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, aCount, 5LL) )
  {
    uu_dd::parseargs::Parser::parse_n(&v27, v30, v29);
    result = v27.m256i_i64[1];
    v17 = v27.m256i_i64[0];
    v18 = v27.m256i_i64[2];
    if ( v27.m256i_i64[0] == 14 )
    {
      v19 = v28;
      *((_QWORD *)v28 + 12) = v27.m256i_i64[1];
      *((_QWORD *)v19 + 13) = v18;
      goto LABEL_21;
    }
    goto LABEL_40;
  }
  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, aIbs, 3LL) )
  {
    uu_dd::parseargs::Parser::parse_bytes(&v27);
    result = v27.m256i_i64[1];
    v12 = v27.m256i_i64[0];
    if ( v27.m256i_i64[0] == 14 )
    {
      v20 = v28;
      *((_QWORD *)v28 + 2) = 1LL;
      *((_QWORD *)v20 + 3) = result;
      goto LABEL_21;
    }
    goto LABEL_27;
  }
  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, aIf, 2LL) )
  {
    <T as alloc::slice::hack::ConvertVec>::to_vec(&v27, v30, v29);
    v21 = v28 + 112;
    core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(v28 + 112);
LABEL_20:
    *((_QWORD *)v21 + 2) = v27.m256i_i64[2];
    *(_OWORD *)v21 = *(_OWORD *)v27.m256i_i8;
    goto LABEL_21;
  }
  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, aIflag, 5LL) )
  {
    uu_dd::parseargs::Parser::parse_input_flags((__int64)&v27, v28, v30, v29);
    goto LABEL_10;
  }
  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, aObs, 3LL) )
  {
    uu_dd::parseargs::Parser::parse_bytes(&v27);
    result = v27.m256i_i64[1];
    v12 = v27.m256i_i64[0];
    if ( v27.m256i_i64[0] == 14 )
    {
      v22 = v28;
      *((_QWORD *)v28 + 4) = 1LL;
      *((_QWORD *)v22 + 5) = result;
      goto LABEL_21;
    }
LABEL_27:
    *(_OWORD *)(a1 + 16) = *(_OWORD *)&v27.m256i_u64[2];
    *(_QWORD *)a1 = v12;
    *(_QWORD *)(a1 + 8) = result;
    return result;
  }
  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, aOf_0, 2LL) )
  {
    <T as alloc::slice::hack::ConvertVec>::to_vec(&v27, v30, v29);
    v21 = v28 + 136;
    core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(v28 + 136);
    goto LABEL_20;
  }
  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, aOflag, 5LL) )
  {
    uu_dd::parseargs::Parser::parse_output_flags((__int64)&v27, v28, v30, v29);
LABEL_10:
    result = v27.m256i_i64[0];
    if ( v27.m256i_i64[0] != 14 )
    {
      *(_QWORD *)(a1 + 24) = v27.m256i_i64[3];
      *(_OWORD *)(a1 + 8) = *(_OWORD *)&v27.m256i_u64[1];
      *(_QWORD *)a1 = result;
      return result;
    }
    goto LABEL_21;
  }
  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, aSeek, 4LL)
    || (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, aOseek, 5LL) )
  {
    uu_dd::parseargs::Parser::parse_n(&v27, v30, v29);
    result = v27.m256i_i64[1];
    v17 = v27.m256i_i64[0];
    v18 = v27.m256i_i64[2];
    if ( v27.m256i_i64[0] == 14 )
    {
      v23 = v28;
      *((_QWORD *)v28 + 10) = v27.m256i_i64[1];
      *((_QWORD *)v23 + 11) = v18;
      goto LABEL_21;
    }
    goto LABEL_40;
  }
  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, aSkip, 4LL)
    || (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, aIseek, 5LL) )
  {
    uu_dd::parseargs::Parser::parse_n(&v27, v30, v29);
    result = v27.m256i_i64[1];
    v17 = v27.m256i_i64[0];
    v18 = v27.m256i_i64[2];
    if ( v27.m256i_i64[0] == 14 )
    {
      v24 = v28;
      *((_QWORD *)v28 + 8) = v27.m256i_i64[1];
      *((_QWORD *)v24 + 9) = v18;
      goto LABEL_21;
    }
LABEL_40:
    v25 = v27.m256i_i64[3];
    *(_QWORD *)a1 = v17;
    *(_QWORD *)(a1 + 8) = result;
    *(_QWORD *)(a1 + 16) = v18;
    *(_QWORD *)(a1 + 24) = v25;
    return result;
  }
  if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, aStatus, 6LL) )
  {
    v6 = (_QWORD *)a1;
LABEL_45:
    result = <T as alloc::slice::hack::ConvertVec>::to_vec(v6 + 1, a3, a4);
    *v6 = 0LL;
    return result;
  }
  uu_dd::parseargs::Parser::parse_status_level((__int64)&v27, v30, v29);
  v26 = v27.m256i_i64[0];
  result = v27.m256i_u8[8];
  if ( v27.m256i_i64[0] == 14 )
  {
    v28[208] = v27.m256i_i8[8];
    goto LABEL_21;
  }
  *(_QWORD *)(a1 + 24) = v27.m256i_i64[3];
  *(_OWORD *)(a1 + 9) = *(_OWORD *)((char *)&v27.m256i_u64[1] + 1);
  *(_QWORD *)a1 = v26;
  *(_BYTE *)(a1 + 8) = result;
  return result;
}
