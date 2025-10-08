__int64 __fastcall alacritty::config::after_loading(__int64 *a1, __int64 a2, __int64 a3)
{
  return alacritty::cli::Options::override_config(a2, a1, a3);
}