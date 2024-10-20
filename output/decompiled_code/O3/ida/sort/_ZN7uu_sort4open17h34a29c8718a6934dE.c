_QWORD *__fastcall uu_sort::open(_QWORD *a1, __int64 a2)
{
  _BYTE *v2; // r14
  __int64 v3; // r15
  __int64 v4; // r14
  __int64 *v5; // rax
  __int64 (__fastcall **v6)(); // rax
  __int64 v7; // r12
  _OWORD *v8; // rax
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm2
  int v12; // ebp
  _DWORD *v13; // rax
  _DWORD v15[2]; // [rsp+0h] [rbp-98h] BYREF
  __int64 v16; // [rsp+8h] [rbp-90h]
  __int64 v17; // [rsp+10h] [rbp-88h]
  __int128 v18; // [rsp+18h] [rbp-80h] BYREF
  __int128 v19; // [rsp+28h] [rbp-70h]
  __int128 v20; // [rsp+38h] [rbp-60h]
  __int128 v21; // [rsp+48h] [rbp-50h]
  __int128 v22; // [rsp+58h] [rbp-40h] BYREF
  __int64 v23; // [rsp+68h] [rbp-30h]

  v2 = *(_BYTE **)(a2 + 8);
  v3 = *(_QWORD *)(a2 + 16);
  if ( v3 == 1 && *v2 == 45 )
  {
    v4 = std::io::stdio::stdin();
    v5 = (__int64 *)_rust_alloc(8LL, 8LL);
    if ( !v5 )
      alloc::alloc::handle_alloc_error(8LL, 8LL);
    *v5 = v4;
    a1[1] = v5;
    v6 = (__int64 (__fastcall **)())&anon_d7f70ae2e91d4deb3ee5c65537f9ec21_228_llvm_14646808445695166917;
LABEL_10:
    a1[2] = v6;
    *a1 = 0LL;
    return a1;
  }
  *(_QWORD *)&v18 = 0x1B600000000LL;
  DWORD2(v18) = 1;
  WORD6(v18) = 0;
  std::fs::OpenOptions::_open(v15, &v18, v2, v3);
  if ( !v15[0] )
  {
    v12 = v15[1];
    v13 = (_DWORD *)_rust_alloc(4LL, 4LL);
    if ( !v13 )
      alloc::alloc::handle_alloc_error(4LL, 4LL);
    *v13 = v12;
    a1[1] = v13;
    v6 = &anon_d7f70ae2e91d4deb3ee5c65537f9ec21_227_llvm_14646808445695166917;
    goto LABEL_10;
  }
  v7 = v16;
  v17 = v16;
  std::path::Path::to_path_buf(&v22, v2, v3);
  *(_QWORD *)&v20 = v23;
  v19 = v22;
  *((_QWORD *)&v18 + 1) = v7;
  LOBYTE(v18) = 2;
  v8 = (_OWORD *)_rust_alloc(64LL, 8LL);
  if ( !v8 )
    alloc::alloc::handle_alloc_error(8LL, 64LL);
  v9 = v18;
  v10 = v19;
  v11 = v20;
  v8[3] = v21;
  v8[2] = v11;
  v8[1] = v10;
  *v8 = v9;
  a1[1] = v8;
  a1[2] = &anon_d7f70ae2e91d4deb3ee5c65537f9ec21_36_llvm_14646808445695166917;
  *a1 = 1LL;
  return a1;
}
