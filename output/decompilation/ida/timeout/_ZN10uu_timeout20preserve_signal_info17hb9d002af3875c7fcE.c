__int64 __fastcall uu_timeout::preserve_signal_info(unsigned int sig)
{
  __pid_t v1; // eax

  v1 = getpid();
  kill(v1, sig);
  return sig;
}