__int64 __fastcall uu_split::strategy::NumberType::from(__int64 *a1, __int64 a2, __int64 a3)
{
  _QWORD *v4; // r14
  __int64 v5; // rax
  __int64 v6; // r13
  __int64 v7; // rbp
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r13
  __int64 v11; // rbp
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned __int64 v17; // r15
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  __int64 v23; // rax
  __int128 v25; // [rsp+0h] [rbp-108h] BYREF
  __int128 v26; // [rsp+10h] [rbp-F8h]
  __int128 v27; // [rsp+20h] [rbp-E8h] BYREF
  __int128 v28; // [rsp+30h] [rbp-D8h]
  __int128 v29; // [rsp+40h] [rbp-C8h]
  __int64 v30; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int64 v31; // [rsp+60h] [rbp-A8h]
  __int128 v32; // [rsp+68h] [rbp-A0h]
  char v33[8]; // [rsp+78h] [rbp-90h] BYREF
  _QWORD *v34; // [rsp+80h] [rbp-88h]
  __int64 v35; // [rsp+88h] [rbp-80h]
  _QWORD v36[2]; // [rsp+90h] [rbp-78h] BYREF
  char v37[48]; // [rsp+A0h] [rbp-68h] BYREF
  __int16 v38; // [rsp+D0h] [rbp-38h]

  <char as core::str::pattern::Pattern>::into_searcher(v37);
  v36[0] = 0LL;
  v36[1] = a3;
  v38 = 1;
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(v33, v36);
  v4 = v34;
  if ( v35 == 3 )
  {
    if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*v34, v34[1], asc_220A0, 1LL) )
    {
      if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*v4, v4[1], aR, 1LL) )
        goto LABEL_24;
      uucore::parser::parse_size::parse_size_u64(&v27, v4[4], v4[5]);
      if ( (_DWORD)v27 == 3 )
      {
        v17 = *((_QWORD *)&v27 + 1);
      }
      else
      {
        v26 = v28;
        v25 = v27;
        uu_split::strategy::NumberType::from::{{closure}}(&v30, v4 + 4, &v25);
        v23 = v30;
        v17 = v31;
        v29 = v32;
        if ( v30 != 2 )
          goto LABEL_43;
      }
      uucore::parser::parse_size::parse_size_u64(&v27, v4[2], v4[3]);
      v4 += 2;
      if ( (_DWORD)v27 == 3 )
      {
        v5 = *((_QWORD *)&v27 + 1);
      }
      else
      {
        v26 = v28;
        v25 = v27;
        uu_split::strategy::NumberType::from::{{closure}}(&v30, v4, &v25);
        v18 = v30;
        v5 = v31;
        v29 = v32;
        if ( v30 != 2 )
          goto LABEL_56;
      }
      if ( v5 - 1 < v17 )
      {
        a1[1] = 5LL;
        goto LABEL_52;
      }
      goto LABEL_57;
    }
    uucore::parser::parse_size::parse_size_u64(&v27, v4[4], v4[5]);
    if ( (_DWORD)v27 == 3 )
    {
      v17 = *((_QWORD *)&v27 + 1);
    }
    else
    {
      v26 = v28;
      v25 = v27;
      uu_split::strategy::NumberType::from::{{closure}}(&v30, v4 + 4, &v25);
      v23 = v30;
      v17 = v31;
      v29 = v32;
      if ( v30 != 2 )
        goto LABEL_43;
    }
    uucore::parser::parse_size::parse_size_u64(&v27, v4[2], v4[3]);
    v4 += 2;
    if ( (_DWORD)v27 == 3 )
    {
      v5 = *((_QWORD *)&v27 + 1);
    }
    else
    {
      v26 = v28;
      v25 = v27;
      uu_split::strategy::NumberType::from::{{closure}}(&v30, v4, &v25);
      v18 = v30;
      v5 = v31;
      v29 = v32;
      if ( v30 != 2 )
        goto LABEL_56;
    }
    if ( v5 - 1 < v17 )
    {
      a1[1] = 3LL;
LABEL_52:
      a1[2] = v5;
      a1[3] = v17;
      goto LABEL_53;
    }
