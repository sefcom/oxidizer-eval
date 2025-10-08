char __fastcall uu_cat::cat_path(__int64 a1, __int64 a2, __int64 a3, _BYTE *a4, __int64 a5, _QWORD *a6)
{
  __int64 v9; // rax
  char v10; // cl
  unsigned int v11; // ebp
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // r13
  __int64 v17; // rbp
  char is_terminal; // al
  unsigned int v19; // ebp
  __int64 v20; // rdx
  __int64 v21; // rcx
  int v24; // [rsp+14h] [rbp-D4h] BYREF
  __int64 v25; // [rsp+18h] [rbp-D0h]
  __int64 v26; // [rsp+20h] [rbp-C8h] BYREF
  __int128 v27; // [rsp+28h] [rbp-C0h]

  uu_cat::get_input_type(&v26);
  v9 = v26;
  v10 = v27;
  if ( v26 != 0x8000000000000006LL )
  {
    v15 = *(_QWORD *)((char *)&v27 + 1);
    *(_QWORD *)(a1 + 16) = *((_QWORD *)&v27 + 1);
    *(_QWORD *)(a1 + 9) = v15;
    *(_QWORD *)a1 = v9;
    *(_BYTE *)(a1 + 8) = v10;
    return v9;
  }
  LOBYTE(v9) = v27;
  if ( !(_BYTE)v27 )
  {
    *(_QWORD *)a1 = 0x8000000000000003LL;
    return v9;
  }
  if ( (unsigned __int8)v27 != 2 )
  {
    if ( (unsigned __int8)v27 == 7 )
    {
      std::os::unix::net::stream::UnixStream::connect(&v26, a2, a3);
      if ( (v26 & 1) == 0 )
      {
        v11 = HIDWORD(v26);
        v24 = HIDWORD(v26);
        v12 = std::net::tcp::TcpStream::shutdown(&v24, 1LL);
        if ( v12 )
        {
          *(_QWORD *)a1 = 0x8000000000000000LL;
          *(_QWORD *)(a1 + 8) = v12;
          LOBYTE(v9) = core::ptr::drop_in_place<std::fs::File>(v11, 1LL, v13, v14);
          return v9;
        }
        LODWORD(v26) = v11;
        BYTE4(v26) = 0;
        uu_cat::cat_handle(a1, (__int64)&v26, a4);
LABEL_29:
        LOBYTE(v9) = core::ptr::drop_in_place<uu_cat::InputHandle<std::fs::File>>((unsigned int)v26);
        return v9;
      }
    }
    else
    {
      std::fs::File::open(&v26, a2, a3);
      if ( (v26 & 1) == 0 )
      {
        v19 = HIDWORD(v26);
        if ( a6 && uucore::features::fs::FileInformation::file_size(a6) )
        {
          uucore::features::fs::FileInformation::from_file(&v26, v19);
          if ( (_DWORD)v26 == 1 )
          {
            core::ptr::drop_in_place<core::result::Result<uucore::features::fs::FileInformation,std::io::error::Error>>(&v26);
          }
          else if ( (_QWORD)v27 == *a6 && *((_QWORD *)&v27 + 1) == a6[1] )
          {
            *(_QWORD *)a1 = 0x8000000000000004LL;
            LOBYTE(v9) = core::ptr::drop_in_place<std::fs::File>(v19, v19, v20, v21);
            return v9;
          }
        }
        LODWORD(v26) = v19;
        BYTE4(v26) = 0;
        uu_cat::cat_handle(a1, &v26, a4, a5);
        goto LABEL_29;
      }
    }
    v9 = v27;
    *(_QWORD *)a1 = 0x8000000000000000LL;
    *(_QWORD *)(a1 + 8) = v9;
    return v9;
  }
  v16 = std::io::stdio::stdin();
  LOBYTE(v9) = uucore::features::fs::FileInformation::from_file(&v26);
  v17 = v27;
  if ( (v26 & 1) != 0 )
  {
    *(_QWORD *)a1 = 0x8000000000000000LL;
    *(_QWORD *)(a1 + 8) = v17;
  }
  else
  {
    v25 = *((_QWORD *)&v27 + 1);
    std::io::stdio::stdin();
    is_terminal = std::sys::io::is_terminal::isatty::is_terminal();
    v26 = v16;
    LOBYTE(v27) = is_terminal;
    if ( a6 && *a6 == v17 && v25 == a6[1] && (LOBYTE(v9) = uu_cat::is_appending(), (_BYTE)v9) )
      *(_QWORD *)a1 = 0x8000000000000004LL;
    else
      LOBYTE(v9) = uu_cat::cat_handle(a1, &v26, a4, a5);
  }
  return v9;
}