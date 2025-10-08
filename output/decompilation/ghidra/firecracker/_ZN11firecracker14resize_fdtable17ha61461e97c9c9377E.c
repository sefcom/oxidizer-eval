undefined8 _ZN11firecracker14resize_fdtable17ha61461e97c9c9377E(void)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  ulong local_28 [3];
  
  local_28[0] = 0;
  local_28[1] = 0;
  iVar1 = (*(code *)PTR_getrlimit_004bfd58)(7,local_28);
  if (iVar1 < 0) {
    uVar3 = 0;
  }
  else {
    iVar1 = 0x800;
    if (local_28[0] < 0x80000000) {
      iVar1 = (int)local_28[0];
    }
    uVar3 = 3;
    if (3 < iVar1) {
      iVar2 = (*(code *)PTR_dup2_004bfd60)(0,iVar1 + -1);
      if (iVar2 < 0) {
        uVar3 = 1;
      }
      else {
        iVar1 = (*(code *)PTR_close_004bfa80)(iVar1 + -1);
        if (-1 < iVar1) {
          return 3;
        }
        uVar3 = 2;
      }
      (*(code *)PTR___errno_location_004bf518)();
    }
  }
  return uVar3;
}