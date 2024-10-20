__int64 __fastcall uu_tail::paths::Input::from(__int64 a1, __int64 a2)
{
  _BYTE *v2; // r14
  __int64 v3; // r12
  __int64 v4; // rcx
  size_t v5; // r14
  void *v6; // rax
  void *v7; // r13
  const void *v8; // r12
  __int64 v9; // rbp
  __int64 v10; // rax
  __int128 v12; // [rsp+8h] [rbp-60h] BYREF
  __int64 v13; // [rsp+18h] [rbp-50h]
  _QWORD v14[2]; // [rsp+20h] [rbp-48h] BYREF
  size_t n; // [rsp+30h] [rbp-38h]

  v2 = *(_BYTE **)(a2 + 8);
  v3 = *(_QWORD *)(a2 + 16);
  if ( v3 == 1 && *v2 == 45 )
  {
    *(_QWORD *)&v12 = 0x8000000000000000LL;
LABEL_5:
    v5 = 14LL;
    v6 = (void *)_rust_alloc(14LL, 1LL);
    if ( !v6 )
      alloc::raw_vec::handle_error(1LL, 14LL);
    v7 = v6;
    qmemcpy(v6, "standard input", 14);
    goto LABEL_14;
  }
  std::sys::os_str::bytes::Slice::to_owned(&v12, *(_QWORD *)(a2 + 8), v3);
  if ( (_QWORD)v12 == 0x8000000000000000LL )
    goto LABEL_5;
  std::sys::os_str::bytes::Slice::to_string_lossy(v14, v2, v3, v4);
  v8 = (const void *)v14[1];
  v5 = n;
  if ( n )
  {
    if ( (n & 0x8000000000000000LL) != 0LL )
    {
      v9 = 0LL;
    }
    else
    {
      v9 = 1LL;
      v10 = _rust_alloc(n, 1LL);
      if ( v10 )
      {
        v7 = (void *)v10;
        goto LABEL_12;
      }
    }
    alloc::raw_vec::handle_error(v9, v5);
  }
  v7 = &dword_0 + 1;
LABEL_12:
  memcpy(v7, v8, v5);
  if ( 2LL * v14[0] )
    _rust_dealloc(v8, v14[0], 1LL);
LABEL_14:
  *(_QWORD *)(a1 + 40) = v13;
  *(_OWORD *)(a1 + 24) = v12;
  *(_QWORD *)a1 = v5;
  *(_QWORD *)(a1 + 8) = v7;
  *(_QWORD *)(a1 + 16) = v5;
  return a1;
}
