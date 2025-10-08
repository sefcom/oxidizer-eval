void __fastcall alacritty::renderer::text::builtin_font::Canvas::put_pixel(
        _QWORD *a1,
        unsigned int a2,
        float a3,
        float a4)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // r11
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx

  if ( a3 >= 0.0 && a4 >= 0.0 )
  {
    v4 = a1[3];
    if ( v4 < 0 )
    {
      v5 = (a1[3] >> 1) | a1[3] & 1LL;
      if ( a3 > (float)((float)((float)(int)v5 + (float)(int)v5) + -1.0) )
        return;
    }
    else if ( a3 > (float)((float)(int)v4 + -1.0) )
    {
      return;
    }
    v6 = a1[4];
    if ( v6 < 0 )
    {
      v7 = (a1[4] >> 1) | a1[4] & 1LL;
      if ( a4 > (float)((float)((float)(int)v7 + (float)(int)v7) + -1.0) )
        return;
    }
    else if ( a4 > (float)((float)(int)v6 + -1.0) )
    {
      return;
    }
    v8 = (unsigned int)(int)a3;
    if ( a3 < 0.0 )
      v8 = 0LL;
    if ( a3 > 1.8446743e19 )
      v8 = -1LL;
    v9 = (unsigned int)(int)a4;
    if ( a4 < 0.0 )
      v9 = 0LL;
    if ( a4 > 1.8446743e19 )
      v9 = -1LL;
    v10 = v8 + v9 * v4;
    v11 = a1[2];
    if ( v10 >= v11 )
      core::panicking::panic_bounds_check(v10, v11, &off_883DA0);
    v12 = a1[1];
    v13 = 3 * v10;
    if ( *(_BYTE *)(v12 + v13) < (unsigned __int8)a2 )
    {
      v14 = v13 + v12;
      *(_BYTE *)v14 = a2;
      *(_WORD *)(v14 + 1) = a2 >> 8;
    }
  }
}