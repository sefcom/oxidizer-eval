undefined8 * __rustcall
uu_df::filesystem::Filesystem::new(undefined8 *param_1,long param_2,undefined4 *param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined8 local_1c0;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  long local_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  lVar2 = param_2 + 0x60;
  if (*(long *)(param_2 + 0x70) == 0) {
    lVar2 = param_2 + 0x18;
  }
                    /* try { // try from 001d4498 to 001d44d4 has its CatchHandler @ 001d4612 */
  _<alloc::string::String_as_core::clone::Clone>::clone(&local_1d0,lVar2);
  local_1d8 = local_1c0;
  local_1e8 = local_1d0;
  uStack_1e4 = uStack_1cc;
  uStack_1e0 = uStack_1c8;
  uStack_1dc = uStack_1c4;
  uucore::features::fsext::statfs(&local_180,&local_1e8);
  if (local_180 == 0) {
    local_28 = local_108;
    local_38 = local_118;
    uStack_30 = uStack_110;
    local_48 = local_128;
    uStack_40 = uStack_120;
    local_58 = local_138;
    uStack_50 = uStack_130;
    local_68 = local_148;
    uStack_64 = uStack_144;
    uStack_60 = uStack_140;
    uStack_5c = uStack_13c;
    local_78 = local_158;
    uStack_74 = uStack_154;
    uStack_70 = uStack_150;
    uStack_6c = uStack_14c;
    local_88 = local_168;
    uStack_84 = uStack_164;
    uStack_80 = uStack_160;
    uStack_7c = uStack_15c;
    local_98 = local_178;
    uStack_94 = uStack_174;
    uStack_90 = uStack_170;
    uStack_8c = uStack_16c;
                    /* try { // try from 001d4574 to 001d4586 has its CatchHandler @ 001d4612 */
    uucore::features::fsext::FsUsage::new(&local_1b8,&local_98);
    puVar1 = PTR_memcpy_00246780;
    local_d8 = *(undefined8 *)(param_3 + 4);
    local_e8 = *param_3;
    uStack_e4 = param_3[1];
    uStack_e0 = param_3[2];
    uStack_dc = param_3[3];
    (*(code *)PTR_memcpy_00246780)(&local_180,param_2,0x98);
    local_d0 = local_1b8;
    uStack_cc = uStack_1b4;
    uStack_c8 = uStack_1b0;
    uStack_c4 = uStack_1ac;
    local_c0 = local_1a8;
    uStack_bc = uStack_1a4;
    uStack_b8 = uStack_1a0;
    uStack_b4 = uStack_19c;
    local_b0 = local_198;
    uStack_ac = uStack_194;
    uStack_a8 = uStack_190;
    uStack_a4 = uStack_18c;
    local_a0 = local_188;
    (*(code *)puVar1)(param_1,&local_180,0xe8);
  }
  else {
    core::ptr::
    drop_in_place<core::result::Result<libc::unix::linux_like::linux::gnu::b64::x86_64::statfs,alloc::string::String>>
              (&local_180);
    *param_1 = 0x8000000000000000;
                    /* try { // try from 001d44e2 to 001d44e9 has its CatchHandler @ 001d460d */
    core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(param_3);
    core::ptr::drop_in_place<uucore::features::fsext::MountInfo>(param_2);
  }
  return param_1;
}