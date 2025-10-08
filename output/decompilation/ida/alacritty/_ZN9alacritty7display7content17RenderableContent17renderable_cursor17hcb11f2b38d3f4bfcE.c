__int64 __fastcall alacritty::display::content::RenderableContent::renderable_cursor(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        double a4)
{
  __int64 v4; // r13
  __int64 v5; // rdx
  __int64 v6; // rax
  unsigned __int8 v7; // r12
  int v8; // r14d
  unsigned int v9; // eax
  char v10; // r15
  unsigned int v11; // ebp
  unsigned int v12; // eax
  unsigned int v13; // r12d
  unsigned int v14; // r13d
  int v15; // ecx
  __int64 result; // rax
  int v17; // [rsp+Ch] [rbp-4Ch]
  __int64 v19; // [rsp+20h] [rbp-38h]

  v4 = a2;
  v5 = *(_QWORD *)(a2 + 232);
  v6 = (*(_DWORD *)(a2 + 192) >> 13) & 8;
  v7 = *(_BYTE *)(v5 + v6 + 512);
  v19 = v5;
  v8 = *(unsigned __int16 *)(v5 + v6 + 513) | (*(unsigned __int8 *)(v5 + v6 + 515) << 16);
  v9 = core::option::Option<T>::map_or(
         *(unsigned int *)(*(_QWORD *)(a2 + 120) + 1032LL),
         *(unsigned int *)(v5 + v6 + 516));
  v10 = v9;
  v11 = v9 >> 8;
  if ( (_BYTE)v9 == 2 && v7 == 2 )
  {
    v12 = v8;
  }
  else
  {
    v17 = v7;
    v13 = *(unsigned __int16 *)(a3 + 34) | (*(unsigned __int8 *)(a3 + 36) << 16);
    v14 = *(unsigned __int16 *)(a3 + 37) | (*(unsigned __int8 *)(a3 + 39) << 16);
    vte::ansi::Rgb::contrast(v13, v14);
    v12 = v13;
    if ( v17 )
    {
      v12 = v14;
      if ( v17 != 1 )
        v12 = v8;
    }
    if ( v10 )
    {
      v13 = v14;
      if ( v10 == 2 )
        v13 = v11;
    }
    v11 = v13;
    v4 = a2;
    if ( a4 < 1.5 )
    {
      v11 = *(unsigned __int16 *)(v19 + 624) | (*(unsigned __int8 *)(v19 + 626) << 16);
      v12 = *(unsigned __int16 *)(v19 + 627) | (*(unsigned __int8 *)(v19 + 629) << 16);
    }
  }
  v15 = 2 - ((*(_WORD *)(a3 + 32) & 0x20) == 0);
  *(_BYTE *)(a1 + 26) = *(_BYTE *)(v4 + 280);
  *(_WORD *)(a1 + 20) = v11;
  *(_BYTE *)(a1 + 22) = BYTE2(v11);
  *(_WORD *)(a1 + 23) = v12;
  result = HIWORD(v12);
  *(_BYTE *)(a1 + 25) = result;
  *(_DWORD *)(a1 + 16) = v15;
  *(_OWORD *)a1 = *(_OWORD *)(v4 + 256);
  return result;
}