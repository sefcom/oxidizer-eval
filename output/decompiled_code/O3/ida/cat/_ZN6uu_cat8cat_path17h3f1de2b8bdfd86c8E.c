__int64 __fastcall uu_cat::cat_path(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, _QWORD *a6)
{
  __int64 result; // rax
  char v10; // cl
  unsigned int v11; // ebp
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r12
  char is_terminal; // al
  unsigned int v16; // ebp
  __int64 v17; // rdx
  __int64 v18; // rcx
  _QWORD v19[2]; // [rsp+0h] [rbp-D8h] BYREF
  __int64 v20; // [rsp+10h] [rbp-C8h] BYREF
  __int128 v21; // [rsp+18h] [rbp-C0h]

  v19[1] = a5;
  uu_cat::get_input_type(&v20);
  result = v20;
  v10 = v21;
  if ( v20 != 0x8000000000000006LL )
  {
    v13 = *(_QWORD *)((char *)&v21 + 1);
    *(_QWORD *)(a1 + 16) = *((_QWORD *)&v21 + 1);
    *(_QWORD *)(a1 + 9) = v13;
    *(_QWORD *)a1 = result;
    *(_BYTE *)(a1 + 8) = v10;
    return result;
  }
  result = (unsigned __int8)v21;
  if ( !(_BYTE)v21 )
  {
    *(_QWORD *)a1 = 0x8000000000000003LL;
    return result;
  }
  if ( (unsigned __int8)v21 == 2 )
  {
    v14 = std::io::stdio::stdin();
    v19[0] = std::io::stdio::stdin();
    is_terminal = std::sys::pal::unix::io::is_terminal(v19);
    v20 = v14;
    LOBYTE(v21) = is_terminal;
    return uu_cat::cat_handle(a1, (__int64)&v20, a4);
  }
  if ( (unsigned __int8)v21 == 7 )
  {
    std::os::unix::net::stream::UnixStream::connect(&v20, a2, a3);
    if ( !(_DWORD)v20 )
    {
      v11 = HIDWORD(v20);
      LODWORD(v19[0]) = HIDWORD(v20);
      v12 = std::net::tcp::TcpStream::shutdown(v19, 1LL);
      if ( v12 )
      {
        *(_QWORD *)a1 = 0x8000000000000000LL;
        *(_QWORD *)(a1 + 8) = v12;
        return core::ptr::drop_in_place<std::os::unix::net::stream::UnixStream>(v11);
      }
      else
      {
        LODWORD(v20) = v11;
        BYTE4(v20) = 0;
        uu_cat::cat_handle(a1, (__int64)&v20, a4);
        return core::ptr::drop_in_place<uu_cat::InputHandle<std::os::unix::net::stream::UnixStream>>((unsigned int)v20);
      }
    }
LABEL_12:
    result = v21;
    *(_QWORD *)a1 = 0x8000000000000000LL;
    *(_QWORD *)(a1 + 8) = result;
    return result;
  }
  std::fs::File::open(&v20, a2, a3);
  if ( (_DWORD)v20 )
    goto LABEL_12;
  v16 = HIDWORD(v20);
  LODWORD(v19[0]) = HIDWORD(v20);
  if ( a6 && uucore::features::fs::FileInformation::file_size(a6) )
  {
    uucore::features::fs::FileInformation::from_file(&v20, v19);
    if ( v20 )
    {
      core::ptr::drop_in_place<core::result::Result<uucore::features::fs::FileInformation,std::io::error::Error>>(&v20);
      v16 = v19[0];
    }
    else if ( (_QWORD)v21 == *a6 && *((_QWORD *)&v21 + 1) == a6[1] )
    {
      *(_QWORD *)a1 = 0x8000000000000004LL;
      return core::ptr::drop_in_place<std::fs::File>(v16, v19, v17, v18);
    }
  }
  LODWORD(v20) = v16;
  BYTE4(v20) = 0;
  uu_cat::cat_handle(a1, (__int64)&v20, a4);
  return core::ptr::drop_in_place<uu_cat::InputHandle<std::fs::File>>((unsigned int)v20);
}
