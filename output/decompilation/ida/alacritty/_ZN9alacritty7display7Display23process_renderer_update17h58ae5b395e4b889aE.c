__int64 __fastcall alacritty::display::Display::process_renderer_update(__int64 a1)
{
  __int64 result; // rax
  char v2; // bp
  float v3; // xmm1_4
  int v4; // edx
  float v5; // xmm1_4
  int v6; // ecx

  result = *(unsigned __int8 *)(a1 + 2100);
  v2 = *(_BYTE *)(a1 + 2101);
  *(_BYTE *)(a1 + 2100) = 2;
  if ( (_BYTE)result != 2 )
  {
    if ( (result & 1) != 0 )
    {
      v3 = *(float *)(a1 + 1960);
      v4 = (int)v3;
      if ( v3 < 0.0 )
        v4 = 0;
      if ( v3 > 4294967000.0 )
        v4 = -1;
      if ( !v4 )
        core::option::unwrap_failed(&off_882638);
      v5 = *(float *)(a1 + 1964);
      v6 = (int)v5;
      if ( v5 < 0.0 )
        v6 = 0;
      if ( v5 > 4294967000.0 )
        v6 = -1;
      if ( !v6 )
        core::option::unwrap_failed(&off_882650);
      <glutin::surface::Surface<T> as glutin::surface::GlSurface<T>>::resize(a1 + 1376, *(_QWORD *)(a1 + 680));
    }
    alacritty::display::Display::make_current(a1);
    if ( (v2 & 1) != 0 )
      alacritty::display::Display::reset_glyph_cache(a1);
    alacritty::renderer::Renderer::resize(a1 + 224, a1 + 1944);
  }
  return result;
}