__int64 __fastcall uu_split::get_input_size(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 result; // rax
  _BYTE *v9; // r14
  __int64 v10; // rbx
  unsigned __int64 v11; // r15
  __int64 v12; // rbx
  __int64 v13; // r14
  __int64 v14; // rdx
  int fd; // [rsp+4h] [rbp-1C4h] BYREF
  __int64 v16; // [rsp+8h] [rbp-1C0h] BYREF
  _DWORD v17[2]; // [rsp+10h] [rbp-1B8h] BYREF
  _QWORD v18[2]; // [rsp+20h] [rbp-1A8h] BYREF
  _QWORD v19[2]; // [rsp+30h] [rbp-198h] BYREF
  _QWORD v20[2]; // [rsp+40h] [rbp-188h] BYREF
  __int128 v21; // [rsp+50h] [rbp-178h] BYREF
  __int64 v22; // [rsp+60h] [rbp-168h]
  __int128 v23; // [rsp+70h] [rbp-158h] BYREF
  __int64 v24; // [rsp+80h] [rbp-148h]
  __int128 v25; // [rsp+90h] [rbp-138h] BYREF
  __int64 v26; // [rsp+A0h] [rbp-128h]
  __int128 v27; // [rsp+A8h] [rbp-120h] BYREF
  __int64 v28; // [rsp+B8h] [rbp-110h]
  _QWORD v29[6]; // [rsp+C0h] [rbp-108h] BYREF
  __int64 dest; // [rsp+F0h] [rbp-D8h] BYREF
  _QWORD v31[10]; // [rsp+F8h] [rbp-D0h] BYREF
  unsigned __int64 v32; // [rsp+148h] [rbp-80h]

  v16 = a1;
  if ( *a4 == 1LL )
  {
    v5 = a4[1];
  }
  else
  {
    core::slice::raw::from_raw_parts::precondition_check(*(_QWORD *)(a1 + 8), 1LL, 1LL, *(_QWORD *)(a1 + 16));
    std::sys::pal::unix::fs::stat(&dest);
    if ( dest == 2 )
    {
      std::io::error::repr_bitpacked::decode_repr(&dest, v31[0]);
      if ( (unsigned __int8)dest >= 3u )
        core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>(v31);
      v5 = 512LL;
    }
    else
    {
      v5 = 512LL;
      if ( v32 - 1 < 0x20000000 )
        v5 = v32;
    }
  }
  v18[0] = a2;
  v18[1] = v5;
  v7 = std::io::default_read_to_end(v18, a3, 0LL);
  result = 1LL;
  if ( !v7 )
  {
    if ( v5 > v6 )
      return 0LL;
    v9 = *(_BYTE **)(a1 + 8);
    if ( !v9 || (v10 = *(_QWORD *)(a1 + 16), v10 < 0) )
      core::panicking::panic_nounwind(anon_a1369f34f0af36e085eaa2e09186d83a_17_llvm_8562216672536282045, 162LL);
    if ( v10 == 1 && *v9 == 45 )
    {
      v19[0] = &v16;
      v19[1] = <&T as core::fmt::Display>::fmt;
      dest = (__int64)&unk_1356D8;
      v31[0] = 2LL;
      v31[1] = v19;
      v31[2] = 1LL;
      v31[3] = 0LL;
      alloc::fmt::format::format_inner(&v25, &dest);
      v21 = v25;
      v22 = v26;
      std::io::error::Error::new(39LL, &v21);
    }
    else
    {
      v11 = v6;
      core::slice::raw::from_raw_parts::precondition_check(v9, 1LL, 1LL, v10);
      std::sys::pal::unix::fs::stat(&dest);
      if ( dest != 2 )
      {
        if ( v31[9] >= v11 )
          return 0LL;
        v12 = *(_QWORD *)(v16 + 8);
        v13 = *(_QWORD *)(v16 + 16);
        core::slice::raw::from_raw_parts::precondition_check(v12, 1LL, 1LL, v13);
        dest = 0x1B600000000LL;
        LODWORD(v31[0]) = 1;
        WORD2(v31[0]) = 0;
        std::fs::OpenOptions::_open(v17, &dest, v12, v13);
        if ( !v17[0] )
        {
          fd = v17[1];
          if ( !<std::fs::File as std::io::Seek>::seek(&fd, 1LL, 0LL) )
          {
            if ( v14 )
            {
              std::sys::pal::unix::fs::debug_assert_fd_is_open((unsigned int)fd);
              close(fd);
              return 0LL;
            }
            v20[0] = &v16;
            v20[1] = <&T as core::fmt::Display>::fmt;
            v29[0] = &unk_1356B8;
            v29[1] = 2LL;
            v29[4] = 0LL;
            v29[2] = v20;
            v29[3] = 1LL;
            alloc::fmt::format(&v27, v29);
            v24 = v28;
            v23 = v27;
            std::io::error::Error::new(39LL, &v23);
          }
          std::sys::pal::unix::fs::debug_assert_fd_is_open((unsigned int)fd);
          close(fd);
        }
      }
    }
    return 1LL;
  }
  return result;
}
