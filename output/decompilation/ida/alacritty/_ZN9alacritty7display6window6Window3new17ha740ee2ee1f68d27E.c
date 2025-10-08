__int64 __fastcall alacritty::display::window::Window::new(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned __int8 a7)
{
  unsigned int v10; // ebp
  unsigned int v11; // r12d
  __int64 v12; // rax
  __int64 v13; // rax
  int v14; // eax
  char v15; // al
  char v16; // cl
  unsigned __int64 v17; // rax
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm2
  __int64 v22; // rax
  int v23; // ebp
  char v24; // r14
  __int64 v25; // [rsp+0h] [rbp-888h]
  __int128 v26; // [rsp+10h] [rbp-878h] BYREF
  __int64 v27; // [rsp+20h] [rbp-868h]
  __int64 v28; // [rsp+28h] [rbp-860h]
  unsigned __int8 v29; // [rsp+30h] [rbp-858h]
  __int128 v30; // [rsp+38h] [rbp-850h] BYREF
  __int64 v31; // [rsp+48h] [rbp-840h]
  _BYTE v32[48]; // [rsp+50h] [rbp-838h] BYREF
  _OWORD v33[13]; // [rsp+80h] [rbp-808h] BYREF
  _OWORD v34[13]; // [rsp+150h] [rbp-738h] BYREF
  _QWORD dest[66]; // [rsp+228h] [rbp-660h] BYREF
  _QWORD v36[66]; // [rsp+438h] [rbp-450h] BYREF
  _DWORD src[144]; // [rsp+648h] [rbp-240h] BYREF

  v28 = a6;
  v29 = a7;
  <alacritty::config::window::Identity as core::clone::Clone>::clone(&v30, a4);
  alacritty::display::window::Window::get_platform_window(src, &v30, *(unsigned __int8 *)(a3 + 434), a6, a7);
  if ( *(_DWORD *)(a3 + 408) == 1 )
  {
    v10 = *(_DWORD *)(a3 + 412);
    v11 = *(_DWORD *)(a3 + 416);
    memcpy(dest, src, sizeof(dest));
    <dpi::PhysicalPosition<P> as core::convert::From<(X,X)>>::from(v10, v11);
    winit::window::WindowAttributes::with_position(v36, dest);
    memcpy(src, v36, 0x210uLL);
  }
  v12 = *(_QWORD *)(a5 + 152);
  *(_QWORD *)(a5 + 152) = 0x8000000000000000LL;
  if ( !__OFSUB__(-v12, 1LL) )
    *(_OWORD *)&dest[1] = *(_OWORD *)(a5 + 160);
  dest[0] = v12;
  core::option::Option<T>::or_else(&v26, dest, a2, -v12);
  if ( (_QWORD)v26 == 0x8000000000000000LL )
  {
    core::ptr::drop_in_place<core::option::Option<winit::window::ActivationToken>>(&v26);
  }
  else
  {
    *(_QWORD *)&v33[1] = v27;
    v33[0] = v26;
    if ( (unsigned __int64)core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER, 0LL) >= 4 )
    {
      *(_QWORD *)&v34[0] = v33;
      *((_QWORD *)&v34[0] + 1) = <winit::window::ActivationToken as core::fmt::Debug>::fmt;
      dest[0] = &off_882268;
      dest[1] = 1LL;
      dest[4] = 0LL;
      dest[2] = v34;
      dest[3] = 1LL;
      v13 = log::__private_api::loc(&off_882288);
      v36[0] = aAlacrittyDispl_0;
      v36[1] = 26LL;
      v36[2] = aAlacrittyDispl_0;
      v36[3] = 26LL;
      v36[4] = v13;
      log::__private_api::log(dest, 4LL, v36);
    }
    memcpy(dest, src, sizeof(dest));
    *(_QWORD *)&v34[1] = *(_QWORD *)&v33[1];
    v34[0] = v33[0];
    <winit::window::WindowAttributes as winit::platform::startup_notify::WindowAttributesExtStartupNotify>::with_activation_token(
      v36,
      dest);
    memcpy(src, v36, 0x210uLL);
    winit::platform::startup_notify::reset_activation_token_env();
  }
  if ( !*a2 && (*(_BYTE *)(a3 + 384) & 1) != 0 )
  {
    v14 = *(_DWORD *)(a3 + 388);
    src[20] = 1;
    src[21] = v14;
  }
  memcpy(dest, src, sizeof(dest));
  winit::window::WindowAttributes::with_title(v36, dest);
  BYTE4(v36[65]) = *(_BYTE *)(a3 + 433);
  memcpy(dest, v36, 0x205uLL);
  *(_DWORD *)((char *)&dest[65] + 1) = *(_DWORD *)((char *)&v36[65] + 1);
  HIDWORD(dest[65]) = HIDWORD(v36[65]);
  v15 = *(_BYTE *)(a3 + 435);
  BYTE5(dest[64]) = v15 == 1;
  v16 = *(_BYTE *)(a3 + 430);
  HIWORD(dest[64]) = 256;
  LOBYTE(dest[65]) = v16;
  if ( v15 == 2 )
  {
    *((_QWORD *)&v34[0] + 1) = 0x8000000000000001LL;
    v17 = 0x8000000000000002LL;
  }
  else
  {
    v17 = 0x8000000000000003LL;
  }
  *(_QWORD *)&v34[0] = v17;
  winit::window::WindowAttributes::with_fullscreen(v36, dest, v34);
  BYTE5(v36[65]) = *(_BYTE *)(a3 + 432) + 1;
  memcpy(src, v36, 0x210uLL);
  memcpy(dest, src, sizeof(dest));
  winit::event_loop::ActiveEventLoop::create_window(v36, a2, dest);
  if ( LODWORD(v36[0]) == 1 )
  {
    *(_QWORD *)&v34[3] = v36[7];
    v18 = *(_OWORD *)&v36[1];
    v19 = *(_OWORD *)&v36[3];
    v34[2] = *(_OWORD *)&v36[5];
    v20 = *(_OWORD *)&v36[5];
    v34[1] = *(_OWORD *)&v36[3];
    v34[0] = *(_OWORD *)&v36[1];
    *(_QWORD *)(a1 + 64) = v36[7];
    *(_OWORD *)(a1 + 48) = v20;
    *(_OWORD *)(a1 + 32) = v19;
    *(_OWORD *)(a1 + 16) = v18;
    *(_QWORD *)(a1 + 8) = 7LL;
    *(_QWORD *)a1 = 0x8000000000000000LL;
    return core::ptr::drop_in_place<alacritty::config::window::Identity>(&v30);
  }
  else
  {
    memcpy(v34, &v36[1], sizeof(v34));
    memcpy(v33, v34, sizeof(v33));
    winit::window::Window::set_cursor(*(_QWORD *)&v33[0], *((_QWORD *)&v33[0] + 1), 8LL);
    winit::window::Window::set_ime_allowed(v33, 1LL);
    winit::window::Window::set_ime_purpose(*(_QWORD *)&v33[0], *((_QWORD *)&v33[0] + 1));
    winit::window::Window::set_transparent(*(_QWORD *)&v33[0], *((_QWORD *)&v33[0] + 1), *(float *)(a3 + 420) < 1.0);
    *(_QWORD *)&v26 = winit::window::Window::scale_factor(*(_QWORD *)&v33[0], *((_QWORD *)&v33[0] + 1));
    if ( (unsigned __int64)core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER, 0LL) >= 3 )
    {
      *(_QWORD *)&v34[0] = &v26;
      *((_QWORD *)&v34[0] + 1) = core::fmt::float::<impl core::fmt::Display for f64>::fmt;
      dest[0] = &off_882278;
      dest[1] = 1LL;
      dest[4] = 0LL;
      dest[2] = v34;
      dest[3] = 1LL;
      v22 = log::__private_api::loc(&off_8822A0);
      v36[0] = aAlacrittyDispl_0;
      v36[1] = 26LL;
      v36[2] = aAlacrittyDispl_0;
      v36[3] = 26LL;
      v36[4] = v22;
      log::__private_api::log(dest, 3LL, v36);
    }
    <winit::window::Window as raw_window_handle::borrowed::HasWindowHandle>::window_handle(dest, v33);
    core::result::Result<T,E>::unwrap(v36, dest, &off_8822B8);
    v23 = v36[0];
    v24 = *(_BYTE *)(a5 + 48);
    *(_QWORD *)(a1 + 16) = v31;
    *(_OWORD *)a1 = v30;
    v25 = v26;
    memcpy((void *)(a1 + 32), v33, 0xD0uLL);
    *(_QWORD *)(a1 + 24) = v25;
    *(_WORD *)(a1 + 240) = 1;
    *(_BYTE *)(a1 + 242) = v24;
    *(_BYTE *)(a1 + 243) = v23 == 4;
    *(_WORD *)(a1 + 244) = 2049;
    return core::ptr::drop_in_place<<alacritty_terminal::term::Term<alacritty::event::EventProxy> as vte::ansi::Handler>::dynamic_color_sequence::{{closure}}>(v32);
  }
}