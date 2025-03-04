long _ZN8uu_nproc12num_cpus_all17h7340e3b3a8ccdb85E(void)

{
  long lVar1;
  long lVar2;
  
  lVar1 = (*(code *)PTR_sysconf_00214580)(0x53);
  if (lVar1 == 1) {
    lVar1 = _ZN8uu_nproc21available_parallelism17h0a12aac02eb8d812E();
    return lVar1;
  }
  lVar2 = 1;
  if (1 < lVar1) {
    lVar2 = lVar1;
  }
  return lVar2;
}