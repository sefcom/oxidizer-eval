undefined8 * __rustcall
uu_du::Stat::new(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5
                )

{
  undefined8 uVar1;
  char cVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined auVar6 [16];
  long local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  uint local_180;
  undefined8 local_17c;
  undefined8 uStack_174;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  long local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  uint local_a8;
  undefined8 local_a4;
  undefined8 uStack_9c;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  uVar4 = *(ulong *)(param_5 + 0x18) ^ 0x8000000000000000;
  uVar3 = 1;
  if (uVar4 < 3) {
    uVar3 = uVar4;
  }
  if (uVar3 == 0) {
LAB_001f1a75:
    std::fs::metadata(&local_1b8,param_2,param_3);
  }
  else {
    if (uVar3 == 1) {
      uVar5 = *(undefined8 *)(param_5 + 0x20);
      uVar1 = *(undefined8 *)(param_5 + 0x28);
      std::sys::pal::unix::os::split_paths::bytes_to_path(&local_1b8,param_2,param_3);
                    /* try { // try from 001f1a51 to 001f1a5e has its CatchHandler @ 001f1c91 */
      cVar2 = _<T_as_core::slice::cmp::SliceContains>::slice_contains(&local_1b8,uVar5,uVar1);
      core::ptr::drop_in_place<std::path::PathBuf>(&local_1b8);
      if (cVar2 != '\0') goto LAB_001f1a75;
    }
    if (param_4 == 0) {
      std::fs::symlink_metadata(&local_1b8,param_2,param_3);
    }
    else {
      std::fs::DirEntry::metadata(&local_1b8,param_4);
    }
  }
  if (local_1b8 == 2) {
    param_1[2] = uStack_1b0;
    param_1[1] = 0;
    *param_1 = 2;
  }
  else {
    local_d0 = local_1a8;
    uStack_c8 = uStack_1a0;
    local_a4 = local_17c;
    uStack_9c = uStack_174;
    local_94 = local_16c;
    local_60 = local_138;
    uStack_58 = uStack_130;
    local_50 = local_128;
    uStack_48 = uStack_120;
    local_40 = local_118;
    uStack_38 = uStack_110;
    local_e0 = local_1b8;
    local_d8 = uStack_1b0;
    local_c0 = local_198;
    local_b8 = local_190;
    uStack_b0 = uStack_188;
    local_a8 = local_180;
    local_108 = local_168;
    uStack_104 = uStack_164;
    uStack_100 = uStack_160;
    uStack_fc = uStack_15c;
    local_90 = local_168;
    uStack_8c = uStack_164;
    uStack_88 = uStack_160;
    uStack_84 = uStack_15c;
    local_80 = local_158;
    local_f8 = local_150;
    uStack_f4 = uStack_14c;
    uStack_f0 = uStack_148;
    uStack_ec = uStack_144;
    local_78 = local_150;
    uStack_74 = uStack_14c;
    uStack_70 = uStack_148;
    uStack_6c = uStack_144;
    local_68 = local_140;
    std::sys::pal::unix::os::split_paths::bytes_to_path(&local_1b8,param_2,param_3);
                    /* try { // try from 001f1bcd to 001f1be7 has its CatchHandler @ 001f1ca0 */
    cVar2 = std::path::Path::is_dir(param_2);
    auVar6 = birth_u64(&local_e0);
    uVar5 = 0;
    if (cVar2 == '\0') {
      uVar5 = CONCAT44(uStack_104,local_108);
    }
    param_1[10] = local_1a8;
    param_1[8] = local_1b8;
    param_1[9] = uStack_1b0;
    param_1[1] = 0;
    *param_1 = 1;
    param_1[2] = local_190;
    param_1[3] = 0;
    param_1[4] = local_198;
    *(undefined (*) [16])(param_1 + 6) = auVar6;
    param_1[0xb] = uVar5;
    param_1[0xc] = local_158;
    param_1[0xd] = 1;
    param_1[0xe] = CONCAT44(uStack_f4,local_f8);
    param_1[0xf] = local_140;
    *(bool *)(param_1 + 0x10) = (local_180 & 0xf000) == 0x4000;
  }
  return param_1;
}