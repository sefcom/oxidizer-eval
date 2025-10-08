__int64 __fastcall alacritty::display::Display::new(__int64 a1, __int64 a2, __int128 *a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v5; // r13
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm2
  float v9; // xmm0_4
  float v10; // xmm0_4
  float v11; // xmm0_4
  int v12; // ecx
  int v13; // r12d
  __int64 v14; // rax
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm2
  float v18; // xmm0_4
  float v19; // xmm0_4
  unsigned int v20; // eax
  unsigned int v21; // edx
  unsigned int v22; // ebp
  unsigned int v23; // edx
  unsigned int v24; // r14d
  __int64 v25; // rax
  __int128 v26; // xmm0
  __int64 v27; // rax
  __int128 v28; // xmm0
  char v29; // bl
  __int128 v30; // xmm0
  bool v31; // zf
  float v34; // [rsp+Ch] [rbp-C5Ch]
  double v35; // [rsp+28h] [rbp-C40h]
  float v36; // [rsp+28h] [rbp-C40h]
  double v38; // [rsp+38h] [rbp-C30h]
  _OWORD v39[2]; // [rsp+B0h] [rbp-BB8h] BYREF
  __int64 v40; // [rsp+D0h] [rbp-B98h]
  _OWORD v41[2]; // [rsp+E0h] [rbp-B88h] BYREF
  __int64 v42; // [rsp+100h] [rbp-B68h]
  __int128 v43; // [rsp+1D0h] [rbp-A98h]
  int v44; // [rsp+1E0h] [rbp-A88h]
  _OWORD dest[29]; // [rsp+1F0h] [rbp-A78h] BYREF
  _BYTE src[264]; // [rsp+3C0h] [rbp-8A8h] BYREF
  int v47; // [rsp+4C8h] [rbp-7A0h]
  __int128 v48; // [rsp+4CCh] [rbp-79Ch]
  __int128 v49; // [rsp+4DCh] [rbp-78Ch]
  int v50; // [rsp+4ECh] [rbp-77Ch]
  _OWORD v51[12]; // [rsp+6F0h] [rbp-578h] BYREF
  int v52; // [rsp+7B0h] [rbp-4B8h]
  int v53; // [rsp+7B4h] [rbp-4B4h]
  char v54; // [rsp+7B8h] [rbp-4B0h]
  char v55; // [rsp+7B9h] [rbp-4AFh]
  __int128 v56; // [rsp+7C8h] [rbp-4A0h] BYREF
  __int64 v57; // [rsp+7D8h] [rbp-490h]
  _OWORD v58[29]; // [rsp+890h] [rbp-3D8h] BYREF
  _QWORD v59[33]; // [rsp+A60h] [rbp-208h] BYREF
  int v60; // [rsp+B68h] [rbp-100h]
  __int128 v61; // [rsp+B6Ch] [rbp-FCh]
  __int128 v62; // [rsp+B7Ch] [rbp-ECh]
  int v63; // [rsp+B8Ch] [rbp-DCh]
  _DWORD v64[42]; // [rsp+B90h] [rbp-D8h] BYREF

  v4 = a2;
  v5 = a2 + 32;
  <winit::window::Window as raw_window_handle::borrowed::HasWindowHandle>::window_handle(src, a2 + 32);
  core::result::Result<T,E>::unwrap(dest, src, &off_882478);
  v43 = *(_OWORD *)((char *)dest + 4);
  v44 = DWORD1(dest[1]);
  v35 = *(double *)(a2 + 24);
  <crossfont::ft::FreeTypeRasterizer as crossfont::Rasterize>::new(src);
  if ( *(_DWORD *)&src[160] == 1000000001 )
  {
    v6 = *(_OWORD *)src;
    v7 = *(_OWORD *)&src[16];
    v8 = *(_OWORD *)&src[32];
    dest[3] = *(_OWORD *)&src[48];
    dest[2] = *(_OWORD *)&src[32];
    dest[1] = *(_OWORD *)&src[16];
    dest[0] = *(_OWORD *)src;
    *(_OWORD *)(a1 + 64) = *(_OWORD *)&src[48];
    *(_OWORD *)(a1 + 48) = v8;
    *(_OWORD *)(a1 + 32) = v7;
    *(_OWORD *)(a1 + 16) = v6;
    *(_QWORD *)(a1 + 8) = 1LL;
    *(_QWORD *)a1 = 2LL;
LABEL_19:
    core::ptr::drop_in_place<glutin::context::NotCurrentContext>(a3);
    return core::ptr::drop_in_place<alacritty::display::window::Window>(v4);
  }
  v9 = v35;
  v36 = v9;
  memcpy(dest, src, 0xA0uLL);
  memcpy(v64, dest, 0xA0uLL);
  v10 = (double)*(int *)(a4 + 296) / 1000000.0;
  v64[40] = *(_DWORD *)&src[160];
  v11 = fminf(3999.0, fmaxf(1.0, v10 * v36)) * 1000000.0;
  v12 = 0;
  if ( v11 >= 0.0 )
    v12 = (int)v11;
  v64[41] = *(_DWORD *)&src[164];
  v13 = -1;
  if ( v11 <= 4294967000.0 )
    v13 = v12;
  if ( (unsigned __int64)core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER, 0LL) >= 4 )
  {
    v59[0] = a4 + 104;
    *(_QWORD *)&v58[0] = v59;
    *((_QWORD *)&v58[0] + 1) = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)src = &off_8823D8;
    *(_QWORD *)&src[8] = 2LL;
    *(_QWORD *)&src[32] = 0LL;
    *(_QWORD *)&src[16] = v58;
    *(_QWORD *)&src[24] = 1LL;
    v14 = log::__private_api::loc(&off_882490);
    *(_QWORD *)&dest[0] = "alacritty::displayfailed to swap buffers.failed to disable contextContext lost for window Reco"
                          "vered window  from gpu resetfailed to recreate context.failed to reativate context after reset"
                          ".failed to recreate renderer after reseterror calling swap_buffers: Backward Search: ";
    *((_QWORD *)&dest[0] + 1) = 18LL;
    *(_QWORD *)&dest[1] = "alacritty::displayfailed to swap buffers.failed to disable contextContext lost for window Reco"
                          "vered window  from gpu resetfailed to recreate context.failed to reativate context after reset"
                          ".failed to recreate renderer after reseterror calling swap_buffers: Backward Search: ";
    *((_QWORD *)&dest[1] + 1) = 18LL;
    *(_QWORD *)&dest[2] = v14;
    log::__private_api::log(src, 4LL, dest);
  }
  <alacritty::config::font::Font as core::clone::Clone>::clone(src, a4 + 104);
  v53 = *(_DWORD *)&src[196];
  v54 = src[200];
  v51[0] = *(_OWORD *)src;
  v51[1] = *(_OWORD *)&src[16];
  v51[2] = *(_OWORD *)&src[32];
  v51[3] = *(_OWORD *)&src[48];
  v51[4] = *(_OWORD *)&src[64];
  v51[5] = *(_OWORD *)&src[80];
  v51[6] = *(_OWORD *)&src[96];
  v51[7] = *(_OWORD *)&src[112];
  v51[8] = *(_OWORD *)&src[128];
  v51[11] = *(_OWORD *)&src[176];
  v51[10] = *(_OWORD *)&src[160];
  v51[9] = *(_OWORD *)&src[144];
  v52 = v13;
  v55 = src[201];
  memcpy(v58, v64, 0xA8uLL);
  alacritty::renderer::text::glyph_cache::GlyphCache::new(src, v58);
  if ( v47 == 1000000001 )
  {
    v15 = *(_OWORD *)src;
    v16 = *(_OWORD *)&src[16];
    v17 = *(_OWORD *)&src[32];
    dest[3] = *(_OWORD *)&src[48];
    dest[2] = *(_OWORD *)&src[32];
    dest[1] = *(_OWORD *)&src[16];
    dest[0] = *(_OWORD *)src;
    *(_OWORD *)(a1 + 64) = *(_OWORD *)&src[48];
    *(_OWORD *)(a1 + 48) = v17;
    *(_OWORD *)(a1 + 32) = v16;
    *(_OWORD *)(a1 + 16) = v15;
    *(_QWORD *)(a1 + 8) = 1LL;
    *(_QWORD *)a1 = 2LL;
    core::ptr::drop_in_place<alacritty::config::font::Font>(v51);
    v4 = a2;
    goto LABEL_19;
  }
  memcpy(dest, src, 0x108uLL);
  v61 = v48;
  v62 = v49;
  v63 = v50;
  memcpy(v59, dest, sizeof(v59));
  v60 = v47;
  v38 = (double)*(char *)(a4 + 301);
  v18 = fmax(floor((double)*(char *)(a4 + 300) + *(double *)&v59[8]), 1.0);
  v34 = v18;
  v19 = fmax(floor(v38 + *(double *)&v59[9]), 1.0);
  alacritty::config::window::WindowConfig::dimensions(src, *(_QWORD *)(a4 + 392), *(_QWORD *)(a4 + 400));
  if ( *(_DWORD *)src == 1 )
  {
    v20 = alacritty::display::window_size(
            *(unsigned int *)(a4 + 424),
            *(unsigned __int16 *)(a4 + 426),
            *(_QWORD *)&src[8],
            *(_QWORD *)&src[16],
            v34,
            v19,
            v36);
    winit::window::Window::request_inner_size(dest, v5, v20, v21);
  }
  v22 = winit::window::Window::inner_size(*(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40));
  v24 = v23;
  <winit::window::Window as raw_window_handle::borrowed::HasWindowHandle>::window_handle(v58, v5);
  core::result::Result<T,E>::unwrap(&v56, v58, &off_882478);
  v58[0] = v56;
  *(_QWORD *)&v58[1] = v57;
  alacritty::renderer::platform::create_gl_surface(src, a3, v22, v24, v58);
  v25 = *(_QWORD *)src;
  dest[0] = *(_OWORD *)&src[8];
  dest[1] = *(_OWORD *)&src[24];
  *(_QWORD *)&dest[2] = *(_QWORD *)&src[40];
  if ( *(_QWORD *)src == 2LL )
  {
    v39[0] = dest[0];
    v39[1] = dest[1];
    v40 = *(_QWORD *)&dest[2];
    *(_QWORD *)&dest[2] = *((_QWORD *)a3 + 4);
    v26 = *a3;
    dest[1] = a3[1];
    dest[0] = v26;
    <glutin::context::NotCurrentContext as glutin::context::NotCurrentGlContext>::make_current(src, dest, v39);
    v27 = *(_QWORD *)src;
    v58[0] = *(_OWORD *)&src[8];
    v58[1] = *(_OWORD *)&src[24];
    *(_QWORD *)&v58[2] = *(_QWORD *)&src[40];
    if ( *(_QWORD *)src == 2LL )
    {
      v41[0] = v58[0];
      v41[1] = v58[1];
      v42 = *(_QWORD *)&v58[2];
      alacritty::renderer::Renderer::new(src, v41, *(unsigned __int8 *)(a4 + 14));
    }
    *(_OWORD *)(a1 + 64) = *(_OWORD *)&src[48];
    *(_QWORD *)(a1 + 56) = *(_QWORD *)&v58[2];
    v30 = v58[0];
    *(_OWORD *)(a1 + 40) = v58[1];
    *(_OWORD *)(a1 + 24) = v30;
    *(_QWORD *)(a1 + 8) = 3LL;
    *(_QWORD *)(a1 + 16) = v27;
    *(_QWORD *)a1 = 2LL;
    v29 = 0;
    core::ptr::drop_in_place<glutin::surface::Surface<glutin::surface::WindowSurface>>(v39);
  }
  else
  {
    *(_OWORD *)(a1 + 64) = *(_OWORD *)&src[48];
    *(_QWORD *)(a1 + 56) = *(_QWORD *)&dest[2];
    v28 = dest[0];
    *(_OWORD *)(a1 + 40) = dest[1];
    *(_OWORD *)(a1 + 24) = v28;
    *(_QWORD *)(a1 + 8) = 3LL;
    *(_QWORD *)(a1 + 16) = v25;
    *(_QWORD *)a1 = 2LL;
    v29 = 1;
  }
  core::ptr::drop_in_place<alacritty::renderer::text::glyph_cache::GlyphCache>(v59);
  core::ptr::drop_in_place<alacritty::config::font::Font>(v51);
  v31 = v29 == 0;
  v4 = a2;
  if ( !v31 )
    goto LABEL_19;
  return core::ptr::drop_in_place<alacritty::display::window::Window>(v4);
}