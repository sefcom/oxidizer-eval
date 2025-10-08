undefined8
_ZN6zoxide2db6stream6Stream16filter_by_exists17h7f6b4e7bfdd84ce2E
          (ulong param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined local_c0;
  undefined local_bf;
  undefined8 local_b8;
  int local_b0 [2];
  undefined8 local_a8;
  uint local_78;
  
  uVar1 = 1;
  if ((param_1 & 1) != 0) {
    pcVar2 = _ZN3std2fs8metadata17h89fd6dba8fa68deeE;
    if ((param_2 & 1) != 0) {
      pcVar2 = _ZN3std2fs16symlink_metadata17h6f5d64136f1a98f2E;
    }
    (*pcVar2)(local_b0,param_3,param_4);
    if (local_b0[0] != 2) {
      local_bf = (local_78 & 0xf000) == 0x4000;
    }
    else {
      local_b8 = local_a8;
    }
    local_c0 = local_b0[0] == 2;
    uVar1 = _ZN4core6result19Result_LT_T_C_E_GT_17unwrap_or_default17h796bef404eb8c9ffE(&local_c0);
  }
  return uVar1;
}