long __rustcall uu_nproc::num_cpus_all(void)

{
  long lVar1;
  long lVar2;
  
  lVar1 = (*(code *)PTR_sysconf_00214580)(0x53);
  if (lVar1 == 1) {
    lVar1 = available_parallelism();
    return lVar1;
  }
  lVar2 = 1;
  if (1 < lVar1) {
    lVar2 = lVar1;
  }
  return lVar2;
}