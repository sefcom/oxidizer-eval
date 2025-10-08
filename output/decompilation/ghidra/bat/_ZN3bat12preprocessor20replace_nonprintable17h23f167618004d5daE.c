void _ZN3bat12preprocessor20replace_nonprintable17h23f167618004d5daE
               (undefined8 *param_1,long param_2,ulong param_3,ulong param_4,byte param_5)

{
  undefined **ppuVar1;
  long lVar2;
  char cVar3;
  uint uVar4;
  long extraout_RDX;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined **local_a8;
  undefined *puStack_a0;
  undefined ***local_98;
  uint local_8c;
  undefined **local_88;
  undefined *puStack_80;
  undefined ***local_78;
  undefined8 local_70;
  undefined *local_68;
  undefined8 local_60;
  undefined8 *local_58;
  char *local_50;
  char *local_48;
  ulong local_40;
  long local_38;
  
  local_c0 = 0;
  local_b8 = 1;
  local_b0 = 0;
  local_40 = 4;
  if (param_4 != 0) {
    local_40 = param_4;
  }
  local_58 = param_1;
  if (param_3 != 0) {
    local_48 = "^J\n\\x";
    if (param_5 != 0) {
      local_48 = &DAT_00180d0c;
    }
    local_50 = local_48 + (ulong)param_5 + 3;
    uVar9 = 0;
    uVar8 = 0;
    local_38 = param_2;
    do {
      ppuVar1 = (undefined **)(local_38 + uVar9);
      uVar4 = _ZN3bat12preprocessor19try_parse_utf8_char17h1bda9850eb158fe9E
                        (ppuVar1,param_3 - uVar9);
      if (uVar4 == 0x110000) {
        puStack_a0 = 
        PTR__ZN4core3fmt3num52__LT_impl_u20_core__fmt__UpperHex_u20_for_u20_i8_GT_3fmt17hc03941a1f9bbbf93E_00807728
        ;
        local_88 = (undefined **)&DAT_007ce980;
        puStack_80 = &DAT_00000001;
        local_68 = &DAT_002a2c50;
        local_60 = 1;
        local_78 = &local_a8;
        local_70 = 1;
        local_a8 = ppuVar1;
        _ZN75__LT__RF_mut_u20_W_u20_as_u20_core__fmt__Write__write_fmt__SpecWriteFmt_GT_14spec_write_fmt17hc61af94ec255152aE
                  (&local_c0,&local_88);
        lVar7 = 1;
        goto LAB_0053dfd0;
      }
      lVar7 = extraout_RDX;
      if (uVar4 == 9) {
        if ((uVar8 | local_40) >> 0x20 == 0) {
          uVar8 = (uVar8 & 0xffffffff) % (local_40 & 0xffffffff);
        }
        else {
          uVar8 = uVar8 % local_40;
        }
        lVar2 = local_40 - uVar8;
        uVar6 = 0x21b9;
        if (lVar2 != 1) {
          _ZN5alloc6string6String4push17h0ede46164189e411E(&local_c0,0x251c);
          _ZN5alloc5slice29__LT_impl_u20__u5b_T_u5d__GT_6repeat17h069f359f14668369E
                    (&local_88,&DAT_002a2c43,3,lVar2 + -2);
          local_98 = local_78;
          local_a8 = local_88;
          puStack_a0 = puStack_80;
                    /* try { // try from 0053e1e7 to 0053e1f0 has its CatchHandler @ 0053e2d8 */
          _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17h30747c9efb6a6381E
                    (&local_c0,puStack_80,(undefined *)((long)local_78 + (long)puStack_80));
          _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h2ec3c51b3420dbb5E(&local_a8);
          uVar6 = 0x2524;
        }
                    /* try { // try from 0053e200 to 0053e276 has its CatchHandler @ 0053e2f7 */
        _ZN5alloc6string6String4push17h0ede46164189e411E(&local_c0,uVar6);
LAB_0053e20a:
        uVar8 = 0;
      }
      else {
        if (uVar4 == 10) {
          _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17h30747c9efb6a6381E
                    (&local_c0,local_48,local_50);
          goto LAB_0053e20a;
        }
        uVar8 = uVar8 + 1;
        uVar5 = 0xb7;
        if (uVar4 == 0x20) {
LAB_0053dfbb:
                    /* try { // try from 0053dfbb to 0053e1ca has its CatchHandler @ 0053e2f7 */
          _ZN5alloc6string6String4push17h0ede46164189e411E(&local_c0,uVar5);
        }
        else {
          if (uVar4 < 0x20) {
            if (param_5 == 0) {
              local_8c = uVar4 | 0x40;
              local_a8 = (undefined **)&local_8c;
              puStack_a0 = 
              PTR__ZN43__LT_char_u20_as_u20_core__fmt__Display_GT_3fmt17h0215b7857ad55b0cE_00808038;
              local_88 = &PTR_DAT_007ce970;
              puStack_80 = &DAT_00000001;
              local_68 = (undefined *)0x0;
              local_78 = &local_a8;
              local_70 = 1;
              _ZN75__LT__RF_mut_u20_W_u20_as_u20_core__fmt__Write__write_fmt__SpecWriteFmt_GT_14spec_write_fmt17hc61af94ec255152aE
                        (&local_c0,&local_88);
              goto LAB_0053dfd0;
            }
            uVar5 = uVar4 | 0x2400;
            goto LAB_0053dfbb;
          }
          if (uVar4 == 0x7f) {
            uVar5 = 0x2421;
            if (param_5 != 0) goto LAB_0053dfbb;
            _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17h30747c9efb6a6381E
                      (&local_c0,&DAT_002a2c47,"^J\n\\x");
          }
          else {
            uVar5 = uVar4;
            if (((uVar4 - 0x30 < 10) || ((uVar4 & 0xffffffdf) - 0x41 < 0x1a)) ||
               (cVar3 = _ZN4core4char7methods22__LT_impl_u20_char_GT_20is_ascii_punctuation17h348b82be49b67f60E
                                  (uVar4,0xb7), uVar4 - 0x21 < 0x5e || cVar3 != '\0'))
            goto LAB_0053dfbb;
            _ZN4core6escape14escape_unicode17h2f19778bfba7c65aE(&local_88,uVar4);
            puStack_a0 = (undefined *)CONCAT44(puStack_a0._4_4_,puStack_80._0_4_);
            local_a8 = local_88;
            _ZN4core4iter6traits8iterator8Iterator7collect17h8a30b08ce65e21f9E(&local_88,&local_a8);
                    /* try { // try from 0053e284 to 0053e28d has its CatchHandler @ 0053e2ce */
            _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17h30747c9efb6a6381E
                      (&local_c0,puStack_80,(undefined *)((long)local_78 + (long)puStack_80));
            _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h2ec3c51b3420dbb5E(&local_88);
          }
        }
      }
LAB_0053dfd0:
      uVar9 = uVar9 + lVar7;
    } while (uVar9 < param_3);
  }
  local_58[2] = local_b0;
  *local_58 = local_c0;
  local_58[1] = local_b8;
  return;
}