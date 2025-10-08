__int64 __fastcall alacritty::display::content::RenderableContent::cursor(_OWORD *a1, __int64 a2)
{
  __int128 v2; // xmm0

  v2 = *(_OWORD *)(a2 + 200);
  a1[1] = *(_OWORD *)(a2 + 216);
  *a1 = v2;
  return core::ptr::drop_in_place<alacritty::display::content::RenderableContent>(a2);
}