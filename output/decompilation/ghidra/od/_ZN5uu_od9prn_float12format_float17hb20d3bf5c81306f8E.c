void _ZN5uu_od9prn_float12format_float17hb20d3bf5c81306f8E
               (undefined8 param_1,undefined2 param_2,ulong param_3)

{
  uint uVar1;
  short sVar2;
  double dVar3;
  double dVar4;
  undefined in_XMM0 [16];
  undefined **local_a0;
  undefined *local_98;
  undefined ***local_90;
  undefined8 local_88;
  undefined *puStack_80;
  undefined8 local_78;
  undefined *local_70;
  undefined **local_68;
  code *local_60;
  undefined ***local_58;
  undefined8 local_50;
  undefined *local_48;
  undefined8 local_40;
  undefined *local_38;
  
  local_70 = in_XMM0._0_8_;
  if (((ABS((double)local_70) != INFINITY) &&
      ((in_XMM0 & (undefined  [16])0x7ff0000000000000) != (undefined  [16])0x0)) &&
     (((ulong)local_70 & 0x7ff0000000000000) != 0x7ff0000000000000)) {
    local_38 = local_70;
    (*(code *)PTR_log10_0020acf8)(_DAT_0011a790 & (ulong)local_70);
    dVar3 = (double)(*(code *)PTR_floor_0020ad00)();
    dVar4 = dVar3;
    if (dVar3 <= _s__0011b390) {
      dVar4 = _s__0011b390;
    }
    if (_s__0011b320 <= dVar4) {
      dVar4 = _s__0011b320;
    }
    uVar1 = 0;
    if (!NAN(dVar3)) {
      uVar1 = (int)dVar4;
    }
    dVar4 = (double)(*(code *)PTR___powidf2_0020ad08)(_s__0011b308,uVar1);
    if (((0.0 < (double)local_38) && ((double)local_38 < dVar4)) ||
       (((double)local_38 < 0.0 && ((double)((ulong)dVar4 ^ _DAT_0011aa90) < (double)local_38)))) {
      uVar1 = uVar1 - 1;
    }
    if ((int)uVar1 < 0 || (int)param_3 <= (int)uVar1) {
      if (uVar1 == 0xffffffff) goto LAB_0016b8b5;
      sVar2 = (short)param_3 + -1;
      local_98 = 
      PTR__ZN4core3fmt5float53__LT_impl_u20_core__fmt__LowerExp_u20_for_u20_f64_GT_3fmt17h557be61bd0f0070dE_0020ad10
      ;
    }
    else {
      param_3 = param_3 + (long)(int)~uVar1;
      if (0xffff < param_3) {
        local_a0 = &PTR_s_Formatting_argument_out_of_range_002038d8;
        local_98 = (undefined *)0x1;
        local_90 = (undefined ***)0x8;
        local_88 = 0;
        puStack_80 = (undefined *)0x0;
        param_2 = 0x38e8;
        (*(code *)PTR__ZN4core9panicking9panic_fmt17h96f341d36638c225E_0020a9b0)(&local_a0);
        local_60 = (code *)
                   PTR__ZN4core3fmt5float53__LT_impl_u20_core__fmt__LowerExp_u20_for_u20_f64_GT_3fmt17h557be61bd0f0070dE_0020ad10
        ;
        goto LAB_0016b831;
      }
LAB_0016b8b5:
      sVar2 = (short)param_3;
      local_98 = 
      PTR__ZN4core3fmt5float52__LT_impl_u20_core__fmt__Display_u20_for_u20_f64_GT_3fmt17h78a04ef564c69060E_0020acf0
      ;
    }
    local_a0 = &local_70;
    local_90 = (undefined ***)0x0;
    local_88 = CONCAT62(local_88._2_6_,sVar2);
    puStack_80 = (undefined *)0x0;
    local_78 = CONCAT62(local_78._2_6_,param_2);
    local_68 = (undefined **)&DAT_0011a940;
    local_60 = (code *)&DAT_00000001;
    local_48 = &DAT_0011d258;
    local_40 = 1;
    local_58 = &local_a0;
    local_50 = 3;
    goto LAB_0016b886;
  }
  if (((double)local_70 != 0.0) || (NAN((double)local_70))) {
    local_60 = (code *)
               PTR__ZN4core3fmt5float53__LT_impl_u20_core__fmt__LowerExp_u20_for_u20_f64_GT_3fmt17h557be61bd0f0070dE_0020ad10
    ;
    if (0x7fefffffffffffff < (ulong)ABS((double)local_70)) goto LAB_0016b725;
LAB_0016b831:
    local_68 = &local_70;
    local_50 = CONCAT62(local_50._2_6_,param_2);
    puStack_80 = &DAT_0011d228;
  }
  else {
    if (local_70 == (undefined *)0x0) {
LAB_0016b725:
      local_60 = (code *)
                 PTR__ZN4core3fmt5float52__LT_impl_u20_core__fmt__Display_u20_for_u20_f64_GT_3fmt17h78a04ef564c69060E_0020acf0
      ;
      goto LAB_0016b831;
    }
    local_68 = &PTR_s__0_00203900;
    local_60 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17haf6b42bb4c53f309E;
    local_50 = CONCAT62(local_50._2_6_,param_2);
    puStack_80 = &DAT_0011d2a8;
  }
  local_58 = (undefined ***)0x0;
  local_98 = &DAT_00000001;
  local_a0 = (undefined **)&DAT_0011a940;
  local_78 = 1;
  local_90 = &local_68;
  local_88 = 2;
LAB_0016b886:
  _ZN4core6option15Option_LT_T_GT_11map_or_else17h56b2ee9aee1b26d0E();
  return;
}