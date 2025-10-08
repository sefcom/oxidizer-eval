char __fastcall alacritty::config::monitor::ConfigMonitor::needs_restart(char a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  char v4; // cl
  char result; // al

  v4 = alacritty::config::monitor::ConfigMonitor::hash_paths(a3);
  result = 1;
  if ( (v4 & 1) != 0 )
    return a1 & (v3 == a2);
  return result;
}