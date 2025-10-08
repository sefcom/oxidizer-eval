__int64 __fastcall alacritty::window_context::WindowContext::handle_event(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _WORD *a5)
{
  __int64 v7; // r12
  __int64 v8; // r12
  __int64 v9; // rax
  __int64 *i; // rsi
  _WORD *v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  char v17; // al
  __int64 v18; // [rsp+0h] [rbp-2C8h]
  char *v19; // [rsp+8h] [rbp-2C0h]
  __int64 v20; // [rsp+10h] [rbp-2B8h]
  _BYTE *v22; // [rsp+20h] [rbp-2A8h]
  __int64 v23; // [rsp+28h] [rbp-2A0h]
  __int64 v24; // [rsp+48h] [rbp-280h]
  __int64 *v25; // [rsp+50h] [rbp-278h] BYREF
  __int64 *v26; // [rsp+58h] [rbp-270h]
  _QWORD v27[18]; // [rsp+78h] [rbp-250h] BYREF
  char v28; // [rsp+108h] [rbp-1C0h]
  __int64 v29; // [rsp+110h] [rbp-1B8h] BYREF
  _BYTE dest[184]; // [rsp+118h] [rbp-1B0h] BYREF
  _BYTE v31[248]; // [rsp+1D0h] [rbp-F8h] BYREF

  if ( *(_QWORD *)a5 != 3LL )
  {
    if ( (unsigned int)*(_QWORD *)a5 == 8 )
      goto LABEL_3;
LABEL_10:
    memcpy(v31, a5, 0xC0uLL);
    return alloc::vec::Vec<T,A>::push(a1 + 7648, v31, &off_8843B0);
  }
  if ( a5[72] != 29 )
    goto LABEL_10;
LABEL_3:
  if ( !*(_QWORD *)(a1 + 7664) )
    return core::ptr::drop_in_place<winit::event::Event<alacritty::event::Event>>(a5);
  v7 = *(_QWORD *)(a1 + 7704);
  v20 = v7 + 16;
  alacritty_terminal::sync::FairMutex<T>::lock(v7 + 16);
  v8 = v7 + 24;
  v27[0] = a1 + 7488;
  v27[1] = v8;
  v27[2] = a3;
  v27[3] = a1 + 7408;
  v27[4] = a1 + 7512;
  v27[5] = a1 + 7720;
  v9 = *(_QWORD *)(a1 + 7712);
  v24 = a1 + 4464;
  v27[6] = a1 + 4464;
  v27[7] = a1 + 7376;
  v27[8] = v9 + 16;
  v27[9] = a1 + 7737;
  v27[10] = a1 + 7472;
  v27[11] = a2;
  v27[12] = a4;
  v27[13] = a1;
  v27[14] = a1 + 7696;
  v19 = (char *)(a1 + 7736);
  v27[15] = a1 + 7736;
  v22 = (_BYTE *)(a1 + 7738);
  v27[16] = a1 + 7738;
  v27[17] = *(_QWORD *)(a1 + 7728);
  v28 = *(_BYTE *)(a1 + 7739);
  v23 = *(_QWORD *)(a1 + 4352);
  alloc::vec::Vec<T,A>::drain(&v25, a1 + 7648);
  for ( i = v25; v25 != v26; i = v25 )
  {
    v25 = i + 24;
    if ( *i == 11 )
      break;
    v29 = *i;
    memcpy(dest, i + 1, sizeof(dest));
    alacritty::event::<impl alacritty::input::Processor<alacritty::event::EventProxy,alacritty::event::ActionContext<alacritty_terminal::event_loop::Notifier,alacritty::event::EventProxy>>>::handle_event(
      v27,
      &v29);
  }
  v11 = a5;
  core::ptr::drop_in_place<alloc::vec::drain::Drain<winit::event::Event<alacritty::event::Event>>>(&v25);
  if ( *(_BYTE *)(a1 + 5836) )
  {
    alacritty::window_context::WindowContext::submit_display_update(
      v8,
      v24,
      a1 + 7488,
      a1 + 7376,
      a1,
      v23,
      *(_QWORD *)(a1 + 7712) + 16LL);
    *v19 = 1;
  }
  else
  {
    v17 = *v19;
    if ( (*v19 & 1) == 0 && *(_BYTE *)(a1 + 7465) != 1 )
      goto LABEL_15;
  }
  i = (__int64 *)v8;
  v17 = *(_BYTE *)(a1 + 7736) | alacritty::display::Display::update_highlighted_hints(
                                  v24,
                                  v8,
                                  *(_QWORD *)(*(_QWORD *)(a1 + 7712) + 736LL),
                                  *(_QWORD *)(*(_QWORD *)(a1 + 7712) + 744LL),
                                  a1 + 7408,
                                  *(_DWORD *)(a1 + 7720));
  *(_BYTE *)(a1 + 7736) = v17;
  *(_BYTE *)(a1 + 7465) = 0;
LABEL_15:
  if ( (v17 & 1) != 0
    && *(_BYTE *)(a1 + 5504) == 1
    && !*v22
    && (*(_DWORD *)a5 != 3 || a5[72] != 29)
    && !*(_BYTE *)(a1 + 5505) )
  {
    *(_BYTE *)(a1 + 5505) = 1;
    winit::window::Window::request_redraw(a1 + 5296, i, v12, v13, v14, v15, v18, v19, v20, a5, v22);
  }
  core::ptr::drop_in_place<lock_api::mutex::MutexGuard<parking_lot::raw_mutex::RawMutex,alacritty_terminal::term::Term<alacritty::event::EventProxy>>>(v20);
  return core::ptr::drop_in_place<winit::event::Event<alacritty::event::Event>>(v11);
}