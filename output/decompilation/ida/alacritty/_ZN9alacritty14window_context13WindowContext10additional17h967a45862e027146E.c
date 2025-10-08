__int64 __fastcall alacritty::window_context::WindowContext::additional(
        _QWORD *dest,
        __int64 a2,
        _QWORD *a3,
        __int64 a4,
        __int64 a5,
        _QWORD *a6,
        const __m128i *a7)
{
  __int64 v9; // rdx
  __int64 v10; // rax
  unsigned __int8 v11; // dl
  __m128i si128; // xmm0
  __int64 (__fastcall **v13)(); // rax
  char v14; // r14
  __m128i v15; // xmm0
  __int64 result; // rax
  __m128i v17; // xmm0
  __int64 v20; // [rsp+18h] [rbp-4A70h] BYREF
  _QWORD v21[2]; // [rsp+20h] [rbp-4A68h] BYREF
  __m128i v22[11]; // [rsp+30h] [rbp-4A58h] BYREF
  __int128 v23[2]; // [rsp+E0h] [rbp-49A8h] BYREF
  __int64 v24; // [rsp+100h] [rbp-4988h]
  __m128i v25; // [rsp+110h] [rbp-4978h]
  __int128 v26; // [rsp+120h] [rbp-4968h]
  _BYTE v27[72]; // [rsp+130h] [rbp-4958h] BYREF
  _QWORD v28[31]; // [rsp+178h] [rbp-4910h] BYREF
  _BYTE v29[7744]; // [rsp+270h] [rbp-4818h] BYREF
  __m128i v30[484]; // [rsp+20B0h] [rbp-29D8h] BYREF
  __int64 v31; // [rsp+3EF8h] [rbp-B90h] BYREF
  __m128i v32; // [rsp+3F00h] [rbp-B88h]
  __m128i v33; // [rsp+3F10h] [rbp-B78h]
  __m128i v34; // [rsp+3F20h] [rbp-B68h]
  __m128i v35; // [rsp+3F30h] [rbp-B58h]
  __int64 v36; // [rsp+3F40h] [rbp-B48h]
  _BYTE v37[2832]; // [rsp+3F48h] [rbp-B40h] BYREF

  v30[410].m128i_i64[1] = 0LL;
  v30[154].m128i_i64[1] = 0LL;
  *(_QWORD *)&v29[6120] = 0LL;
  *(_QWORD *)&v29[2024] = 0LL;
  v20 = a5;
  v21[0] = <glutin::config::Config as glutin::display::GetGlDisplay>::display(a2);
  v21[1] = v9;
  <alacritty::config::window::Identity as core::clone::Clone>::clone(v27, a5 + 328);
  alacritty::cli::WindowIdentity::override_identity_config(a6 + 10, (__int64)v27);
  v10 = <glutin::config::Config as glutin::platform::x11::X11GlConfigExt>::x11_visual(a2);
  alacritty::display::window::Window::new((__int64)v29, a3, a5 + 16, (__int64)v27, (__int64)a6, v10, v11);
  v30[0] = *(__m128i *)&v29[8];
  v30[1] = *(__m128i *)&v29[24];
  v30[2] = *(__m128i *)&v29[40];
  v30[3] = *(__m128i *)&v29[56];
  if ( __OFSUB__(-*(_QWORD *)v29, 1LL) )
  {
    si128 = _mm_load_si128(v30);
    *(__m128i *)&v29[48] = v30[3];
    *(__m128i *)&v29[32] = v30[2];
    *(__m128i *)&v29[16] = v30[1];
    *(__m128i *)v29 = si128;
    dest[2] = alloc::boxed::Box<T>::new(v29);
    v13 = &off_8842F0;
LABEL_3:
    dest[3] = v13;
    dest[1] = 0LL;
    *dest = 3LL;
    v14 = 1;
    goto LABEL_8;
  }
  memcpy(&v28[9], &v29[72], 0xB0uLL);
  *(__m128i *)&v28[1] = _mm_load_si128(v30);
  *(__m128i *)&v28[3] = v30[1];
  *(__m128i *)&v28[5] = v30[2];
  *(__m128i *)&v28[7] = v30[3];
  v28[0] = *(_QWORD *)v29;
  <winit::window::Window as raw_window_handle::borrowed::HasWindowHandle>::window_handle(v29, &v28[4]);
  core::result::Result<T,E>::unwrap(v30, v29, &off_882478);
  *(_QWORD *)&v29[16] = v30[1].m128i_i64[0];
  *(__m128i *)v29 = _mm_loadu_si128(v30);
  alacritty::renderer::platform::create_gl_context(v30, (__int64)v21, a2, (__int128 *)v29);
  v22[0] = *(__m128i *)((char *)v30 + 8);
  v22[1] = *(__m128i *)((char *)&v30[1] + 8);
  v22[2].m128i_i64[0] = v30[2].m128i_i64[1];
  if ( v30[0].m128i_i64[0] == 2 )
  {
    v23[0] = (__int128)_mm_load_si128(v22);
    v23[1] = (__int128)v22[1];
    v24 = v22[2].m128i_i64[0];
    memcpy(v30, v28, 0xF8uLL);
    alacritty::display::Display::new((__int64)v29, (__int64)v30, v23, a5 + 16);
    v22[0] = *(__m128i *)&v29[8];
    v22[1] = *(__m128i *)&v29[24];
    v22[2] = *(__m128i *)&v29[40];
    v22[3] = *(__m128i *)&v29[56];
    v22[4].m128i_i64[0] = *(_QWORD *)&v29[72];
    if ( *(_QWORD *)v29 == 2LL )
    {
      *(_QWORD *)&v29[64] = v22[4].m128i_i64[0];
      v15 = _mm_load_si128(v22);
      *(__m128i *)&v29[48] = v22[3];
      *(__m128i *)&v29[32] = v22[2];
      *(__m128i *)&v29[16] = v22[1];
      *(__m128i *)v29 = v15;
      dest[2] = alloc::boxed::Box<T>::new(v29);
      v13 = &off_884200;
      goto LABEL_3;
    }
    memcpy(v37, &v29[80], sizeof(v37));
    v31 = *(_QWORD *)v29;
    v32 = v22[0];
    v33 = v22[1];
    v34 = v22[2];
    v35 = v22[3];
    v36 = v22[4].m128i_i64[0];
    memcpy(v22, a6, sizeof(v22));
    v17 = _mm_loadu_si128((const __m128i *)a4);
    v26 = *(_OWORD *)(a4 + 16);
    v25 = v17;
    alacritty::window_context::WindowContext::new(v29, &v31);
    if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_load_si128((const __m128i *)v29), (__m128i)xmmword_E9660)) != 0xFFFF )
    {
      memcpy(&v30[2], &v29[32], 0x1E20uLL);
      v30[0] = *(__m128i *)v29;
      v30[1] = *(__m128i *)&v29[16];
      core::ptr::drop_in_place<alacritty::cli::ParsedOptions>(&v30[479].m128i_u64[1]);
      v30[480].m128i_i64[1] = a7[1].m128i_i64[0];
      *(__m128i *)((char *)&v30[479] + 8) = _mm_loadu_si128(a7);
      memcpy(dest, v30, 0x1E40uLL);
      core::ptr::drop_in_place<alacritty::config::window::Identity>(v27);
      return core::ptr::drop_in_place<glutin::display::Display>(v21);
    }
    *((_OWORD *)dest + 1) = *(_OWORD *)&v29[16];
    dest[1] = 0LL;
    *dest = 3LL;
    v14 = 0;
  }
  else
  {
    *(__m128i *)&v29[48] = v30[3];
    *(__m128i *)&v29[8] = _mm_load_si128(v22);
    *(__m128i *)&v29[24] = v22[1];
    *(_QWORD *)&v29[40] = v22[2].m128i_i64[0];
    *(_QWORD *)v29 = v30[0].m128i_i64[0];
    dest[2] = alloc::boxed::Box<T>::new(v29);
    dest[3] = &off_884278;
    dest[1] = 0LL;
    *dest = 3LL;
    v14 = 1;
    core::ptr::drop_in_place<alacritty::display::window::Window>(v28);
  }
LABEL_8:
  core::ptr::drop_in_place<alacritty::config::window::Identity>(v27);
  core::ptr::drop_in_place<glutin::display::Display>(v21);
  result = core::ptr::drop_in_place<alacritty::cli::ParsedOptions>(a7);
  if ( v14 )
  {
    core::ptr::drop_in_place<alacritty::cli::WindowOptions>(a6);
    core::ptr::drop_in_place<alloc::rc::Rc<alacritty::config::ui_config::UiConfig>>(&v20);
    return core::ptr::drop_in_place<winit::event_loop::EventLoopProxy<alacritty::event::Event>>(a4);
  }
  return result;
}