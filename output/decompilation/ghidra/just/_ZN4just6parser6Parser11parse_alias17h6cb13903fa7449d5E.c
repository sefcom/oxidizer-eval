void _ZN4just6parser6Parser11parse_alias17h6cb13903fa7449d5E
               (undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

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
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
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
  undefined8 local_28;
  
                    /* try { // try from 0037a0f5 to 0037a1dd has its CatchHandler @ 0037a50e */
  _ZN4just6parser6Parser15presume_keyword17heb52d8ab9717d87eE(&local_158,param_2,0);
  if ((char)uStack_110 == '%') {
    _ZN4just6parser6Parser10parse_name17he2804e36e47b7e10E(&local_158,param_2);
    local_d8 = local_158;
    uVar1 = local_d8;
    uStack_d0 = uStack_150;
    uVar2 = uStack_d0;
    local_c8 = local_148;
    uVar3 = local_c8;
    uStack_c0 = uStack_140;
    uVar4 = uStack_c0;
    local_b8 = local_138;
    uVar5 = local_b8;
    uStack_b0 = uStack_130;
    uVar6 = uStack_b0;
    local_a8 = local_128;
    uVar7 = local_a8;
    uStack_a0 = uStack_120;
    uVar8 = uStack_a0;
    local_98 = local_118;
    if ((char)uStack_110 == '%') {
      local_d8._0_4_ = (undefined4)local_158;
      local_d8._4_4_ = (undefined4)((ulong)local_158 >> 0x20);
      uStack_d0._0_4_ = (undefined4)uStack_150;
      uStack_d0._4_4_ = (undefined4)((ulong)uStack_150 >> 0x20);
      local_c8._0_4_ = (undefined4)local_148;
      local_c8._4_4_ = (undefined4)((ulong)local_148 >> 0x20);
      uStack_c0._0_4_ = (undefined4)uStack_140;
      uStack_c0._4_4_ = (undefined4)((ulong)uStack_140 >> 0x20);
      local_b8._0_4_ = (undefined4)local_138;
      local_b8._4_4_ = (undefined4)((ulong)local_138 >> 0x20);
      uStack_b0._0_4_ = (undefined4)uStack_130;
      uStack_b0._4_4_ = (undefined4)((ulong)uStack_130 >> 0x20);
      local_a8._0_4_ = (undefined4)local_128;
      local_a8._4_4_ = (undefined4)((ulong)local_128 >> 0x20);
      uStack_a0._0_4_ = (undefined4)uStack_120;
      uStack_a0._4_4_ = (undefined4)((ulong)uStack_120 >> 0x20);
      local_68 = (undefined4)local_d8;
      uStack_64 = local_d8._4_4_;
      uStack_60 = (undefined4)uStack_d0;
      uStack_5c = uStack_d0._4_4_;
      local_58 = (undefined4)local_c8;
      uStack_54 = local_c8._4_4_;
      uStack_50 = (undefined4)uStack_c0;
      uStack_4c = uStack_c0._4_4_;
      local_48 = (undefined4)local_b8;
      uStack_44 = local_b8._4_4_;
      uStack_40 = (undefined4)uStack_b0;
      uStack_3c = uStack_b0._4_4_;
      local_38 = (undefined4)local_a8;
      uStack_34 = local_a8._4_4_;
      uStack_30 = (undefined4)uStack_a0;
      uStack_2c = uStack_a0._4_4_;
      local_28 = local_118;
      local_d8 = uVar1;
      uStack_d0 = uVar2;
      local_c8 = uVar3;
      uStack_c0 = uVar4;
      local_b8 = uVar5;
      uStack_b0 = uVar6;
      local_a8 = uVar7;
      uStack_a0 = uVar8;
      _ZN4just6parser6Parser11presume_any17hdb874b0785d8f9b5E(&local_158,param_2);
      if ((char)uStack_110 == '%') {
        _ZN4just6parser6Parser14parse_namepath17hf7b725240a87d50fE(&local_158,param_2);
        if ((char)uStack_110 == '%') {
          local_88 = (undefined4)local_158;
          uStack_84 = local_158._4_4_;
          uStack_80 = (undefined4)uStack_150;
          uStack_7c = uStack_150._4_4_;
          local_78 = local_148;
                    /* try { // try from 0037a205 to 0037a24c has its CatchHandler @ 0037a4fc */
          _ZN4just6parser6Parser10expect_eol17h0cc9a2a21fbfd19fE(&local_158,param_2);
          if ((char)uStack_110 == '%') {
            _ZN4just13attribute_set12AttributeSet23ensure_valid_attributes17h6f0be17f12135348E
                      (&local_158,param_3,"Alias",5,&local_68,&DAT_001715f0,1);
            if ((char)uStack_110 == '%') {
              uVar2 = *param_3;
              uVar3 = param_3[1];
              uVar1 = param_3[2];
              param_1[2] = local_78;
              param_1[3] = CONCAT44(uStack_64,local_68);
              param_1[4] = CONCAT44(uStack_5c,uStack_60);
              param_1[5] = CONCAT44(uStack_54,local_58);
              param_1[6] = CONCAT44(uStack_4c,uStack_50);
              param_1[7] = CONCAT44(uStack_44,local_48);
              param_1[8] = CONCAT44(uStack_3c,uStack_40);
              param_1[9] = CONCAT44(uStack_34,local_38);
              param_1[0xe] = uVar1;
              param_1[0xc] = uVar2;
              param_1[0xd] = uVar3;
              param_1[10] = CONCAT44(uStack_2c,uStack_30);
              param_1[0xb] = local_28;
              *param_1 = CONCAT44(uStack_84,local_88);
              param_1[1] = CONCAT44(uStack_7c,uStack_80);
              return;
            }
          }
          param_1[9] = local_118;
          param_1[10] = uStack_110;
          *(undefined4 *)(param_1 + 7) = (undefined4)local_128;
          *(undefined4 *)((long)param_1 + 0x3c) = local_128._4_4_;
          *(undefined4 *)(param_1 + 8) = (undefined4)uStack_120;
          *(undefined4 *)((long)param_1 + 0x44) = uStack_120._4_4_;
          *(undefined4 *)(param_1 + 5) = (undefined4)local_138;
          *(undefined4 *)((long)param_1 + 0x2c) = local_138._4_4_;
          *(undefined4 *)(param_1 + 6) = (undefined4)uStack_130;
          *(undefined4 *)((long)param_1 + 0x34) = uStack_130._4_4_;
          *(undefined4 *)(param_1 + 3) = (undefined4)local_148;
          *(undefined4 *)((long)param_1 + 0x1c) = local_148._4_4_;
          *(undefined4 *)(param_1 + 4) = (undefined4)uStack_140;
          *(undefined4 *)((long)param_1 + 0x24) = uStack_140._4_4_;
          *(undefined4 *)(param_1 + 1) = (undefined4)local_158;
          *(undefined4 *)((long)param_1 + 0xc) = local_158._4_4_;
          *(undefined4 *)(param_1 + 2) = (undefined4)uStack_150;
          *(undefined4 *)((long)param_1 + 0x14) = uStack_150._4_4_;
          *param_1 = 0x8000000000000000;
          _ZN4core3ptr45drop_in_place_LT_just__namepath__Namepath_GT_17h15a9b2a7c35752fbE(&local_88)
          ;
          goto LAB_0037a445;
        }
        local_98 = local_118;
        local_d8 = local_158;
        uStack_d0 = uStack_150;
        local_c8 = local_148;
        uStack_c0 = uStack_140;
        local_b8 = local_138;
        uStack_b0 = uStack_130;
        local_a8 = local_128;
        uStack_a0 = uStack_120;
        *(undefined4 *)((long)param_1 + 0x54) = uStack_110._4_4_;
        uVar9 = uStack_110._1_4_;
        goto LAB_0037a378;
      }
      uVar9 = local_118._1_4_;
      local_d8._0_7_ = (undefined7)((ulong)local_118 >> 8);
      *(undefined4 *)((long)param_1 + 0x54) = uStack_110._4_4_;
      *(undefined4 *)((long)param_1 + 0x51) = uStack_110._1_4_;
      *(undefined4 *)((long)param_1 + 0x4c) = local_118._4_4_;
      *(undefined4 *)((long)param_1 + 0x49) = uVar9;
      param_1[1] = local_158;
      *(undefined4 *)(param_1 + 2) = (undefined4)uStack_150;
      *(undefined4 *)((long)param_1 + 0x14) = uStack_150._4_4_;
      *(undefined4 *)(param_1 + 3) = (undefined4)local_148;
      *(undefined4 *)((long)param_1 + 0x1c) = local_148._4_4_;
      param_1[4] = uStack_140;
      param_1[5] = local_138;
      param_1[6] = uStack_130;
      param_1[7] = local_128;
      param_1[8] = uStack_120;
      *(undefined *)(param_1 + 9) = (undefined)local_118;
    }
    else {
      uVar9 = uStack_110._1_4_;
      *(undefined4 *)((long)param_1 + 0x54) = uStack_110._4_4_;
LAB_0037a378:
      *(undefined4 *)((long)param_1 + 0x51) = uVar9;
      param_1[9] = local_98;
      param_1[7] = local_a8;
      param_1[8] = uStack_a0;
      param_1[5] = local_b8;
      param_1[6] = uStack_b0;
      param_1[3] = local_c8;
      param_1[4] = uStack_c0;
      *(undefined4 *)(param_1 + 1) = (undefined4)local_d8;
      *(undefined4 *)((long)param_1 + 0xc) = local_d8._4_4_;
      *(undefined4 *)(param_1 + 2) = (undefined4)uStack_d0;
      *(undefined4 *)((long)param_1 + 0x14) = uStack_d0._4_4_;
    }
    *(char *)(param_1 + 10) = (char)uStack_110;
  }
  else {
    param_1[9] = local_118;
    param_1[10] = uStack_110;
    param_1[7] = local_128;
    param_1[8] = uStack_120;
    param_1[5] = local_138;
    param_1[6] = uStack_130;
    param_1[3] = local_148;
    param_1[4] = uStack_140;
    *(undefined4 *)(param_1 + 1) = (undefined4)local_158;
    *(undefined4 *)((long)param_1 + 0xc) = local_158._4_4_;
    *(undefined4 *)(param_1 + 2) = (undefined4)uStack_150;
    *(undefined4 *)((long)param_1 + 0x14) = uStack_150._4_4_;
  }
  *param_1 = 0x8000000000000000;
LAB_0037a445:
  _ZN4core3ptr54drop_in_place_LT_just__attribute_set__AttributeSet_GT_17he9a7d0819ed0965dE(param_3);
  return;
}