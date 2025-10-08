__int64 __fastcall uu_tail::platform::unix::ProcessChecker::is_dead(__pid_t a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( kill(a1, 0) )
    LOBYTE(v1) = (unsigned int)uu_tail::platform::unix::get_errno() != 1;
  return v1;
}