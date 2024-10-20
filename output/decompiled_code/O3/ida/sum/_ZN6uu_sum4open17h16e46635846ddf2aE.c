__int64 *__fastcall uu_sum::open(__int64 *a1, _BYTE *a2, __int64 a3)
{
  __int64 v4; // r14
  __int64 v5; // rax
  __int64 (__fastcall **v6)(); // rdx
  __int64 v7; // rcx
  __int128 v8; // xmm0
  __int128 v10; // xmm0
  int v11; // ebp
  __int128 v12; // [rsp+8h] [rbp-120h] BYREF
  __int128 v13; // [rsp+18h] [rbp-110h]
  __int64 *v14; // [rsp+28h] [rbp-100h] BYREF
  __int64 (__fastcall *v15)(); // [rsp+30h] [rbp-F8h]
  __int64 v16; // [rsp+38h] [rbp-F0h] BYREF
  _BYTE *v17; // [rsp+40h] [rbp-E8h]
  __int64 v18; // [rsp+48h] [rbp-E0h]
  char v19; // [rsp+50h] [rbp-D8h]
  __int128 dest; // [rsp+58h] [rbp-D0h] BYREF
  __int128 v21; // [rsp+68h] [rbp-C0h]
  __int64 v22; // [rsp+78h] [rbp-B0h]

  if ( a3 == 1 && *a2 == 45 )
  {
    v4 = std::io::stdio::stdin();
    v5 = _rust_alloc(8LL, 8LL);
    if ( !v5 )
      alloc::alloc::handle_alloc_error(8LL, 8LL);
    *(_QWORD *)v5 = v4;
    v6 = (__int64 (__fastcall **)())&unk_DFA70;
    v7 = 0LL;
    goto LABEL_11;
  }
  if ( (unsigned __int8)std::path::Path::is_dir(a2, a3) )
  {
    v16 = 0LL;
    v17 = a2;
    v18 = a3;
    v19 = 0;
    v14 = &v16;
    v15 = <os_display::Quoted as core::fmt::Display>::fmt;
    *(_QWORD *)&dest = &unk_DFA50;
    *((_QWORD *)&dest + 1) = 2LL;
    v22 = 0LL;
    *(_QWORD *)&v21 = &v14;
    *((_QWORD *)&v21 + 1) = 1LL;
    alloc::fmt::format::format_inner(&v12, &dest);
    DWORD2(v13) = 2;
    v5 = _rust_alloc(32LL, 8LL);
    if ( !v5 )
      alloc::alloc::handle_alloc_error(8LL, 32LL);
LABEL_10:
    v8 = v12;
    *(_OWORD *)(v5 + 16) = v13;
    *(_OWORD *)v5 = v8;
    v7 = 1LL;
    v6 = &off_DF9E0;
    goto LABEL_11;
  }
  std::sys::pal::unix::fs::stat(&dest);
  if ( (_DWORD)dest == 2 )
  {
    core::ptr::drop_in_place<std::io::error::Error>(*((_QWORD *)&dest + 1));
    v16 = 0LL;
    v17 = a2;
    v18 = a3;
    v19 = 0;
    v14 = &v16;
    v15 = <os_display::Quoted as core::fmt::Display>::fmt;
    *(_QWORD *)&dest = &unk_DF988;
    *((_QWORD *)&dest + 1) = 2LL;
    v22 = 0LL;
    *(_QWORD *)&v21 = &v14;
    *((_QWORD *)&v21 + 1) = 1LL;
    alloc::fmt::format::format_inner(&v12, &dest);
    DWORD2(v13) = 2;
    v5 = _rust_alloc(32LL, 8LL);
    if ( !v5 )
      alloc::alloc::handle_alloc_error(8LL, 32LL);
    goto LABEL_10;
  }
  *(_QWORD *)&dest = 0x1B600000000LL;
  DWORD2(dest) = 1;
  WORD6(dest) = 0;
  std::fs::OpenOptions::_open(&v12, &dest, a2, a3);
  if ( (_DWORD)v12 )
  {
    *(_QWORD *)&dest = 0LL;
    *((_QWORD *)&dest + 1) = 1LL;
    *(_QWORD *)&v21 = 0LL;
    *((_QWORD *)&v21 + 1) = *((_QWORD *)&v12 + 1);
    v5 = _rust_alloc(32LL, 8LL);
    if ( !v5 )
      alloc::alloc::handle_alloc_error(8LL, 32LL);
    v10 = dest;
    *(_OWORD *)(v5 + 16) = v21;
    *(_OWORD *)v5 = v10;
    v7 = 1LL;
    v6 = &off_DF7E0;
  }
  else
  {
    v11 = DWORD1(v12);
    v5 = _rust_alloc(4LL, 4LL);
    if ( !v5 )
      alloc::alloc::handle_alloc_error(4LL, 4LL);
    *(_DWORD *)v5 = v11;
    v6 = &off_DF930;
    v7 = 0LL;
  }
LABEL_11:
  a1[1] = v5;
  a1[2] = (__int64)v6;
  *a1 = v7;
  return a1;
}
