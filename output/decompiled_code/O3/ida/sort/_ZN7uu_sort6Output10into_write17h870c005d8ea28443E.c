__int64 __fastcall uu_sort::Output::into_write(__int64 a1, __int64 *a2)
{
  __int64 v2; // r14
  __int64 v3; // r14
  __int64 *v4; // rax
  __int64 *v5; // r15
  __int64 v6; // rax
  __int64 (__fastcall **v7)(); // rcx
  __int64 v8; // r12
  int v9; // ebp
  __int64 *v10; // rax
  int v12; // [rsp+Ch] [rbp-3Ch] BYREF
  __int64 v13[7]; // [rsp+10h] [rbp-38h] BYREF

  v2 = *a2;
  if ( *a2 == 0x8000000000000000LL )
  {
    v3 = std::io::stdio::stdout();
    v4 = (__int64 *)_rust_alloc(8LL, 8LL);
    if ( !v4 )
      alloc::alloc::handle_alloc_error(8LL, 8LL);
    v5 = v4;
    *v4 = v3;
    v6 = _rust_alloc(0x2000LL, 1LL);
    if ( !v6 )
      alloc::raw_vec::handle_error(1LL, 0x2000LL);
    v7 = (__int64 (__fastcall **)())&anon_d7f70ae2e91d4deb3ee5c65537f9ec21_37_llvm_14646808445695166917;
  }
  else
  {
    v8 = a2[1];
    v9 = *((_DWORD *)a2 + 6);
    v12 = v9;
    v13[0] = std::fs::File::set_len(&v12, 0LL);
    if ( v13[0] )
    {
      core::ptr::drop_in_place<std::io::error::Error>(v13);
      v9 = v12;
    }
    v10 = (__int64 *)_rust_alloc(4LL, 4LL);
    if ( !v10 )
      alloc::alloc::handle_alloc_error(4LL, 4LL);
    v5 = v10;
    *(_DWORD *)v10 = v9;
    if ( v2 )
      _rust_dealloc(v8, v2, 1LL);
    v6 = _rust_alloc(0x2000LL, 1LL);
    if ( !v6 )
      alloc::raw_vec::handle_error(1LL, 0x2000LL);
    v7 = &anon_d7f70ae2e91d4deb3ee5c65537f9ec21_38_llvm_14646808445695166917;
  }
  *(_QWORD *)a1 = 0x2000LL;
  *(_QWORD *)(a1 + 8) = v6;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_BYTE *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = v5;
  *(_QWORD *)(a1 + 40) = v7;
  return a1;
}
