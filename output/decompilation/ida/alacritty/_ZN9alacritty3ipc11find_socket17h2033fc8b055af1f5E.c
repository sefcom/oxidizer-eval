__int64 __fastcall alacritty::ipc::find_socket(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rdx
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rbx
  __int64 v13; // rax
  _DWORD *v14; // rcx
  _DWORD *v15; // rcx
  _BYTE v16[24]; // [rsp+0h] [rbp-F8h] BYREF
  __int128 v17; // [rsp+18h] [rbp-E0h]
  __int64 v18; // [rsp+30h] [rbp-C8h]
  __int64 v19; // [rsp+38h] [rbp-C0h] BYREF
  char v20; // [rsp+40h] [rbp-B8h]
  __int64 v21; // [rsp+48h] [rbp-B0h] BYREF
  __int64 v22; // [rsp+50h] [rbp-A8h] BYREF
  __int128 v23; // [rsp+58h] [rbp-A0h]
  __int128 v24; // [rsp+68h] [rbp-90h]
  _QWORD *v25; // [rsp+78h] [rbp-80h]
  __int128 v26; // [rsp+80h] [rbp-78h] BYREF
  __int64 v27; // [rsp+90h] [rbp-68h] BYREF
  _BYTE v28[8]; // [rsp+98h] [rbp-60h] BYREF
  __int64 v29; // [rsp+A0h] [rbp-58h]
  __int64 v30; // [rsp+A8h] [rbp-50h]
  _BYTE v31[8]; // [rsp+B0h] [rbp-48h] BYREF
  __int64 v32; // [rsp+B8h] [rbp-40h]
  __int64 v33; // [rsp+C0h] [rbp-38h]

  if ( __OFSUB__(0LL, *a2) )
  {
    v25 = a2;
    std::env::var(v16, aAlacrittySocke, 16LL);
    if ( *(_QWORD *)v16 )
    {
      core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(v16);
    }
    else
    {
      std::os::unix::net::stream::UnixStream::connect(&v22, &v16[8]);
      if ( (_DWORD)v22 != 1 )
      {
        result = HIDWORD(v22);
        *(_DWORD *)(a1 + 4) = HIDWORD(v22);
        *(_DWORD *)a1 = 0;
        return result;
      }
      core::ptr::drop_in_place<core::result::Result<std::os::unix::net::stream::UnixStream,std::io::error::Error>>(&v22);
    }
    alacritty::ipc::socket_dir((__int64)v16);
    std::fs::read_dir(&v22, v16);
    result = (unsigned __int8)v23;
    v4 = v22;
    if ( (_BYTE)v23 == 2 )
    {
      *(_QWORD *)(a1 + 8) = v22;
      *(_DWORD *)a1 = 1;
      return result;
    }
    v18 = a1;
    v19 = v22;
    v20 = v23;
    while ( 1 )
    {
      core::iter::traits::iterator::Iterator::try_fold(v16, &v19, v2, v4);
      if ( !*(_QWORD *)v16 )
      {
        core::ptr::drop_in_place<core::ops::control_flow::ControlFlow<std::fs::DirEntry>>(v16);
        core::ptr::drop_in_place<core::iter::adapters::filter_map::FilterMap<std::fs::ReadDir,alacritty::ipc::find_socket::{{closure}}>>(&v19);
        v13 = std::io::error::Error::new(0LL, aNoSocketFound, 15LL);
        v14 = (_DWORD *)v18;
        *(_QWORD *)(v18 + 8) = v13;
        *v14 = 1;
        return core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(v25);
      }
      v24 = v17;
      v23 = *(_OWORD *)&v16[8];
      v22 = *(_QWORD *)v16;
      std::fs::DirEntry::path(v28, &v22);
      alacritty::ipc::socket_prefix(v31);
      v5 = v30;
      v6 = std::path::Path::file_name(v29, v30);
      if ( v6 )
      {
        core::str::converts::from_utf8(v16, v6);
        if ( v16[0] )
          v7 = 0LL;
        else
          v7 = *(_QWORD *)&v16[8];
        v5 = *(_QWORD *)&v16[16];
      }
      else
      {
        v7 = 0LL;
      }
      if ( core::option::Option<T>::filter(v7, v5, v32, v33) )
      {
        ((void (__fastcall *)(_BYTE *, _BYTE *, __int64, __int64, __int64, __int64))std::os::unix::net::stream::UnixStream::connect)(
          v16,
          v28,
          v8,
          v9,
          v10,
          v11);
        if ( *(_DWORD *)v16 != 1 )
        {
          v15 = (_DWORD *)v18;
          *(_DWORD *)(v18 + 4) = *(_DWORD *)&v16[4];
          *v15 = 0;
          core::ptr::drop_in_place<alloc::string::String>(v31);
          core::mem::drop(v28);
          core::ptr::drop_in_place<std::fs::DirEntry>(&v22);
          return core::ptr::drop_in_place<core::iter::adapters::filter_map::FilterMap<std::fs::ReadDir,alacritty::ipc::find_socket::{{closure}}>>(&v19);
        }
        v12 = *(_QWORD *)&v16[8];
        if ( (unsigned __int8)std::io::error::Error::kind(*(_QWORD *)&v16[8]) == 2 )
        {
          v21 = v12;
          v27 = std::fs::remove_file(v28);
          core::ptr::drop_in_place<core::option::Option<std::io::error::Error>>(&v27);
          core::ptr::drop_in_place<std::io::error::Error>(&v21);
        }
        else
        {
          core::ptr::drop_in_place<std::io::error::Error>(&v16[8]);
        }
      }
      core::ptr::drop_in_place<alloc::string::String>(v31);
      core::mem::drop(v28);
      core::ptr::drop_in_place<std::fs::DirEntry>(&v22);
    }
  }
  *(_QWORD *)&v16[16] = a2[2];
  *(_OWORD *)v16 = *(_OWORD *)a2;
  ((void (__fastcall *)(__int128 *, _BYTE *))std::os::unix::net::stream::UnixStream::connect)(&v26, v16);
  if ( (_DWORD)v26 == 1 )
  {
    *(_QWORD *)(a1 + 8) = alacritty::ipc::find_socket::{{closure}}(v16, *((_QWORD *)&v26 + 1));
    *(_DWORD *)a1 = 1;
  }
  else
  {
    *(_OWORD *)a1 = v26;
  }
  return core::mem::drop(v16);
}