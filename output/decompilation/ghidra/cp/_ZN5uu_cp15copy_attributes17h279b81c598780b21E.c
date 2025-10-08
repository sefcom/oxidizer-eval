void _ZN5uu_cp15copy_attributes17h279b81c598780b21E
               (undefined8 *param_1,undefined8 ***param_2,undefined8 ***param_3,
               undefined8 ***param_4,undefined8 param_5,undefined *param_6)

{
  undefined8 **ppuVar1;
  undefined8 uVar2;
  undefined8 **local_220;
  undefined8 **local_218;
  undefined8 **local_210;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined8 **local_200;
  undefined8 uStack_1f8;
  undefined8 **local_1f0;
  undefined *local_1e8;
  long *local_1e0;
  undefined *local_1d8;
  undefined8 **local_1d0;
  undefined8 **local_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  long local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined local_110 [8];
  undefined8 *local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 *local_e0;
  undefined8 **local_d8;
  undefined8 local_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined local_c0 [144];
  
  local_220 = (undefined8 **)&DAT_00000001;
  uStack_208 = CONCAT31(uStack_208._1_3_,1);
  local_e0 = (undefined8 **)0x1;
  uStack_c8 = CONCAT31(uStack_c8._1_3_,1);
  local_1f0 = &local_220;
  local_1e8 = 
  PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_00267af0
  ;
  local_1e0 = (long *)&local_e0;
  local_1d8 = 
  PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_00267af0
  ;
  local_1c0 = (undefined8 **)&DAT_0025eb98;
  uStack_1b8 = 2;
  local_1a0 = 0;
  local_1b0 = &local_1f0;
  uStack_1a8 = 2;
  local_218 = param_2;
  local_210 = param_3;
  local_200 = param_4;
  uStack_1f8 = param_5;
  local_d8 = param_4;
  local_d0 = param_5;
  _ZN4core6option15Option_LT_T_GT_11map_or_else17ha891a5b84284deb4E(local_110,&local_1c0);
  local_1f0 = (undefined8 **)local_108;
  local_1e8 = (undefined *)local_100;
                    /* try { // try from 001a1eae to 001a1f05 has its CatchHandler @ 001a20c8 */
  local_1d0 = param_2;
  local_1c8 = param_3;
  _ZN3std2fs16symlink_metadata17h814bc3976f7d40c5E(&local_1c0,param_2,param_3);
  uVar2 = uStack_1b8;
  ppuVar1 = local_1c0;
  if (local_1c0 == (undefined8 **)0x2) {
    local_e0 = local_108;
    local_d8 = (undefined8 **)local_100;
    local_d0 = uStack_1b8;
    (*(code *)
      PTR__ZN119__LT_uu_cp__Error_u20_as_u20_core__convert__From_LT_quick_error__Context_LT__RF_str_C_std__io__error__Error_GT__GT__GT_4from17hda2d8848c156368bE_00267b40
    )(&local_1c0,&local_e0);
  }
  else {
    local_f8 = (undefined4)local_1b0;
    uStack_f4 = local_1b0._4_4_;
    uStack_f0 = (undefined4)uStack_1a8;
    uStack_ec = uStack_1a8._4_4_;
    (*(code *)PTR_memcpy_00267610)(local_c0,&local_1a0,0x90);
    local_e0 = ppuVar1;
    local_d8 = (undefined8 **)uVar2;
    local_d0 = CONCAT44(uStack_f4,local_f8);
    uStack_c8 = uStack_f0;
    uStack_c4 = uStack_ec;
    local_220 = &local_e0;
    local_210 = &local_1f0;
                    /* try { // try from 001a1f7f to 001a204a has its CatchHandler @ 001a20c8 */
    local_218 = &local_200;
    _ZN5uu_cp15handle_preserve17h7e8f09b2424e003fE(&local_1c0,*param_6,param_6[1],&local_220);
    if (local_1c0 == (undefined8 **)0x800000000000000c) {
      local_218 = &local_e0;
      local_210 = &local_1f0;
      local_220 = &local_200;
      _ZN5uu_cp15handle_preserve17h1718f5dcce087862E(&local_1c0,param_6[2],param_6[3],&local_220);
      if (local_1c0 == (undefined8 **)0x800000000000000c) {
        _ZN5uu_cp15handle_preserve17h6d79f9ad03cfc15eE
                  (&local_1c0,param_6[4],param_6[5],&local_e0,&local_200);
        if (local_1c0 == (undefined8 **)0x800000000000000c) {
          local_220 = local_1d0;
          local_218 = local_1c8;
          local_210 = local_200;
          uStack_208 = (undefined4)uStack_1f8;
          uStack_204 = uStack_1f8._4_4_;
          _ZN5uu_cp15handle_preserve17hc7f5bea15cd6c8bbE
                    (&local_1c0,param_6[10],param_6[0xb],&local_220);
          if (local_1c0 == (undefined8 **)0x800000000000000c) {
            *param_1 = 0x800000000000000c;
            goto LAB_001a2083;
          }
        }
        param_1[5] = uStack_198;
        param_1[6] = local_190;
        param_1[3] = uStack_1a8;
        param_1[4] = local_1a0;
        *(undefined4 *)(param_1 + 1) = (undefined4)uStack_1b8;
        *(undefined4 *)((long)param_1 + 0xc) = uStack_1b8._4_4_;
        *(undefined4 *)(param_1 + 2) = (undefined4)local_1b0;
        *(undefined4 *)((long)param_1 + 0x14) = local_1b0._4_4_;
        *param_1 = local_1c0;
        goto LAB_001a2083;
      }
    }
  }
  param_1[6] = local_190;
  param_1[4] = local_1a0;
  param_1[5] = uStack_198;
  param_1[2] = local_1b0;
  param_1[3] = uStack_1a8;
  *(undefined4 *)param_1 = (undefined4)local_1c0;
  *(undefined4 *)((long)param_1 + 4) = local_1c0._4_4_;
  *(undefined4 *)(param_1 + 1) = (undefined4)uStack_1b8;
  *(undefined4 *)((long)param_1 + 0xc) = uStack_1b8._4_4_;
LAB_001a2083:
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h1c03d16396ad1b8dE(local_110);
  return;
}