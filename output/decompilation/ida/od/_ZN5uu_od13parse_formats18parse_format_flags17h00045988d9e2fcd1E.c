__int64 __fastcall uu_od::parse_formats::parse_format_flags(__int64 a1, __int64 a2, __int64 a3)
{
  char *v3; // r15
  __int64 v4; // rsi
  int v5; // r14d
  __int64 v6; // rbp
  __int64 v7; // rsi
  __int64 v8; // rcx
  char *v9; // rbx
  __int64 v10; // r15
  __int64 v11; // r13
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rsi
  __int64 v17; // rax
  unsigned int v18; // edx
  unsigned __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int128 v22; // xmm0
  __int64 result; // rax
  __int128 v25; // [rsp+10h] [rbp-198h] BYREF
  __int128 v26; // [rsp+20h] [rbp-188h]
  __int128 v27; // [rsp+30h] [rbp-178h] BYREF
  __int64 v28; // [rsp+40h] [rbp-168h]
  __int64 v29; // [rsp+48h] [rbp-160h] BYREF
  __int64 v30; // [rsp+50h] [rbp-158h]
  __int64 v31; // [rsp+58h] [rbp-150h]
  __int128 v32; // [rsp+60h] [rbp-148h] BYREF
  __int128 v33; // [rsp+70h] [rbp-138h]
  char v34; // [rsp+80h] [rbp-128h]
  __int64 v35; // [rsp+90h] [rbp-118h] BYREF
  __int64 v36; // [rsp+98h] [rbp-110h]
  __int64 v37; // [rsp+A0h] [rbp-108h]
  __int64 v38; // [rsp+A8h] [rbp-100h] BYREF
  __int64 v39; // [rsp+B0h] [rbp-F8h]
  __int64 v40; // [rsp+B8h] [rbp-F0h]
  __int128 v41; // [rsp+C0h] [rbp-E8h] BYREF
  __int64 v42; // [rsp+D0h] [rbp-D8h]
  __int128 v43; // [rsp+E0h] [rbp-C8h] BYREF
  __int64 v44; // [rsp+F0h] [rbp-B8h]
  __int128 v45; // [rsp+100h] [rbp-A8h] BYREF
  __int64 v46; // [rsp+110h] [rbp-98h]
  _BYTE v47[32]; // [rsp+118h] [rbp-90h] BYREF
  _BYTE v48[32]; // [rsp+138h] [rbp-70h] BYREF
  _BYTE v49[80]; // [rsp+158h] [rbp-50h] BYREF

  *(_QWORD *)&v27 = 0LL;
  *((_QWORD *)&v27 + 1) = 8LL;
  v28 = 0LL;
  v35 = a2;
  v36 = a2 + 24 * a3;
  v37 = 1LL;
  v3 = (char *)&v32 + 8;
  v4 = 1LL;
  v5 = 0;
  while ( 1 )
  {
    if ( !v4 )
    {
      v6 = v35;
      if ( v35 == v36 )
        break;
      v35 += 24LL;
      goto LABEL_7;
    }
    v37 = 0LL;
    v6 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::nth(&v35);
    if ( !v6 )
      break;
LABEL_7:
    if ( (v5 & 1) != 0 )
    {
      uu_od::parse_formats::parse_type_string(&v32, *(_QWORD *)(v6 + 8));
      v25 = *(_OWORD *)v3;
      *(_QWORD *)&v26 = *((_QWORD *)v3 + 2);
      if ( (_DWORD)v32 != 1 )
      {
        v42 = v26;
        v41 = v25;
        <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v47, &v41);
        <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<T,alloc::vec::into_iter::IntoIter<T>>>::spec_extend(
          &v27,
          v47);
        v5 = 0;
        v4 = v37;
        continue;
      }
      v21 = a1;
      *(_QWORD *)(a1 + 24) = v26;
      v22 = v25;
LABEL_43:
      *(_OWORD *)(v21 + 8) = v22;
      *(_QWORD *)v21 = 1LL;
      return core::ptr::drop_in_place<alloc::vec::Vec<uu_od::parse_formats::ParsedFormatterItemInfo>>(
               v27,
               *((_QWORD *)&v27 + 1));
    }
    if ( (unsigned __int8)core::slice::<impl [T]>::starts_with(
                            *(_QWORD *)(v6 + 8),
                            *(_QWORD *)(v6 + 16),
                            asc_1CF30,
                            2LL) )
    {
      v7 = *(_QWORD *)(v6 + 16);
      if ( v7 == 2 )
        break;
      if ( (unsigned __int8)core::slice::<impl [T]>::starts_with(*(_QWORD *)(v6 + 8), v7, aFormat_0, 9LL) )
      {
        v8 = *(_QWORD *)(v6 + 8) + *(_QWORD *)(v6 + 16);
        *((_QWORD *)&v32 + 1) = *(_QWORD *)(v6 + 8);
        *(_QWORD *)&v33 = v8;
        BYTE8(v33) = 0;
        *(_QWORD *)&v32 = 1LL;
        core::iter::traits::iterator::Iterator::collect(&v29, &v32);
        uu_od::parse_formats::parse_type_string(&v32, v30);
        v25 = *(_OWORD *)v3;
        *(_QWORD *)&v26 = *((_QWORD *)v3 + 2);
        if ( (_DWORD)v32 == 1 )
        {
          *(_QWORD *)(a1 + 24) = v26;
          *(_OWORD *)(a1 + 8) = v25;
          *(_QWORD *)a1 = 1LL;
          core::ptr::drop_in_place<alloc::string::String>(&v29);
          return core::ptr::drop_in_place<alloc::vec::Vec<uu_od::parse_formats::ParsedFormatterItemInfo>>(
                   v27,
                   *((_QWORD *)&v27 + 1));
        }
        v44 = v26;
        v43 = v25;
        <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v48, &v43);
        <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<T,alloc::vec::into_iter::IntoIter<T>>>::spec_extend(
          &v27,
          v48);
        core::ptr::drop_in_place<alloc::string::String>(&v29);
      }
      v5 = (unsigned __int8)v5;
      if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                              *(_QWORD *)(v6 + 8),
                              *(_QWORD *)(v6 + 16),
                              aFormat,
                              8LL) )
        v5 = 1;
      v4 = v37;
    }
    else
    {
      v9 = v3;
      v10 = *(_QWORD *)(v6 + 8);
      v11 = *(_QWORD *)(v6 + 16);
      LODWORD(v32) = 0;
      v12 = core::char::methods::encode_utf8_raw(45LL, &v32);
      v13 = v10;
      v3 = v9;
      if ( !(unsigned __int8)core::slice::<impl [T]>::starts_with(v13, v11, v12, 1LL) )
        goto LABEL_3;
      v14 = *(_QWORD *)(v6 + 8);
      v15 = v14 + *(_QWORD *)(v6 + 16);
      v38 = 0LL;
      v39 = 1LL;
      v40 = 0LL;
      v29 = v14;
      v30 = v15;
      v31 = 1LL;
      v16 = 1LL;
      while ( 1 )
      {
        if ( v16 )
        {
          v31 = 0LL;
          if ( <core::str::iter::Chars as core::iter::traits::iterator::Iterator>::advance_by(&v29) )
            break;
        }
        LODWORD(v17) = core::str::validations::next_code_point(&v29);
        if ( (v17 & 1) == 0 || v18 == 1114112 )
          break;
        if ( (v5 & 1) != 0 )
        {
          v17 = alloc::string::String::push(&v38, v18);
          LOBYTE(v17) = v5;
          goto LABEL_21;
        }
        v19 = v18 - 65;
        if ( (unsigned int)v19 <= 0x36 )
        {
          LOBYTE(v17) = 1;
          if ( v19 == 51 )
            goto LABEL_21;
          v20 = 0x40020000042001LL;
          if ( _bittest64(&v20, v19) )
            break;
        }
        uu_od::parse_formats::od_argument_traditional_format(&v25, v18);
        if ( (_DWORD)v25 != 3 )
        {
          v33 = v26;
          v32 = v25;
          v34 = 0;
          alloc::vec::Vec<T,A>::push(&v27, &v32, &off_1025D8);
        }
        LODWORD(v17) = v5;
LABEL_21:
        v16 = v31;
        v5 = v17;
      }
      if ( !v40 )
        goto LABEL_2;
      uu_od::parse_formats::parse_type_string(&v32, v39);
      v25 = *(_OWORD *)v9;
      *(_QWORD *)&v26 = *((_QWORD *)v9 + 2);
      if ( (_DWORD)v32 == 1 )
      {
        *(_QWORD *)(a1 + 24) = v26;
        *(_OWORD *)(a1 + 8) = v25;
        *(_QWORD *)a1 = 1LL;
        core::ptr::drop_in_place<alloc::string::String>(&v38);
        return core::ptr::drop_in_place<alloc::vec::Vec<uu_od::parse_formats::ParsedFormatterItemInfo>>(
                 v27,
                 *((_QWORD *)&v27 + 1));
      }
      v46 = v26;
      v45 = v25;
      <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v49, &v45);
      <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<T,alloc::vec::into_iter::IntoIter<T>>>::spec_extend(
        &v27,
        v49);
      v5 = 0;
LABEL_2:
      core::ptr::drop_in_place<alloc::string::String>(&v38);
LABEL_3:
      v4 = v37;
    }
  }
  if ( (v5 & 1) != 0 )
  {
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v32, aMissingFormatS, 52LL);
    v21 = a1;
    *(_QWORD *)(a1 + 24) = v33;
    v22 = v32;
    goto LABEL_43;
  }
  if ( !v28 )
  {
    v33 = xmmword_103B88;
    v32 = uu_od::prn_int::FORMAT_ITEM_OCT16;
    v34 = 0;
    alloc::vec::Vec<T,A>::push(&v27, &v32, &off_1025F0);
  }
  result = v28;
  *(_QWORD *)(a1 + 24) = v28;
  *(_OWORD *)(a1 + 8) = v27;
  *(_QWORD *)a1 = 0LL;
  return result;
}