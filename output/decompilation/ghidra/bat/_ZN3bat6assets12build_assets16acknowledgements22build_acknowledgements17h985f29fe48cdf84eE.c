void _ZN3bat6assets12build_assets16acknowledgements22build_acknowledgements17h985f29fe48cdf84eE
               (char *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined auStack_2f8 [8];
  char *local_2f0;
  undefined8 local_2e8;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  long local_228 [7];
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined **local_1e0;
  undefined8 local_1d8;
  undefined *local_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_100;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_78;
  
  local_1d0 = auStack_2f8;
  if (param_4 == 0) {
    param_1[8] = '\0';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = '\0';
    param_1[0xc] = '\0';
    param_1[0xd] = '\0';
    param_1[0xe] = '\0';
    param_1[0xf] = -0x80;
    *param_1 = '\r';
  }
  else {
    local_1e0 = &PTR_DAT_007cdf98;
    local_1d8 = 1;
    local_1c8 = 0;
    uStack_1c0 = 0;
    local_2f0 = param_1;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17hec96efa742f30dccE
              (&local_2d8,&DAT_0019fb52,0xfa,&local_1e0);
                    /* try { // try from 00532a83 to 00532aaa has its CatchHandler @ 00532d0b */
    _ZN7walkdir7WalkDir3new17h459c167d76fb9d91E(&local_1e0,param_2,param_3);
    _ZN7walkdir7WalkDir7sort_by17h6657eda31431a47eE(&local_270,&local_1e0);
    local_150 = local_238;
    uStack_148 = uStack_230;
    local_160 = local_248;
    uStack_158 = uStack_240;
    local_170 = local_258;
    uStack_168 = uStack_250;
    local_188 = local_270;
    uStack_180 = uStack_268;
    local_178 = local_260;
    local_1e0 = (undefined **)0x0;
    local_1d0 = (undefined *)0x0;
    local_1c8 = 8;
    uStack_1c0 = 0;
    uStack_1b8 = 0;
    local_1b0 = 8;
    local_1a8 = 0;
    uStack_1a0 = 0;
    local_198 = 8;
    local_190 = 0;
    local_140 = 0;
    uStack_138 = 0;
    local_130 = 0x8000000000000001;
    local_100 = 0x8000000000000001;
    local_c0 = 0x8000000000000001;
    local_78 = 0x8000000000000001;
    local_d0 = param_2;
    local_c8 = param_3;
                    /* try { // try from 00532bb8 to 00532bc7 has its CatchHandler @ 00532d41 */
    while (_ZN116__LT_core__iter__adapters__flatten__FlattenCompat_LT_I_C_U_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hf4f2140db3f21559E
                     (local_228,&local_1e0), uVar5 = local_1e8, uVar4 = local_1f0,
          local_228[0] != -0x8000000000000000) {
                    /* try { // try from 00532be6 to 00532bf0 has its CatchHandler @ 00532d2f */
      _ZN3bat6assets12build_assets16acknowledgements11handle_file17hb5a8e1bdb81e5e02E
                (&local_2c0,local_228);
      uVar3 = uStack_2ac;
      uVar2 = uStack_2b0;
      if ((char)local_2c0 != '\r') {
        uVar2 = local_2c0._1_4_;
        *(undefined4 *)(local_2f0 + 4) = local_2c0._4_4_;
        *(undefined4 *)(local_2f0 + 1) = uVar2;
        local_2e8 = CONCAT44(uStack_2ac,uStack_2b0);
        *(undefined8 *)(local_2f0 + 0x40) = local_280;
        *(undefined8 *)(local_2f0 + 0x48) = uStack_278;
        *(undefined8 *)(local_2f0 + 0x30) = local_290;
        *(undefined8 *)(local_2f0 + 0x38) = uStack_288;
        *(undefined8 *)(local_2f0 + 0x20) = local_2a0;
        *(undefined8 *)(local_2f0 + 0x28) = uStack_298;
        *(undefined4 *)(local_2f0 + 0x10) = uStack_2b0;
        *(undefined4 *)(local_2f0 + 0x14) = uStack_2ac;
        *(undefined4 *)(local_2f0 + 0x18) = uStack_2a8;
        *(undefined4 *)(local_2f0 + 0x1c) = uStack_2a4;
        *local_2f0 = (char)local_2c0;
        *(ulong *)(local_2f0 + 8) = CONCAT44(uStack_2b4,local_2b8);
        _ZN4core3ptr77drop_in_place_LT_bat__assets__build_assets__acknowledgements__PathAndStem_GT_17h4560092f5c8bce4cE
                  (local_228);
        _ZN4core3ptr316drop_in_place_LT_core__iter__adapters__flatten__FlatMap_LT_core__iter__adapters__flatten__Flatten_LT_walkdir__IntoIter_GT__C_core__option__Option_LT_bat__assets__build_assets__acknowledgements__PathAndStem_GT__C_bat__assets__build_assets__acknowledgements__build_acknowledgements___u7b__u7b_closure_u7d__u7d__GT__GT_17ha54413022cf6097cE
                  (&local_1e0);
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h2ec3c51b3420dbb5E(&local_2d8);
        return;
      }
      lVar1 = CONCAT44(uStack_2b4,local_2b8);
      local_2e8 = CONCAT44(uStack_2ac,uStack_2b0);
      if (lVar1 != -0x8000000000000000) {
        local_2b8 = uStack_2b0;
        uStack_2b4 = uStack_2ac;
        uStack_2b0 = uStack_2a8;
        uStack_2ac = uStack_2a4;
                    /* try { // try from 00532c2a to 00532c39 has its CatchHandler @ 00532d20 */
        local_2c0 = lVar1;
        _ZN3bat6assets12build_assets16acknowledgements26append_to_acknowledgements17he3cabe6578d3b81fE
                  (&local_2d8,uVar4,uVar5,CONCAT44(uVar3,uVar2),CONCAT44(uStack_2a4,uStack_2a8));
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h2ec3c51b3420dbb5E(&local_2c0);
      }
      _ZN4core3ptr77drop_in_place_LT_bat__assets__build_assets__acknowledgements__PathAndStem_GT_17h4560092f5c8bce4cE
                (local_228);
    }
                    /* try { // try from 00532c60 to 00532cee has its CatchHandler @ 00532d0b */
    _ZN4core3ptr316drop_in_place_LT_core__iter__adapters__flatten__FlatMap_LT_core__iter__adapters__flatten__Flatten_LT_walkdir__IntoIter_GT__C_core__option__Option_LT_bat__assets__build_assets__acknowledgements__PathAndStem_GT__C_bat__assets__build_assets__acknowledgements__build_acknowledgements___u7b__u7b_closure_u7d__u7d__GT__GT_17ha54413022cf6097cE
              (&local_1e0);
    *(undefined8 *)(local_2f0 + 0x18) = local_2c8;
    *(undefined8 *)(local_2f0 + 8) = local_2d8;
    *(undefined8 *)(local_2f0 + 0x10) = uStack_2d0;
    *local_2f0 = '\r';
  }
  return;
}