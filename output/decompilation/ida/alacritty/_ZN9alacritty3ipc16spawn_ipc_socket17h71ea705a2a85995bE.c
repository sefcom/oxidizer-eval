__int64 __fastcall alacritty::ipc::spawn_ipc_socket(_QWORD *a1, __int64 a2, _OWORD *a3)
{
  __int64 result; // rax
  __int32 v5; // ebp
  __int128 v6; // xmm1
  _BYTE v7[24]; // [rsp+8h] [rbp-90h] BYREF
  __m256i v8; // [rsp+20h] [rbp-78h] BYREF
  __int64 v9; // [rsp+40h] [rbp-58h]
  _QWORD v10[2]; // [rsp+50h] [rbp-48h] BYREF
  _OWORD v11[3]; // [rsp+60h] [rbp-38h] BYREF

  if ( __OFSUB__(0LL, *(_QWORD *)(a2 + 456)) )
  {
    alacritty::ipc::spawn_ipc_socket::{{closure}}(v7);
  }
  else
  {
    <&str as alloc::string::SpecToString>::spec_to_string(&v8, *(_QWORD *)(a2 + 464), *(_QWORD *)(a2 + 472));
    *(_OWORD *)&v7[8] = *(_OWORD *)&v8.m256i_u64[1];
    *(_QWORD *)v7 = v8.m256i_i64[0];
  }
  std::os::unix::net::listener::UnixListener::bind(&v8, v7);
  if ( v8.m256i_i32[0] == 1 )
  {
    a1[1] = v8.m256i_i64[1];
    *a1 = 0x8000000000000000LL;
    core::mem::drop(v7);
    return core::ptr::drop_in_place<winit::event_loop::EventLoopProxy<alacritty::event::Event>>(a3);
  }
  else
  {
    v5 = v8.m256i_i32[1];
    std::env::set_var(aAlacrittySocke, 16LL, *(_QWORD *)&v7[8], *(_QWORD *)&v7[16]);
    if ( *(_BYTE *)(a2 + 482) )
    {
      v11[0] = *(_OWORD *)&v7[8];
      v10[0] = v11;
      v10[1] = <std::path::Display as core::fmt::Display>::fmt;
      v8.m256i_i64[0] = (__int64)&off_882EC8;
      v8.m256i_i64[1] = 2LL;
      v9 = 0LL;
      v8.m256i_i64[2] = (__int64)v10;
      v8.m256i_i64[3] = 1LL;
      std::io::stdio::_print(&v8);
    }
    LODWORD(v9) = v5;
    v6 = a3[1];
    *(_OWORD *)v8.m256i_i8 = *a3;
    *(_OWORD *)&v8.m256i_u64[2] = v6;
    alacritty_terminal::thread::spawn_named((__int64)v11, (__int128 *)v8.m256i_i8);
    core::ptr::drop_in_place<std::thread::JoinHandle<()>>(v11);
    result = *(_QWORD *)&v7[16];
    a1[2] = *(_QWORD *)&v7[16];
    *(_OWORD *)a1 = *(_OWORD *)v7;
  }
  return result;
}