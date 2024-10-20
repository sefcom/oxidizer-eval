unsigned __int64 __fastcall uu_join::parse_separator(__int64 a1, unsigned __int8 *a2, __int64 a3)
{
  unsigned __int64 result; // rax
  void *v4; // rax
  void *v5; // rbx
  __int64 v6; // rax
  unsigned __int8 *v7; // rcx
  int v8; // eax
  unsigned __int8 *v9; // r8
  int v10; // r9d
  int v11; // r11d
  int v12; // r10d
  int v13; // ecx
  int v14; // edx
  int v15; // r9d
  int v16; // esi
  __int128 v17; // xmm0
  char **v18; // [rsp+0h] [rbp-88h] BYREF
  unsigned __int8 *v19; // [rsp+8h] [rbp-80h]
  _QWORD *v20; // [rsp+10h] [rbp-78h]
  __int64 v21; // [rsp+18h] [rbp-70h]
  __int64 v22; // [rsp+20h] [rbp-68h]
  _QWORD v23[2]; // [rsp+30h] [rbp-58h] BYREF
  _QWORD v24[2]; // [rsp+40h] [rbp-48h] BYREF
  __int128 v25; // [rsp+50h] [rbp-38h] BYREF
  __int128 v26; // [rsp+60h] [rbp-28h]

  if ( a3 == 1 )
  {
    result = *a2;
    *(_QWORD *)a1 = 0x8000000000000000LL;
    *(_BYTE *)(a1 + 8) = result;
    return result;
  }
  if ( !a3 )
  {
    result = 0x8000000000000002LL;
    *(_QWORD *)a1 = 0x8000000000000002LL;
    return result;
  }
  std::sys::os_str::bytes::Slice::to_str(&v18);
  if ( v18 )
  {
    v4 = (void *)_rust_alloc(24LL, 1LL);
    if ( !v4 )
      alloc::raw_vec::handle_error(1LL, 24LL);
    v5 = v4;
    qmemcpy(v4, "non-UTF-8 multi-byte tab", 24);
    v6 = _rust_alloc(32LL, 8LL);
    if ( !v6 )
      alloc::alloc::handle_alloc_error(8LL, 32LL);
    *(_QWORD *)v6 = 24LL;
    *(_QWORD *)(v6 + 8) = v5;
    *(_QWORD *)(v6 + 16) = 24LL;
    *(_DWORD *)(v6 + 24) = 1;
LABEL_9:
    *(_QWORD *)(a1 + 8) = v6;
    *(_QWORD *)(a1 + 16) = &off_FDB88;
    result = 0x8000000000000004LL;
    *(_QWORD *)a1 = 0x8000000000000004LL;
    return result;
  }
  v23[0] = v19;
  v23[1] = v20;
  if ( !v20 )
    core::option::expect_failed(aValidStringWit, 35LL, &off_FDD48);
  v7 = (unsigned __int8 *)v20 + (_QWORD)v19;
  v8 = *v19;
  if ( (v8 & 0x80u) != 0 )
  {
    v10 = v8 & 0x1F;
    v11 = v19[1] & 0x3F;
    if ( (unsigned __int8)v8 <= 0xDFu )
    {
      v9 = v19 + 2;
      v8 = v11 | (v10 << 6);
      if ( v19 + 2 != v7 )
        goto LABEL_19;
    }
    else
    {
      v12 = (v11 << 6) | v19[2] & 0x3F;
      if ( (unsigned __int8)v8 >= 0xF0u )
      {
        v9 = v19 + 4;
        v8 = ((v8 & 7) << 18) | (v12 << 6) | v19[3] & 0x3F;
        if ( v19 + 4 == v7 )
          return <alloc::vec::Vec<u8> as core::convert::From<&str>>::from(a1);
        goto LABEL_19;
      }
      v9 = v19 + 3;
      v8 = (v10 << 12) | v12;
      if ( v19 + 3 != v7 )
        goto LABEL_19;
    }
    return <alloc::vec::Vec<u8> as core::convert::From<&str>>::from(a1);
  }
  v9 = v19 + 1;
  if ( v19 + 1 == v7 )
    return <alloc::vec::Vec<u8> as core::convert::From<&str>>::from(a1);
LABEL_19:
  v13 = *v9;
  if ( (v13 & 0x80u) != 0 )
  {
    v14 = v13 & 0x1F;
    v15 = v9[1] & 0x3F;
    if ( (unsigned __int8)v13 <= 0xDFu )
    {
      v13 = v15 | (v14 << 6);
    }
    else
    {
      v16 = (v15 << 6) | v9[2] & 0x3F;
      if ( (unsigned __int8)v13 < 0xF0u )
        v13 = (v14 << 12) | v16;
      else
        v13 = ((v13 & 7) << 18) | (v16 << 6) | v9[3] & 0x3F;
    }
  }
  if ( v8 != 92 || v13 != 48 )
  {
    v24[0] = v23;
    v24[1] = <&T as core::fmt::Display>::fmt;
    v18 = &off_FDD60;
    v19 = (_BYTE *)(&dword_0 + 1);
    v22 = 0LL;
    v20 = v24;
    v21 = 1LL;
    alloc::fmt::format::format_inner(&v25, &v18);
    DWORD2(v26) = 1;
    v6 = _rust_alloc(32LL, 8LL);
    if ( !v6 )
      alloc::alloc::handle_alloc_error(8LL, 32LL);
    v17 = v25;
    *(_OWORD *)(v6 + 16) = v26;
    *(_OWORD *)v6 = v17;
    goto LABEL_9;
  }
  result = 0x8000000000000000LL;
  *(_QWORD *)a1 = 0x8000000000000000LL;
  *(_BYTE *)(a1 + 8) = 0;
  return result;
}
