__int64 __fastcall uu_cat::cat_path(__int64 a1, __int64 a2, __int64 a3, unsigned __int8 *a4, __int64 a5, _QWORD *a6)
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
  __int64 v19; // [rsp+0h] [rbp-D8h] BYREF
  __int64 v20; // [rsp+8h] [rbp-D0h]
  __int64 v21; // [rsp+10h] [rbp-C8h] BYREF
  __int128 v22; // [rsp+18h] [rbp-C0h]

  v20 = a5;
  uu_cat::get_input_type((__int64)&v21, a2, a3);
  result = v21;
  v10 = v22;
  if ( v21 != 0x8000000000000006LL )
  {
    v13 = *(_QWORD *)((char *)&v22 + 1);
    *(_QWORD *)(a1 + 16) = *((_QWORD *)&v22 + 1);
    *(_QWORD *)(a1 + 9) = v13;
    *(_QWORD *)a1 = result;
    *(_BYTE *)(a1 + 8) = v10;
    return result;
  }
  result = (unsigned __int8)v22;
  if ( !(_BYTE)v22 )
  {
    *(_QWORD *)a1 = 0x8000000000000003LL;
    return result;
  }
  if ( (unsigned __int8)v22 == 2 )
  {
    v14 = std::io::stdio::stdin();
    v19 = std::io::stdio::stdin();
    is_terminal = std::sys::pal::unix::io::is_terminal(&v19);
    v21 = v14;
    LOBYTE(v22) = is_terminal;
    return uu_cat::cat_handle((_QWORD *)a1, (__int64)&v21, a4, v20);
  }
  if ( (unsigned __int8)v22 == 7 )
  {
    std::os::unix::net::stream::UnixStream::connect(&v21, a2, a3);
    if ( !(_DWORD)v21 )
    {
      v11 = HIDWORD(v21);
      LODWORD(v19) = HIDWORD(v21);
      v12 = std::net::tcp::TcpStream::shutdown(&v19, 1LL);
      if ( v12 )
      {
        *(_QWORD *)a1 = 0x8000000000000000LL;
        *(_QWORD *)(a1 + 8) = v12;
        return core::ptr::drop_in_place<std::os::unix::net::stream::UnixStream>(v11);
      }
      else
      {
        LODWORD(v21) = v11;
        BYTE4(v21) = 0;
        uu_cat::cat_handle((_QWORD *)a1, (__int64)&v21, a4, v20);
        return core::ptr::drop_in_place<uu_cat::InputHandle<std::os::unix::net::stream::UnixStream>>((unsigned int)v21);
      }
    }
LABEL_12:
    result = v22;
    *(_QWORD *)a1 = 0x8000000000000000LL;
    *(_QWORD *)(a1 + 8) = result;
    return result;
  }
  std::fs::File::open(&v21, a2, a3);
  if ( (_DWORD)v21 )
    goto LABEL_12;
  v16 = HIDWORD(v21);
  LODWORD(v19) = HIDWORD(v21);
  if ( a6 && uucore::features::fs::FileInformation::file_size(a6) )
  {
    uucore::features::fs::FileInformation::from_file(&v21, &v19);
    if ( v21 )
    {
      core::ptr::drop_in_place<core::result::Result<uucore::features::fs::FileInformation,std::io::error::Error>>(&v21);
      v16 = v19;
    }
    else if ( (_QWORD)v22 == *a6 && *((_QWORD *)&v22 + 1) == a6[1] )
    {
      *(_QWORD *)a1 = 0x8000000000000004LL;
      return core::ptr::drop_in_place<std::fs::File>(v16, &v19, v17, v18);
    }
  }
  LODWORD(v21) = v16;
  BYTE4(v21) = 0;
  uu_cat::cat_handle((_QWORD *)a1, (__int64)&v21, a4, v20);
  return core::ptr::drop_in_place<uu_cat::InputHandle<std::fs::File>>((unsigned int)v21);
}
