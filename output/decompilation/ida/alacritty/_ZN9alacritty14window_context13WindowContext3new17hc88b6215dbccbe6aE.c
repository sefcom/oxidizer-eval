__int64 __fastcall alacritty::window_context::WindowContext::new(
        char *dest,
        float *src,
        __int64 a3,
        __int64 a4,
        __int128 *a5)
{
  __int64 v7; // rbp
  __int64 v8; // r12
  __int64 v9; // rax
  __int128 v10; // xmm0
  __int64 v11; // rax
  __int128 v12; // xmm0
  volatile signed __int64 *v13; // r13
  __int64 v14; // r12
  __int64 v15; // rbp
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  bool v19; // of
  __int64 v20; // rax
  int v21; // ebp
  int v22; // r14d
  __int64 v23; // rt0
  __int64 v24; // rdx
  __int64 v25; // rcx
  bool v26; // zf
  __int128 v27; // xmm1
  float v29; // [rsp+8h] [rbp-4420h]
  float v30; // [rsp+Ch] [rbp-441Ch]
  __int64 v33; // [rsp+20h] [rbp-4408h] BYREF
  volatile signed __int64 *v34; // [rsp+28h] [rbp-4400h] BYREF
  _OWORD v35[2]; // [rsp+30h] [rbp-43F8h] BYREF
  __int64 v36; // [rsp+50h] [rbp-43D8h]
  __int64 v37; // [rsp+60h] [rbp-43C8h]
  __int128 v38; // [rsp+68h] [rbp-43C0h] BYREF
  __int64 v39; // [rsp+78h] [rbp-43B0h]
  volatile signed __int64 *v40; // [rsp+80h] [rbp-43A8h]
  __int64 v41; // [rsp+88h] [rbp-43A0h]
  __int128 v42; // [rsp+90h] [rbp-4398h]
  __int64 v43; // [rsp+A0h] [rbp-4388h]
  __int128 v44; // [rsp+A8h] [rbp-4380h]
  __int64 v45; // [rsp+B8h] [rbp-4370h]
  __m256i v46; // [rsp+C0h] [rbp-4368h] BYREF
  _BYTE v47[48]; // [rsp+E0h] [rbp-4348h]
  __int128 v48; // [rsp+110h] [rbp-4318h]
  __int128 v49; // [rsp+120h] [rbp-4308h]
  _BYTE v50[28]; // [rsp+134h] [rbp-42F4h]
  __int128 v51; // [rsp+150h] [rbp-42D8h]
  __int64 v52; // [rsp+160h] [rbp-42C8h]
  _BYTE v53[24]; // [rsp+168h] [rbp-42C0h] BYREF
  _OWORD v54[4]; // [rsp+180h] [rbp-42A8h] BYREF
  _BYTE v55[128]; // [rsp+1C0h] [rbp-4268h] BYREF
  _OWORD v56[13]; // [rsp+240h] [rbp-41E8h] BYREF
  _OWORD v57[467]; // [rsp+310h] [rbp-4118h] BYREF
  _BYTE desta[4464]; // [rsp+2040h] [rbp-23E8h] BYREF
  _OWORD v59[182]; // [rsp+31B0h] [rbp-1278h] BYREF
  _BYTE srca[1816]; // [rsp+3D10h] [rbp-718h] BYREF

  *((_QWORD *)&v59[36] + 1) = 0LL;
  *(_QWORD *)&desta[952] = 0LL;
  *((_QWORD *)&v57[270] + 1) = 0LL;
  *((_QWORD *)&v57[14] + 1) = 0LL;
  v33 = a3;
  v7 = a3 + 16;
  alacritty::config::ui_config::UiConfig::pty_config((__int64)v55, (_QWORD *)(a3 + 16));
  alacritty::cli::TerminalOptions::override_pty_config(a4, (__int64)v55);
  v8 = *(_QWORD *)(a4 + 80);
  if ( (unsigned __int64)core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER, 0LL) >= 3 )
  {
    v46.m256i_i64[0] = *((_QWORD *)src + 243);
    *(_QWORD *)&v56[0] = *((_QWORD *)src + 244);
    *(_QWORD *)&v59[0] = &v46;
    *((_QWORD *)&v59[0] + 1) = core::fmt::num::<impl core::fmt::Debug for usize>::fmt;
    *(_QWORD *)&v59[1] = v56;
    *((_QWORD *)&v59[1] + 1) = core::fmt::num::<impl core::fmt::Debug for usize>::fmt;
    *(_QWORD *)&v57[0] = &off_884348;
    *((_QWORD *)&v57[0] + 1) = 2LL;
    *(_QWORD *)&v57[2] = 0LL;
    *(_QWORD *)&v57[1] = v59;
    *((_QWORD *)&v57[1] + 1) = 2LL;
    v9 = log::__private_api::loc(&off_884368);
    *(_QWORD *)desta = aAlacrittyWindo;
    *(_QWORD *)&desta[8] = 25LL;
    *(_QWORD *)&desta[16] = aAlacrittyWindo;
    *(_QWORD *)&desta[24] = 25LL;
    *(_QWORD *)&desta[32] = v9;
    log::__private_api::log(v57, 3LL, desta);
  }
  v10 = *a5;
  v57[1] = a5[1];
  v57[0] = v10;
  v11 = alacritty::display::window::Window::id((__int64)(src + 200));
  v12 = *a5;
  v35[1] = a5[1];
  v35[0] = v12;
  v36 = v11;
  alacritty::config::ui_config::UiConfig::term_options((__int64)desta, v7);
  <winit::platform_impl::linux::EventLoopProxy<T> as core::clone::Clone>::clone(v59, v35);
  v57[1] = v59[1];
  v57[0] = v59[0];
  *(_QWORD *)&v57[2] = v36;
  alacritty_terminal::term::Term<T>::new(
    (__int64)srca,
    (__int64)desta,
    *((_QWORD *)src + 243),
    *((_QWORD *)src + 244),
    (__int64)v57);
  memcpy(&desta[7], srca, 0x6E8uLL);
  memcpy((char *)&v57[1] + 1, desta, 0x6EFuLL);
  *(_QWORD *)&v57[0] = 1LL;
  *((_QWORD *)&v57[0] + 1) = 1LL;
  LOBYTE(v57[1]) = 0;
  LOBYTE(v57[112]) = 0;
  v13 = (volatile signed __int64 *)alloc::boxed::Box<T>::new(v57);
  v37 = v8;
  v34 = v13;
  v14 = *((unsigned __int16 *)src + 972);
  v15 = *((_QWORD *)src + 244);
  v30 = src[492];
  v29 = src[493];
  v16 = alacritty::display::window::Window::id((__int64)(src + 200));
  alacritty_terminal::tty::unix::new(
    v57,
    v55,
    v14 | ((unsigned __int64)(unsigned int)(int)fminf(65535.0, fmaxf(0.0, v29)) << 48) | ((unsigned __int64)(unsigned __int16)(int)fminf(65535.0, fmaxf(0.0, v30)) << 32) | (unsigned int)((_DWORD)v15 << 16),
    v16);
  v19 = __OFSUB__(v57[2], 2);
  if ( LODWORD(v57[2]) == 2 )
  {
    v20 = alloc::boxed::Box<T>::new(*(_QWORD *)&v57[0], v55, v17, v18);
    goto LABEL_8;
  }
  v46.m256i_i64[3] = *((_QWORD *)&v57[1] + 1);
  *(_OWORD *)&v46.m256i_u64[1] = *(_OWORD *)((char *)v57 + 8);
  *(_OWORD *)&v47[4] = *(_OWORD *)((char *)&v57[2] + 4);
  *(_OWORD *)&v47[20] = *(_OWORD *)((char *)&v57[3] + 4);
  *(_OWORD *)&v47[32] = v57[4];
  v46.m256i_i64[0] = *(_QWORD *)&v57[0];
  *(_DWORD *)v47 = v57[2];
  v21 = HIDWORD(v57[3]);
  v22 = DWORD2(v57[2]);
  v23 = _InterlockedIncrement64(v13);
  if ( (v23 < 0) ^ v19 | (v23 == 0) )
    BUG();
  *(_QWORD *)&v54[0] = v13;
  <winit::platform_impl::linux::EventLoopProxy<T> as core::clone::Clone>::clone(desta, v35);
  v59[1] = *(_OWORD *)&desta[16];
  v59[0] = *(_OWORD *)desta;
  *(_QWORD *)&v59[2] = v36;
  *(_OWORD *)&desta[64] = *(_OWORD *)&v47[32];
  *(_OWORD *)&desta[48] = *(_OWORD *)&v47[16];
  *(_OWORD *)&desta[32] = *(_OWORD *)v47;
  *(__m256i *)desta = v46;
  alacritty_terminal::event_loop::EventLoop<T,U>::new(
    (__int64)v57,
    (__int64)v13,
    (__int64)v59,
    (__int128 *)desta,
    v55[120],
    *(unsigned __int8 *)(a3 + 29));
  if ( *((_QWORD *)&v57[9] + 1) == 2LL )
  {
    v20 = alloc::boxed::Box<T>::new(*(_QWORD *)&v57[0], v13, v24, v25);
LABEL_8:
    *((_QWORD *)dest + 2) = v20;
    *((_QWORD *)dest + 3) = &off_87A2E8;
    *((_QWORD *)dest + 1) = 0LL;
    *(_QWORD *)dest = 3LL;
    core::ptr::drop_in_place<alloc::sync::Arc<alacritty_terminal::sync::FairMutex<alacritty_terminal::term::Term<alacritty::event::EventProxy>>>>(&v34);
    core::ptr::drop_in_place<alacritty::event::EventProxy>(v35);
    core::ptr::drop_in_place<alacritty_terminal::tty::Options>(v55);
    core::ptr::drop_in_place<alacritty::cli::WindowOptions>(a4);
    core::ptr::drop_in_place<alloc::rc::Rc<alacritty::config::ui_config::UiConfig>>(&v33);
    core::ptr::drop_in_place<alacritty::display::Display>(src);
  }
  memcpy((char *)v56 + 8, (char *)v57 + 8, 0x90uLL);
  v56[10] = v57[10];
  v56[11] = v57[11];
  v56[12] = v57[12];
  *(_QWORD *)&v56[0] = *(_QWORD *)&v57[0];
  *((_QWORD *)&v56[9] + 1) = *((_QWORD *)&v57[9] + 1);
  alacritty_terminal::event_loop::EventLoop<T,U>::channel((__int64 *)&v38, v56);
  memcpy(v57, v56, 0xD0uLL);
  alacritty_terminal::thread::spawn_named(v53, v57);
  if ( alacritty::config::cursor::<impl core::convert::From<alacritty::config::cursor::ConfigCursorStyle> for vte::ansi::CursorStyle>::from(*(_WORD *)(a3 + 998)) )
  {
    *((_QWORD *)&v57[0] + 1) = 0x8000000000000008LL;
    *(_QWORD *)&v57[0] = 0x8000000000000000LL;
    alacritty::event::EventProxy::send_event((__int64)v35, v57);
  }
  v40 = v13;
  memcpy(v59, src, sizeof(v59));
  v41 = a3;
  v52 = v39;
  v51 = v38;
  *(_QWORD *)&v48 = 0LL;
  *((_QWORD *)&v48 + 1) = 8LL;
  v49 = 0LL;
  *(_QWORD *)&v42 = 0LL;
  *((_QWORD *)&v42 + 1) = 8LL;
  v43 = 0LL;
  <alacritty::event::SearchState as core::default::Default>::default(desta);
  *(_QWORD *)&v44 = 0LL;
  *((_QWORD *)&v44 + 1) = 16LL;
  v45 = 0LL;
  <alacritty::event::Mouse as core::default::Default>::default(v54);
  v57[462] = v49;
  v57[461] = v48;
  memcpy(&v57[279], v59, 0xB60uLL);
  *((_OWORD *)dest + 478) = v44;
  *((_QWORD *)dest + 958) = v45;
  memcpy(v57, desta, 0x1170uLL);
  *(_OWORD *)&v50[4] = v38;
  *(_QWORD *)&v50[20] = v39;
  v57[463] = v54[0];
  v57[464] = v54[1];
  v57[465] = v54[2];
  v57[466] = v54[3];
  *((_QWORD *)dest + 961) = v43;
  *(_OWORD *)(dest + 7672) = v42;
  memcpy(dest, v57, 0x1D30uLL);
  v26 = v37 == 0x8000000000000000LL;
  *((_DWORD *)dest + 1870) = 1000000000;
  v27 = *(_OWORD *)&v50[12];
  *(_OWORD *)(dest + 7484) = *(_OWORD *)v50;
  *(_OWORD *)(dest + 7496) = v27;
  *((_QWORD *)dest + 939) = 4LL;
  *((_QWORD *)dest + 962) = 0x10000110000LL;
  *((_QWORD *)dest + 963) = v13;
  *((_QWORD *)dest + 964) = a3;
  *((_DWORD *)dest + 1930) = 0;
  dest[7724] = 0;
  *((_DWORD *)dest + 1932) = v21;
  *((_DWORD *)dest + 1933) = v22;
  *((_WORD *)dest + 3868) = 0;
  dest[7738] = 0;
  dest[7739] = !v26;
  core::ptr::drop_in_place<std::thread::JoinHandle<(alacritty_terminal::event_loop::EventLoop<alacritty_terminal::tty::unix::Pty,alacritty::event::EventProxy>,alacritty_terminal::event_loop::State)>>(v53);
  core::ptr::drop_in_place<alacritty::event::EventProxy>(v35);
  core::ptr::drop_in_place<alacritty_terminal::tty::Options>(v55);
  return core::ptr::drop_in_place<alacritty::cli::WindowOptions>(a4);
}