__int64 __fastcall uu_cp::parse_path_args(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rbp
  __int64 v5; // rcx
  __int64 v6; // r15
  _BYTE *v7; // r12
  signed __int64 v8; // r15
  __int64 v9; // r12
  void *v10; // rax
  _QWORD *v11; // rbx
  __int64 v12; // rsi
  __int64 v13; // rcx
  const void *v14; // r13
  __int64 v15; // rbx
  void *v16; // rax
  __int64 v17; // r13
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // r12
  __int64 v21; // rsi
  signed __int64 v24; // [rsp+8h] [rbp-D0h]
  void *v25; // [rsp+10h] [rbp-C8h]
  signed __int64 v26; // [rsp+18h] [rbp-C0h]
  __int128 v27; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v28; // [rsp+30h] [rbp-A8h]
  char **v29; // [rsp+38h] [rbp-A0h] BYREF
  __int64 v30; // [rsp+40h] [rbp-98h]
  __int128 *v31; // [rsp+48h] [rbp-90h]
  __int64 v32; // [rsp+50h] [rbp-88h]
  __int64 v33; // [rsp+58h] [rbp-80h]
  _BYTE v34[24]; // [rsp+78h] [rbp-60h] BYREF
  _BYTE v35[72]; // [rsp+90h] [rbp-48h] BYREF

  v4 = *(_QWORD *)(a2 + 16);
  if ( v4 )
  {
    v5 = *(_QWORD *)(a3 + 24);
    if ( v4 == 1 && v5 == 0x8000000000000000LL )
    {
      v6 = *(_QWORD *)(a2 + 8);
      *(_QWORD *)&v27 = v6;
      *((_QWORD *)&v27 + 1) = <std::sys::os_str::bytes::Buf as core::fmt::Debug>::fmt;
      v29 = &off_1552E0;
      v30 = 1LL;
      v33 = 0LL;
      v31 = &v27;
      v32 = 1LL;
      v7 = v34;
      alloc::fmt::format::format_inner(v34, &v29);
      goto LABEL_13;
    }
    if ( v4 >= 3 && *(_BYTE *)(a3 + 66) && v5 == 0x8000000000000000LL )
    {
      v6 = *(_QWORD *)(a2 + 8);
      *(_QWORD *)&v27 = v6 + 48;
      *((_QWORD *)&v27 + 1) = <std::sys::os_str::bytes::Buf as core::fmt::Debug>::fmt;
      v29 = &off_155308;
      v30 = 1LL;
      v33 = 0LL;
      v31 = &v27;
      v32 = 1LL;
      v7 = v35;
      alloc::fmt::format::format_inner(v35, &v29);
LABEL_13:
      *(_QWORD *)(a1 + 24) = *((_QWORD *)v7 + 2);
      *(_OWORD *)(a1 + 8) = *(_OWORD *)v7;
      *(_QWORD *)a1 = 4LL;
      v11 = (_QWORD *)(v6 + 8);
      do
      {
        v12 = *(v11 - 1);
        if ( v12 )
          _rust_dealloc(*v11, v12, 1LL);
        v11 += 3;
        --v4;
      }
      while ( v4 );
      goto LABEL_7;
    }
    if ( v5 == 0x8000000000000000LL )
    {
      *(_QWORD *)(a2 + 16) = --v4;
      v13 = *(_QWORD *)(a2 + 8);
      v24 = *(_QWORD *)(v13 + 24 * v4);
      if ( v24 == 0x8000000000000000LL )
        core::option::unwrap_failed(&off_1552F0);
      v25 = *(void **)(v13 + 24 * v4 + 8);
      v26 = *(_QWORD *)(v13 + 24 * v4 + 16);
      if ( !*(_BYTE *)(a3 + 69) )
        goto LABEL_32;
      goto LABEL_27;
    }
    v14 = *(const void **)(a3 + 32);
    v8 = *(_QWORD *)(a3 + 40);
    if ( v8 )
    {
      if ( v8 < 0 )
      {
        v9 = 0LL;
        goto LABEL_36;
      }
      v15 = a3;
      v9 = 1LL;
      v16 = (void *)_rust_alloc(*(_QWORD *)(a3 + 40), 1LL);
      if ( !v16 )
LABEL_36:
        alloc::raw_vec::handle_error(v9, v8);
    }
    else
    {
      v15 = a3;
      v16 = &dword_0 + 1;
    }
    v25 = v16;
    memcpy(v16, v14, v8);
    v26 = v8;
    v24 = v8;
    if ( !*(_BYTE *)(v15 + 69) )
    {
LABEL_32:
      *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 16);
      *(_OWORD *)(a1 + 8) = *(_OWORD *)a2;
      *(_QWORD *)(a1 + 32) = v24;
      *(_QWORD *)(a1 + 40) = v25;
      *(_QWORD *)(a1 + 48) = v26;
      *(_QWORD *)a1 = 13LL;
      return a1;
    }
LABEL_27:
    if ( v4 )
    {
      v17 = *(_QWORD *)(a2 + 8);
      v18 = 0LL;
      do
      {
        std::path::Path::components(&v29, *(_QWORD *)(v17 + v18 + 8), *(_QWORD *)(v17 + v18 + 16));
        v19 = std::path::Components::as_path(&v29);
        std::path::Path::to_path_buf(&v27, v19);
        v20 = v18 + v17;
        v21 = *(_QWORD *)(v18 + v17);
        if ( v21 )
          _rust_dealloc(*(_QWORD *)(v20 + 8), v21, 1LL);
        *(_QWORD *)(v20 + 16) = v28;
        *(_OWORD *)v20 = v27;
        v18 += 24LL;
      }
      while ( 24 * v4 != v18 );
    }
    goto LABEL_32;
  }
  v8 = 20LL;
  v9 = 1LL;
  v10 = (void *)_rust_alloc(20LL, 1LL);
  if ( !v10 )
    goto LABEL_36;
  qmemcpy(v10, "missing file operand", 20);
  *(_QWORD *)a1 = 4LL;
  *(_QWORD *)(a1 + 8) = 20LL;
  *(_QWORD *)(a1 + 16) = v10;
  *(_QWORD *)(a1 + 24) = 20LL;
  v6 = *(_QWORD *)(a2 + 8);
LABEL_7:
  if ( *(_QWORD *)a2 )
    _rust_dealloc(v6, 24LL * *(_QWORD *)a2, 8LL);
  return a1;
}
