__int64 __fastcall alacritty::window_context::WindowContext::initial(
        _QWORD *dest,
        _QWORD *a2,
        __int128 *a3,
        __int64 a4,
        _QWORD *a5)
{
  __int64 v8; // rax
  unsigned __int8 v9; // dl
  __int64 (__fastcall **v10)(); // rax
  __int64 v11; // rdx
  __int128 v13; // xmm0
  _QWORD v14[2]; // [rsp+18h] [rbp-1A10h] BYREF
  _QWORD v15[2]; // [rsp+28h] [rbp-1A00h] BYREF
  __int64 v16; // [rsp+38h] [rbp-19F0h] BYREF
  __int128 v17; // [rsp+40h] [rbp-19E8h]
  __int128 v18; // [rsp+50h] [rbp-19D8h]
  __int128 v19; // [rsp+60h] [rbp-19C8h]
  __int128 v20; // [rsp+70h] [rbp-19B8h]
  __int64 v21; // [rsp+80h] [rbp-19A8h]
  _OWORD v22[16]; // [rsp+90h] [rbp-1998h] BYREF
  __int128 v23; // [rsp+190h] [rbp-1898h] BYREF
  __int64 v24; // [rsp+1A0h] [rbp-1888h]
  __int128 v25; // [rsp+1B0h] [rbp-1878h] BYREF
  _BYTE v26[72]; // [rsp+1C8h] [rbp-1860h] BYREF
  __int128 v27[2]; // [rsp+210h] [rbp-1818h] BYREF
  __int64 v28; // [rsp+230h] [rbp-17F8h]
  _QWORD v29[31]; // [rsp+238h] [rbp-17F0h] BYREF
  _OWORD v30[182]; // [rsp+330h] [rbp-16F8h] BYREF
  __int64 v31; // [rsp+E98h] [rbp-B90h] BYREF
  __int128 v32; // [rsp+EA0h] [rbp-B88h]
  __int128 v33; // [rsp+EB0h] [rbp-B78h]
  __int128 v34; // [rsp+EC0h] [rbp-B68h]
  __int128 v35; // [rsp+ED0h] [rbp-B58h]
  __int64 v36; // [rsp+EE0h] [rbp-B48h]
  _BYTE v37[2832]; // [rsp+EE8h] [rbp-B40h] BYREF

  *((_QWORD *)&v30[108] + 1) = 0LL;
  v16 = a4;
  <winit::event_loop::ActiveEventLoop as raw_window_handle::borrowed::HasDisplayHandle>::display_handle(v30);
  core::result::Result<T,E>::unwrap(v22, v30, &off_8841C8);
  v23 = v22[0];
  v24 = *(_QWORD *)&v22[1];
  <alacritty::config::window::Identity as core::clone::Clone>::clone(v26, a4 + 328);
  alacritty::cli::WindowIdentity::override_identity_config(a5 + 10, (__int64)v26);
  LODWORD(v25) = 16;
  alacritty::renderer::platform::create_gl_display((__int64)v22, (__int64)&v23, *(unsigned __int8 *)(a4 + 28));
  if ( *(_QWORD *)&v22[0] != 2LL )
  {
    *((_QWORD *)&v30[3] + 1) = *((_QWORD *)&v22[3] + 1);
    *(_OWORD *)((char *)&v30[2] + 8) = *(_OWORD *)((char *)&v22[2] + 8);
    *(_OWORD *)((char *)&v30[1] + 8) = *(_OWORD *)((char *)&v22[1] + 8);
    v30[0] = v22[0];
    *(_QWORD *)&v30[1] = *(_QWORD *)&v22[1];
    dest[2] = alloc::boxed::Box<T>::new(v30);
    dest[3] = &off_884278;
    dest[1] = 0LL;
    *dest = 3LL;
LABEL_14:
    core::ptr::drop_in_place<alacritty::config::window::Identity>(v26);
    core::ptr::drop_in_place<alacritty::cli::WindowOptions>(a5);
    core::ptr::drop_in_place<alloc::rc::Rc<alacritty::config::ui_config::UiConfig>>(&v16);
    return core::ptr::drop_in_place<winit::event_loop::EventLoopProxy<alacritty::event::Event>>(a3);
  }
  v14[0] = *((_QWORD *)&v22[0] + 1);
  v14[1] = *(_QWORD *)&v22[1];
  alacritty::renderer::platform::pick_gl_config(v30, (__int64)v14, &v25);
  if ( !__OFSUB__(-*(_QWORD *)&v30[0], 1LL) )
  {
    dest[2] = alloc::boxed::convert::<impl core::convert::From<alloc::string::String> for alloc::boxed::Box<dyn core::error::Error>>::from(v30);
    dest[3] = v11;
    dest[1] = 0LL;
    *dest = 3LL;
LABEL_13:
    core::ptr::drop_in_place<glutin::display::Display>(v14);
    goto LABEL_14;
  }
  v15[0] = *((_QWORD *)&v30[0] + 1);
  v15[1] = *(_QWORD *)&v30[1];
  v8 = <glutin::config::Config as glutin::platform::x11::X11GlConfigExt>::x11_visual(v15);
  alacritty::display::window::Window::new((__int64)v30, a2, a4 + 16, (__int64)v26, (__int64)a5, v8, v9);
  v22[0] = *(_OWORD *)((char *)v30 + 8);
  v22[1] = *(_OWORD *)((char *)&v30[1] + 8);
  v22[2] = *(_OWORD *)((char *)&v30[2] + 8);
  v22[3] = *(_OWORD *)((char *)&v30[3] + 8);
  if ( *(_QWORD *)&v30[0] == 0x8000000000000000LL )
  {
    v30[3] = v22[3];
    v30[2] = v22[2];
    v30[1] = v22[1];
    v30[0] = v22[0];
    dest[2] = alloc::boxed::Box<T>::new(v30);
    v10 = &off_8842F0;
LABEL_5:
    dest[3] = v10;
    dest[1] = 0LL;
    *dest = 3LL;
LABEL_12:
    core::ptr::drop_in_place<glutin::config::Config>(v15);
    goto LABEL_13;
  }
  memcpy(&v29[9], (char *)&v30[4] + 8, 0xB0uLL);
  *(_OWORD *)&v29[1] = v22[0];
  *(_OWORD *)&v29[3] = v22[1];
  *(_OWORD *)&v29[5] = v22[2];
  *(_OWORD *)&v29[7] = v22[3];
  v29[0] = *(_QWORD *)&v30[0];
  alacritty::renderer::platform::create_gl_context(v22, (__int64)v14, (__int64)v15, &v25);
  v17 = *(_OWORD *)((char *)v22 + 8);
  v18 = *(_OWORD *)((char *)&v22[1] + 8);
  *(_QWORD *)&v19 = *((_QWORD *)&v22[2] + 1);
  if ( *(_QWORD *)&v22[0] != 2LL )
  {
    v30[3] = v22[3];
    *(_OWORD *)((char *)v30 + 8) = v17;
    *(_OWORD *)((char *)&v30[1] + 8) = v18;
    *((_QWORD *)&v30[2] + 1) = v19;
    *(_QWORD *)&v30[0] = *(_QWORD *)&v22[0];
    dest[2] = alloc::boxed::Box<T>::new(v30);
    dest[3] = &off_884278;
    dest[1] = 0LL;
    *dest = 3LL;
    core::ptr::drop_in_place<alacritty::display::window::Window>(v29);
    goto LABEL_12;
  }
  v27[0] = v17;
  v27[1] = v18;
  v28 = v19;
  memcpy(v22, v29, 0xF8uLL);
  alacritty::display::Display::new((__int64)v30, (__int64)v22, v27, a4 + 16);
  v17 = *(_OWORD *)((char *)v30 + 8);
  v18 = *(_OWORD *)((char *)&v30[1] + 8);
  v19 = *(_OWORD *)((char *)&v30[2] + 8);
  v20 = *(_OWORD *)((char *)&v30[3] + 8);
  v21 = *((_QWORD *)&v30[4] + 1);
  if ( *(_QWORD *)&v30[0] == 2LL )
  {
    *(_QWORD *)&v30[4] = v21;
    v30[3] = v20;
    v30[2] = v19;
    v30[1] = v18;
    v30[0] = v17;
    dest[2] = alloc::boxed::Box<T>::new(v30);
    v10 = &off_884200;
    goto LABEL_5;
  }
  memcpy(v37, &v30[5], sizeof(v37));
  v31 = *(_QWORD *)&v30[0];
  v32 = v17;
  v33 = v18;
  v34 = v19;
  v35 = v20;
  v36 = v21;
  memcpy(v30, a5, 0xB0uLL);
  v13 = *a3;
  v22[1] = a3[1];
  v22[0] = v13;
  alacritty::window_context::WindowContext::new(dest, &v31);
  core::ptr::drop_in_place<glutin::config::Config>(v15);
  core::ptr::drop_in_place<glutin::display::Display>(v14);
  return core::ptr::drop_in_place<alacritty::config::window::Identity>(v26);
}