LABEL_57:
    <T as alloc::string::ToString>::to_string(&v25, v4);
    a1[3] = v26;
    *(_OWORD *)(a1 + 1) = v25;
    *a1 = 1LL;
    return core::ptr::drop_in_place<alloc::vec::Vec<&str>>(v33);
  }
  if ( v35 != 2 )
  {
    if ( v35 != 1 )
      goto LABEL_24;
    uucore::parser::parse_size::parse_size_u64(&v27, *v34, v34[1]);
    if ( (_DWORD)v27 == 3 )
    {
      v5 = *((_QWORD *)&v27 + 1);
      goto LABEL_18;
    }
    v26 = v28;
    v25 = v27;
    uu_split::strategy::NumberType::from::{{closure}}(&v30, v4, &v25);
    v18 = v30;
    v5 = v31;
    v29 = v32;
    if ( v30 == 2 )
    {
LABEL_18:
      if ( v5 )
      {
        a1[1] = 0LL;
        goto LABEL_20;
      }
LABEL_24:
      <T as alloc::slice::hack::ConvertVec>::to_vec(&v25, a2, a3);
      a1[3] = v26;
      *(_OWORD *)(a1 + 1) = v25;
      v22 = 0LL;
LABEL_54:
      *a1 = v22;
      return core::ptr::drop_in_place<alloc::vec::Vec<&str>>(v33);
    }
LABEL_56:
    *((_OWORD *)a1 + 1) = v29;
    *a1 = v18;
    a1[1] = v5;
    return core::ptr::drop_in_place<alloc::vec::Vec<&str>>(v33);
  }
  v6 = *v34;
  v7 = v34[1];
  LODWORD(v25) = 0;
  v8 = core::char::methods::encode_utf8_raw(108LL, &v25);
  if ( (unsigned __int8)core::slice::<impl [T]>::starts_with(v6, v7, v8, v9)
    || (v10 = *v4,
        v11 = v4[1],
        LODWORD(v25) = 0,
        v12 = core::char::methods::encode_utf8_raw(114LL, &v25),
        (unsigned __int8)core::slice::<impl [T]>::starts_with(v10, v11, v12, v13)) )
  {
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*v4, v4[1], asc_220A0, 1LL) )
    {
      uucore::parser::parse_size::parse_size_u64(&v27, v4[2], v4[3]);
      if ( (_DWORD)v27 == 3 )
      {
        v5 = *((_QWORD *)&v27 + 1);
        a1[1] = 2LL;
LABEL_20:
        a1[2] = v5;
LABEL_53:
        v22 = 2LL;
        goto LABEL_54;
      }
      v26 = v28;
      v25 = v27;
      ((void (__fastcall *)(__int64 *, _QWORD *, __int128 *, __int64, __int64, __int64))uu_split::strategy::NumberType::from::{{closure}})(
        &v30,
        v4 + 2,
        &v25,
        v14,
        v15,
        v16);
      v18 = v30;
      v5 = v31;
      v29 = v32;
      if ( v30 == 2 )
      {
        a1[1] = 2LL;
        goto LABEL_20;
      }
    }
    else
    {
      if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*v4, v4[1], aR, 1LL) )
        goto LABEL_24;
      uucore::parser::parse_size::parse_size_u64(&v27, v4[2], v4[3]);
      if ( (_DWORD)v27 == 3 )
      {
        v5 = *((_QWORD *)&v27 + 1);
        a1[1] = 4LL;
        goto LABEL_20;
      }
      v26 = v28;
      v25 = v27;
      ((void (__fastcall *)(__int64 *, _QWORD *, __int128 *, __int64, __int64, __int64))uu_split::strategy::NumberType::from::{{closure}})(
        &v30,
        v4 + 2,
        &v25,
        v19,
        v20,
        v21);
      v18 = v30;
      v5 = v31;
      v29 = v32;
      if ( v30 == 2 )
      {
        a1[1] = 4LL;
        goto LABEL_20;
      }
    }
    goto LABEL_56;
  }
  uucore::parser::parse_size::parse_size_u64(&v27, v4[2], v4[3]);
  if ( (_DWORD)v27 == 3 )
  {
    v17 = *((_QWORD *)&v27 + 1);
    goto LABEL_38;
  }
  v26 = v28;
  v25 = v27;
  uu_split::strategy::NumberType::from::{{closure}}(&v30, v4 + 2, &v25);
  v23 = v30;
  v17 = v31;
  v29 = v32;
  if ( v30 == 2 )
  {
LABEL_38:
    uucore::parser::parse_size::parse_size_u64(&v27, *v4, v4[1]);
    if ( (_DWORD)v27 == 3 )
    {
      v5 = *((_QWORD *)&v27 + 1);
    }
    else
    {
      v26 = v28;
      v25 = v27;
      uu_split::strategy::NumberType::from::{{closure}}(&v30, v4, &v25);
      v18 = v30;
      v5 = v31;
      v29 = v32;
      if ( v30 != 2 )
        goto LABEL_56;
    }
    if ( v5 - 1 < v17 )
    {
      a1[1] = 1LL;
      goto LABEL_52;
    }
    goto LABEL_57;
  }
LABEL_43:
  *((_OWORD *)a1 + 1) = v29;
  *a1 = v23;
  a1[1] = v17;
  return core::ptr::drop_in_place<alloc::vec::Vec<&str>>(v33);
}
