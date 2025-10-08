void _ZN13linera_server22generate_shard_configs17h797ef9f940b78891E
               (undefined8 *param_1,long param_2,long param_3,long param_4,long *param_5)

{
  code *pcVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  undefined8 uVar6;
  undefined auVar7 [16];
  undefined2 local_1aa;
  long local_1a8;
  long local_1a0;
  undefined2 local_196;
  undefined2 local_194;
  undefined local_192;
  long local_190;
  undefined8 *local_188;
  long *local_180;
  ulong local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined *local_120;
  undefined8 local_118;
  undefined2 local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 *local_88;
  undefined8 local_80;
  undefined *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 *local_58;
  undefined2 local_50;
  undefined2 local_4e;
  undefined2 local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uVar5;
  
  local_140 = 0;
  uStack_138 = 8;
  local_130 = 0;
  local_178 = *(ulong *)(param_2 + 0x10);
  local_188 = param_1;
  local_180 = param_5;
                    /* try { // try from 01274c8d to 01274cde has its CatchHandler @ 01275121 */
  uVar3 = (*(code *)
            PTR__ZN85__LT_core__num__nonzero__NonZero_LT_u16_GT__u20_as_u20_core__str__traits__FromStr_GT_8from_str17h46095c0b114ecf54E_0253c350
          )(*(undefined8 *)(param_2 + 8));
  _ZN6anyhow7context92__LT_impl_u20_anyhow__Context_LT_T_C_E_GT__u20_for_u20_core__result__Result_LT_T_C_E_GT__GT_7context17h56fe65bd4f8ca836E
            (&local_170,uVar3);
  if ((char)local_170 == '\x01') {
    local_188[1] = uStack_168;
    *local_188 = 0x8000000000000000;
LAB_0127507a:
    _ZN4core3ptr75drop_in_place_LT_alloc__vec__Vec_LT_linera_rpc__config__ShardConfig_GT__GT_17hdce81733620e5e9eE
              (&local_140);
  }
  else {
    uVar4 = local_170._2_2_;
    _ZN5alloc5slice29__LT_impl_u20__u5b_T_u5d__GT_6repeat17h81c48da97d7aaeaeE(&local_170,local_178);
    local_f8 = local_160;
    local_108 = (undefined4)local_170;
    uStack_104 = local_170._4_4_;
    uStack_100 = (undefined4)uStack_168;
    uStack_fc = uStack_168._4_4_;
    local_196 = 1;
    local_194 = uVar4;
    local_192 = 0;
    local_1a8 = param_4;
    local_1a0 = param_3;
    local_190 = param_2;
    auVar7 = _ZN107__LT_core__ops__range__RangeInclusive_LT_T_GT__u20_as_u20_core__iter__range__RangeInclusiveIteratorImpl_GT_9spec_next17h3ecf8294ecef4006E
                       (&local_196);
    uVar6 = auVar7._8_8_;
    if ((auVar7 & (undefined  [16])0x1) != (undefined  [16])0x0) {
      if (0xffff < local_178) {
        local_1aa = auVar7._8_2_;
        local_170 = &PTR_s_Formatting_argument_out_of_range_02439590;
        uStack_168 = 1;
        local_160 = 8;
        local_158 = 0;
        uStack_150 = 0;
                    /* try { // try from 01275103 to 0127511e has its CatchHandler @ 0127516f */
        (*(code *)PTR__ZN4core9panicking9panic_fmt17h96f341d36638c225E_02538f38)
                  (&local_170,&PTR_s_linera_service_src_server_rs_024395b8);
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      local_a0 = *(undefined8 *)(local_1a0 + 8);
      local_a8 = *(undefined8 *)(local_1a0 + 0x10);
      local_b0 = *(undefined8 *)(local_1a8 + 8);
      local_b8 = *(undefined8 *)(local_1a8 + 0x10);
      local_c0 = *local_180;
      local_c8 = local_180[1];
      local_d0 = local_180[2];
      do {
        local_1aa = (undefined2)uVar6;
        local_128 = &local_1aa;
        local_120 = 
        PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u16_GT_3fmt17h76cd049dd60d778dE_02539208
        ;
        local_118 = 0;
        local_110 = (undefined2)local_178;
        local_98 = &DAT_004124d0;
        uStack_90 = 1;
        local_78 = &DAT_00444600;
        local_70 = 1;
        local_88 = &local_128;
        local_80 = 2;
                    /* try { // try from 01274e4c to 01274e5d has its CatchHandler @ 01275128 */
        _ZN4core6option15Option_LT_T_GT_11map_or_else17h88aa0508b6ec7e9cE
                  (&local_48,0,uVar6,&local_98);
        uVar5 = local_38;
        local_e8 = local_48;
        uStack_e4 = uStack_44;
        uStack_e0 = uStack_40;
        uStack_dc = uStack_3c;
        local_d8 = local_38;
        uVar6 = CONCAT44(uStack_3c,uStack_40);
                    /* try { // try from 01274e86 to 01274ea9 has its CatchHandler @ 0127513c */
        _ZN5alloc3str21__LT_impl_u20_str_GT_8replacen17h100dbfefe7096d7fE
                  (&local_98,local_a0,local_a8,&local_108,uVar6,local_38);
                    /* try { // try from 01274eaa to 01274eca has its CatchHandler @ 01275141 */
        _ZN5alloc3str21__LT_impl_u20_str_GT_8replacen17h100dbfefe7096d7fE
                  (&local_170,local_b0,local_b8,&local_108,uVar6,uVar5);
        uVar3 = _ZN4core3num21__LT_impl_u20_u16_GT_16from_ascii_radix17h81be443e3f8b1a62E
                          (uStack_168,local_160);
                    /* try { // try from 01274eda to 01274ef4 has its CatchHandler @ 0127512d */
        uVar4 = 0x26;
        _ZN6anyhow7context92__LT_impl_u20_anyhow__Context_LT_T_C_E_GT__u20_for_u20_core__result__Result_LT_T_C_E_GT__GT_7context17he53f2e4ef820badbE
                  (&local_128,uVar3,&DAT_00444630);
        if ((char)local_128 == '\x01') {
          local_188[1] = local_120;
          *local_188 = 0x8000000000000000;
          _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h7a0da5bc6b56cb0bE(&local_170);
LAB_01275044:
          _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h7a0da5bc6b56cb0bE(&local_98);
          _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h7a0da5bc6b56cb0bE(&local_e8);
          _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h7a0da5bc6b56cb0bE(&local_108);
          param_4 = local_1a8;
          param_2 = local_190;
          param_3 = local_1a0;
          goto LAB_0127507a;
        }
        uVar2 = local_128._2_2_;
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h7a0da5bc6b56cb0bE(&local_170);
        if (local_c0 == -0x8000000000000000) {
LAB_01274f54:
          local_50 = 0;
          local_4e = uVar4;
        }
        else {
                    /* try { // try from 01274f28 to 01274f48 has its CatchHandler @ 01275141 */
          _ZN13linera_server22generate_shard_configs28__u7b__u7b_closure_u7d__u7d_17h20b7e0e61f5dddd2E
                    (&local_170,&local_108,uVar6,uVar5,local_c8,local_d0);
          uVar4 = (undefined2)uVar5;
          if ((short)local_170 == 2) goto LAB_01274f54;
          if (((ulong)local_170 & 1) != 0) {
            local_188[1] = uStack_168;
            *local_188 = 0x8000000000000000;
            goto LAB_01275044;
          }
          local_50 = 1;
          local_4e = local_170._2_2_;
        }
        local_58 = local_88;
        local_68 = (undefined4)local_98;
        uStack_64 = local_98._4_4_;
        uStack_60 = (undefined4)uStack_90;
        uStack_5c = uStack_90._4_4_;
        local_4c = uVar2;
                    /* try { // try from 01274faa to 01274fc2 has its CatchHandler @ 01275126 */
        _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h2a0d4745bba74f85E
                  (&local_140,&local_68,&PTR_s_linera_service_src_server_rs_024395a0);
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h7a0da5bc6b56cb0bE(&local_e8);
        auVar7 = _ZN107__LT_core__ops__range__RangeInclusive_LT_T_GT__u20_as_u20_core__iter__range__RangeInclusiveIteratorImpl_GT_9spec_next17h3ecf8294ecef4006E
                           (&local_196);
        uVar6 = auVar7._8_8_;
      } while ((auVar7 & (undefined  [16])0x1) != (undefined  [16])0x0);
    }
    local_188[2] = local_130;
    *(undefined4 *)local_188 = (undefined4)local_140;
    *(undefined4 *)((long)local_188 + 4) = local_140._4_4_;
    *(undefined4 *)(local_188 + 1) = (undefined4)uStack_138;
    *(undefined4 *)((long)local_188 + 0xc) = uStack_138._4_4_;
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h7a0da5bc6b56cb0bE(&local_108);
    param_4 = local_1a8;
    param_2 = local_190;
    param_3 = local_1a0;
  }
  _ZN4core3ptr70drop_in_place_LT_core__option__Option_LT_alloc__string__String_GT__GT_17h4c15117c4d827c0bE
            (local_180);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h7a0da5bc6b56cb0bE(param_4);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h7a0da5bc6b56cb0bE(param_3);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h7a0da5bc6b56cb0bE(param_2);
  return;
}