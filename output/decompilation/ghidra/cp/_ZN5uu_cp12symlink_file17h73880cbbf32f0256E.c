void _ZN5uu_cp12symlink_file17h73880cbbf32f0256E
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 *local_1d0;
  code *local_1c8;
  undefined8 *local_1c0;
  code *local_1b8;
  undefined8 local_1b0;
  undefined local_1a8 [16];
  undefined local_198;
  undefined8 local_190;
  undefined local_188 [16];
  undefined local_178;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 **local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined local_c0 [144];
  
  lVar1 = _ZN3std2os4unix2fs7symlink17h7d55b4689024f9f4E(param_2,param_3,param_4,param_5);
                    /* try { // try from 0020571e to 0020580f has its CatchHandler @ 002058fa */
  local_1a8 = _ZN6uucore8features2fs12get_filename17h4988c52a18f1d407E(param_4,param_5);
  if (local_1a8._0_8_ == 0) {
    local_1a8._8_8_ = 0x11;
    local_1a8._0_8_ = "invalid file name";
  }
  local_1b0 = 0;
  local_198 = 1;
  local_188 = _ZN6uucore8features2fs12get_filename17h4988c52a18f1d407E(param_2,param_3);
  if (local_188._0_8_ == 0) {
    local_188._8_8_ = 0x11;
    local_188._0_8_ = "invalid file name";
  }
  local_190 = 0;
  local_178 = 1;
  local_1d0 = &local_1b0;
  local_1c8 = _ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17h75932a24bee941d9E
  ;
  local_1c0 = &local_190;
  local_1b8 = _ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17h75932a24bee941d9E
  ;
  local_158 = &PTR_s_cannot_create_symlink_and_are_th_002b5e88;
  uStack_150 = 2;
  local_138 = 0;
  local_148 = &local_1d0;
  local_140 = 2;
  _ZN4core6option15Option_LT_T_GT_11map_or_else17h805a87bba4bea7c2E(&local_170,&local_158);
  local_148 = (undefined8 **)local_160;
  local_158 = (undefined **)CONCAT44(uStack_16c,local_170);
  uStack_150 = CONCAT44(uStack_164,uStack_168);
  if (lVar1 == 0) {
    _ZN4core3ptr230drop_in_place_LT__LT_core__result__Result_LT__LP__RP__C_std__io__error__Error_GT__u20_as_u20_quick_error__ResultExt_LT__LP__RP__C_std__io__error__Error_GT__GT___context_LT_alloc__string__String_GT____u7b__u7b_closure_u7d__u7d__GT_17h0c139c7d53bd4e4aE
              (&local_158);
    _ZN6uucore8features2fs15FileInformation9from_path17he917b6b2466acd0fE
              (&local_158,param_4,param_5,0);
    if (local_158 == (undefined **)0x0) {
      (*(code *)PTR_memcpy_002bbe30)(local_c0,&uStack_150,0x90);
                    /* try { // try from 002058b5 to 002058c1 has its CatchHandler @ 002058e8 */
      _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_6insert17h531130355967ce20E(param_6,local_c0);
    }
    _ZN4core3ptr110drop_in_place_LT_core__result__Result_LT_uucore__features__fs__FileInformation_C_std__io__error__Error_GT__GT_17hf438bf76be742e1bE
              (&local_158);
    *param_1 = 0xd;
  }
  else {
    param_1[2] = uStack_150;
    param_1[3] = local_160;
    *param_1 = 3;
    param_1[1] = local_158;
    param_1[4] = lVar1;
  }
  return;
}