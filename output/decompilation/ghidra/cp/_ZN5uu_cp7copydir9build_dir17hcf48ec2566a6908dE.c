void _ZN5uu_cp7copydir9build_dir17hcf48ec2566a6908dE
               (undefined8 *param_1,undefined8 param_2,undefined param_3,byte param_4,byte param_5,
               long param_6,undefined8 param_7)

{
  uint uVar1;
  uint uVar2;
  uint local_d8;
  undefined local_d4;
  int local_d0 [2];
  long local_c8;
  uint local_98;
  
  uVar1 = 0x12;
  if ((param_5 & 1) == 0) {
    uVar1 = 0;
  }
  uVar2 = 0x3f;
  if ((param_4 & 1) == 0) {
    uVar2 = uVar1;
  }
  local_d4 = param_3;
  if ((param_6 != 0 & param_5 & 1) == 1) {
    _ZN3std2fs16symlink_metadata17h814bc3976f7d40c5E(local_d0,param_6,param_7);
    if (local_d0[0] == 2) goto LAB_0019af07;
    local_98 = ~local_98;
  }
  else {
    local_98 = (*(code *)PTR__ZN6uucore8features4mode9get_umask17h22fe72fd4e3f2e99E_00267b08)();
  }
  local_d8 = (local_98 & 0x1ff | uVar2) ^ 0x1ff;
  local_c8 = _ZN3std2fs10DirBuilder6create17h220b70ad501ba6bcE(&local_d8,param_2);
  if (local_c8 == 0) {
    *param_1 = 0x800000000000000c;
    return;
  }
LAB_0019af07:
  *param_1 = 0x8000000000000001;
  param_1[1] = local_c8;
  return;
}