__int64 alacritty_terminal::tty::setup_env()
{
  const char *v0; // rdx
  __int64 v1; // rcx

  if ( (unsigned __int8)alacritty_terminal::tty::terminfo_exists() )
  {
    v0 = aAlacritty_3;
    v1 = 9LL;
  }
  else
  {
    v0 = aXterm256color;
    v1 = 14LL;
  }
  std::env::set_var(aTerm_0, 4LL, v0, v1);
  return std::env::set_var(aColorterm, 9LL, aTruecolor, 9LL);
}