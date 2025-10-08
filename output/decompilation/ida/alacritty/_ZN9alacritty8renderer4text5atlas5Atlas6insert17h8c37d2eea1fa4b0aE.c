__int64 __fastcall alacritty::renderer::text::atlas::Atlas::insert(_BYTE *a1, unsigned int *a2, __int64 a3)
{
  int v3; // r8d
  __int64 result; // rax
  int v5; // r9d
  signed int v6; // r10d
  unsigned int v7; // r11d
  unsigned int v8; // ebx
  int v9; // ebp
  unsigned int v10; // ebx
  int v11; // r10d

  v3 = *(_DWORD *)(a3 + 44);
  result = a2[1];
  if ( v3 <= (int)result )
  {
    v5 = *(_DWORD *)(a3 + 48);
    v6 = a2[2];
    if ( v5 <= v6 )
    {
      v7 = a2[3];
      v8 = a2[4];
      v9 = v6 - v8;
      if ( v5 >= (int)(v6 - v8) || (int)(v7 + v3) > (int)result )
      {
        v10 = a2[5] + v8;
        v11 = v6 - v10;
        if ( v11 <= 0 )
        {
LABEL_11:
          *a1 = 0;
          goto LABEL_4;
        }
        a2[4] = v10;
        a2[3] = 0;
        a2[5] = 0;
        v7 = 0;
        v9 = v11;
      }
      if ( (int)(v3 + v7) <= (int)result && v5 < v9 )
        alacritty::renderer::text::atlas::Atlas::insert_inner();
      goto LABEL_11;
    }
  }
  *a1 = 1;
LABEL_4:
  a1[28] = 2;
  return result;
}