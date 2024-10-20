_OWORD *__fastcall uu_truncate::file_truncate(__int64 a1, __int64 a2, unsigned __int8 a3, __int64 a4)
{
  __int64 v7; // rsi
  _OWORD *result; // rax
  __int128 v9; // xmm0
  _OWORD *v10; // rbx
  char v11; // al
  __int64 v12; // r12
  __int128 v13; // xmm0
  int fd; // [rsp+4h] [rbp-254h] BYREF
  _DWORD v15[2]; // [rsp+8h] [rbp-250h] BYREF
  __int64 v16; // [rsp+10h] [rbp-248h] BYREF
  __int64 v17; // [rsp+18h] [rbp-240h] BYREF
  int v18; // [rsp+20h] [rbp-238h]
  __int16 v19; // [rsp+24h] [rbp-234h]
  __int64 v20; // [rsp+28h] [rbp-230h]
  _OWORD src[11]; // [rsp+30h] [rbp-228h] BYREF
  _QWORD v22[2]; // [rsp+E8h] [rbp-170h] BYREF
  _QWORD v23[2]; // [rsp+F8h] [rbp-160h] BYREF
  _QWORD v24[3]; // [rsp+108h] [rbp-150h] BYREF
  char v25; // [rsp+120h] [rbp-138h]
  _QWORD v26[3]; // [rsp+128h] [rbp-130h] BYREF
  char v27; // [rsp+140h] [rbp-118h]
  __int128 v28; // [rsp+148h] [rbp-110h] BYREF
  __int64 v29; // [rsp+158h] [rbp-100h]
  __int128 v30; // [rsp+160h] [rbp-F8h] BYREF
  __int64 v31; // [rsp+170h] [rbp-E8h]
  _OWORD dest[11]; // [rsp+178h] [rbp-E0h] BYREF

  std::sys::pal::unix::fs::stat(src);
  if ( *(_QWORD *)&src[0] == 2LL )
  {
    v7 = *((_QWORD *)&src[0] + 1);
    dest[0] = __PAIR128__(*((unsigned __int64 *)&src[0] + 1), 2LL);
    goto LABEL_5;
  }
  memcpy(dest, src, sizeof(dest));
  if ( *(_QWORD *)&dest[0] == 2LL )
  {
    v7 = *((_QWORD *)&dest[0] + 1);
LABEL_5:
    std::io::error::repr_bitpacked::decode_repr(src, v7);
    if ( LOBYTE(src[0]) >= 3u )
      core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>((char *)src + 8);
    goto LABEL_13;
  }
  if ( (WORD4(dest[3]) & 0xF000) == 0x1000 )
  {
    v24[0] = 0LL;
    v24[1] = a1;
    v24[2] = a2;
    v25 = 1;
    v22[0] = v24;
    v22[1] = <os_display::Quoted as core::fmt::Display>::fmt;
    *(_QWORD *)&src[0] = &off_106780;
    *((_QWORD *)&src[0] + 1) = 2LL;
    *(_QWORD *)&src[1] = v22;
    *((_QWORD *)&src[1] + 1) = 1LL;
    *(_QWORD *)&src[2] = 0LL;
    alloc::fmt::format::format_inner(&v28, src);
    *(_QWORD *)&src[1] = v29;
    src[0] = v28;
    DWORD2(src[1]) = 1;
    result = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
    if ( !result )
      alloc::alloc::handle_alloc_error(8LL, 32LL);
    v9 = src[0];
    result[1] = src[1];
    *result = v9;
    if ( *(_QWORD *)&dest[0] == 2LL )
    {
      v10 = result;
      std::io::error::repr_bitpacked::decode_repr(src, *((_QWORD *)&dest[0] + 1));
      if ( LOBYTE(src[0]) >= 3u )
        core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>((char *)src + 8);
      return v10;
    }
    return result;
  }
LABEL_13:
  v17 = 0x1B600000000LL;
  v18 = 256;
  v19 = a3;
  std::fs::OpenOptions::_open(v15, &v17, a1, a2);
  if ( v15[0] )
  {
    v11 = std::io::error::Error::kind(&v16);
    v12 = v16;
    if ( !v11 && !a3 )
    {
      std::io::error::repr_bitpacked::decode_repr(src, v16);
      if ( LOBYTE(src[0]) >= 3u )
        core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>((char *)src + 8);
      return 0LL;
    }
  }
  else
  {
    fd = v15[1];
    v12 = std::fs::File::set_len(&fd, a4);
    std::sys::pal::unix::fs::debug_assert_fd_is_open((unsigned int)fd);
    close(fd);
  }
  if ( !v12 )
    return 0LL;
  v20 = v12;
  v26[0] = 0LL;
  v26[1] = a1;
  v26[2] = a2;
  v27 = 1;
  v23[0] = v26;
  v23[1] = <os_display::Quoted as core::fmt::Display>::fmt;
  *(_QWORD *)&src[0] = &off_1067A0;
  *((_QWORD *)&src[0] + 1) = 2LL;
  *(_QWORD *)&src[1] = v23;
  *((_QWORD *)&src[1] + 1) = 1LL;
  *(_QWORD *)&src[2] = 0LL;
  alloc::fmt::format::format_inner(&v30, src);
  src[0] = v30;
  *(_QWORD *)&src[1] = v31;
  *((_QWORD *)&src[1] + 1) = v12;
  result = (_OWORD *)_rust_alloc(32LL, 8LL);
  if ( !result )
    alloc::alloc::handle_alloc_error(8LL, 32LL);
  v13 = src[0];
  result[1] = src[1];
  *result = v13;
  return result;
}
