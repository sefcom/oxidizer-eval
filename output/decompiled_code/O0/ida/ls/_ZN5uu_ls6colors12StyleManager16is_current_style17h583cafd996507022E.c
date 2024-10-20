char __fastcall uu_ls::colors::StyleManager::is_current_style(_BYTE *a1, _BYTE *a2)
{
  char result; // al
  char v3; // dl
  char v4; // cl
  char v5; // dl
  char v6; // cl
  char v7; // dl
  char v8; // cl

  if ( a1[8] == 2 )
    return 0;
  v3 = a1[17];
  v4 = a2[9];
  if ( v3 == 18 || v4 == 18 )
  {
    result = 0;
    if ( v3 != 18 || v4 != 18 )
      return result;
  }
  else if ( !(unsigned __int8)<lscolors::style::Color as core::cmp::PartialEq>::eq(a1 + 17, a2 + 9) )
  {
    return 0;
  }
  v5 = a1[21];
  v6 = a2[13];
  if ( v5 != 18 && v6 != 18 )
  {
    if ( (unsigned __int8)<lscolors::style::Color as core::cmp::PartialEq>::eq(a1 + 21, a2 + 13) )
      goto LABEL_16;
    return 0;
  }
  result = 0;
  if ( v5 != 18 || v6 != 18 )
    return result;
LABEL_16:
  if ( !(unsigned __int8)<lscolors::style::FontStyle as core::cmp::PartialEq>::eq(a1 + 8, a2) )
    return 0;
  v7 = a1[25];
  v8 = a2[17];
  result = v7 == 18 && v8 == 18;
  if ( v7 != 18 && v8 != 18 )
    return <lscolors::style::Color as core::cmp::PartialEq>::eq(a1 + 25, a2 + 17);
  return result;
}
