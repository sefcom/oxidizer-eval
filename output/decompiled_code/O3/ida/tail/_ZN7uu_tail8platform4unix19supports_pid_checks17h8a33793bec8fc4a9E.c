bool __fastcall uu_tail::platform::unix::supports_pid_checks(__int64 a1)
{
  return !kill(a1, 0) || (unsigned int)uu_tail::platform::unix::get_errno(a1) != 38;
}
