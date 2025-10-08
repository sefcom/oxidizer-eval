void _ZN5uu_pr21get_line_for_printing17hd1db5805a3293521E
               (undefined8 param_1,long param_2,long *param_3,undefined8 param_4,long param_5,
               ulong param_6,undefined8 param_7,long param_8)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long *local_138;
  undefined8 uStack_130;
  long **pplStack_128;
  code *local_120;
  undefined8 **local_118;
  code *local_110;
  long *local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 *local_f8;
  long *local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  code *pcStack_c0;
  long **local_b8;
  code *local_b0;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  long local_78;
  long local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  long *local_58;
  long **local_50;
  undefined local_48 [24];
  
  local_90 = 0;
  local_88 = 1;
  local_80 = 0;
                    /* try { // try from 002379c0 to 002379d2 has its CatchHandler @ 00237c75 */
  local_98 = param_4;
  _ZN5uu_pr25get_formatted_line_number17h27e3eb06f4d26408E(local_48,param_2,param_3[4],param_5);
  local_d0 = param_1;
                    /* try { // try from 002379e8 to 00237a5e has its CatchHandler @ 00237c8d */
  _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h117773ddb1da076cE(0,param_3);
  pcStack_c0 = 
  _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
  local_b0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hdf43014d0105ab1fE;
  local_138 = (long *)&DAT_00156960;
  uStack_130 = (code *)0x2;
  local_118 = (undefined8 **)0x0;
  pplStack_128 = (long **)&local_c8;
  local_120 = (code *)0x2;
  local_e8 = param_3;
  local_c8 = local_48;
  local_b8 = &local_e8;
  _ZN4core6option15Option_LT_T_GT_11map_or_else17ha768742fd52e18baE(&local_108,&local_138);
  local_e8 = local_108;
  uStack_e0 = uStack_100;
  uStack_dc = uStack_fc;
  local_d8 = local_f8;
  local_78 = param_2 + 0xa8;
  lVar2 = _ZN4core4iter6traits8iterator8Iterator4fold17ha87ed6a5236a3e93E
                    (CONCAT44(uStack_fc,uStack_100),CONCAT44(uStack_fc,uStack_100) + (long)local_f8)
  ;
  local_70 = lVar2 * 7 + (long)local_f8;
  local_68 = (undefined8 *)(param_2 + 0xc0);
  if ((*(byte *)(param_2 + 0x143) & 1) != 0) {
    local_68 = &local_90;
  }
  if (param_5 + 1 == param_8) {
    local_68 = &local_90;
  }
  local_60 = &local_98;
  local_58 = &local_70;
  local_50 = &local_e8;
  if ((param_6 & 1) != 0) {
                    /* try { // try from 00237b10 to 00237b1f has its CatchHandler @ 00237c57 */
    _ZN5uu_pr21get_line_for_printing28__u7b__u7b_closure_u7d__u7d_17h87bd5cf778ef51f9E
              (&local_138,&local_60,param_7);
    uVar3 = local_d0;
    local_f8 = pplStack_128;
    local_108 = local_138;
    local_c8 = uStack_130;
    uVar1 = local_c8;
    pcStack_c0 = (code *)pplStack_128;
    pplStack_128 = (long **)local_d8;
    local_138 = local_e8;
    if (local_108 != (long *)0x8000000000000000) {
      local_c8._0_4_ = SUB84(uStack_130,0);
      local_c8._4_4_ = (undefined4)((ulong)uStack_130 >> 0x20);
      uStack_100 = (undefined4)local_c8;
      uStack_fc = local_c8._4_4_;
      local_c8 = (undefined *)uVar1;
      uStack_130._0_4_ = uStack_e0;
      uStack_130._4_4_ = uStack_dc;
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h5b204ce323401e77E(&local_138);
      goto LAB_00237b9f;
    }
  }
  local_f8 = local_d8;
  local_108 = local_e8;
  uStack_100 = uStack_e0;
  uStack_fc = uStack_dc;
  uVar3 = local_d0;
LAB_00237b9f:
  pplStack_128 = &local_108;
  local_138 = &local_78;
  uStack_130 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hdf43014d0105ab1fE;
  local_120 = 
  _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
  local_118 = &local_68;
  local_110 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hdf43014d0105ab1fE;
  local_c8 = &DAT_00158358;
  pcStack_c0 = (code *)0x3;
  local_a8 = 0;
  local_b0 = (code *)0x3;
                    /* try { // try from 00237c17 to 00237c20 has its CatchHandler @ 00237c66 */
  local_b8 = &local_138;
  _ZN4core6option15Option_LT_T_GT_11map_or_else17ha768742fd52e18baE(uVar3,&local_c8);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h5b204ce323401e77E(&local_108);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h5b204ce323401e77E(local_48);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h5b204ce323401e77E(&local_90);
  return;
}