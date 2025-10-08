undefined  [16]
_ZN7uu_head19head_backwards_file17h4d798ee036af210cE(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  ulong uVar2;
  undefined auVar3 [16];
  int local_d0 [2];
  undefined8 local_c8;
  ulong local_80;
  ulong local_78;
  
  (*(code *)PTR__ZN3std2fs4File8metadata17h5e84e533705f8c98E_001fe8e8)(local_d0,param_1);
  if (local_d0[0] == 2) {
    auVar3._8_8_ = local_c8;
    auVar3._0_8_ = 1;
    return auVar3;
  }
  cVar1 = _ZN7uu_head11is_seekable17h3555132a0bfa349aE(param_1);
  uVar2 = 0x200;
  if (local_78 - 1 < 0x20000000) {
    uVar2 = local_78;
  }
  if ((cVar1 != '\0') && (uVar2 < local_80)) {
    auVar3 = _ZN7uu_head31head_backwards_on_seekable_file17h7e88d54791e3601dE(param_1,param_2);
    return auVar3;
  }
  auVar3 = _ZN7uu_head32head_backwards_without_seek_file17hd1f6d04c3bb08f89E(param_1,param_2);
  return auVar3;
}