/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _ZN7uu_more5Pager11draw_prompt17hbe0a765e7105d705E
               (long param_1,undefined8 param_2,long param_3,int param_4)

{
  long lVar1;
  undefined ****ppppuVar2;
  bool bVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined **local_148;
  code *local_140;
  undefined ***local_138;
  code *local_130;
  char *local_128;
  code *local_120;
  undefined ***local_118;
  code *pcStack_110;
  undefined8 local_108;
  undefined8 **local_100;
  undefined8 **local_f8;
  undefined **local_f0;
  code *local_e8;
  undefined8 local_e0;
  int local_cc;
  undefined **local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined *local_a8 [3];
  undefined **local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined **local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined **local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined **local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 == param_3) {
    ppppuVar2 = *(undefined *****)(param_1 + 0x20);
    local_f8 = ppppuVar2;
    local_100 = (undefined8 **)&DAT_00000001;
    if (ppppuVar2 != (undefined ****)0x0) {
      local_f8 = *(undefined8 ***)(param_1 + 0x28);
      local_100 = ppppuVar2;
    }
    local_118 = (undefined ***)&local_100;
    pcStack_110 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h482629c9d5db64e0E;
    local_148 = &PTR_DAT_00262a88;
    local_140 = (code *)0x1;
    local_138 = (undefined ***)&local_118;
  }
  else {
    auVar7._8_4_ = (int)((ulong)param_3 >> 0x20);
    auVar7._0_8_ = param_3;
    auVar7._12_4_ = _UNK_0010e6d4;
    auVar8._8_4_ = (int)((ulong)lVar1 >> 0x20);
    auVar8._0_8_ = lVar1;
    auVar8._12_4_ = _UNK_0010e6d4;
    dVar5 = (double)(*(code *)PTR_round_002683a0)
                              ((((auVar7._8_8_ - _UNK_0010e668) +
                                ((double)CONCAT44(_DAT_0010e6d0,(int)param_3) - _DAT_0010e660)) /
                               ((auVar8._8_8_ - _UNK_0010e668) +
                               ((double)CONCAT44(_DAT_0010e6d0,(int)lVar1) - _DAT_0010e660))) *
                               _s__0010e2f0);
    dVar6 = 0.0;
    if (0.0 <= dVar5) {
      dVar6 = dVar5;
    }
    dVar5 = _s__0010e390;
    if (dVar6 <= _s__0010e390) {
      dVar5 = dVar6;
    }
    local_118 = (undefined ***)CONCAT62(local_118._2_6_,(short)(int)dVar5);
    local_100 = &local_118;
    local_f8 = (undefined8 **)
               _ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u16_GT_3fmt17hc16e9a303f8fca40E
    ;
    local_148 = (undefined **)&DAT_00262a98;
    local_140 = (code *)0x2;
    local_138 = (undefined ***)&local_100;
  }
  local_128 = (char *)0x0;
  local_130 = (code *)0x1;
  _ZN4core6option15Option_LT_T_GT_11map_or_else17h94c131af24f37af4E(local_a8,&local_148);
  local_100 = (undefined8 **)local_a8;
  local_f8 = (undefined8 **)
             _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hf84d46339d179f53E
  ;
  local_148 = &PTR_DAT_00262ab8;
  local_140 = (code *)0x2;
  local_128 = (char *)0x0;
  local_130 = (code *)0x1;
                    /* try { // try from 001dd8ae to 001dd8c0 has its CatchHandler @ 001ddb5c */
  local_138 = (undefined ***)&local_100;
  _ZN4core6option15Option_LT_T_GT_11map_or_else17h94c131af24f37af4E(&local_90,&local_148);
  local_c8 = local_90;
  uStack_c0 = uStack_88;
  local_b8 = local_80;
  if (*(char *)(param_1 + 0x42) == '\0') {
    if (param_4 == 0x110000) {
      local_108 = local_80;
      local_118 = (undefined ***)local_90;
      pcStack_110 = (code *)uStack_88;
      bVar3 = true;
      goto LAB_001ddaa1;
    }
    local_100 = &local_c8;
    local_f8 = (undefined8 **)
               _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hf84d46339d179f53E
    ;
    local_f0 = &PTR_DAT_00262b58;
    local_e8 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h482629c9d5db64e0E;
    local_148 = (undefined **)&DAT_00113510;
    local_140 = (code *)0x2;
    local_128 = (char *)0x0;
    local_130 = (code *)0x2;
    local_138 = (undefined ***)&local_100;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17h94c131af24f37af4E(&local_48,&local_148);
    local_118 = (undefined ***)local_48;
    pcStack_110 = (code *)uStack_40;
    local_50 = local_38;
  }
  else if (param_4 == 0x110000) {
    local_100 = &local_c8;
    local_f8 = (undefined8 **)
               _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hf84d46339d179f53E
    ;
    local_148 = (undefined **)&DAT_00262b08;
    local_140 = (code *)0x2;
    local_128 = (char *)0x0;
    local_130 = (code *)0x1;
                    /* try { // try from 001dd936 to 001dda7e has its CatchHandler @ 001ddb61 */
    local_138 = (undefined ***)&local_100;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17h94c131af24f37af4E(&local_60,&local_148);
    local_118 = (undefined ***)local_60;
    pcStack_110 = (code *)uStack_58;
  }
  else {
    local_100 = &local_c8;
    local_f8 = (undefined8 **)
               _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hf84d46339d179f53E
    ;
    local_f0 = (undefined **)&local_cc;
    local_e8 = _ZN43__LT_char_u20_as_u20_core__fmt__Display_GT_3fmt17hfe75cd72bcd9c522E;
    local_148 = (undefined **)&DAT_00262ad8;
    local_140 = (code *)0x3;
    local_128 = (char *)0x0;
    local_130 = (code *)0x2;
    local_138 = (undefined ***)&local_100;
    local_cc = param_4;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17h94c131af24f37af4E(&local_78,&local_148);
    local_118 = (undefined ***)local_78;
    pcStack_110 = (code *)uStack_70;
    local_50 = local_68;
  }
  bVar3 = false;
  local_108 = local_50;
