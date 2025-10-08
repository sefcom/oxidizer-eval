undefined8 *
_ZN8uu_touch15parse_timestamp17h36e945b547dfef75E
          (undefined8 *param_1,undefined *param_2,undefined **param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined **ppuVar7;
  undefined auVar8 [12];
  int local_148;
  uint uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 **local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined **local_108;
  code *local_100;
  undefined8 *local_f8;
  undefined *local_f0;
  uint local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined *local_d0;
  undefined **local_c8;
  undefined local_c0;
  int local_b4;
  undefined8 local_b0;
  undefined *local_a8;
  undefined **ppuStack_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined local_88 [8];
  undefined *local_80;
  undefined **local_78;
  undefined local_70 [8];
  undefined *local_68;
  undefined **local_60;
  int local_58;
  uint uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined **local_48;
  int local_40;
  uint uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined **local_30;
  
  local_a8 = param_2;
  ppuStack_a0 = param_3;
  uVar5 = _ZN81__LT_core__str__iter__Chars_u20_as_u20_core__iter__traits__iterator__Iterator_GT_5count17h41a8767c0185b7ecE
                    (param_2,param_2 + (long)param_3);
  switch(uVar5) {
  case 8:
    (*(code *)PTR__ZN6chrono6offset5local5Local3now17hd3cc0dab6e1d709bE_003aa2f8)(&local_148);
    (*(code *)
      PTR__ZN6chrono5naive8datetime13NaiveDateTime22overflowing_add_offset17h9565526034328997E_003aa088
    )(&local_118,&local_148,uStack_13c);
    local_d8 = CONCAT44(local_d8._4_4_,(int)local_118 >> 0xd);
    local_118 = &local_d8;
    uStack_110 = 
    PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_i32_GT_3fmt17h6f30f0a695ff7937E_003a9e88
    ;
    local_108 = &local_a8;
    local_100 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h18af96482be5ae0fE;
    local_148 = 0x1574b0;
    uStack_144 = 0;
    uStack_140 = 2;
    uStack_13c = 0;
    local_128 = 0;
    local_130 = 2;
    local_138 = (undefined8 **)&local_118;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17h42b45f6f6f73b099E(local_70,&local_148);
    uVar5 = 10;
    pcVar6 = "%Y%m%d%H%M";
    local_80 = local_68;
    local_78 = local_60;
    break;
  default:
    local_d8 = 0;
    local_c0 = 1;
    local_f8 = &local_d8;
    local_f0 = 
    PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_003aa300
    ;
    local_148 = 0x379f00;
    uStack_144 = 0;
    uStack_140 = 1;
    uStack_13c = 0;
    local_128 = 0;
    local_138 = &local_f8;
    local_130 = 1;
    local_d0 = param_2;
    local_c8 = param_3;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17h42b45f6f6f73b099E(&local_118,&local_148);
    local_100 = (code *)CONCAT44(local_100._4_4_,1);
    uVar5 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hd8fce8cb627455b5E(&local_118);
    param_1[1] = uVar5;
    param_1[2] = &
                 PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17h05d1e2d078ddfe04E_00379e10
    ;
    *param_1 = 1;
    return param_1;
  case 10:
    _ZN8uu_touch15prepend_century17h599b7f098e7e4682E(&local_148,param_2,param_3);
    local_80 = (undefined *)CONCAT44(uStack_13c,uStack_140);
    goto LAB_0023b1d9;
  case 0xb:
    (*(code *)PTR__ZN6chrono6offset5local5Local3now17hd3cc0dab6e1d709bE_003aa2f8)(&local_148);
    (*(code *)
      PTR__ZN6chrono5naive8datetime13NaiveDateTime22overflowing_add_offset17h9565526034328997E_003aa088
    )(&local_118,&local_148,uStack_13c);
    local_d8 = CONCAT44(local_d8._4_4_,(int)local_118 >> 0xd);
    local_118 = &local_d8;
    uStack_110 = 
    PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_i32_GT_3fmt17h6f30f0a695ff7937E_003a9e88
    ;
    local_108 = &local_a8;
    local_100 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h18af96482be5ae0fE;
    local_148 = 0x1574b0;
    uStack_144 = 0;
    uStack_140 = 2;
    uStack_13c = 0;
    local_128 = 0;
    local_130 = 2;
    local_138 = (undefined8 **)&local_118;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17h42b45f6f6f73b099E(local_88,&local_148);
    uVar5 = 0xd;
    pcVar6 = "%Y%m%d%H%M.%S";
    break;
  case 0xc:
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h443e6c10e45cdc42E
              (&local_148,param_2,param_3);
    local_80 = (undefined *)CONCAT44(uStack_13c,uStack_140);
LAB_0023b1d9:
    uVar5 = 10;
    pcVar6 = "%Y%m%d%H%M";
    local_78 = (undefined **)local_138;
    break;
  case 0xd:
    _ZN8uu_touch15prepend_century17h599b7f098e7e4682E(&local_148,param_2,param_3);
    local_80 = (undefined *)CONCAT44(uStack_13c,uStack_140);
    goto LAB_0023b220;
  case 0xf:
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h443e6c10e45cdc42E
              (&local_148,param_2,param_3);
    local_80 = (undefined *)CONCAT44(uStack_13c,uStack_140);
LAB_0023b220:
    uVar5 = 0xd;
    pcVar6 = "%Y%m%d%H%M.%S";
    local_78 = (undefined **)local_138;
  }
                    /* try { // try from 0023b23f to 0023b54b has its CatchHandler @ 0023b54e */
  (*(code *)
    PTR__ZN6chrono5naive8datetime13NaiveDateTime14parse_from_str17hdc760f858f0e9f44E_003aa0d8)
            (&local_148,local_80,local_78,pcVar6,uVar5);
  if (local_148 == 0) {
    uVar5 = _ZN8uu_touch15parse_timestamp28__u7b__u7b_closure_u7d__u7d_17hacc50b88b119b6d2E
                      (local_80,local_78);
  }
  else {
    local_b0 = CONCAT44(uStack_140,uStack_144);
    local_b4 = local_148;
    (*(code *)
      PTR__ZN73__LT_chrono__offset__local__Local_u20_as_u20_chrono__offset__TimeZone_GT_26offset_from_local_datetime17hccb4fb7298479e9dE_003aa248
    )(&local_118,1,&local_b4);
    _ZN6chrono6offset20LocalResult_LT_T_GT_8and_then17h5026d116032789f9E
              (&local_148,&local_118,&local_b4);
    if (local_148 == 0) {
      local_e8 = uStack_144;
      uStack_e4 = uStack_140;
      uStack_e0 = uStack_13c;
      uStack_dc = local_138._0_4_;
      (*(code *)
        PTR__ZN6chrono5naive8datetime13NaiveDateTime22overflowing_add_offset17h9565526034328997E_003aa088
      )(&local_148,&local_e8,(ulong)local_138 & 0xffffffff);
      uVar4 = uStack_144 * -0x11111111 + 0xeeeeeeeb;
      if (((uVar4 >> 2 | uVar4 * 0x40000000) < 0x4444444) &&
         (cVar3 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_9ends_with17ha781efaf1b0d4b49E
                            (local_80,local_78), cVar3 != '\0')) {
        _ZN121__LT_chrono__datetime__DateTime_LT_Tz_GT__u20_as_u20_core__ops__arith__AddAssign_LT_chrono__time_delta__TimeDelta_GT__GT_10add_assign17h3f81febb7b5eceb4E
                  (&local_e8,1);
      }
      _ZN6chrono8datetime18DateTime_LT_Tz_GT_18checked_add_signed17h6c9caf6d3908e4a7E
                (&local_148,&local_e8);
      if (local_148 == 0) {
        ppuVar7 = &PTR_s__home_34r7hm4n__cargo_registry_s_00379f10;
        pcVar6 = "`DateTime + TimeDelta` overflowed";
LAB_0023b541:
        (*(code *)PTR__ZN4core6option13expect_failed17h3f620cfb8545dc61E_003a9e28)
                  (pcVar6,0x21,ppuVar7);
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      local_118 = (undefined8 *)CONCAT44(uStack_144,local_148);
      uStack_110 = (undefined *)CONCAT44(uStack_13c,uStack_140);
      _ZN6chrono8datetime18DateTime_LT_Tz_GT_18checked_sub_signed17h2934f7ae0d27804eE
                (&local_148,&local_118);
      uVar2 = uStack_13c;
      if (local_148 == 0) {
        ppuVar7 = &PTR_s__home_34r7hm4n__cargo_registry_s_00379f28;
        pcVar6 = "`DateTime - TimeDelta` overflowed";
        goto LAB_0023b541;
      }
      local_90 = uStack_140;
      local_98 = CONCAT44(uStack_144,local_148);
      (*(code *)
        PTR__ZN6chrono5naive8datetime13NaiveDateTime22overflowing_add_offset17h9565526034328997E_003aa088
      )(&local_148,&local_e8,uStack_dc);
      uVar4 = uStack_144;
      (*(code *)
        PTR__ZN6chrono5naive8datetime13NaiveDateTime22overflowing_add_offset17h9565526034328997E_003aa088
      )(&local_148,&local_98,uVar2);
      if (uVar4 / 0xe10 == uStack_144 / 0xe10) {
        auVar8 = _ZN8uu_touch20datetime_to_filetime17h5b8a0eb5c393ab6aE(&local_e8);
        *(undefined (*) [12])(param_1 + 1) = auVar8;
        *param_1 = 0;
        goto LAB_0023b506;
      }
      local_118 = (undefined8 *)0x0;
      uStack_110 = local_a8;
      local_108 = ppuStack_a0;
      local_100 = (code *)CONCAT71(local_100._1_7_,1);
      local_f0 = 
      PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_003aa300
      ;
      local_148 = 0x379f00;
      uStack_144 = 0;
      uStack_140 = 1;
      uStack_13c = 0;
      local_128 = 0;
      local_138 = &local_f8;
      local_130 = 1;
      local_f8 = &local_118;
      _ZN4core6option15Option_LT_T_GT_11map_or_else17h42b45f6f6f73b099E(&local_40,&local_148);
      local_130 = CONCAT44(local_130._4_4_,1);
      local_148 = local_40;
      uStack_144 = uStack_3c;
      uStack_140 = uStack_38;
      uStack_13c = uStack_34;
      local_138 = (undefined8 **)local_30;
      uVar5 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hd8fce8cb627455b5E(&local_148);
    }
    else {
      local_118 = (undefined8 *)0x0;
      local_100 = (code *)CONCAT71(local_100._1_7_,1);
      local_f0 = 
      PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_003aa300
      ;
      local_148 = 0x379ef0;
      uStack_144 = 0;
      uStack_140 = 1;
      uStack_13c = 0;
      local_128 = 0;
      local_138 = &local_f8;
      local_130 = 1;
      uStack_110 = local_80;
      local_108 = local_78;
      local_f8 = &local_118;
      _ZN4core6option15Option_LT_T_GT_11map_or_else17h42b45f6f6f73b099E(&local_58,&local_148);
      local_130 = CONCAT44(local_130._4_4_,1);
      local_148 = local_58;
      uStack_144 = uStack_54;
      uStack_140 = uStack_50;
      uStack_13c = uStack_4c;
      local_138 = (undefined8 **)local_48;
      uVar5 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hd8fce8cb627455b5E(&local_148);
    }
  }
  param_1[1] = uVar5;
  param_1[2] = &
               PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17h05d1e2d078ddfe04E_00379e10
  ;
  *param_1 = 1;
LAB_0023b506:
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hc61d8ef8308f20d8E(&local_d8);
  return param_1;
}