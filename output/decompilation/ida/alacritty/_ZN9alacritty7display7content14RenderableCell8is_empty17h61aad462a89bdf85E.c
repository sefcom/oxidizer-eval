bool __fastcall alacritty::display::content::RenderableCell::is_empty(__int64 a1)
{
  bool result; // al

  result = 0;
  if ( *(float *)(a1 + 24) == 0.0 && *(_DWORD *)(a1 + 28) == 32 && !*(_QWORD *)(a1 + 16) )
    return (*(_WORD *)(a1 + 32) & 0x7A08) == 0;
  return result;
}