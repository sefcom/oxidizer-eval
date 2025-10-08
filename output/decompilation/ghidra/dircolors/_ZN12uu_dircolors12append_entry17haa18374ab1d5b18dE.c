undefined8 *
_ZN12uu_dircolors12append_entry17haa18374ab1d5b18dE
          (undefined8 *param_1,undefined8 param_2,char *param_3,long param_4,undefined8 param_5,
          undefined8 param_6,undefined8 param_7,undefined4 param_8,undefined4 param_9)

{
  char cVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 local_f8;
  undefined8 uStack_f0;
  long **local_e8;
  undefined8 local_e0;
  undefined *local_d8;
  undefined8 local_d0;
  long *local_c0;
  code *local_b8;
  long *local_b0;
  code *local_a8;
  undefined8 local_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  long **local_90;
  long local_88;
  long local_80;
  undefined8 local_70;
  long local_68;
  undefined4 local_60 [2];
  undefined4 uStack_58;
  long local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  local_38 = param_7;
  local_60[0] = param_8;
  uStack_58 = param_9;
  local_70 = param_2;
  local_50 = param_4;
  local_48 = param_5;
  local_40 = param_6;
  cVar1 = _ZN4core3str7pattern7Pattern12is_prefix_of17h6e83327a0a48e578E(param_4,param_5);
  if (cVar1 == '\0') {
    cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hfc62722f7a17ae0aE
                      (param_6,param_7,&DAT_0011c5e5,7);
    if (((cVar1 != '\0') ||
        (cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hfc62722f7a17ae0aE
                           (param_6,param_7,&DAT_0011c5ec,5), cVar1 != '\0')) ||
       (cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hfc62722f7a17ae0aE
                          (param_6,param_7,"eightbit",8), cVar1 != '\0')) {
      *param_1 = 0x8000000000000000;
      return param_1;
    }
    local_88 = *(long *)PTR_PTR_001fe2c8;
    local_80 = local_88 + 0x4a0;
    local_68 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4find17h13321c5277c7ef75E
                         (&local_88,&local_40);
    if (local_68 == 0) {
      local_c0 = &local_50;
      local_b8 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hc346f95847262c6fE;
      local_f8 = &PTR_DAT_001f5ec0;
      uStack_f0 = 1;
      local_d8 = (undefined *)0x0;
      local_e8 = &local_c0;
      local_e0 = 1;
      _ZN4core6option15Option_LT_T_GT_11map_or_else17h5bf0e5c4a7ca1769E(param_1,&local_f8);
      return param_1;
    }
    local_68 = local_68 + 0x10;
    if (*param_3 == '\x02') {
      local_c0 = (long *)local_60;
      local_b8 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hc346f95847262c6fE;
      local_b0 = &local_68;
      local_a8 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h0284718a7e282620E;
      local_f8 = &PTR_DAT_001f5ed0;
      uStack_f0 = 4;
      local_d8 = &DAT_0011c128;
      local_d0 = 3;
    }
    else {
      local_c0 = &local_68;
      local_b8 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h0284718a7e282620E;
      local_b0 = (long *)local_60;
      local_a8 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hc346f95847262c6fE;
      local_f8 = (undefined **)&DAT_001f5e90;
      uStack_f0 = 3;
      local_d8 = (undefined *)0x0;
    }
    local_e8 = &local_c0;
    local_e0 = 2;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17h5bf0e5c4a7ca1769E(&local_a0,&local_f8);
                    /* try { // try from 00169534 to 00169540 has its CatchHandler @ 00169558 */
    _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17hee3cea90a974f94aE
              (local_70,CONCAT44(uStack_94,uStack_98),(long)local_90 + CONCAT44(uStack_94,uStack_98)
              );
    *param_1 = 0x8000000000000000;
    plVar3 = &local_a0;
    goto LAB_0016939e;
  }
  local_f8 = (undefined **)((ulong)local_f8._4_4_ << 0x20);
  uVar2 = _ZN4core4char7methods15encode_utf8_raw17h5e8f6d90a161f6f4E(0x2e,&local_f8);
  cVar1 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17h84f44b8554ae9ebfE
                    (param_4,param_5,uVar2);
  if (cVar1 == '\0') {
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h6fd947b551626403E
              (&local_88,param_4,param_5);
    if (*param_3 != '\x02') goto LAB_001691ed;
LAB_001692df:
    local_c0 = (long *)local_60;
    local_b8 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hc346f95847262c6fE;
    local_b0 = &local_88;
    local_a8 = 
    _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
    local_f8 = &PTR_DAT_001f5ed0;
    uStack_f0 = 4;
    local_d8 = &DAT_0011c128;
    local_d0 = 3;
    local_e8 = &local_c0;
    local_e0 = 2;
                    /* try { // try from 0016934a to 00169356 has its CatchHandler @ 0016958a */
    _ZN4core6option15Option_LT_T_GT_11map_or_else17h5bf0e5c4a7ca1769E(&local_a0,&local_f8);
  }
  else {
    local_c0 = &local_50;
    local_b8 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hc346f95847262c6fE;
    local_f8 = &PTR_s___001f5e80;
    uStack_f0 = 1;
    local_d8 = (undefined *)0x0;
    local_e8 = &local_c0;
    local_e0 = 1;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17h5bf0e5c4a7ca1769E(&local_88,&local_f8);
    if (*param_3 == '\x02') goto LAB_001692df;
LAB_001691ed:
    local_c0 = &local_88;
    local_b8 = 
    _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
    local_b0 = (long *)local_60;
    local_a8 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hc346f95847262c6fE;
    local_f8 = (undefined **)&DAT_001f5e90;
    uStack_f0 = 3;
    local_d8 = (undefined *)0x0;
    local_e8 = &local_c0;
    local_e0 = 2;
                    /* try { // try from 0016924c to 00169258 has its CatchHandler @ 0016958a */
    _ZN4core6option15Option_LT_T_GT_11map_or_else17h5bf0e5c4a7ca1769E(&local_a0,&local_f8);
  }
  local_f8 = (undefined **)CONCAT44(local_a0._4_4_,(undefined4)local_a0);
  uStack_f0 = CONCAT44(uStack_94,uStack_98);
  local_e8 = local_90;
                    /* try { // try from 00169377 to 00169383 has its CatchHandler @ 0016956d */
  _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17hee3cea90a974f94aE
            (local_70,uStack_f0,(long)local_90 + uStack_f0);
  *param_1 = 0x8000000000000000;
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17he21a9fb453b36e4fE(&local_f8);
  plVar3 = &local_88;
LAB_0016939e:
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17he21a9fb453b36e4fE(plVar3);
  return param_1;
}