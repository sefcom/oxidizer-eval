void _ZN9alacritty7logging18create_log_message17h5f938c1edaf2ff46E
               (undefined4 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined4 param_6)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined auVar6 [16];
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  ulong local_1a0;
  undefined local_198 [16];
  undefined4 *local_188;
  undefined8 local_180;
  undefined **local_178;
  undefined8 local_170;
  undefined8 **local_168;
  undefined8 local_160;
  undefined *puStack_158;
  undefined8 local_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  long local_138;
  undefined local_128 [8];
  undefined8 local_120;
  undefined8 local_118;
  undefined8 *local_110;
  undefined *local_108;
  undefined4 *local_100;
  undefined *local_f8;
  undefined8 **local_f0;
  undefined *local_e8;
  undefined8 *local_e0;
  code *local_d8;
  undefined2 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 *local_a8;
  code *local_a0;
  undefined8 *local_98;
  code *local_90;
  undefined8 local_88;
  undefined2 local_80;
  undefined *local_78;
  undefined8 local_70;
  undefined8 **local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  long local_38;
  
  local_c8 = param_3;
  local_c0 = param_4;
  local_b8 = param_5;
  local_b0 = param_6;
  auVar6 = (*(code *)PTR__ZN3std4time7Instant7elapsed17h537da767ad82472aE_009dfaa8)(&local_b8);
  local_180 = auVar6._0_8_;
  local_1b4 = auVar6._8_4_;
  local_a8 = *(undefined8 **)(param_2 + 0x30);
  local_110 = &local_180;
  local_108 = 
  PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u64_GT_3fmt17h3bef13756113ac7bE_009deb98
  ;
  local_100 = &local_1b4;
  local_f8 = 
  PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u32_GT_3fmt17h4ee7c3ea607dee75E_009deb88
  ;
  local_f0 = &local_a8;
  local_e8 = 
  PTR__ZN49__LT_log__Level_u20_as_u20_core__fmt__Display_GT_3fmt17hf3e2f8abd8007cc2E_009dff70;
  local_e0 = &local_c8;
  local_d8 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hde322f69d68256c4E;
  local_178 = &PTR_s___009830e8;
  local_170 = 5;
  puStack_158 = &DAT_002036d8;
  local_150 = 4;
  local_168 = &local_110;
  local_160 = 4;
  _ZN4core6option15Option_LT_T_GT_11map_or_else17h50b4264313244ea1E
            (&local_1b0,0,auVar6._8_8_,&local_178);
  uVar2 = local_1a0;
  lVar3 = *(long *)(param_2 + 0x58);
  if (lVar3 == 1) {
    if (*(long *)(param_2 + 0x68) == 0) {
      uVar4 = **(undefined8 **)(param_2 + 0x50);
      lVar3 = (*(undefined8 **)(param_2 + 0x50))[1];
      goto LAB_0055da21;
    }
  }
  else if ((lVar3 == 0) && (*(long *)(param_2 + 0x68) == 0)) {
    uVar4 = 1;
    lVar3 = 0;
    goto LAB_0055da21;
  }
  uVar4 = 0;
LAB_0055da21:
                    /* try { // try from 0055da21 to 0055da32 has its CatchHandler @ 0055dc5f */
  _ZN4core6option15Option_LT_T_GT_11map_or_else17h50b4264313244ea1E
            (local_128,uVar4,lVar3,param_2 + 0x50);
  _ZN52__LT_char_u20_as_u20_core__str__pattern__Pattern_GT_13into_searcher17h19abee4db16fb58dE
            (&local_100,10,local_120,local_118);
  local_110 = (undefined8 *)0x0;
  local_108 = (undefined *)local_118;
  local_d0 = 1;
  if (uVar2 < 0x10000) {
    local_188 = param_1;
    while( true ) {
                    /* try { // try from 0055dab0 to 0055db6f has its CatchHandler @ 0055dc85 */
      auVar6 = _ZN4core3str4iter22SplitInternal_LT_P_GT_4next17hbbc56282d5af3f97E(&local_110);
      uVar5 = local_1a0;
      param_1 = local_188;
      if (auVar6._0_8_ == 0) break;
      local_a8 = (undefined8 *)local_198;
      local_a0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hde322f69d68256c4E;
      local_98 = &DAT_001e8b60;
      local_90 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hde322f69d68256c4E;
      local_88 = 0;
      local_80 = (undefined2)uVar2;
      local_78 = &DAT_00982f40;
      local_70 = 2;
      local_58 = &DAT_00203798;
      local_50 = 2;
      local_68 = &local_a8;
      local_60 = 3;
      local_198 = auVar6;
      _ZN4core6option15Option_LT_T_GT_11map_or_else17h50b4264313244ea1E
                (&local_48,0,auVar6._8_8_,&local_78);
      local_148 = local_48;
      uStack_144 = uStack_44;
      uStack_140 = uStack_40;
      uStack_13c = uStack_3c;
      local_138 = local_38;
                    /* try { // try from 0055db95 to 0055db9c has its CatchHandler @ 0055dc76 */
      _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17h219f3b3c50208c25E
                (&local_1b0,CONCAT44(uStack_3c,uStack_40),local_38 + CONCAT44(uStack_3c,uStack_40));
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hcb6d23ea7ad1ac3aE(&local_148);
    }
  }
  else {
                    /* try { // try from 0055dc04 to 0055dc10 has its CatchHandler @ 0055dc5d */
    auVar6 = _ZN4core3str4iter22SplitInternal_LT_P_GT_4next17hbbc56282d5af3f97E(&local_110);
    uVar5 = uVar2;
    if (auVar6._0_8_ != 0) {
      local_178 = &PTR_DAT_009827a0;
      local_170 = 1;
      local_168 = (undefined8 **)0x8;
      local_160 = 0;
      puStack_158 = (undefined *)0x0;
                    /* try { // try from 0055dc49 to 0055dc5a has its CatchHandler @ 0055dc74 */
      local_198 = auVar6;
      (*(code *)PTR__ZN4core9panicking9panic_fmt17h96f341d36638c225E_009de0e0)
                (&local_178,&PTR_s_alacritty_src_logging_rs____00983138);
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
  }
                    /* try { // try from 0055dbb7 to 0055dbc0 has its CatchHandler @ 0055dc74 */
  _ZN5alloc6string6String8truncate17h4c9243e558c5f483E(&local_1b0,uVar5 - uVar2);
  *(ulong *)(param_1 + 4) = local_1a0;
  *param_1 = local_1b0;
  param_1[1] = uStack_1ac;
  param_1[2] = uStack_1a8;
  param_1[3] = uStack_1a4;
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hcb6d23ea7ad1ac3aE(local_128);
  return;
}