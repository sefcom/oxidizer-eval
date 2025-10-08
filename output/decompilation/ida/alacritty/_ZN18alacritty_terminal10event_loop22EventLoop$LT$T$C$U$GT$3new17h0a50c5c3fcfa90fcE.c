__int64 __fastcall alacritty_terminal::event_loop::EventLoop<T,U>::new(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int128 *a4,
        char a5,
        unsigned int a6)
{
  __int64 v7; // rbx
  __int64 v8; // r13
  __int128 v9; // kr00_16
  __int64 result; // rax
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm2
  __int128 v17; // xmm1
  __int64 v21; // [rsp+10h] [rbp-A8h] BYREF
  __int64 v22; // [rsp+18h] [rbp-A0h] BYREF
  __int64 v23; // [rsp+20h] [rbp-98h]
  _OWORD v24[2]; // [rsp+28h] [rbp-90h]
  __int64 v25; // [rsp+48h] [rbp-70h]
  _QWORD v26[2]; // [rsp+50h] [rbp-68h] BYREF
  __int128 v27; // [rsp+60h] [rbp-58h] BYREF
  __int128 v28; // [rsp+70h] [rbp-48h]

  v25 = a2;
  v21 = a2;
  std::sync::mpmc::channel(&v22);
  v7 = v22;
  v8 = v23;
  v9 = v24[0];
  v26[0] = v22;
  v26[1] = v23;
  v27 = v24[0];
  polling::Poller::new(&v22);
  if ( (_DWORD)v22 == 1 )
  {
    *(_QWORD *)a1 = v23;
    *(_QWORD *)(a1 + 152) = 2LL;
    core::ptr::drop_in_place<std::sync::mpsc::Receiver<alacritty_terminal::event_loop::Msg>>(&v27);
    core::ptr::drop_in_place<std::sync::mpsc::Sender<alacritty_terminal::event_loop::Msg>>(v26);
    core::ptr::drop_in_place<alacritty_terminal::tty::unix::Pty>(a4);
    core::ptr::drop_in_place<alacritty::event::EventProxy>(a3);
    return core::ptr::drop_in_place<alloc::sync::Arc<alacritty_terminal::sync::FairMutex<alacritty_terminal::term::Term<alacritty::event::EventProxy>>>>(&v21);
  }
  else
  {
    v11 = HIDWORD(v22);
    v12 = v23;
    v28 = v24[0];
    v22 = 1LL;
    v23 = 1LL;
    LODWORD(v24[0]) = v11;
    *(_QWORD *)((char *)v24 + 4) = v12;
    *(_OWORD *)((char *)v24 + 12) = v28;
    v13 = alloc::boxed::Box<T>::new(&v22);
    *(_OWORD *)(a1 + 64) = a4[4];
    v14 = *a4;
    v15 = a4[1];
    v16 = a4[2];
    *(_OWORD *)(a1 + 48) = a4[3];
    *(_OWORD *)(a1 + 32) = v16;
    *(_OWORD *)(a1 + 16) = v15;
    *(_OWORD *)a1 = v14;
    v17 = *(_OWORD *)(a3 + 16);
    *(_OWORD *)(a1 + 152) = *(_OWORD *)a3;
    *(_OWORD *)(a1 + 168) = v17;
    *(_QWORD *)(a1 + 184) = *(_QWORD *)(a3 + 32);
    *(_QWORD *)(a1 + 80) = v7;
    *(_QWORD *)(a1 + 88) = v8;
    *(_QWORD *)(a1 + 96) = v13;
    *(_QWORD *)(a1 + 104) = v25;
    *(_OWORD *)(a1 + 112) = v9;
    *(_QWORD *)(a1 + 128) = 0x8000000000000003LL;
    *(_BYTE *)(a1 + 192) = a5;
    result = a6;
    *(_BYTE *)(a1 + 193) = a6;
  }
  return result;
}