bool __fastcall alacritty::config::cursor::<impl core::convert::From<alacritty::config::cursor::ConfigCursorStyle> for vte::ansi::CursorStyle>::from(
        __int16 a1)
{
  return (a1 & 0xFE00) == 512 && (_BYTE)a1 != 3;
}