__int64 __fastcall uu_split::strategy::NumberType::from(__int64 *a1, __int64 a2, __int64 a3)
{
  _QWORD *v4; // r14
  unsigned __int64 v5; // rax
  __int64 v6; // r13
  __int64 v7; // rbp
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r13
  __int64 v11; // rbp
  __int64 v12; // rax
  __int64 v13; // rdx
  unsigned __int64 v14; // r15
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  __int128 v19; // [rsp+0h] [rbp-108h] BYREF
  __int128 v20; // [rsp+10h] [rbp-F8h]
  __int128 v21; // [rsp+20h] [rbp-E8h] BYREF
  __int128 v22; // [rsp+30h] [rbp-D8h]
  __int128 v23; // [rsp+40h] [rbp-C8h]
  __int64 v24; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int64 v25; // [rsp+60h] [rbp-A8h]
  __int128 v26; // [rsp+68h] [rbp-A0h]
  char v27[8]; // [rsp+78h] [rbp-90h] BYREF
  _QWORD *v28; // [rsp+80h] [rbp-88h]
  __int64 v29; // [rsp+88h] [rbp-80h]
  _QWORD v30[2]; // [rsp+90h] [rbp-78h] BYREF
  char v31[48]; // [rsp+A0h] [rbp-68h] BYREF
  __int16 v32; // [rsp+D0h] [rbp-38h]

  <char as core::str::pattern::Pattern>::into_searcher(v31);
  v30[0] = 0LL;
  v30[1] = a3;
  v32 = 1;
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(v27, v30);
  v4 = v28;
  if ( v29 == 3 )
  {
    if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*v28, v28[1], asc_220A0, 1LL) )
    {
      if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*v4, v4[1], aR, 1LL) )
        goto LABEL_24;
      uucore::parser::parse_size::parse_size_u64(&v21, v4[4], v4[5]);
      if ( (_DWORD)v21 == 3 )
      {
        v14 = *((_QWORD *)&v21 + 1);
      }
      else
      {
        v20 = v22;
        v19 = v21;
        uu_split::strategy::NumberType::from::{{closure}}(&v24, v4 + 4, &v19);
        v17 = v24;
        v14 = v25;
        v23 = v26;
        if ( v24 != 2 )
          goto LABEL_43;
      }
      uucore::parser::parse_size::parse_size_u64(&v21, v4[2], v4[3]);
      v4 += 2;
      if ( (_DWORD)v21 == 3 )
      {
        v5 = *((_QWORD *)&v21 + 1);
      }
      else
      {
        v20 = v22;
        v19 = v21;
        uu_split::strategy::NumberType::from::{{closure}}(&v24, v4, &v19);
        v15 = v24;
        v5 = v25;
        v23 = v26;
        if ( v24 != 2 )
          goto LABEL_56;
      }
      if ( v5 - 1 < v14 )
      {
        a1[1] = 5LL;
        goto LABEL_52;
      }
      goto LABEL_57;
    }
    uucore::parser::parse_size::parse_size_u64(&v21, v4[4], v4[5]);
    if ( (_DWORD)v21 == 3 )
    {
      v14 = *((_QWORD *)&v21 + 1);
    }
    else
    {
      v20 = v22;
      v19 = v21;
      uu_split::strategy::NumberType::from::{{closure}}(&v24, v4 + 4, &v19);
      v17 = v24;
      v14 = v25;
      v23 = v26;
      if ( v24 != 2 )
        goto LABEL_43;
    }
    uucore::parser::parse_size::parse_size_u64(&v21, v4[2], v4[3]);
    v4 += 2;
    if ( (_DWORD)v21 == 3 )
    {
      v5 = *((_QWORD *)&v21 + 1);
    }
    else
    {
      v20 = v22;
      v19 = v21;
      uu_split::strategy::NumberType::from::{{closure}}(&v24, v4, &v19);
      v15 = v24;
      v5 = v25;
      v23 = v26;
      if ( v24 != 2 )
        goto LABEL_56;
    }
    if ( v5 - 1 < v14 )
    {
      a1[1] = 3LL;
LABEL_52:
      a1[2] = v5;
      a1[3] = v14;
      goto LABEL_53;
    }
