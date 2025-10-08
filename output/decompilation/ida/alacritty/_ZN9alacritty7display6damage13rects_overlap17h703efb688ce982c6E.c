bool __fastcall alacritty::display::damage::rects_overlap(_DWORD *a1, _DWORD *a2)
{
  int v3; // eax
  int v4; // ecx

  if ( *a1 + a1[2] < *a2 )
    return 0;
  if ( a2[2] + *a2 < *a1 )
    return 0;
  v3 = a1[1];
  v4 = a2[1];
  return v3 + a1[3] >= v4 && a2[3] + v4 >= v3;
}