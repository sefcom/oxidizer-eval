__int64 __fastcall uu_sort::Output::into_write(__int64 a1, __int64 *a2)
{
  __int64 v2; // r14
  __int64 v3; // r14
  __int64 *v4; // rax
  __int64 *v5; // r12
  __int64 (__fastcall **v6)(); // r13
  __int64 v7; // r15
  __int64 v8; // rax
  int v9; // ebp
  __int64 *v10; // rax
  __int64 v11; // rax
  int v13; // [rsp+Ch] [rbp-5Ch] BYREF
  __int64 v14; // [rsp+10h] [rbp-58h] BYREF
  __int64 v15; // [rsp+18h] [rbp-50h] BYREF
  __int64 v16; // [rsp+20h] [rbp-48h]
  __int64 *v17; // [rsp+28h] [rbp-40h]
  __int64 (__fastcall **v18)(); // [rsp+30h] [rbp-38h]

  v2 = *a2;
  if ( *a2 == 0x8000000000000000LL )
  {
    v3 = std::io::stdio::stdout();
    v4 = (__int64 *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 8LL, 0LL);
    if ( !v4 )
      alloc::alloc::handle_alloc_error(8LL, 8LL);
    v5 = v4;
    *v4 = v3;
    v6 = (__int64 (__fastcall **)())&unk_1D29E0;
  }
  else
  {
    v7 = a2[1];
    v13 = *((_DWORD *)a2 + 6);
    v8 = std::fs::File::set_len(&v13, 0LL);
    if ( v8 )
    {
      std::io::error::repr_bitpacked::decode_repr(&v14, v8);
      if ( (unsigned __int8)v14 >= 3u )
        core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>(&v15);
    }
    v9 = v13;
    v10 = (__int64 *)alloc::alloc::Global::alloc_impl(1LL, 4LL, 4LL, 0LL);
    v5 = v10;
    if ( !v10 )
      alloc::alloc::handle_alloc_error(4LL, 4LL);
    *(_DWORD *)v10 = v9;
    v6 = &off_1D2A30;
    if ( v2 )
      _rust_dealloc(v7, v2, 1LL);
  }
  v17 = v5;
  v18 = v6;
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v14, 0x2000LL, 0LL);
  if ( v14 )
    alloc::raw_vec::handle_error(v15, v16);
  v11 = v16;
  *(_QWORD *)a1 = v15;
  *(_QWORD *)(a1 + 8) = v11;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_BYTE *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = v5;
  *(_QWORD *)(a1 + 40) = v6;
  return a1;
}
