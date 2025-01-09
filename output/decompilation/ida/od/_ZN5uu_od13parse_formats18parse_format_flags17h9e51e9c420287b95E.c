__int64 __fastcall uu_od::parse_formats::parse_format_flags(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // r14d
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // r12
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rax
  unsigned int v11; // edx
  unsigned __int64 v12; // rcx
  __int64 v13; // rax
  __int64 result; // rax
  __int64 v15; // rcx
  __int128 v16; // xmm0
  __m256i v17; // [rsp+10h] [rbp-198h] BYREF
  __int128 v18; // [rsp+38h] [rbp-170h] BYREF
  __int64 v19; // [rsp+48h] [rbp-160h]
  __m256i v20; // [rsp+50h] [rbp-158h] BYREF
  char v21; // [rsp+70h] [rbp-138h]
  __int64 v22; // [rsp+78h] [rbp-130h] BYREF
  __int64 v23; // [rsp+80h] [rbp-128h]
  __int64 v24; // [rsp+88h] [rbp-120h]
  __int64 v25; // [rsp+90h] [rbp-118h] BYREF
  __int64 v26; // [rsp+98h] [rbp-110h]
  __int64 v27; // [rsp+A0h] [rbp-108h]
  _QWORD v28[2]; // [rsp+A8h] [rbp-100h] BYREF
  __int64 v29; // [rsp+B8h] [rbp-F0h]
  __int128 v30; // [rsp+C0h] [rbp-E8h] BYREF
  __int64 v31; // [rsp+D0h] [rbp-D8h]
  __int128 v32; // [rsp+E0h] [rbp-C8h] BYREF
  __int64 v33; // [rsp+F0h] [rbp-B8h]
  __int128 v34; // [rsp+100h] [rbp-A8h] BYREF
  __int64 v35; // [rsp+110h] [rbp-98h]
  _BYTE v36[32]; // [rsp+118h] [rbp-90h] BYREF
  _BYTE v37[32]; // [rsp+138h] [rbp-70h] BYREF
  _BYTE v38[80]; // [rsp+158h] [rbp-50h] BYREF

  *(_QWORD *)&v18 = 0LL;
  *((_QWORD *)&v18 + 1) = 8LL;
  v19 = 0LL;
  v28[0] = a2;
  v28[1] = a2 + 24 * a3;
  v29 = 1LL;
  v3 = 0;
  while ( 2 )
  {
    v29 = 0LL;
    v4 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::nth(v28);
    if ( !v4 )
    {
LABEL_39:
      if ( (v3 & 1) == 0 )
      {
LABEL_40:
        if ( !v19 )
        {
          v20 = uu_od::prn_int::FORMAT_ITEM_OCT16;
          v21 = 0;
          alloc::vec::Vec<T,A>::push(&v18, &v20);
        }
        *(_QWORD *)(a1 + 24) = v19;
        result = a1;
        *(_OWORD *)(a1 + 8) = v18;
        *(_QWORD *)a1 = 0LL;
        return result;
      }
      <T as alloc::slice::hack::ConvertVec>::to_vec(&v20);
      v15 = a1;
      *(_QWORD *)(a1 + 24) = v20.m256i_i64[2];
      v16 = *(_OWORD *)v20.m256i_i8;
LABEL_45:
      *(_OWORD *)(v15 + 8) = v16;
      *(_QWORD *)v15 = 1LL;
      goto LABEL_46;
    }
LABEL_5:
    if ( (v3 & 1) != 0 )
    {
      uu_od::parse_formats::parse_type_string((__int64)&v20, *(_QWORD *)(v4 + 8), *(_QWORD *)(v4 + 16));
      *(_OWORD *)v17.m256i_i8 = *(_OWORD *)&v20.m256i_u64[1];
      v17.m256i_i64[2] = v20.m256i_i64[3];
      if ( !v20.m256i_i64[0] )
      {
        v31 = v17.m256i_i64[2];
        v30 = *(_OWORD *)v17.m256i_i8;
        <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v36, &v30);
        <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<T,alloc::vec::into_iter::IntoIter<T>>>::spec_extend(
          &v18,
          v36);
        v3 = 0;
        goto LABEL_37;
      }
      v15 = a1;
      *(_QWORD *)(a1 + 24) = v17.m256i_i64[2];
      v16 = *(_OWORD *)v17.m256i_i8;
      goto LABEL_45;
    }
    v5 = *(_QWORD *)(v4 + 8);
    v6 = *(_QWORD *)(v4 + 16);
    if ( (unsigned __int8)core::slice::<impl [T]>::starts_with(v5, v6, asc_18220, 2LL) )
    {
      if ( v6 != 2 )
      {
        if ( (unsigned __int8)core::slice::<impl [T]>::starts_with(v5, v6, aFormat_1, 9LL) )
        {
          v20.m256i_i64[1] = v5;
          v20.m256i_i64[2] = v5 + v6;
          v20.m256i_i8[24] = 0;
          v20.m256i_i64[0] = 1LL;
          <alloc::string::String as core::iter::traits::collect::FromIterator<char>>::from_iter(&v22, &v20);
          uu_od::parse_formats::parse_type_string((__int64)&v20, v23, v24);
          *(_OWORD *)v17.m256i_i8 = *(_OWORD *)&v20.m256i_u64[1];
          v17.m256i_i64[2] = v20.m256i_i64[3];
          if ( v20.m256i_i64[0] )
          {
            *(_QWORD *)(a1 + 24) = v17.m256i_i64[2];
            *(_OWORD *)(a1 + 8) = *(_OWORD *)v17.m256i_i8;
            *(_QWORD *)a1 = 1LL;
            core::ptr::drop_in_place<alloc::string::String>(&v22);
            goto LABEL_46;
          }
          v33 = v17.m256i_i64[2];
          v32 = *(_OWORD *)v17.m256i_i8;
          <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v37, &v32);
          <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<T,alloc::vec::into_iter::IntoIter<T>>>::spec_extend(
            &v18,
            v37);
          core::ptr::drop_in_place<alloc::string::String>(&v22);
        }
        v3 = (unsigned __int8)v3;
        if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v5, v6, aFormat, 8LL) )
          v3 = 1;
        goto LABEL_37;
      }
      goto LABEL_40;
    }
    v20.m256i_i32[0] = 0;
    v7 = core::char::methods::encode_utf8_raw(45LL, &v20);
    if ( !(unsigned __int8)core::slice::<impl [T]>::starts_with(v5, v6, v7, v8) )
      goto LABEL_37;
    v25 = 0LL;
    v26 = 1LL;
    v27 = 0LL;
    v22 = v5;
    v23 = v5 + v6;
    v24 = 1LL;
    v9 = 1LL;
    while ( !v9 )
    {
      LODWORD(v10) = <core::str::iter::Chars as core::iter::traits::iterator::Iterator>::next(&v22);
      v11 = v10;
      if ( (_DWORD)v10 == 1114112 )
        goto LABEL_33;
LABEL_26:
      if ( (v3 & 1) != 0 )
      {
        v10 = alloc::string::String::push(&v25, v11);
        LOBYTE(v10) = v3;
        goto LABEL_19;
      }
      v12 = v11 - 65;
      if ( (unsigned int)v12 <= 0x36 )
      {
        LOBYTE(v10) = 1;
        if ( v12 == 51 )
          goto LABEL_19;
        v13 = 0x40020000042001LL;
        if ( _bittest64(&v13, v12) )
          goto LABEL_33;
      }
      uu_od::parse_formats::od_argument_traditional_format(&v17, v11);
      if ( v17.m256i_i32[0] != 3 )
      {
        v20 = v17;
        v21 = 0;
        alloc::vec::Vec<T,A>::push(&v18, &v20);
      }
      LODWORD(v10) = v3;
LABEL_19:
      v9 = v24;
      v3 = v10;
    }
    v24 = 0LL;
    if ( !<core::str::iter::Chars as core::iter::traits::iterator::Iterator>::advance_by(&v22) )
    {
      LODWORD(v10) = core::str::validations::next_code_point(&v22);
      if ( (_DWORD)v10 )
      {
        if ( v11 != 1114112 )
          goto LABEL_26;
      }
    }
