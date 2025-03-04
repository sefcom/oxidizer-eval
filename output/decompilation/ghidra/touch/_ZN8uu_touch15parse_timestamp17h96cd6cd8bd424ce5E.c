undefined8 *
_ZN8uu_touch15parse_timestamp17h96cd6cd8bd424ce5E(undefined8 *param_1,code *param_2,code **param_3)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined auVar8 [12];
  int local_148;
  uint uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  code ***local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_118;
  undefined8 uStack_110;
  code **ppcStack_108;
  code *local_100;
  code **local_e8;
  code *pcStack_e0;
  undefined8 local_d8;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  code *local_b8;
  code *local_b0;
  code **ppcStack_a8;
  undefined local_a0;
  code **local_98;
  code *pcStack_90;
  undefined8 local_88;
  code *local_80;
  code **ppcStack_78;
  int local_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  int local_50;
  uint uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 *local_40;
  int local_38;
  uint uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 *local_28;
  
  local_80 = param_2;
  ppcStack_78 = param_3;
  uVar4 = _ZN81__LT_core__str__iter__Chars_u20_as_u20_core__iter__traits__iterator__Iterator_GT_5count17hc7941fd67a47c62aE
                    (param_2,param_2 + (long)param_3);
  switch(uVar4) {
  case 8:
    _ZN6chrono6offset5local5Local3now17ha82adb6e05d16f38E(&local_148);
    _ZN6chrono5naive8datetime13NaiveDateTime22overflowing_add_offset17h44e7199241db0904E
              (&local_118,&local_148,uStack_13c);
    local_b8 = (code *)CONCAT44(local_b8._4_4_,(int)local_118 >> 0xd);
    local_118 = &local_b8;
    uStack_110 = 
    _ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_i32_GT_3fmt17hca014a89be6ce751E
    ;
    ppcStack_108 = &local_80;
    local_100 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h802749042f990904E;
    local_148 = 0x16c700;
    uStack_140 = 2;
    local_130 = 2;
    break;
  default:
    local_b8 = (code *)0x0;
    local_a0 = 1;
    local_e8 = &local_b8;
    pcStack_e0 = 
    _ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17h75932a24bee941d9E;
    local_148 = 0x410f28;
    uStack_144 = 0;
    uStack_140 = 1;
    uStack_13c = 0;
    local_128 = 0;
    local_138 = &local_e8;
    local_130 = 1;
    local_b0 = param_2;
    ppcStack_a8 = param_3;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17hfcce5e0c4efe3dfbE(&local_118,&local_148);
    local_100 = (code *)CONCAT44(local_100._4_4_,1);
    uVar4 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h6ec029cbb0371e9dE(&local_118);
    param_1[1] = uVar4;
    param_1[2] = &
                 PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17h2a00f7fb509639cfE_00410e78
    ;
    *param_1 = 1;
    return param_1;
  case 10:
    local_118 = &local_80;
    uStack_110 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h802749042f990904E;
    local_148 = 0x410f18;
    uStack_140 = 1;
    local_130 = 1;
    break;
  case 0xb:
    _ZN6chrono6offset5local5Local3now17ha82adb6e05d16f38E(&local_148);
    _ZN6chrono5naive8datetime13NaiveDateTime22overflowing_add_offset17h44e7199241db0904E
              (&local_118,&local_148,uStack_13c);
    local_b8 = (code *)CONCAT44(local_b8._4_4_,(int)local_118 >> 0xd);
    local_118 = &local_b8;
    uStack_110 = 
    _ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_i32_GT_3fmt17hca014a89be6ce751E
    ;
    ppcStack_108 = &local_80;
    local_100 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h802749042f990904E;
    local_148 = 0x16c700;
    uStack_140 = 2;
    local_130 = 2;
    goto LAB_002c3957;
  case 0xc:
    _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17he7405723912f7c0bE
              (&local_98,param_2,param_3);
    goto LAB_002c38ff;
  case 0xd:
    local_118 = &local_80;
    uStack_110 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h802749042f990904E;
    local_148 = 0x410f18;
    uStack_140 = 1;
    local_130 = 1;
LAB_002c3957:
    local_138 = (code ***)&local_118;
    uStack_13c = 0;
    uStack_144 = 0;
    local_128 = 0;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17hfcce5e0c4efe3dfbE(&local_98,&local_148);
LAB_002c3967:
    uVar4 = 0xd;
    puVar6 = &DAT_0017538a;
    goto LAB_002c3974;
  case 0xf:
    _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17he7405723912f7c0bE
              (&local_98,param_2,param_3);
    goto LAB_002c3967;
  }
  local_138 = (code ***)&local_118;
  uStack_13c = 0;
  uStack_144 = 0;
  local_128 = 0;
  _ZN4core6option15Option_LT_T_GT_11map_or_else17hfcce5e0c4efe3dfbE(&local_98,&local_148);
