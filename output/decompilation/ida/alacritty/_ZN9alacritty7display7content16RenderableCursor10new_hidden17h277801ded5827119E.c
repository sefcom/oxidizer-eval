void __fastcall alacritty::display::content::RenderableCursor::new_hidden(__int64 a1)
{
  *(_BYTE *)(a1 + 26) = 4;
  *(_WORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 16) = 1LL;
  *(_OWORD *)a1 = 0LL;
}