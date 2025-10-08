__int64 __fastcall alacritty::display::content::RenderableCell::compute_cell_rgb(
        unsigned __int16 *a1,
        unsigned __int16 *a2,
        _DWORD *a3,
        unsigned int a4,
        unsigned int a5)
{
  int v6; // eax
  int v7; // ecx
  int v8; // ecx
  int v9; // eax
  __int64 v10; // rdx
  int v11; // eax
  __int64 result; // rax

  if ( !(_BYTE)a4 )
  {
    v6 = *a1;
    v7 = *((unsigned __int8 *)a1 + 2);
    goto LABEL_5;
  }
  if ( (unsigned __int8)a4 == 1 )
  {
    v6 = *a2;
    v7 = *((unsigned __int8 *)a2 + 2);
LABEL_5:
    v8 = v6 | (v7 << 16);
    goto LABEL_7;
  }
  v8 = a4 >> 8;
LABEL_7:
  v9 = *a1;
  v10 = *((unsigned __int8 *)a1 + 2);
  *a1 = v8;
  *((_BYTE *)a1 + 2) = BYTE2(v8);
  if ( (_BYTE)a5 )
  {
    if ( (unsigned __int8)a5 == 2 )
      v11 = a5 >> 8;
    else
      v11 = *a2 | (*((unsigned __int8 *)a2 + 2) << 16);
  }
  else
  {
    v10 = (unsigned int)((_DWORD)v10 << 16);
    v11 = v10 | v9;
  }
  *a2 = v11;
  *((_BYTE *)a2 + 2) = BYTE2(v11);
  result = <alacritty::display::color::CellRgb as core::cmp::PartialEq>::eq((unsigned __int8)a5, a2, v10);
  if ( !(_BYTE)result )
    *a3 = 1065353216;
  return result;
}