void _ZN5uu_cp12symlink_file17haf96ef023560a2f2E
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 *local_1b8;
  undefined *local_1b0;
  undefined8 *local_1a8;
  undefined *local_1a0;
  undefined8 local_198;
  undefined local_190 [16];
  undefined local_180;
  undefined8 local_178;
  undefined local_170 [16];
  undefined local_160;
  undefined **local_158;
  undefined8 local_150;
  undefined8 **local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined local_c0 [144];
  
  lVar1 = _ZN3std2os4unix2fs7symlink17ha0101dd5a62d8719E(param_2,param_3,param_4,param_5);
                    /* try { // try from 001a2350 to 001a2445 has its CatchHandler @ 001a2512 */
  local_190 = (*(code *)PTR__ZN6uucore8features2fs12get_filename17hf3decfe9888d2f9fE_00267c58)
                        (param_4,param_5);
  if (local_190._0_8_ == 0) {
    local_190._8_8_ = 0x11;
    local_190._0_8_ = "invalid file name";
  }
  local_198 = 0;
  local_180 = 1;
  local_170 = (*(code *)PTR__ZN6uucore8features2fs12get_filename17hf3decfe9888d2f9fE_00267c58)
                        (param_2,param_3);
  if (local_170._0_8_ == 0) {
    local_170._8_8_ = 0x11;
    local_170._0_8_ = "invalid file name";
  }
  local_178 = 0;
  local_160 = 1;
  local_1b8 = &local_198;
  local_1b0 = 
  PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_00267af0
  ;
  local_1a8 = &local_178;
  local_1a0 = 
  PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_00267af0
  ;
  local_158 = &PTR_s_cannot_create_symlink_and_are_th_0025ebb8;
  local_150 = 2;
  local_138 = 0;
  local_148 = &local_1b8;
  local_140 = 2;
  _ZN4core6option15Option_LT_T_GT_11map_or_else17ha891a5b84284deb4E(&local_1d0,&local_158);
  if (lVar1 == 0) {
    _ZN4core3ptr230drop_in_place_LT__LT_core__result__Result_LT__LP__RP__C_std__io__error__Error_GT__u20_as_u20_quick_error__ResultExt_LT__LP__RP__C_std__io__error__Error_GT__GT___context_LT_alloc__string__String_GT____u7b__u7b_closure_u7d__u7d__GT_17h92d6353b521410cdE
              (&local_1d0);
    _ZN6uucore8features2fs15FileInformation9from_path17hfd069e4f76a9cc58E
              (&local_158,param_4,param_5,0);
    if (((ulong)local_158 & 1) == 0) {
      (*(code *)PTR_memcpy_00267610)(local_c0,&local_150,0x90);
                    /* try { // try from 001a24be to 001a24ca has its CatchHandler @ 001a2500 */
      _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_6insert17he952524e990dcb56E(param_6,local_c0);
    }
    _ZN4core3ptr110drop_in_place_LT_core__result__Result_LT_uucore__features__fs__FileInformation_C_std__io__error__Error_GT__GT_17h6445ae0773dfc02aE
              (&local_158);
    *param_1 = 0x800000000000000c;
  }
  else {
    param_1[2] = local_1c8;
    param_1[3] = uStack_1c0;
    *param_1 = 0x8000000000000002;
    param_1[1] = local_1d0;
    param_1[4] = lVar1;
  }
  return;
}