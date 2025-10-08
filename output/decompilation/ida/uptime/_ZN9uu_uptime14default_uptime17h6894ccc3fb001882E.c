__int64 __fastcall uu_uptime::default_uptime(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  uu_uptime::print_time(a1, a2);
  result = uu_uptime::print_uptime(0LL, a2);
  if ( !result )
  {
    uu_uptime::print_nusers(0LL, a2);
    uu_uptime::print_loadavg();
    return 0LL;
  }
  return result;
}