char __fastcall uu_ls::colors::StyleManager::is_current_style(_BYTE *a1, _BYTE *a2)
{
  char v2; // al
  char result; // al
  int v4; // ecx
  char v5; // dl
  int v6; // ecx
  char v7; // dl
  char v8; // dl
  char v9; // cl

  v2 = a1[8];
  if ( v2 == 2 )
    return 0;
  v4 = (unsigned __int8)a1[17];
  v5 = a2[9];
  if ( v4 == 18 )
  {
    if ( v5 != 18 )
      return 0;
  }
  else
  {
    if ( v5 == 18 || (_BYTE)v4 != v5 )
      return 0;
    if ( v4 == 16 )
    {
      if ( a1[18] != a2[10] )
        return 0;
    }
    else if ( v4 == 17 && (a1[18] != a2[10] || a1[19] != a2[11] || a1[20] != a2[12]) )
    {
      return 0;
    }
  }
  v6 = (unsigned __int8)a1[21];
  v7 = a2[13];
  if ( v6 == 18 )
  {
    if ( v7 == 18 )
      goto LABEL_8;
    return 0;
  }
  if ( v7 == 18 || (_BYTE)v6 != v7 )
    return 0;
  if ( v6 == 16 )
  {
    if ( a1[22] == a2[14] )
      goto LABEL_8;
    return 0;
  }
  if ( v6 == 17 && (a1[22] != a2[14] || a1[23] != a2[15] || a1[24] != a2[16]) )
    return 0;
LABEL_8:
  if ( (v2 != 0) == (*a2 == 0)
    || (a1[9] != 0) == (a2[1] == 0)
    || (a1[10] != 0) == (a2[2] == 0)
    || (a1[11] != 0) == (a2[3] == 0)
    || (a1[12] != 0) == (a2[4] == 0)
    || (a1[13] != 0) == (a2[5] == 0)
    || (a1[14] != 0) == (a2[6] == 0)
    || (a1[15] != 0) == (a2[7] == 0)
    || (a1[16] != 0) == (a2[8] == 0) )
  {
    return 0;
  }
  v8 = a1[25];
  v9 = a2[17];
  result = v8 == 18 && v9 == 18;
  if ( v8 != 18 && v9 != 18 )
    return <lscolors::style::Color as core::cmp::PartialEq>::eq(a1 + 25, a2 + 17);
  return result;
}
