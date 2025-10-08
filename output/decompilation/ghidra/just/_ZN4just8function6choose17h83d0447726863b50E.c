undefined8 *
_ZN4just8function6choose17h83d0447726863b50E
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5
          ,long param_6)

{
  char cVar1;
  ulong uVar2;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 *puVar3;
  undefined auVar4 [16];
  undefined local_121;
  undefined8 *local_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined8 local_110;
  undefined8 *local_100;
  code *local_f8;
  undefined *local_f0;
  undefined *local_e8;
  undefined **local_e0;
  undefined8 **local_d8;
  undefined8 **local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  long local_b0;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  char local_98;
  undefined local_97;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  local_120 = param_1;
  local_88 = param_3;
  local_80 = param_4;
  auVar4 = _ZN3std6thread5local17LocalKey_LT_T_GT_4with17hdd70f1898d43baa2E();
  _ZN9hashbrown3map24HashMap_LT_K_C_V_C_S_GT_24with_capacity_and_hasher17h63b6eadcd60cf47fE
            (&local_78,param_6,auVar4._0_8_,auVar4._8_8_);
  local_b0 = param_5;
  local_a8 = param_6 + param_5;
  auVar4 = _ZN4core3str11validations15next_code_point17he89b2cd8a446aa48E(&local_b0);
  uVar2 = auVar4._8_8_;
  if ((auVar4 & (undefined  [16])0x1) != (undefined  [16])0x0) {
    do {
      local_118 = (undefined4)uVar2;
                    /* try { // try from 00369e54 to 00369e5d has its CatchHandler @ 0036a0a1 */
      cVar1 = _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_6insert17h2af7b92ca7762240E
                        (&local_78,uVar2 & 0xffffffff);
      if (cVar1 != '\0') {
        local_100 = (undefined8 *)&local_118;
        local_f8 = (code *)
                   PTR__ZN43__LT_char_u20_as_u20_core__fmt__Display_GT_3fmt17h0215b7857ad55b0cE_00566430
        ;
        local_e0 = &PTR_s_alphabet_contains_repeated_chara_0052fdb0;
        local_d8 = (undefined8 **)0x2;
        local_c0 = 0;
        local_d0 = &local_100;
        local_c8 = 1;
                    /* try { // try from 00369fe7 to 00369ffa has its CatchHandler @ 0036a08b */
        _ZN4core6option15Option_LT_T_GT_11map_or_else17h4ceadf09b7aa2c32E
                  (&local_48,0,extraout_RDX,&local_e0);
        local_120[3] = local_38;
        *(undefined4 *)(local_120 + 1) = local_48;
        *(undefined4 *)((long)local_120 + 0xc) = uStack_44;
        *(undefined4 *)(local_120 + 2) = uStack_40;
        *(undefined4 *)((long)local_120 + 0x14) = uStack_3c;
        *local_120 = 1;
        puVar3 = local_120;
        goto LAB_0036a04c;
      }
      auVar4 = _ZN4core3str11validations15next_code_point17he89b2cd8a446aa48E(&local_b0);
      uVar2 = auVar4._8_8_;
    } while ((auVar4 & (undefined  [16])0x1) != (undefined  [16])0x0);
  }
                    /* try { // try from 00369e72 to 00369e84 has its CatchHandler @ 0036a08b */
  _ZN4core4iter6traits8iterator8Iterator7collect17h3611f2f820a4d673E
            (&local_118,param_5,param_6 + param_5);
  _ZN4core3num23__LT_impl_u20_usize_GT_16from_ascii_radix17he77532141bbadde7E
            (&local_98,param_3,param_4);
  if (local_98 == '\0') {
    local_100 = (undefined8 *)(*(code *)PTR__ZN4rand4rngs6thread3rng17hef6247fa92ae25d7E_00566b78)()
    ;
    local_d0 = (undefined8 **)0x0;
    local_c8 = local_90;
    local_d8 = &local_100;
                    /* try { // try from 00369f6e to 00369f7c has its CatchHandler @ 0036a076 */
    local_e0 = (undefined **)&local_118;
    _ZN4core4iter6traits8iterator8Iterator7collect17hcf3d54e9baa350dbE(local_120,&local_e0);
                    /* try { // try from 00369f7d to 00369f86 has its CatchHandler @ 0036a08d */
    _ZN4core3ptr50drop_in_place_LT_rand__rngs__thread__ThreadRng_GT_17h0c7eb0e715cf9f73E(&local_100)
    ;
    _ZN4core3ptr47drop_in_place_LT_alloc__vec__Vec_LT_u32_GT__GT_17h4b26006e42ee6c54E
              (CONCAT44(uStack_114,local_118),local_110);
    puVar3 = local_120;
  }
  else {
    local_121 = local_97;
    local_100 = &local_88;
    local_f8 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hcd9ad0a553cee1efE;
    local_f0 = &local_121;
    local_e8 = 
    PTR__ZN70__LT_core__num__error__ParseIntError_u20_as_u20_core__fmt__Display_GT_3fmt17h3e61086f3d7b9af4E_00566b70
    ;
    local_e0 = &PTR_s_failed_to_parse____as_positive_i_0052fdd0;
    local_d8 = (undefined8 **)0x2;
    local_c0 = 0;
    local_d0 = &local_100;
    local_c8 = 2;
                    /* try { // try from 00369f12 to 00369f4b has its CatchHandler @ 0036a08d */
    _ZN4core6option15Option_LT_T_GT_11map_or_else17h4ceadf09b7aa2c32E
              (&local_b0,0,extraout_RDX_00,&local_e0);
    puVar3 = local_120;
    local_120[1] = local_b0;
    *(undefined4 *)(local_120 + 2) = (undefined4)local_a8;
    *(undefined4 *)((long)local_120 + 0x14) = local_a8._4_4_;
    *(undefined4 *)(local_120 + 3) = uStack_a0;
    *(undefined4 *)((long)local_120 + 0x1c) = uStack_9c;
    *local_120 = 1;
    _ZN4core3ptr47drop_in_place_LT_alloc__vec__Vec_LT_u32_GT__GT_17h4b26006e42ee6c54E
              (CONCAT44(uStack_114,local_118),local_110,extraout_RDX_01,-local_b0);
  }
LAB_0036a04c:
  _ZN4core3ptr69drop_in_place_LT_std__collections__hash__set__HashSet_LT_char_GT__GT_17h545f9764f395959fE
            (local_78,local_70);
  return puVar3;
}