void _ZN4just11load_dotenv14load_from_file17h94978de6d8bd46bbE
               (undefined *param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  long local_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined7 local_108;
  undefined uStack_101;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined7 uStack_f0;
  undefined uStack_e9;
  undefined7 uStack_e8;
  undefined uStack_e1;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  long local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined local_48 [24];
  
  _ZN7dotenvy14from_path_iter17hb404f5f3f3c1c123E(&local_a8);
  local_128 = local_a0;
  uVar1 = local_128;
  uStack_120 = uStack_98;
  uVar2 = uStack_120;
  if (local_a8 == 0) {
    uStack_f0 = (undefined7)(CONCAT44(uStack_8c,local_90) >> 8);
    uStack_e9 = (undefined)uStack_88;
    uStack_e8 = (undefined7)(CONCAT44(uStack_84,uStack_88) >> 8);
    uStack_101 = (undefined)local_a0;
    uStack_100 = (undefined4)((ulong)local_a0 >> 8);
    uStack_fc._0_3_ = (undefined3)((ulong)local_a0 >> 0x28);
    uStack_fc._3_1_ = (undefined)uStack_98;
    uStack_f8 = (undefined4)((ulong)uStack_98 >> 8);
    uStack_f4._0_3_ = (undefined3)((ulong)uStack_98 >> 0x28);
    *param_1 = 0x10;
    *(ulong *)(param_1 + 1) = CONCAT17(uStack_101,local_108);
    *(ulong *)(param_1 + 9) = CONCAT44(uStack_fc,uStack_100);
    *(ulong *)(param_1 + 0x11) = CONCAT44(CONCAT13((char)local_90,(undefined3)uStack_f4),uStack_f8);
    *(ulong *)(param_1 + 0x19) = CONCAT17(uStack_e9,uStack_f0);
    *(ulong *)(param_1 + 0x20) = CONCAT71(uStack_e8,uStack_e9);
  }
  else {
    local_b0 = local_50;
    local_c0 = local_60;
    uStack_b8 = uStack_58;
    local_d0 = local_70;
    uStack_c8 = uStack_68;
    local_e0 = local_80;
    uStack_d8 = uStack_78;
    local_128._0_4_ = (undefined4)local_a0;
    local_128._4_4_ = (undefined4)((ulong)local_a0 >> 0x20);
    uStack_120._0_4_ = (undefined4)uStack_98;
    uStack_120._4_4_ = (undefined4)((ulong)uStack_98 >> 0x20);
    uStack_100 = (undefined4)local_128;
    uStack_fc = local_128._4_4_;
    uStack_f8 = (undefined4)uStack_120;
    uStack_f4 = uStack_120._4_4_;
    uStack_f0 = (undefined7)CONCAT44(uStack_8c,local_90);
    uStack_e9 = (undefined)((uint)uStack_8c >> 0x18);
    uStack_e8 = (undefined7)CONCAT44(uStack_84,uStack_88);
    uStack_e1 = (undefined)((uint)uStack_84 >> 0x18);
    local_190 = 0;
    local_180 = 0;
    local_108 = (undefined7)local_a8;
    uStack_101 = (undefined)((ulong)local_a8 >> 0x38);
    local_128 = uVar1;
    uStack_120 = uVar2;
                    /* try { // try from 00374f94 to 00374f9e has its CatchHandler @ 0037514f */
    while (_ZN87__LT_dotenvy__iter__Iter_LT_R_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hd5b1cc3ee223d309E
                     (&local_a8,&local_108), local_a8 != -0x7fffffffffffffff) {
      local_1a0 = local_a0;
      uStack_198 = uStack_98;
      local_148 = local_90;
      uStack_144 = uStack_8c;
      uStack_140 = uStack_88;
      uStack_13c = uStack_84;
      local_1a8 = local_a8;
      local_138 = local_80;
      if ((param_4 & 1) == 0) {
                    /* try { // try from 00374fef to 00374ffe has its CatchHandler @ 00375134 */
        _ZN3std3env6var_os17h6a2d090e3fc310b6E(&local_178,&local_1a8);
        _ZN4core3ptr39drop_in_place_LT_std__env__VarError_GT_17h3a6801680fc5590aE(&local_178);
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h367fa18a9dfefdabE(&local_148);
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h367fa18a9dfefdabE(&local_1a8);
      }
      else {
        uStack_168 = uStack_98;
        local_178 = local_a8;
        uStack_170 = local_a0;
                    /* try { // try from 00375038 to 00375054 has its CatchHandler @ 0037514d */
        _ZN5alloc11collections5btree3map25BTreeMap_LT_K_C_V_C_A_GT_6insert17h31a4bd75c0e0caf1E
                  (local_48,&local_190,&local_178,&local_148);
        _ZN4core3ptr40drop_in_place_LT_regex__error__Error_GT_17h38559d1aa9a290b7E(local_48);
      }
    }
    _ZN4core3ptr61drop_in_place_LT_dotenvy__iter__Iter_LT_std__fs__File_GT__GT_17h7ebcd747ad9a99f6E
              (&local_108);
    *(undefined8 *)(param_1 + 0x18) = local_180;
    *(undefined8 *)(param_1 + 8) = local_190;
    *(undefined8 *)(param_1 + 0x10) = uStack_188;
    *param_1 = 0x38;
  }
  return;
}