LAB_001ddaa1:
  local_148 = (undefined **)&DAT_00118aac;
  local_140 = 
  _ZN84__LT_crossterm__style__types__attribute__Attribute_u20_as_u20_core__fmt__Display_GT_3fmt17h8e43bbdd8f4ff5a1E
  ;
  local_138 = (undefined ***)&local_118;
  local_130 = 
  _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hf84d46339d179f53E;
  local_128 = "";
  local_120 = 
  _ZN84__LT_crossterm__style__types__attribute__Attribute_u20_as_u20_core__fmt__Display_GT_3fmt17h8e43bbdd8f4ff5a1E
  ;
  local_100 = (undefined8 **)&PTR_DAT_00262b28;
  local_f8 = (undefined8 **)0x3;
  local_e0 = 0;
  local_e8 = (code *)0x3;
                    /* try { // try from 001ddb04 to 001ddb20 has its CatchHandler @ 001ddb66 */
  local_f0 = (undefined **)&local_148;
  uVar4 = _ZN57__LT_std__io__stdio__Stdout_u20_as_u20_std__io__Write_GT_9write_fmt17h0f6acf0ef7a6b873E
                    (param_2,&local_100);
  _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h830102b0065460c6E(uVar4,&PTR_DAT_00262b68);
                    /* try { // try from 001ddb21 to 001ddb2a has its CatchHandler @ 001ddb61 */
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h1f03875085d5f083E(&local_118);
  if (!bVar3) {
                    /* try { // try from 001ddb30 to 001ddb3c has its CatchHandler @ 001ddb5c */
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h1f03875085d5f083E(&local_c8);
  }
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h1f03875085d5f083E(local_a8);
  return;
}