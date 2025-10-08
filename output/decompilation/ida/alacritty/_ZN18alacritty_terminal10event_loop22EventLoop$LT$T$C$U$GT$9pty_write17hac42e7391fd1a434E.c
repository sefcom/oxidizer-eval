__int64 __fastcall alacritty_terminal::event_loop::EventLoop<T,U>::pty_write(__int64 a1, __int64 a2)
{
  __int128 *v2; // rbx
  __int128 v3; // xmm0
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // r14
  __int64 v6; // r13
  __int64 v7; // rdx
  __int64 v8; // rbp
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rbx
  __int128 v12; // xmm0
  __int64 v13; // r14
  __int128 v14; // xmm0
  char v15; // al
  __int128 v16; // xmm0
  __int128 *v18; // [rsp+8h] [rbp-90h]
  __int128 v19; // [rsp+10h] [rbp-88h] BYREF
  __int128 v20; // [rsp+20h] [rbp-78h]
  __int128 v21; // [rsp+30h] [rbp-68h] BYREF
  __int128 v22; // [rsp+40h] [rbp-58h]
  __int64 v23; // [rsp+58h] [rbp-40h]
  _QWORD v24[7]; // [rsp+60h] [rbp-38h] BYREF

  v2 = (__int128 *)(a2 + 512);
  if ( *(_QWORD *)(a2 + 512) == 0x8000000000000001LL )
    alacritty_terminal::event_loop::State::goto_next(a2);
  v23 = a2;
  v3 = *v2;
  v22 = *(_OWORD *)(a2 + 528);
  v21 = v3;
  v18 = (__int128 *)(a2 + 512);
  *(_QWORD *)v2 = 0x8000000000000001LL;
  if ( (_QWORD)v21 == 0x8000000000000001LL )
  {
LABEL_4:
    core::ptr::drop_in_place<core::option::Option<alacritty_terminal::event_loop::Writing>>(&v21);
    return 0LL;
  }
  else
  {
LABEL_5:
    v20 = v22;
    v19 = v21;
    v4 = *((_QWORD *)&v22 + 1);
    v5 = v22;
    while ( 1 )
    {
      v6 = alacritty_terminal::event_loop::Writing::remaining_bytes(&v19);
      v8 = v7;
      v9 = <alacritty_terminal::tty::unix::Pty as alacritty_terminal::tty::EventedReadWrite>::reader(a1);
      if ( (<std::os::unix::net::stream::UnixStream as std::io::Write>::write(v9, v6, v8) & 1) != 0 )
        break;
      if ( !v10 )
      {
        core::ptr::drop_in_place<core::option::Option<alacritty_terminal::event_loop::Writing>>(v18);
        v16 = v19;
        *(_OWORD *)(a2 + 528) = v20;
        *v18 = v16;
        return 0LL;
      }
      v4 += v10;
      *((_QWORD *)&v20 + 1) = v4;
      if ( v4 >= v5 )
      {
        v11 = v23;
        alacritty_terminal::event_loop::State::goto_next(v23);
        core::ptr::drop_in_place<alacritty_terminal::event_loop::Writing>(&v19);
        v12 = *v18;
        v22 = *(_OWORD *)(a2 + 528);
        v21 = v12;
        *(_QWORD *)(v11 + 512) = 0x8000000000000001LL;
        if ( (_QWORD)v21 != 0x8000000000000001LL )
          goto LABEL_5;
        goto LABEL_4;
      }
    }
    v24[0] = v10;
    v13 = v10;
    core::ptr::drop_in_place<core::option::Option<alacritty_terminal::event_loop::Writing>>(v18);
    v14 = v19;
    *(_OWORD *)(a2 + 528) = v20;
    *v18 = v14;
    v15 = std::io::error::Error::kind(v13);
    if ( v15 == 13 || v15 == 35 )
    {
      core::ptr::drop_in_place<std::io::error::Error>(v24);
      return 0LL;
    }
    return v13;
  }
}