LABEL_57:
    <T as alloc::string::ToString>::to_string(&v19, v4);
    a1[3] = v20;
    *(_OWORD *)(a1 + 1) = v19;
    *a1 = 1LL;
    return core::ptr::drop_in_place<alloc::vec::Vec<&str>>(v27);
  }
  if ( v29 != 2 )
  {
    if ( v29 != 1 )
      goto LABEL_24;
    uucore::parser::parse_size::parse_size_u64(&v21, *v28, v28[1]);
    if ( (_DWORD)v21 == 3 )
    {
      v5 = *((_QWORD *)&v21 + 1);
      goto LABEL_18;
    }
    v20 = v22;
    v19 = v21;
    uu_split::strategy::NumberType::from::{{closure}}(&v24, v4, &v19);
    v15 = v24;
    v5 = v25;
    v23 = v26;
    if ( v24 == 2 )
    {
LABEL_18:
      if ( v5 )
      {
        a1[1] = 0LL;
        goto LABEL_20;
      }
LABEL_24:
      <T as alloc::slice::hack::ConvertVec>::to_vec(&v19, a2, a3);
      a1[3] = v20;
      *(_OWORD *)(a1 + 1) = v19;
      v16 = 0LL;
LABEL_54:
      *a1 = v16;
      return core::ptr::drop_in_place<alloc::vec::Vec<&str>>(v27);
    }
LABEL_56:
    *((_OWORD *)a1 + 1) = v23;
    *a1 = v15;
    a1[1] = v5;
    return core::ptr::drop_in_place<alloc::vec::Vec<&str>>(v27);
  }
  v6 = *v28;
  v7 = v28[1];
  LODWORD(v19) = 0;
  v8 = core::char::methods::encode_utf8_raw(108LL, &v19);
  if ( (unsigned __int8)core::slice::<impl [T]>::starts_with(v6, v7, v8, v9)
    || (v10 = *v4,
        v11 = v4[1],
        LODWORD(v19) = 0,
        v12 = core::char::methods::encode_utf8_raw(114LL, &v19),
        (unsigned __int8)core::slice::<impl [T]>::starts_with(v10, v11, v12, v13)) )
  {
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*v4, v4[1], asc_220A0, 1LL) )
    {
      uucore::parser::parse_size::parse_size_u64(&v21, v4[2], v4[3]);
      if ( (_DWORD)v21 == 3 )
      {
        v5 = *((_QWORD *)&v21 + 1);
        a1[1] = 2LL;
LABEL_20:
        a1[2] = v5;
LABEL_53:
        v16 = 2LL;
        goto LABEL_54;
      }
      v20 = v22;
      v19 = v21;
      ((void (__fastcall *)(__int64 *, _QWORD *, __int128 *))uu_split::strategy::NumberType::from::{{closure}})(
        &v24,
        v4 + 2,
        &v19);
      v15 = v24;
      v5 = v25;
      v23 = v26;
      if ( v24 == 2 )
      {
        a1[1] = 2LL;
        goto LABEL_20;
      }
    }
    else
    {
      if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*v4, v4[1], aR, 1LL) )
        goto LABEL_24;
      uucore::parser::parse_size::parse_size_u64(&v21, v4[2], v4[3]);
      if ( (_DWORD)v21 == 3 )
      {
        v5 = *((_QWORD *)&v21 + 1);
        a1[1] = 4LL;
        goto LABEL_20;
      }
      v20 = v22;
      v19 = v21;
      ((void (__fastcall *)(__int64 *, _QWORD *, __int128 *))uu_split::strategy::NumberType::from::{{closure}})(
        &v24,
        v4 + 2,
        &v19);
      v15 = v24;
      v5 = v25;
      v23 = v26;
      if ( v24 == 2 )
      {
        a1[1] = 4LL;
        goto LABEL_20;
      }
    }
    goto LABEL_56;
  }
  uucore::parser::parse_size::parse_size_u64(&v21, v4[2], v4[3]);
  if ( (_DWORD)v21 == 3 )
  {
    v14 = *((_QWORD *)&v21 + 1);
    goto LABEL_38;
  }
  v20 = v22;
  v19 = v21;
  uu_split::strategy::NumberType::from::{{closure}}(&v24, v4 + 2, &v19);
  v17 = v24;
  v14 = v25;
  v23 = v26;
  if ( v24 == 2 )
  {
LABEL_38:
    uucore::parser::parse_size::parse_size_u64(&v21, *v4, v4[1]);
    if ( (_DWORD)v21 == 3 )
    {
      v5 = *((_QWORD *)&v21 + 1);
    }
    else
    {
      v20 = v22;
      v19 = v21;
      uu_split::strategy::NumberType::from::{{closure}}(&v24, v4, &v19);
      v15 = v24;
      v5 = v25;
      v23 = v26;
      if ( v24 != 2 )
        goto LABEL_56;
    }
    if ( v5 - 1 < v14 )
    {
      a1[1] = 1LL;
      goto LABEL_52;
    }
    goto LABEL_57;
  }
LABEL_43:
  *((_OWORD *)a1 + 1) = v23;
  *a1 = v17;
  a1[1] = v14;
  return core::ptr::drop_in_place<alloc::vec::Vec<&str>>(v27);
}
