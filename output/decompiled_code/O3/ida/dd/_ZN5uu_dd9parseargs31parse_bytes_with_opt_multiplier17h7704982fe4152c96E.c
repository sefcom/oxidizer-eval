__int64 __fastcall uu_dd::parseargs::parse_bytes_with_opt_multiplier(__int64 a1, const void *a2, __int64 a3)
{
  __int64 v3; // r12
  __int64 v4; // r14
  __int64 result; // rax
  __int64 v6; // rsi
  __int64 v7; // rdi
  __int64 v8; // r13
  __int64 v9; // r14
  unsigned __int64 v10; // rbp
  _BYTE *v11; // rbx
  size_t v12; // r15
  char *v13; // rax
  unsigned __int64 v14; // rcx
  _QWORD *v15; // r13
  __int64 v16; // r15
  __int64 v17; // r14
  __int64 v18; // rax
  void *v19; // rbx
  __int64 v20; // [rsp+8h] [rbp-140h]
  __int64 v21; // [rsp+18h] [rbp-130h]
  char *v22; // [rsp+28h] [rbp-120h] BYREF
  unsigned __int64 v23; // [rsp+30h] [rbp-118h]
  __int128 v24; // [rsp+38h] [rbp-110h]
  __int64 v25; // [rsp+48h] [rbp-100h]
  __int64 v26; // [rsp+58h] [rbp-F0h] BYREF
  __int64 v27; // [rsp+60h] [rbp-E8h]
  __int64 v28; // [rsp+68h] [rbp-E0h]
  __int128 *v29; // [rsp+70h] [rbp-D8h] BYREF
  const char *v30; // [rsp+78h] [rbp-D0h]
  __int64 v31; // [rsp+80h] [rbp-C8h]
  char v32; // [rsp+88h] [rbp-C0h]
  __int128 v33; // [rsp+90h] [rbp-B8h] BYREF
  __int64 v34; // [rsp+A0h] [rbp-A8h]
  char v35; // [rsp+A8h] [rbp-A0h]
  _QWORD v36[4]; // [rsp+B0h] [rbp-98h] BYREF
  _QWORD v37[7]; // [rsp+D0h] [rbp-78h] BYREF
  char v38; // [rsp+108h] [rbp-40h]
  __int16 v39; // [rsp+110h] [rbp-38h]

  v3 = a3;
  v37[0] = 0LL;
  v37[1] = a3;
  v37[2] = a2;
  v37[3] = a3;
  v37[4] = 0LL;
  v37[5] = a3;
  v37[6] = 0x7800000078LL;
  v38 = 1;
  v39 = 1;
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v26, v37);
  if ( v28 == 1 )
  {
    v4 = v27;
    result = uu_dd::parseargs::parse_bytes_no_x((_QWORD *)a1, a2, v3, *(_BYTE **)v27, *(_QWORD *)(v27 + 8));
    if ( !v26 )
      return result;
    v6 = 16 * v26;
    v7 = v4;
    return _rust_dealloc(v7, v6, 8LL);
  }
  v21 = v26;
  v8 = v27;
  v20 = v27;
  if ( v28 )
  {
    v9 = v27 + 16 * v28;
    v10 = 1LL;
    while ( 1 )
    {
      v11 = *(_BYTE **)v8;
      v12 = *(_QWORD *)(v8 + 8);
      if ( v12 == 1 && *v11 == 48 )
      {
        if ( uucore::UTIL_NAME != 2 )
          once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
        v33 = xmmword_11BE68;
        v29 = &v33;
        v30 = (const char *)<&T as core::fmt::Display>::fmt;
        v22 = (char *)&unk_115AC0;
        v23 = 2LL;
        v25 = 0LL;
        *(_QWORD *)&v24 = &v29;
        *((_QWORD *)&v24 + 1) = 1LL;
        std::io::stdio::_eprint(&v22);
        v29 = 0LL;
        v30 = a0x_1;
        v31 = 2LL;
        v32 = 1;
        *(_QWORD *)&v33 = 0LL;
        *((_QWORD *)&v33 + 1) = a00x;
        v34 = 3LL;
        v35 = 1;
        v36[0] = &v29;
        v36[1] = <os_display::Quoted as core::fmt::Display>::fmt;
        v36[2] = &v33;
        v36[3] = <os_display::Quoted as core::fmt::Display>::fmt;
        v22 = (char *)&unk_115AE0;
        v23 = 3LL;
        v25 = 0LL;
        *(_QWORD *)&v24 = v36;
        *((_QWORD *)&v24 + 1) = 2LL;
        std::io::stdio::_eprint(&v22);
      }
      uu_dd::parseargs::parse_bytes_no_x(&v22, a2, v3, v11, v12);
      v13 = v22;
      v14 = v23;
      if ( v22 != &byte_9[5] )
      {
        v15 = (_QWORD *)a1;
        *(_OWORD *)(a1 + 16) = v24;
        *(_QWORD *)a1 = v13;
        result = 8LL;
        v3 = v14;
        v16 = v20;
        goto LABEL_26;
      }
      if ( !is_mul_ok(v23, v10) )
        break;
      v10 *= v23;
      v8 += 16LL;
      if ( v8 == v9 )
        goto LABEL_16;
    }
    if ( v3 )
    {
      if ( v3 < 0 )
      {
        v17 = 0LL;
      }
      else
      {
        v17 = 1LL;
        v18 = _rust_alloc(v3, 1LL);
        v16 = v20;
        v15 = (_QWORD *)a1;
        if ( v18 )
        {
          v19 = (void *)v18;
          goto LABEL_25;
        }
      }
      alloc::raw_vec::handle_error(v17, v3);
    }
    v19 = &dword_0 + 1;
    v16 = v20;
    v15 = (_QWORD *)a1;
LABEL_25:
    memcpy(v19, a2, v3);
    *v15 = 13LL;
    v15[1] = v3;
    v15[2] = v19;
    result = 24LL;
LABEL_26:
    *(_QWORD *)((char *)v15 + result) = v3;
    if ( v21 )
    {
      v6 = 16 * v21;
      v7 = v16;
      return _rust_dealloc(v7, v6, 8LL);
    }
  }
  else
  {
    v10 = 1LL;
LABEL_16:
    if ( v21 )
      _rust_dealloc(v20, 16 * v21, 8LL);
    result = a1;
    *(_QWORD *)(a1 + 8) = v10;
    *(_QWORD *)a1 = 14LL;
  }
  return result;
}
