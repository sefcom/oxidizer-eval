__int64 __fastcall alacritty::config::font::Font::italic(__int64 a1, __int64 a2)
{
  return alacritty::config::font::SecondaryFontDescription::desc(a1, a2 + 96, a2);
}