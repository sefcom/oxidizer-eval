__int64 __fastcall alacritty::display::content::RenderableCell::compute_bg_rgb(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // ecx
  char v4; // al
  unsigned int v5; // edx

  v3 = HIWORD(a3);
  if ( !(_BYTE)a3 )
    return alacritty::display::content::RenderableContent::color(a1, a2, v3);
  v4 = a3;
  v5 = a3 >> 8;
  if ( v4 == 1 )
    return (v3 << 8) | (unsigned __int8)v5;
  else
    return alacritty::display::content::RenderableContent::color(a1, a2, (unsigned __int8)v5);
}