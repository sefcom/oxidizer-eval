// attributes: thunk
__int64 __fastcall alacritty::cli::WindowOptions::config_overrides(__int64 a1, __int64 a2, __int64 a3)
{
  return alacritty::cli::ParsedOptions::from_options(a1, a2, a3);
}