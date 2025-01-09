__int64 uu_nproc::num_cpus_all()
{
  __int64 v0; // rax
  __int64 v2; // rcx

  v0 = sysconf(83);
  if ( v0 == 1 )
    return uu_nproc::available_parallelism();
  v2 = 1LL;
  if ( v0 > 1 )
    return v0;
  return v2;
}
