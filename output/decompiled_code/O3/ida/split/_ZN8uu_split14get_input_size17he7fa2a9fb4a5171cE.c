__int64 __fastcall uu_split::get_input_size(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int64 a5)
{
  __int64 v8; // rsi
  unsigned __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 result; // rax
  unsigned __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  int fd; // [rsp+Ch] [rbp-11Ch] BYREF
  __int64 *v17; // [rsp+10h] [rbp-118h] BYREF
  __int64 (__fastcall *v18)(); // [rsp+18h] [rbp-110h]
  __int64 v19; // [rsp+20h] [rbp-108h] BYREF
  __int64 dest; // [rsp+28h] [rbp-100h] BYREF
  __int64 v21; // [rsp+30h] [rbp-F8h]
  __int64 **v22; // [rsp+38h] [rbp-F0h]
  __int64 v23; // [rsp+40h] [rbp-E8h]
  __int64 v24; // [rsp+48h] [rbp-E0h]
  unsigned __int64 v25; // [rsp+78h] [rbp-B0h]
  unsigned __int64 v26; // [rsp+80h] [rbp-A8h]
  _BYTE v27[24]; // [rsp+D8h] [rbp-50h] BYREF
  _BYTE v28[56]; // [rsp+F0h] [rbp-38h] BYREF

  v19 = a1;
  if ( !a4 )
  {
    v8 = *(_QWORD *)(a1 + 8);
    std::sys::pal::unix::fs::stat(&dest);
    if ( (_DWORD)dest == 2 )
    {
      core::ptr::drop_in_place<std::io::error::Error>(v21, v8);
LABEL_8:
      a5 = 512LL;
      goto LABEL_9;
    }
    if ( !v26 )
      goto LABEL_8;
    a5 = 512LL;
    if ( v26 < 0x20000001 )
      a5 = v26;
  }
LABEL_9:
  dest = a2;
  v21 = a5;
  v10 = std::io::default_read_to_end(&dest, a3, 0LL);
  result = 1LL;
  if ( !v10 )
  {
    if ( a5 > v9 )
      return 0LL;
    if ( *(_QWORD *)(a1 + 16) == 1LL && **(_BYTE **)(a1 + 8) == 45 )
    {
      v17 = &v19;
      v18 = <&T as core::fmt::Display>::fmt;
      dest = (__int64)&unk_10B720;
      v21 = 2LL;
      v24 = 0LL;
      v22 = &v17;
      v23 = 1LL;
      alloc::fmt::format::format_inner(v28, &dest);
      std::io::error::Error::new(39LL, v28);
    }
    else
    {
      v12 = v9;
      std::sys::pal::unix::fs::stat(&dest);
      if ( (_DWORD)dest != 2 )
      {
        if ( v25 >= v12 )
          return 0LL;
        v13 = *(_QWORD *)(v19 + 8);
        v14 = *(_QWORD *)(v19 + 16);
        dest = 0x1B600000000LL;
        LODWORD(v21) = 1;
        WORD2(v21) = 0;
        std::fs::OpenOptions::_open(&v17, &dest, v13, v14);
        if ( !(_DWORD)v17 )
        {
          fd = HIDWORD(v17);
          if ( !<std::fs::File as std::io::Seek>::seek(&fd, 1LL, 0LL) )
          {
            if ( v15 )
            {
              close(fd);
              return 0LL;
            }
            v17 = &v19;
            v18 = <&T as core::fmt::Display>::fmt;
            dest = (__int64)&unk_10B700;
            v21 = 2LL;
            v24 = 0LL;
            v22 = &v17;
            v23 = 1LL;
            alloc::fmt::format::format_inner(v27, &dest);
            std::io::error::Error::new(39LL, v27);
          }
          close(fd);
        }
      }
    }
    return 1LL;
  }
  return result;
}
