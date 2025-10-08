__int64 __fastcall zoxide::config::fzf_opts(__int64 a1)
{
  return std::env::var_os(a1, aZoFzfOpts, 12LL);
}