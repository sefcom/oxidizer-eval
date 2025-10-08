ulong _ZN11firecracker95__LT_impl_u20_core__convert__From_LT_firecracker__MainError_GT__u20_for_u20_vmm__FcExitCode_GT_4from17hdc436c2690ea3a60E
                (undefined4 *param_1)

{
  byte bVar1;
  undefined8 unaff_RBX;
  ulong uVar2;
  undefined7 uVar3;
  
  uVar3 = (undefined7)((ulong)unaff_RBX >> 8);
  uVar2 = CONCAT71(uVar3,1);
  switch(*param_1) {
  case 2:
    uVar2 = CONCAT71(uVar3,0x99);
    break;
  case 4:
    _ZN4core3ptr43drop_in_place_LT_firecracker__MainError_GT_17h4e8408282f966cebE();
    return CONCAT71(uVar3,0x98) & 0xffffffff;
  case 9:
    if (*(char *)(param_1 + 2) == '\x1d') {
LAB_00259691:
      bVar1 = *(byte *)((long)param_1 + 9);
      _ZN4core3ptr43drop_in_place_LT_firecracker__MainError_GT_17h4e8408282f966cebE();
      return (ulong)bVar1;
    }
    break;
  case 10:
    if (*(char *)(param_1 + 2) == '\x1c') goto LAB_00259691;
  }
  _ZN4core3ptr43drop_in_place_LT_firecracker__MainError_GT_17h4e8408282f966cebE();
  return uVar2 & 0xffffffff;
}