void _ZN4just6parser6Parser15presume_keyword17heb52d8ab9717d87eE
               (undefined8 *param_1,undefined8 param_2,undefined param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  char cVar10;
  undefined auVar11 [16];
  undefined local_169;
  undefined *local_168;
  undefined *local_160;
  char *local_158;
  code *local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined local_e8 [16];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  char local_a8;
  undefined auStack_a7 [7];
  char cStack_a0;
  undefined auStack_9f [39];
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  char local_28;
  undefined4 local_27;
  undefined3 uStack_23;
  undefined uStack_20;
  
  local_169 = param_3;
  _ZN4just6parser6Parser7advance17ha6fdbb87ccd3a5f7E(local_e8);
  local_148 = (undefined **)local_e8._0_8_;
  uVar1 = local_148;
  uStack_140 = local_e8._8_8_;
  uVar2 = uStack_140;
  local_138 = (undefined **)local_d8;
  uVar3 = local_138;
  uStack_130 = uStack_d0;
  uVar4 = uStack_130;
  local_128 = local_c8;
  uVar5 = local_128;
  uStack_120 = uStack_c0;
  uVar6 = uStack_120;
  local_118 = local_b8;
  uVar7 = local_118;
  uStack_110 = uStack_b0;
  uVar8 = uStack_110;
  local_27 = auStack_a7._0_4_;
  local_168._0_7_ = (undefined7)((ulong)_local_a8 >> 8);
  if (cStack_a0 == '%') {
    local_148._0_4_ = (undefined4)local_e8._0_8_;
    local_148._4_4_ = SUB84(local_e8._0_8_,4);
    uStack_140._0_4_ = (undefined4)local_e8._8_8_;
    uStack_140._4_4_ = SUB84(local_e8._8_8_,4);
    local_138._0_4_ = (undefined4)local_d8;
    local_138._4_4_ = (undefined4)((ulong)local_d8 >> 0x20);
    uStack_130._0_4_ = (undefined4)uStack_d0;
    uStack_130._4_4_ = (undefined4)((ulong)uStack_d0 >> 0x20);
    local_128._0_4_ = (undefined4)local_c8;
    local_128._4_4_ = (undefined4)((ulong)local_c8 >> 0x20);
    uStack_120._0_4_ = (undefined4)uStack_c0;
    uStack_120._4_4_ = (undefined4)((ulong)uStack_c0 >> 0x20);
    local_118._0_4_ = (undefined4)local_b8;
    local_118._4_4_ = (undefined4)((ulong)local_b8 >> 0x20);
    uStack_110._0_4_ = (undefined4)uStack_b0;
    uStack_110._4_4_ = (undefined4)((ulong)uStack_b0 >> 0x20);
    local_68 = (undefined4)local_148;
    uStack_64 = local_148._4_4_;
    uStack_60 = (undefined4)uStack_140;
    uStack_5c = uStack_140._4_4_;
    local_58 = (undefined4)local_138;
    uStack_54 = local_138._4_4_;
    uStack_50 = (undefined4)uStack_130;
    uStack_4c = uStack_130._4_4_;
    local_48 = (undefined4)local_128;
    uStack_44 = local_128._4_4_;
    uStack_40 = (undefined4)uStack_120;
    uStack_3c = uStack_120._4_4_;
    local_38 = (undefined4)local_118;
    uStack_34 = local_118._4_4_;
    uStack_30 = (undefined4)uStack_110;
    uStack_2c = uStack_110._4_4_;
    auVar11._8_4_ = auStack_a7._3_4_;
    auVar11._0_8_ = local_78;
    auVar11._12_4_ = 0;
    uStack_23 = (undefined3)((ulong)_local_a8 >> 0x28);
    local_28 = local_a8;
    uStack_120 = uVar6;
    local_118 = uVar7;
    uStack_110 = uVar8;
    if (local_a8 == '\x18') {
      local_148 = (undefined **)uVar1;
      uStack_140 = uVar2;
      local_138 = (undefined **)uVar3;
      uStack_130 = uVar4;
      local_128 = uVar5;
      local_e8 = (*(code *)PTR__ZN4just5token5Token6lexeme17h66587cdf67f63270E_00566a10)(&local_68);
      cVar10 = (*(code *)
                 PTR__ZN78__LT_just__keyword__Keyword_u20_as_u20_core__cmp__PartialEq_LT__RF_str_GT__GT_2eq17h72387ea6ad90b2efE_00566c50
               )(&local_169,local_e8);
      if (cVar10 != '\0') {
        *(undefined *)(param_1 + 9) = 0x25;
        return;
      }
      auVar11 = (*(code *)PTR__ZN4just5token5Token6lexeme17h66587cdf67f63270E_00566a10)(&local_68);
      local_70 = auVar11._8_8_;
      local_160 = 
      PTR__ZN61__LT_just__keyword__Keyword_u20_as_u20_core__fmt__Display_GT_3fmt17h38d1b5ba2fdc1664E_00565f98
      ;
      local_158 = (char *)&local_78;
      local_150 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hcd9ad0a553cee1efE;
      local_148 = &PTR_DAT_005306f8;
      uStack_140 = 3;
      local_168 = &local_169;
    }
    else {
      local_158 = &local_28;
      local_168 = &DAT_0016e88e;
      local_160 = 
      PTR__ZN66__LT_just__token_kind__TokenKind_u20_as_u20_core__fmt__Display_GT_3fmt17h4cb9518a42607a95E_00565f00
      ;
      local_150 = (code *)
                  PTR__ZN66__LT_just__token_kind__TokenKind_u20_as_u20_core__fmt__Display_GT_3fmt17h4cb9518a42607a95E_00565f00
      ;
      local_148 = &PTR_DAT_005306d8;
      uStack_140 = 2;
    }
    local_78 = auVar11._0_8_;
    local_128 = 0;
    local_138 = &local_168;
    uStack_130 = 2;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17h4ceadf09b7aa2c32E
              (local_e8 + 8,0,auVar11._8_8_,&local_148);
    local_e8._0_8_ = 0x8000000000000028;
    _ZN4just6parser6Parser5error17hcfcee5ba02637174E(&local_148,param_2,local_e8);
    param_1[8] = local_100;
    param_1[9] = uStack_f8;
    param_1[6] = uStack_110;
    param_1[7] = uStack_108;
    param_1[4] = uStack_120;
    param_1[5] = local_118;
    param_1[2] = uStack_130;
    param_1[3] = local_128;
    *param_1 = uStack_140;
    param_1[1] = local_138;
  }
  else {
    uVar9 = auStack_9f._0_4_;
    *(undefined4 *)((long)param_1 + 0x4c) = auStack_9f._3_4_;
    *(undefined4 *)((long)param_1 + 0x49) = uVar9;
    param_1[6] = local_b8;
    param_1[7] = uStack_b0;
    param_1[4] = local_c8;
    param_1[5] = uStack_c0;
    param_1[2] = local_d8;
    param_1[3] = uStack_d0;
    *param_1 = local_e8._0_8_;
    param_1[1] = local_e8._8_8_;
    *(undefined4 *)((long)param_1 + 0x44) = auStack_a7._3_4_;
    *(undefined4 *)((long)param_1 + 0x41) = local_27;
    *(char *)(param_1 + 8) = local_a8;
    *(char *)(param_1 + 9) = cStack_a0;
  }
  return;
}