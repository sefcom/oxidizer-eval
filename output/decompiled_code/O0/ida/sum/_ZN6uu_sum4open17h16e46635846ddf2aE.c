__int64 *__fastcall uu_sum::open(__int64 *a1, _BYTE *a2, __int64 a3)
{
  __int64 v4; // r14
  __int64 v5; // rax
  __int64 (__fastcall **v6)(); // rdx
  __int64 v7; // rcx
  __int128 v8; // xmm0
  __int128 v10; // xmm0
  int v11; // ebp
  _DWORD v12[2]; // [rsp+0h] [rbp-178h] BYREF
  __int64 v13; // [rsp+8h] [rbp-170h]
  __int128 dest; // [rsp+10h] [rbp-168h] BYREF
  __int128 v15; // [rsp+20h] [rbp-158h]
  __int64 v16; // [rsp+30h] [rbp-148h]
  _QWORD v17[2]; // [rsp+C8h] [rbp-B0h] BYREF
  _QWORD v18[2]; // [rsp+D8h] [rbp-A0h] BYREF
  _QWORD v19[3]; // [rsp+E8h] [rbp-90h] BYREF
  char v20; // [rsp+100h] [rbp-78h]
  _QWORD v21[3]; // [rsp+108h] [rbp-70h] BYREF
  char v22; // [rsp+120h] [rbp-58h]
  __int128 v23; // [rsp+128h] [rbp-50h] BYREF
  __int64 v24; // [rsp+138h] [rbp-40h]
  __int128 v25; // [rsp+140h] [rbp-38h] BYREF
  __int64 v26; // [rsp+150h] [rbp-28h]

  if ( a3 == 1 && *a2 == 45 )
  {
    v4 = std::io::stdio::stdin();
    v5 = _rust_alloc(8LL, 8LL);
    if ( !v5 )
      alloc::alloc::handle_alloc_error(8LL, 8LL);
    *(_QWORD *)v5 = v4;
    v6 = (__int64 (__fastcall **)())&unk_105440;
    v7 = 0LL;
    goto LABEL_13;
  }
  if ( (unsigned __int8)std::path::Path::is_dir(a2, a3) )
  {
    v19[0] = 0LL;
    v19[1] = a2;
    v19[2] = a3;
    v20 = 0;
    v17[0] = v19;
    v17[1] = <os_display::Quoted as core::fmt::Display>::fmt;
    *(_QWORD *)&dest = &unk_105420;
    *((_QWORD *)&dest + 1) = 2LL;
    *(_QWORD *)&v15 = v17;
    *((_QWORD *)&v15 + 1) = 1LL;
    v16 = 0LL;
    alloc::fmt::format::format_inner(&v23, &dest);
    *(_QWORD *)&v15 = v24;
    dest = v23;
    DWORD2(v15) = 2;
    v5 = alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
    if ( !v5 )
      alloc::alloc::handle_alloc_error(8LL, 32LL);
LABEL_12:
    v8 = dest;
    *(_OWORD *)(v5 + 16) = v15;
    *(_OWORD *)v5 = v8;
    v7 = 1LL;
    v6 = &anon_f907210316a4f48a9c7de5c93e2a79ff_265_llvm_5503381581801417789;
    goto LABEL_13;
  }
  std::sys::pal::unix::fs::stat(&dest);
  if ( (_QWORD)dest == 2LL )
  {
    std::io::error::repr_bitpacked::decode_repr(&dest, *((_QWORD *)&dest + 1));
    if ( (unsigned __int8)dest >= 3u )
      core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>((char *)&dest + 8);
    v21[0] = 0LL;
    v21[1] = a2;
    v21[2] = a3;
    v22 = 0;
    v18[0] = v21;
    v18[1] = <os_display::Quoted as core::fmt::Display>::fmt;
    *(_QWORD *)&dest = &unk_105400;
    *((_QWORD *)&dest + 1) = 2LL;
    *(_QWORD *)&v15 = v18;
    *((_QWORD *)&v15 + 1) = 1LL;
    v16 = 0LL;
    alloc::fmt::format::format_inner(&v25, &dest);
    *(_QWORD *)&v15 = v26;
    dest = v25;
    DWORD2(v15) = 2;
    v5 = alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
    if ( !v5 )
      alloc::alloc::handle_alloc_error(8LL, 32LL);
    goto LABEL_12;
  }
  *(_QWORD *)&dest = 0x1B600000000LL;
  DWORD2(dest) = 1;
  WORD6(dest) = 0;
  std::fs::OpenOptions::_open(v12, &dest, a2, a3);
  if ( v12[0] )
  {
    *(_QWORD *)&dest = 0LL;
    *((_QWORD *)&dest + 1) = 1LL;
    *(_QWORD *)&v15 = 0LL;
    *((_QWORD *)&v15 + 1) = v13;
    v5 = _rust_alloc(32LL, 8LL);
    if ( !v5 )
      alloc::alloc::handle_alloc_error(8LL, 32LL);
    v10 = dest;
    *(_OWORD *)(v5 + 16) = v15;
    *(_OWORD *)v5 = v10;
    v7 = 1LL;
    v6 = &off_105280;
  }
  else
  {
    v11 = v12[1];
    v5 = _rust_alloc(4LL, 4LL);
    if ( !v5 )
      alloc::alloc::handle_alloc_error(4LL, 4LL);
    *(_DWORD *)v5 = v11;
    v6 = &off_1053A8;
    v7 = 0LL;
  }
LABEL_13:
  a1[1] = v5;
  a1[2] = (__int64)v6;
  *a1 = v7;
  return a1;
}
