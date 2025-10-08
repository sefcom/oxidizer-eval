__int64 __fastcall alacritty::display::Display::make_current(__int64 a1)
{
  __int64 v1; // r14
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int128 v5; // [rsp+8h] [rbp-4B0h] BYREF
  const char *v6; // [rsp+18h] [rbp-4A0h]
  __int64 v7; // [rsp+20h] [rbp-498h]
  __int64 v8; // [rsp+28h] [rbp-490h]
  _QWORD v9[2]; // [rsp+30h] [rbp-488h] BYREF
  _QWORD v10[2]; // [rsp+40h] [rbp-478h] BYREF
  __int64 v11; // [rsp+50h] [rbp-468h] BYREF
  _QWORD v12[3]; // [rsp+68h] [rbp-450h] BYREF
  __int128 v13; // [rsp+90h] [rbp-428h] BYREF
  const char *v14; // [rsp+A0h] [rbp-418h]
  _QWORD v15[8]; // [rsp+D0h] [rbp-3E8h] BYREF
  _QWORD v16[57]; // [rsp+110h] [rbp-3A8h] BYREF

  v1 = a1 + 680;
  if ( (unsigned __int8)<glutin::context::PossiblyCurrentContext as glutin::context::PossiblyCurrentGlContext>::is_current(a1 + 680) )
  {
    result = alacritty::renderer::Renderer::was_context_reset(*(unsigned int *)(a1 + 672));
    if ( !(_BYTE)result )
      return result;
LABEL_9:
    v9[0] = <glutin::context::PossiblyCurrentContext as glutin::display::GetGlDisplay>::display(v1);
    v9[1] = v3;
    v10[0] = <glutin::context::PossiblyCurrentContext as glutin::config::GetGlConfig>::config(v1);
    v10[1] = v4;
    <winit::window::Window as raw_window_handle::borrowed::HasWindowHandle>::window_handle(v16, a1 + 832);
    core::result::Result<T,E>::unwrap(&v5, v16, &off_882478);
    v13 = v5;
    v14 = v6;
    alacritty::renderer::platform::create_gl_context(v16, v9, v10, &v13);
    core::result::Result<T,E>::expect(v12, v16);
    core::ptr::drop_in_place<alacritty::renderer::Renderer>(a1 + 224);
  }
  <glutin::context::PossiblyCurrentContext as glutin::context::PossiblyCurrentGlContext>::make_current(
    v15,
    v1,
    a1 + 1376);
  result = v15[0];
  if ( v15[0] != 2LL && v15[2] == 17LL )
  {
    if ( (unsigned __int64)core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER, 0LL) >= 3 )
    {
      v11 = alacritty::display::window::Window::id(a1 + 800);
      v12[0] = &v11;
      v12[1] = <winit::window::WindowId as core::fmt::Debug>::fmt;
      v16[0] = &off_882550;
      v16[1] = 1LL;
      v16[4] = 0LL;
      v16[2] = v12;
      v16[3] = 1LL;
      *(_QWORD *)&v5 = "alacritty::displayfailed to swap buffers.failed to disable contextContext lost for window Recover"
                       "ed window  from gpu resetfailed to recreate context.failed to reativate context after reset.faile"
                       "d to recreate renderer after reseterror calling swap_buffers: Backward Search: ";
      *((_QWORD *)&v5 + 1) = 18LL;
      v6 = "alacritty::displayfailed to swap buffers.failed to disable contextContext lost for window Recovered window  f"
           "rom gpu resetfailed to recreate context.failed to reativate context after reset.failed to recreate renderer a"
           "fter reseterror calling swap_buffers: Backward Search: ";
      v7 = 18LL;
      v8 = log::__private_api::loc(&off_882580);
      log::__private_api::log(v16, 3LL, &v5);
    }
    core::ptr::drop_in_place<glutin::error::Error>(v15);
    goto LABEL_9;
  }
  if ( LODWORD(v15[0]) != 2 )
    return core::ptr::drop_in_place<glutin::error::Error>(v15);
  return result;
}