void _ZN11forc_crypto4keys6vanity22validate_regex_pattern17h388a3a22683553dfE
               (undefined8 *param_1,undefined8 param_2,ulong param_3)

{
  undefined8 extraout_RDX;
  undefined8 local_c8;
  ulong local_c0;
  undefined *local_b8;
  code *pcStack_b0;
  undefined8 local_a8;
  long local_a0 [3];
  undefined8 local_88;
  undefined local_80 [8];
  undefined8 local_78;
  undefined8 local_70;
  undefined **local_68;
  undefined8 local_60;
  undefined8 **local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined **local_38;
  undefined *local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  local_b8 = (undefined *)&local_c8;
  local_c8 = param_2;
  local_c0 = param_3;
  if (0x80 < param_3) {
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17hd37f91379d22554aE
              (param_1 + 1,"Regex pattern too long: max 128 characters",0x2a);
    *param_1 = 1;
    return;
  }
  pcStack_b0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h30043921d5c5f2d0E;
  local_68 = &PTR_s___i__0072f008;
  local_60 = 1;
  local_48 = 0;
  local_50 = 1;
  local_58 = (undefined8 **)&local_b8;
  _ZN4core6option15Option_LT_T_GT_11map_or_else17h34f6eea6daa701c2E(local_80,0,param_3,&local_68);
                    /* try { // try from 004fa2a9 to 004fa2c5 has its CatchHandler @ 004fa3e1 */
  (*(code *)PTR__ZN5regex5regex6string5Regex3new17h92399a8041d2121dE_00786f48)
            (local_a0,local_78,local_70);
  if (local_a0[0] != 0) {
    _ZN4core3ptr98drop_in_place_LT_core__result__Result_LT_regex__regex__string__Regex_C_regex__error__Error_GT__GT_17hd7374fd7dca9b727E
              (local_a0);
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h223631e41b095cf4E(local_80);
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17hd37f91379d22554aE
              (param_1 + 1,local_c8,local_c0);
    *param_1 = 0;
    return;
  }
  local_a8 = local_88;
  local_30 = 
  PTR__ZN58__LT_regex__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h73feb9b51bd9b12eE_00786f50
  ;
  local_68 = &PTR_s_Invalid_regex_pattern__0072f018;
  local_60 = 1;
  local_48 = 0;
  local_58 = &local_38;
  local_50 = 1;
                    /* try { // try from 004fa356 to 004fa369 has its CatchHandler @ 004fa3ba */
  local_38 = &local_b8;
  _ZN4core6option15Option_LT_T_GT_11map_or_else17h34f6eea6daa701c2E
            (&local_28,0,extraout_RDX,&local_68);
  param_1[3] = local_18;
  *(undefined4 *)(param_1 + 1) = local_28;
  *(undefined4 *)((long)param_1 + 0xc) = uStack_24;
  *(undefined4 *)(param_1 + 2) = uStack_20;
  *(undefined4 *)((long)param_1 + 0x14) = uStack_1c;
  *param_1 = 1;
  _ZN4core3ptr40drop_in_place_LT_regex__error__Error_GT_17h8cd765a8894c774fE(&local_b8);
  if (local_a0[0] != 0) {
                    /* try { // try from 004fa39b to 004fa3a4 has its CatchHandler @ 004fa3e1 */
    _ZN4core3ptr98drop_in_place_LT_core__result__Result_LT_regex__regex__string__Regex_C_regex__error__Error_GT__GT_17hd7374fd7dca9b727E
              (local_a0);
  }
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h223631e41b095cf4E(local_80);
  return;
}