__int64 __fastcall alacritty::window_context::WindowContext::update_config(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 v3; // r15
  __int64 v4; // r12
  __int64 v5; // r14
  float v6; // xmm0_4
  float v7; // xmm1_4
  float v8; // xmm4_4
  int v9; // edx
  int v10; // r12d
  float v11; // xmm4_4
  float v12; // xmm1_4
  __int64 v13; // r15
  __int64 v14; // r12
  __int64 v16; // [rsp+8h] [rbp-280h] BYREF
  _OWORD v17[12]; // [rsp+10h] [rbp-278h] BYREF
  int v18; // [rsp+D4h] [rbp-1B4h]
  char v19; // [rsp+D8h] [rbp-1B0h]
  char v20; // [rsp+D9h] [rbp-1AFh]
  _OWORD src[12]; // [rsp+E0h] [rbp-1A8h] BYREF
  int v22; // [rsp+1A0h] [rbp-E8h]
  int v23; // [rsp+1A4h] [rbp-E4h]
  char v24; // [rsp+1A8h] [rbp-E0h]
  char v25; // [rsp+1A9h] [rbp-DFh]
  _QWORD v26[27]; // [rsp+1B0h] [rbp-D8h] BYREF

  v16 = *(_QWORD *)(a1 + 7712);
  v2 = v16;
  *(_QWORD *)(a1 + 7712) = a2;
  alloc::rc::RcInnerPtr::inc_strong(a2);
  v3 = alacritty::cli::ParsedOptions::override_config_rc(a1 + 7672, a2);
  core::ptr::drop_in_place<alloc::rc::Rc<alacritty::config::ui_config::UiConfig>>(a1 + 7712);
  *(_QWORD *)(a1 + 7712) = v3;
  alacritty::display::Display::update_config(a1 + 4464, v3 + 16);
  v4 = *(_QWORD *)(a1 + 7704);
  alacritty_terminal::sync::FairMutex<T>::lock(v4 + 16);
  v5 = *(_QWORD *)(a1 + 7712);
  alacritty::config::ui_config::UiConfig::term_options((__int64)v17, v5 + 16);
  alacritty_terminal::term::Term<T>::set_options(v4 + 24, (__int64)v17);
  core::ptr::drop_in_place<lock_api::mutex::MutexGuard<parking_lot::raw_mutex::RawMutex,alacritty_terminal::term::Term<alacritty::event::EventProxy>>>(v4 + 16);
  if ( fabs(*(float *)(v2 + 992) - *(float *)(v5 + 992)) > 0.00000011920929 )
    *(_WORD *)(a1 + 5836) = 257;
  if ( !(unsigned __int8)<alacritty::config::font::Font as core::cmp::PartialEq>::eq(v2 + 120, v5 + 120) )
  {
    v6 = *(double *)(a1 + 5288);
    v7 = (double)*(int *)(v2 + 312) / 1000000.0;
    v8 = fminf(3999.0, fmaxf(1.0, v7 * v6)) * 1000000.0;
    v9 = (int)v8;
    if ( v8 < 0.0 )
      v9 = 0;
    if ( v8 > 4294967000.0 )
      v9 = -1;
    v10 = *(_DWORD *)(a1 + 6560);
    if ( v10 == v9 )
    {
      v11 = (double)*(int *)(v5 + 312) / 1000000.0;
      v12 = fminf(3999.0, fmaxf(1.0, v6 * v11)) * 1000000.0;
      v10 = (int)v12;
      if ( v12 < 0.0 )
        v10 = 0;
      if ( v12 > 4294967000.0 )
        v10 = -1;
      *(_DWORD *)(a1 + 6560) = v10;
    }
    <alacritty::config::font::Font as core::clone::Clone>::clone(v17, v5 + 120);
    v23 = v18;
    v24 = v19;
    src[0] = v17[0];
    src[1] = v17[1];
    src[2] = v17[2];
    src[3] = v17[3];
    src[4] = v17[4];
    src[5] = v17[5];
    src[6] = v17[6];
    src[7] = v17[7];
    src[8] = v17[8];
    src[11] = v17[11];
    src[10] = v17[10];
    src[9] = v17[9];
    v22 = v10;
    v25 = v20;
    alacritty::display::DisplayUpdate::set_font((void *)(a1 + 5616), src);
    v5 = *(_QWORD *)(a1 + 7712);
  }
  v13 = *(_QWORD *)(a1 + 5296);
  v14 = *(_QWORD *)(a1 + 5304);
  alacritty::display::window::Window::set_theme(v13, v14, *(unsigned __int8 *)(v5 + 449));
  if ( *(_WORD *)(v2 + 440) != *(_WORD *)(v5 + 440)
    || *(_WORD *)(v2 + 442) != *(_WORD *)(v5 + 442)
    || *(_BYTE *)(v2 + 444) != *(_BYTE *)(v5 + 444)
    || *(_BYTE *)(v2 + 447) != *(_BYTE *)(v5 + 447) )
  {
    *(_BYTE *)(a1 + 5836) = 1;
  }
  if ( !*(_BYTE *)(a1 + 7739)
    && (!*(_BYTE *)(v5 + 445)
     || (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                           *(_QWORD *)(a1 + 5272),
                           *(_QWORD *)(a1 + 5280),
                           *(_QWORD *)(v2 + 336),
                           *(_QWORD *)(v2 + 344))) )
  {
    <alloc::string::String as core::clone::Clone>::clone(v17, v5 + 328);
    alacritty::display::window::Window::set_title(a1 + 5264, (__int64)v17);
    v5 = *(_QWORD *)(a1 + 7712);
    v13 = *(_QWORD *)(a1 + 5296);
    v14 = *(_QWORD *)(a1 + 5304);
  }
  alacritty::display::window::Window::set_transparent(v13, v14, *(float *)(v5 + 436) < 1.0);
  alacritty::display::window::Window::set_blur(v13, v14, *(unsigned __int8 *)(v5 + 446));
  alacritty::display::hint::HintState::update_alphabet(
    (_QWORD *)(a1 + 5512),
    *(_QWORD *)(v5 + 712),
    *(_QWORD *)(v5 + 720));
  v26[1] = 0x8000000000000008LL;
  v26[0] = 0x8000000000000000LL;
  alacritty::event::Event::new(v17, v26, 0LL, 0x8000000000000008LL);
  alloc::vec::Vec<T,A>::push(a1 + 7648, v17, &off_884380);
  *(_BYTE *)(a1 + 7736) = 1;
  return core::ptr::drop_in_place<alloc::rc::Rc<alacritty::config::ui_config::UiConfig>>(&v16);
}