__int64 __fastcall alacritty::renderer::text::builtin_font::builtin_glyph(
        _OWORD *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int8 a4,
        unsigned __int8 a5,
        char a6,
        char a7)
{
  __int64 result; // rax
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // [rsp+0h] [rbp-98h] BYREF
  __int128 v12; // [rsp+10h] [rbp-88h]
  __int128 v13; // [rsp+20h] [rbp-78h]
  __int128 v14; // [rsp+30h] [rbp-68h]
  _OWORD v15[5]; // [rsp+48h] [rbp-50h] BYREF

  if ( (unsigned int)(a2 - 9472) < 0xA0 || (unsigned int)(a2 - 129792) < 0x3C )
  {
    alacritty::renderer::text::builtin_font::box_drawing(&v11, a2, a3, a4, a5);
LABEL_3:
    DWORD2(v14) -= a6;
    result = (unsigned int)a7;
    DWORD1(v14) -= result;
    v9 = v11;
    v10 = v12;
    a1[2] = v13;
    a1[1] = v10;
    *a1 = v9;
    a1[3] = v14;
    return result;
  }
  result = a2 & 0x1FFFFC;
  if ( (_DWORD)result == 57520 )
  {
    result = alacritty::renderer::text::builtin_font::powerline_drawing(v15, a2, a3, a4, a5);
    if ( LODWORD(v15[0]) != 2 )
    {
      v14 = v15[3];
      v13 = v15[2];
      v12 = v15[1];
      v11 = v15[0];
      goto LABEL_3;
    }
  }
  *(_QWORD *)a1 = 2LL;
  return result;
}