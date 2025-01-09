bool __fastcall uu_tail::platform::unix::supports_pid_checks(__pid_t a1)
{
  return !kill(a1, 0) || (unsigned int)uu_tail::platform::unix::get_errno() != 38;
}
