__int64 __fastcall alacritty::config::ui_config::UiConfig::term_options(__int64 a1, __int64 a2)
{
  char v2; // r15
  __int64 v3; // r12
  char v4; // bp
  bool v5; // al
  char v6; // dl
  bool v7; // al
  char v8; // cl
  char v9; // dl
  __int64 result; // rax
  __int128 v11; // [rsp+8h] [rbp-40h] BYREF
  __int64 v12; // [rsp+18h] [rbp-30h]

  <alloc::string::String as core::clone::Clone>::clone(&v11, a2 + 72);
  v3 = *(unsigned int *)(a2 + 1040);
  if ( *(_BYTE *)(a2 + 980) == 4 )
  {
    v4 = 2;
  }
  else
  {
    v5 = alacritty::config::cursor::<impl core::convert::From<alacritty::config::cursor::ConfigCursorStyle> for vte::ansi::CursorStyle>::from((*(unsigned __int8 *)(a2 + 981) << 8) | *(unsigned __int8 *)(a2 + 980));
    v2 = v6;
    v4 = v5;
  }
  v7 = alacritty::config::cursor::<impl core::convert::From<alacritty::config::cursor::ConfigCursorStyle> for vte::ansi::CursorStyle>::from(*(_WORD *)(a2 + 982));
  v8 = *(_BYTE *)(a2 + 912);
  *(_QWORD *)(a1 + 24) = v3;
  *(_BYTE *)(a1 + 32) = v7;
  *(_BYTE *)(a1 + 33) = v9;
  *(_BYTE *)(a1 + 34) = v4;
  *(_BYTE *)(a1 + 35) = v2;
  result = v12;
  *(_QWORD *)(a1 + 16) = v12;
  *(_OWORD *)a1 = v11;
  *(_BYTE *)(a1 + 36) = 1;
  *(_BYTE *)(a1 + 37) = v8;
  return result;
}