LAB_002c38ff:
  uVar4 = 10;
  puVar6 = &DAT_00175397;
LAB_002c3974:
  local_d8 = local_88;
  pcStack_e0 = pcStack_90;
                    /* try { // try from 002c3993 to 002c3c83 has its CatchHandler @ 002c3cde */
  _ZN6chrono5naive8datetime13NaiveDateTime14parse_from_str17hd1f2c37615fc2a8cE
            (&local_148,pcStack_90,local_88,puVar6,uVar4);
  if (local_148 == 0) {
    uVar4 = _ZN8uu_touch15parse_timestamp28__u7b__u7b_closure_u7d__u7d_17h911368d5f366668bE
                      (pcStack_e0,local_d8);
  }
  else {
    local_68 = CONCAT44(uStack_140,uStack_144);
    local_6c = local_148;
    _ZN73__LT_chrono__offset__local__Local_u20_as_u20_chrono__offset__TimeZone_GT_26offset_from_local_datetime17h0fa0613822fc0925E
              (&local_148,1,&local_6c);
    _ZN6chrono6offset20LocalResult_LT_T_GT_8and_then17h38ad213f398289fdE
              (&local_118,&local_148,&local_6c);
    if ((int)local_118 == 0) {
      local_c8 = local_118._4_4_;
      uStack_c4 = (undefined4)uStack_110;
      uStack_c0 = uStack_110._4_4_;
      uStack_bc = ppcStack_108._0_4_;
      _ZN6chrono5naive8datetime13NaiveDateTime22overflowing_add_offset17h44e7199241db0904E
                (&local_148,&local_c8,(ulong)ppcStack_108 & 0xffffffff);
      uVar3 = uStack_144 * -0x11111111 + 0xeeeeeeeb;
      if (((uVar3 >> 2 | uVar3 * 0x40000000) < 0x4444444) &&
         (cVar2 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_9ends_with17h93c3b4fdd31a96baE
                            (pcStack_e0,local_d8,&DAT_00175366,3), cVar2 != '\0')) {
        _ZN121__LT_chrono__datetime__DateTime_LT_Tz_GT__u20_as_u20_core__ops__arith__AddAssign_LT_chrono__time_delta__TimeDelta_GT__GT_10add_assign17hbb08d14e863a0c01E
                  (&local_c8);
      }
      _ZN6chrono8datetime18DateTime_LT_Tz_GT_18checked_add_signed17hdc8fa11fc4c46678E
                (&local_148,&local_c8);
      if (local_148 == 0) {
        ppuVar7 = &PTR_DAT_00410f48;
        puVar6 = &DAT_00174e0c;
LAB_002c3cd3:
                    /* try { // try from 002c3cd3 to 002c3cdd has its CatchHandler @ 002c3cde */
        uVar4 = _ZN4core6option13expect_failed17h9e03a1f6ff88dbcfE(puVar6,0x21,ppuVar7);
                    /* catch() { ... } // from try @ 002c3993 with catch @ 002c3cde
                       catch() { ... } // from try @ 002c3cd3 with catch @ 002c3cde */
                    /* try { // try from 002c3ce1 to 002c3cea has its CatchHandler @ 002c3cf3 */
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hb41aa8b20f891843E(&local_e8);
        puVar5 = (undefined8 *)_Unwind_Resume(uVar4);
        return puVar5;
      }
      local_118 = (code **)CONCAT44(uStack_144,local_148);
      uStack_110 = (code *)CONCAT44(uStack_13c,uStack_140);
      _ZN6chrono8datetime18DateTime_LT_Tz_GT_18checked_sub_signed17h40e2b72c9b42b946E
                (&local_148,&local_118);
      uVar1 = uStack_13c;
      if (local_148 == 0) {
        ppuVar7 = &PTR_DAT_00410f60;
        puVar6 = &DAT_00175369;
        goto LAB_002c3cd3;
      }
      local_58 = uStack_140;
      local_60 = CONCAT44(uStack_144,local_148);
      _ZN6chrono5naive8datetime13NaiveDateTime22overflowing_add_offset17h44e7199241db0904E
                (&local_148,&local_c8,uStack_bc);
      uVar3 = uStack_144;
      _ZN6chrono5naive8datetime13NaiveDateTime22overflowing_add_offset17h44e7199241db0904E
                (&local_148,&local_60,uVar1);
      if (uVar3 / 0xe10 == uStack_144 / 0xe10) {
        auVar8 = _ZN8uu_touch20datetime_to_filetime17hee2fe932dd2f3a25E(&local_c8);
        *(undefined (*) [12])(param_1 + 1) = auVar8;
        *param_1 = 0;
        goto LAB_002c3c9a;
      }
      local_118 = (code **)0x0;
      uStack_110 = local_80;
      ppcStack_108 = ppcStack_78;
      local_100 = (code *)CONCAT71(local_100._1_7_,1);
      local_b0 = 
      _ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17h75932a24bee941d9E;
      local_148 = 0x410f28;
      uStack_144 = 0;
      uStack_140 = 1;
      uStack_13c = 0;
      local_128 = 0;
      local_138 = (code ***)&local_b8;
      local_130 = 1;
      local_b8 = (code *)&local_118;
      _ZN4core6option15Option_LT_T_GT_11map_or_else17hfcce5e0c4efe3dfbE(&local_38,&local_148);
      local_130 = CONCAT44(local_130._4_4_,1);
      local_148 = local_38;
      uStack_144 = uStack_34;
      uStack_140 = uStack_30;
      uStack_13c = uStack_2c;
      local_138 = (code ***)local_28;
      uVar4 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h6ec029cbb0371e9dE(&local_148);
    }
    else {
      local_b8 = (code *)0x0;
      local_b0 = pcStack_e0;
      ppcStack_a8 = (code **)local_d8;
      local_a0 = 1;
      local_98 = &local_b8;
      pcStack_90 = 
      _ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17h75932a24bee941d9E;
      local_148 = 0x410f38;
      uStack_144 = 0;
      uStack_140 = 1;
      uStack_13c = 0;
      local_128 = 0;
      local_138 = &local_98;
      local_130 = 1;
      _ZN4core6option15Option_LT_T_GT_11map_or_else17hfcce5e0c4efe3dfbE(&local_50,&local_148);
      local_130 = CONCAT44(local_130._4_4_,1);
      local_148 = local_50;
      uStack_144 = uStack_4c;
      uStack_140 = uStack_48;
      uStack_13c = uStack_44;
      local_138 = (code ***)local_40;
      uVar4 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h6ec029cbb0371e9dE(&local_148);
    }
  }
  param_1[1] = uVar4;
  param_1[2] = &
               PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17h2a00f7fb509639cfE_00410e78
  ;
  *param_1 = 1;
LAB_002c3c9a:
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hb41aa8b20f891843E(&local_e8);
  return param_1;
}