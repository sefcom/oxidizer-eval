undefined  [16]
_ZN2fd6filter4size10SizeFilter9parse_opt17h90fd64b2c85beca5E(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  byte bVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_RBP;
  ulong uVar7;
  undefined auVar8 [16];
  undefined auVar9 [16];
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  int iStack_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  int local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined local_60 [8];
  undefined8 local_58;
  undefined8 local_50;
  int local_48 [2];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 uVar6;
  
  puVar3 = (undefined8 *)
           _ZN3std4sync9once_lock17OnceLock_LT_T_GT_15get_or_try_init17hed3d15c7cce9ebbcE();
  local_f0 = (ulong)local_f0._4_4_ << 0x20;
  uStack_d8 = 0;
  uStack_c8 = CONCAT31(uStack_c8._1_3_,1);
  uStack_e8 = param_1;
  local_e0 = param_2;
  local_d0 = param_2;
  _ZN14regex_automata4util6search5Input8set_span17h5c7c9dbfef69e703E(&local_f0,param_2);
  local_88 = (undefined4)local_d0;
  uStack_84 = local_d0._4_4_;
  uStack_80 = uStack_c8;
  uStack_7c = uStack_c4;
  local_98 = (undefined4)local_e0;
  uStack_94 = local_e0._4_4_;
  uStack_90 = (undefined4)uStack_d8;
  uStack_8c = uStack_d8._4_4_;
  local_a8 = (int)local_f0;
  uStack_a4 = local_f0._4_4_;
  uStack_a0 = (undefined4)uStack_e8;
  uStack_9c = uStack_e8._4_4_;
  _ZN14regex_automata4meta5regex5Regex11search_half17hd834d68942097f24E
            (&local_f0,*puVar3,puVar3[1],&local_a8);
  if (local_f0 != 0) {
    _ZN5regex5regex6string5Regex11captures_at17he0fb054f08fc93bbE(&local_f0,puVar3,param_1,param_2);
    if ((int)local_f0 != 2) {
      local_68 = local_b0;
      local_78 = local_c0;
      uStack_74 = uStack_bc;
      iStack_70 = iStack_b8;
      uStack_6c = uStack_b4;
      local_88 = (undefined4)local_d0;
      uStack_84 = local_d0._4_4_;
      uStack_80 = uStack_c8;
      uStack_7c = uStack_c4;
      local_98 = (undefined4)local_e0;
      uStack_94 = local_e0._4_4_;
      uStack_90 = (undefined4)uStack_d8;
      uStack_8c = uStack_d8._4_4_;
      local_a8 = (int)local_f0;
      uStack_a4 = local_f0._4_4_;
      uStack_a0 = (undefined4)uStack_e8;
      uStack_9c = uStack_e8._4_4_;
                    /* try { // try from 002f463c to 002f4750 has its CatchHandler @ 002f49a5 */
      _ZN14regex_automata4util8captures8Captures9get_group17h768b37319d65c9e8E(local_48,&local_98,1)
      ;
      if (local_48[0] == 1) {
        uStack_e8 = local_68;
        local_e0 = CONCAT44(uStack_3c,local_40);
        uStack_d8 = CONCAT44(uStack_34,uStack_38);
        local_f0._0_4_ = iStack_70;
        local_f0._4_4_ = uStack_6c;
      }
      else {
        local_f0._0_4_ = 0;
        local_f0._4_4_ = 0;
      }
      auVar8 = _ZN4core6option15Option_LT_T_GT_6map_or17hd9b899954509f5bdE(&local_f0);
      uVar6 = auVar8._8_8_;
      uVar4 = auVar8._0_8_;
      _ZN14regex_automata4util8captures8Captures9get_group17h768b37319d65c9e8E
                (&local_f0,&local_98,2);
      uVar5 = uStack_e8;
      if ((int)local_f0 == 1) {
        local_f0._0_4_ = iStack_70;
        local_f0._4_4_ = uStack_6c;
        uStack_e8 = local_68;
        uStack_d8 = local_e0;
        local_e0 = uVar5;
        auVar8 = _ZN2fd6filter4size10SizeFilter9parse_opt28__u7b__u7b_closure_u7d__u7d_17hf414036a3a312337E
                           (&local_f0);
        if ((auVar8 & (undefined  [16])0x1) != (undefined  [16])0x0) {
          _ZN14regex_automata4util8captures8Captures9get_group17h768b37319d65c9e8E
                    (local_48,&local_98,3);
          if (local_48[0] == 1) {
            uStack_e8 = local_68;
            local_e0 = CONCAT44(uStack_3c,local_40);
            uStack_d8 = CONCAT44(uStack_34,uStack_38);
            local_f0._0_4_ = iStack_70;
            local_f0._4_4_ = uStack_6c;
          }
          else {
            local_f0._0_4_ = 0;
            local_f0._4_4_ = 0;
          }
          uVar5 = _ZN4core6option15Option_LT_T_GT_6map_or17h3de0dd5b83b14239E(&local_f0);
          (*(code *)
            PTR__ZN5alloc3str21__LT_impl_u20_str_GT_12to_lowercase17hb778be1bb3f3f772E_00540928)
                    (local_60,uVar5);
                    /* try { // try from 002f4761 to 002f48b6 has its CatchHandler @ 002f4993 */
          cVar1 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17hf20ef8fd404ea81dE
                            (local_58,local_50,"ki",2);
          unaff_RBP = 0x400;
          if (cVar1 == '\0') {
            local_f0._0_4_ = 0;
            auVar9 = _ZN4core4char7methods15encode_utf8_raw17h5e8f6d90a161f6f4E(0x6b,&local_f0);
            cVar1 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17hf20ef8fd404ea81dE
                              (local_58,local_50,auVar9._0_8_,auVar9._8_8_);
            unaff_RBP = 1000;
            if (cVar1 == '\0') {
              cVar1 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17hf20ef8fd404ea81dE
                                (local_58,local_50,"mi",2);
              unaff_RBP = 0x100000;
              if (cVar1 == '\0') {
                local_f0._0_4_ = 0;
                auVar9 = _ZN4core4char7methods15encode_utf8_raw17h5e8f6d90a161f6f4E(0x6d,&local_f0);
                cVar1 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17hf20ef8fd404ea81dE
                                  (local_58,local_50,auVar9._0_8_,auVar9._8_8_);
                unaff_RBP = 1000000;
                if (cVar1 == '\0') {
                  cVar1 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17hf20ef8fd404ea81dE
                                    (local_58,local_50,"gi",2);
                  unaff_RBP = 0x40000000;
                  if (cVar1 == '\0') {
                    local_f0._0_4_ = 0;
                    auVar9 = _ZN4core4char7methods15encode_utf8_raw17h5e8f6d90a161f6f4E
                                       (0x67,&local_f0);
                    cVar1 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17hf20ef8fd404ea81dE
                                      (local_58,local_50,auVar9._0_8_,auVar9._8_8_);
                    unaff_RBP = 1000000000;
                    if (cVar1 == '\0') {
                      cVar1 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17hf20ef8fd404ea81dE
                                        (local_58,local_50,"ti",2);
                      if (cVar1 == '\0') {
                        local_f0._0_4_ = 0;
                        auVar9 = _ZN4core4char7methods15encode_utf8_raw17h5e8f6d90a161f6f4E
                                           (0x74,&local_f0);
                        cVar1 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17hf20ef8fd404ea81dE
                                          (local_58,local_50,auVar9._0_8_,auVar9._8_8_);
                        if (cVar1 == '\0') {
                          unaff_RBP = 1;
                          cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h2df04f0e3577ee6dE
                                            (local_58,local_50,"b",1);
                          if (cVar1 == '\0') {
                            _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h6194a405d9e61c9bE
                                      (local_60);
                            goto LAB_002f496f;
                          }
                        }
                        else {
                          unaff_RBP = 1000000000000;
                        }
                      }
                      else {
                        unaff_RBP = 0x10000000000;
                      }
                    }
                  }
                }
              }
            }
          }
          _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h6194a405d9e61c9bE(local_60);
          uVar7 = 1;
          cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h2df04f0e3577ee6dE
                            (uVar4,uVar6,&DAT_00177ab6,1);
          if (cVar1 == '\0') {
            cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h2df04f0e3577ee6dE
                              (uVar4,uVar6,&DAT_00177ab7,1);
            if (cVar1 == '\0') {
              bVar2 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h2df04f0e3577ee6dE
                                (uVar4,uVar6,1,0);
              uVar7 = (ulong)bVar2 ^ 3;
            }
            else {
              uVar7 = 0;
            }
          }
          unaff_RBP = unaff_RBP * auVar8._8_8_;
          _ZN4core3ptr51drop_in_place_LT_regex__regex__string__Captures_GT_17hfe1307a37cb3fc3aE
                    (&local_a8);
          goto LAB_002f497e;
        }
      }
LAB_002f496f:
      _ZN4core3ptr51drop_in_place_LT_regex__regex__string__Captures_GT_17hfe1307a37cb3fc3aE
                (&local_a8);
    }
  }
  uVar7 = 3;
LAB_002f497e:
  auVar8._8_8_ = unaff_RBP;
  auVar8._0_8_ = uVar7;
  return auVar8;
}