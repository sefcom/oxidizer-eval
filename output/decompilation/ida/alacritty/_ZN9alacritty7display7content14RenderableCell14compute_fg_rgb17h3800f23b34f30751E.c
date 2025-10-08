__int64 __fastcall alacritty::display::content::RenderableCell::compute_fg_rgb(__int64 *a1, unsigned int a2, char a3)
{
  unsigned int v4; // r8d
  __int64 v6; // rdx
  char v7; // al
  int v8; // ecx
  __int64 *v9; // rbx
  unsigned __int16 v10; // ax
  unsigned __int64 v11; // rdx

  v4 = HIWORD(a2);
  if ( !(_BYTE)a2 )
  {
    v6 = a1[29];
    v7 = *(_BYTE *)(v6 + 656);
    v8 = a3 & 0x82;
    if ( v8 > 127 )
    {
      if ( v8 == 128 )
        goto LABEL_21;
      if ( v4 == 256 && !*(_BYTE *)(v6 + 616) )
        return alacritty::display::content::RenderableContent::color(a1[15], a1[30], 0x10CuLL);
      if ( !v7 )
      {
LABEL_21:
        v9 = a1;
        v10 = vte::ansi::NamedColor::to_dim(v4);
        return alacritty::display::content::RenderableContent::color(v9[15], v9[30], v10);
      }
    }
    else if ( v8 && v7 )
    {
      v9 = a1;
      v10 = vte::ansi::NamedColor::to_bright(v4);
      return alacritty::display::content::RenderableContent::color(v9[15], v9[30], v10);
    }
    v11 = v4;
    return alacritty::display::content::RenderableContent::color(a1[15], a1[30], v11);
  }
  if ( (unsigned __int8)a2 != 1 )
  {
    if ( *(_BYTE *)(a1[29] + 656) )
    {
      if ( BYTE1(a2) < 8u && (a3 & 0x82) == 2 )
      {
        v11 = BYTE1(a2) & 7 | 8u;
        return alacritty::display::content::RenderableContent::color(a1[15], a1[30], v11);
      }
    }
    else if ( (a3 & 0x82) == 0x80 )
    {
      if ( (a2 & 0xF800) == 0x800 )
      {
        v11 = (BYTE1(a2) & 0xF) - 8LL;
        return alacritty::display::content::RenderableContent::color(a1[15], a1[30], v11);
      }
      if ( BYTE1(a2) < 8u )
      {
        v11 = (BYTE1(a2) & 7u) + 259;
        return alacritty::display::content::RenderableContent::color(a1[15], a1[30], v11);
      }
    }
    v11 = BYTE1(a2);
    return alacritty::display::content::RenderableContent::color(a1[15], a1[30], v11);
  }
  if ( a3 < 0 )
    return <alacritty::display::color::Rgb as core::ops::arith::Mul<f32>>::mul(BYTE1(a2) | (v4 << 8));
  else
    return (v4 << 8) | BYTE1(a2);
}