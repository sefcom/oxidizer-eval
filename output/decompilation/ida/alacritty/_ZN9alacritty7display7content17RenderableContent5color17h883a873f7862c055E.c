__int64 __fastcall alacritty::display::content::RenderableContent::color(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int16 *v3; // rsi

  if ( a3 > 0x10C )
    core::panicking::panic_bounds_check(a3, 269LL, &off_882108);
  v3 = (unsigned __int16 *)(3 * a3 + a2);
  if ( (*(_BYTE *)(a1 + 4 * a3) & 1) != 0 )
    v3 = (unsigned __int16 *)(a1 + 4 * a3 + 1);
  return *v3 | (*((unsigned __int8 *)v3 + 2) << 16);
}