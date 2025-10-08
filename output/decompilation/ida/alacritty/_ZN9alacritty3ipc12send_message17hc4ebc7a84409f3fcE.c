__int64 __fastcall alacritty::ipc::send_message(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r14
  unsigned int v3; // ebp
  unsigned int v5; // [rsp+Ch] [rbp-4Ch] BYREF
  __int64 v6; // [rsp+10h] [rbp-48h] BYREF
  __int64 v7; // [rsp+18h] [rbp-40h]
  __int64 v8; // [rsp+20h] [rbp-38h]
  _QWORD v9[6]; // [rsp+28h] [rbp-30h] BYREF

  alacritty::ipc::find_socket(&v6, a1);
  if ( (_DWORD)v6 == 1 )
  {
    v2 = v7;
  }
  else
  {
    v3 = HIDWORD(v6);
    v5 = HIDWORD(v6);
    serde_json::ser::to_vec(&v6, a2);
    if ( __OFSUB__(-v6, 1LL) )
    {
      v2 = serde_json::error::<impl core::convert::From<serde_json::error::Error> for std::io::error::Error>::from(v7);
    }
    else
    {
      v9[0] = v6;
      v9[1] = v7;
      v9[2] = v8;
      v2 = std::io::Write::write_all(&v5, v7, v8, -v6);
      if ( !v2 )
      {
        v6 = 0LL;
        core::ptr::drop_in_place<core::option::Option<std::io::error::Error>>(&v6);
        v2 = std::net::tcp::TcpStream::shutdown(&v5, 1LL);
        if ( !v2 )
        {
          v2 = alacritty::ipc::handle_reply(&v5, *a2);
          if ( !v2 )
          {
            core::ptr::drop_in_place<alloc::string::String>(v9);
            core::ptr::drop_in_place<std::fs::File>(v5);
            v2 = 0LL;
            goto LABEL_10;
          }
        }
      }
      core::ptr::drop_in_place<alloc::string::String>(v9);
      v3 = v5;
    }
    core::ptr::drop_in_place<std::fs::File>(v3);
  }
LABEL_10:
  core::ptr::drop_in_place<alacritty::cli::SocketMessage>(a2);
  return v2;
}