LABEL_33:
    if ( !v27 )
      goto LABEL_36;
    uu_od::parse_formats::parse_type_string((__int64)&v20, v26, v27);
    *(_OWORD *)v17.m256i_i8 = *(_OWORD *)&v20.m256i_u64[1];
    v17.m256i_i64[2] = v20.m256i_i64[3];
    if ( !v20.m256i_i64[0] )
    {
      v35 = v17.m256i_i64[2];
      v34 = *(_OWORD *)v17.m256i_i8;
      <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v38, &v34);
      <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<T,alloc::vec::into_iter::IntoIter<T>>>::spec_extend(
        &v18,
        v38);
      v3 = 0;
LABEL_36:
      core::ptr::drop_in_place<alloc::string::String>(&v25);
LABEL_37:
      if ( v29 )
        continue;
      v4 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v28);
      if ( !v4 )
        goto LABEL_39;
      goto LABEL_5;
    }
    break;
  }
  *(_QWORD *)(a1 + 24) = v17.m256i_i64[2];
  *(_OWORD *)(a1 + 8) = *(_OWORD *)v17.m256i_i8;
  *(_QWORD *)a1 = 1LL;
  core::ptr::drop_in_place<alloc::string::String>(&v25);
LABEL_46:
  core::ptr::drop_in_place<alloc::vec::Vec<uu_od::parse_formats::ParsedFormatterItemInfo>>(&v18);
  return a1;
}
