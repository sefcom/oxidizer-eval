void _ZN8uu_split8strategy10NumberType4from17hc4926dd19f854e4eE
               (long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  long lVar3;
  ulong uVar4;
  char cVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar10;
  long lVar11;
  undefined auVar12 [16];
  undefined4 local_238;
  undefined4 uStack_234;
  ulong local_230;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined8 local_218;
  undefined8 uStack_210;
  long local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  ulong local_1f0;
  long local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined local_1d0 [48];
  undefined2 local_1a0;
  int local_198 [2];
  ulong local_190;
  int local_178 [2];
  ulong local_170;
  int local_158 [2];
  ulong local_150;
  int local_138 [2];
  ulong local_130;
  int local_118 [2];
  ulong local_110;
  int local_f8 [2];
  ulong local_f0;
  int local_d8 [2];
  ulong local_d0;
  int local_b8 [2];
  ulong local_b0;
  int local_98 [2];
  ulong local_90;
  long local_78;
  long lStack_70;
  long local_68;
  long local_60;
  long lStack_58;
  long local_50;
  long local_48;
  long lStack_40;
  long local_38;
  undefined8 uVar9;
  
  _ZN52__LT_char_u20_as_u20_core__str__pattern__Pattern_GT_13into_searcher17h19abee4db16fb58dE
            (local_1d0);
  local_1e0 = 0;
  local_1a0 = 1;
  local_1e8 = 3;
  local_1d8 = param_3;
  auVar12 = _ZN4core3str4iter22SplitInternal_LT_P_GT_4next17h4684a7967878d36bE(&local_1e0);
  uVar9 = auVar12._8_8_;
  local_208 = auVar12._0_8_;
  if (local_1e8 == 0) {
    if (local_208 == 0) goto LAB_0016c8ce;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_1f0;
    auVar12 = auVar1 << 0x40;
    lVar8 = 0;
  }
  else {
    local_1f8 = param_2;
    if (local_1e8 == 1) {
      local_1e8 = 0;
      auVar12 = _ZN4core3str4iter22SplitInternal_LT_P_GT_7get_end17h646a6ea46284ce37E(&local_1e0);
    }
    else {
      local_1e8 = local_1e8 + -1;
      auVar12 = _ZN4core3str4iter22SplitInternal_LT_P_GT_4next17h4684a7967878d36bE(&local_1e0);
    }
    local_200 = auVar12._8_8_;
    lVar6 = auVar12._0_8_;
    if (local_1e8 == 0) {
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_1f0;
      auVar12 = auVar2 << 0x40;
      lVar8 = 0;
    }
    else {
      if (local_1e8 == 1) {
        local_1e8 = 0;
        auVar12 = _ZN4core3str4iter22SplitInternal_LT_P_GT_7get_end17h646a6ea46284ce37E(&local_1e0);
      }
      else {
        local_1e8 = local_1e8 + -1;
        auVar12 = _ZN4core3str4iter22SplitInternal_LT_P_GT_4next17h4684a7967878d36bE(&local_1e0);
      }
      local_1f0 = auVar12._8_8_;
      uVar7 = auVar12._0_8_;
      if (local_1e8 == 0) {
        lVar8 = 0;
      }
      else if (local_1e8 == 1) {
        local_1e8 = 0;
        lVar8 = _ZN4core3str4iter22SplitInternal_LT_P_GT_7get_end17h646a6ea46284ce37E(&local_1e0);
        auVar12._8_8_ = local_1f0;
        auVar12._0_8_ = uVar7;
      }
      else {
        local_1e8 = local_1e8 + -1;
        lVar8 = _ZN4core3str4iter22SplitInternal_LT_P_GT_4next17h4684a7967878d36bE(&local_1e0);
        auVar12._8_8_ = local_1f0;
        auVar12._0_8_ = uVar7;
      }
    }
    lVar3 = local_208;
    local_1f0 = auVar12._8_8_;
    lVar11 = auVar12._0_8_;
    param_2 = local_1f8;
    if (local_208 == 0) goto LAB_0016c8ce;
    if (lVar6 != 0) {
      if (lVar11 != 0) {
        if (lVar8 != 0) goto LAB_0016c8ce;
        cVar5 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hb641e38be83010ceE
                          (local_208,uVar9,"l",1);
        uVar4 = local_1f0;
        if (cVar5 == '\0') {
          cVar5 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hb641e38be83010ceE
                            (lVar3,uVar9,"r",1);
          uVar4 = local_1f0;
          param_2 = local_1f8;
          if (cVar5 == '\0') goto LAB_0016c8ce;
          (*(code *)
            PTR__ZN6uucore8features6parser10parse_size14parse_size_u6417hcabf5090504a6d94E_00212100)
                    (local_b8,lVar11,local_1f0);
          uVar10 = local_b0;
          if (local_b8[0] != 4) {
            _ZN8uu_split8strategy10NumberType4from28__u7b__u7b_closure_u7d__u7d_17h15fe79e5260eb355E
                      (&local_238,lVar11,uVar4,local_b8);
            lVar8 = CONCAT44(uStack_234,local_238);
            local_218 = CONCAT44(uStack_224,local_228);
            uStack_210 = CONCAT44(uStack_21c,uStack_220);
            uVar10 = local_230;
            if (lVar8 != 2) goto LAB_0016caf6;
          }
          uVar9 = local_200;
          (*(code *)
            PTR__ZN6uucore8features6parser10parse_size14parse_size_u6417hcabf5090504a6d94E_00212100)
                    (local_98,lVar6,local_200);
          local_150 = local_90;
          if (local_98[0] != 4) {
            _ZN8uu_split8strategy10NumberType4from28__u7b__u7b_closure_u7d__u7d_17h1344f155129ae797E
                      (&local_238,lVar6,uVar9,local_98);
            lVar8 = CONCAT44(uStack_234,local_238);
            local_218 = CONCAT44(uStack_224,local_228);
            uStack_210 = CONCAT44(uStack_21c,uStack_220);
            local_150 = local_230;
            if (lVar8 != 2) goto LAB_0016cbce;
          }
          if (local_150 - 1 < uVar10) {
            param_1[1] = 5;
            goto LAB_0016cbba;
          }
          _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17hfadfb68a35ae07bfE
                    (&local_48,lVar6,uVar9);
          *param_1 = 1;
          param_1[1] = local_48;
          param_1[2] = lStack_40;
          local_50 = local_38;
        }
        else {
          (*(code *)
            PTR__ZN6uucore8features6parser10parse_size14parse_size_u6417hcabf5090504a6d94E_00212100)
                    (local_118,lVar11,local_1f0);
          uVar10 = local_110;
          if (local_118[0] != 4) {
            _ZN8uu_split8strategy10NumberType4from28__u7b__u7b_closure_u7d__u7d_17h15fe79e5260eb355E
                      (&local_238,lVar11,uVar4,local_118);
            lVar8 = CONCAT44(uStack_234,local_238);
            local_218 = CONCAT44(uStack_224,local_228);
            uStack_210 = CONCAT44(uStack_21c,uStack_220);
            uVar10 = local_230;
            if (lVar8 != 2) {
LAB_0016caf6:
              param_1[2] = local_218;
              param_1[3] = uStack_210;
              *param_1 = lVar8;
              param_1[1] = local_230;
              return;
            }
          }
          uVar9 = local_200;
          (*(code *)
            PTR__ZN6uucore8features6parser10parse_size14parse_size_u6417hcabf5090504a6d94E_00212100)
                    (local_f8,lVar6,local_200);
          local_150 = local_f0;
          if (local_f8[0] != 4) {
            _ZN8uu_split8strategy10NumberType4from28__u7b__u7b_closure_u7d__u7d_17h1344f155129ae797E
                      (&local_238,lVar6,uVar9,local_f8);
            lVar8 = CONCAT44(uStack_234,local_238);
            local_218 = CONCAT44(uStack_224,local_228);
            uStack_210 = CONCAT44(uStack_21c,uStack_220);
            local_150 = local_230;
            if (lVar8 != 2) goto LAB_0016cbce;
          }
          if (local_150 - 1 < uVar10) {
            param_1[1] = 3;
LAB_0016cbba:
            param_1[2] = local_150;
            param_1[3] = uVar10;
            *param_1 = 2;
            return;
          }
          _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17hfadfb68a35ae07bfE
                    (&local_60,lVar6,uVar9);
          *param_1 = 1;
          param_1[1] = local_60;
          param_1[2] = lStack_58;
        }
LAB_0016cc13:
        param_1[3] = local_50;
        return;
      }
      if (lVar8 != 0) goto LAB_0016c8ce;
      local_238 = 0;
      auVar12 = _ZN4core4char7methods15encode_utf8_raw17h5e8f6d90a161f6f4E(0x6c,&local_238);
      lVar8 = local_208;
      cVar5 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17hae3dd1415174f1afE
                        (local_208,uVar9,auVar12._0_8_,auVar12._8_8_);
      if (cVar5 == '\0') {
        local_238 = 0;
        auVar12 = _ZN4core4char7methods15encode_utf8_raw17h5e8f6d90a161f6f4E(0x72,&local_238);
        cVar5 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17hae3dd1415174f1afE
                          (lVar8,uVar9,auVar12._0_8_,auVar12._8_8_);
        uVar7 = local_200;
        if (cVar5 == '\0') {
          (*(code *)
            PTR__ZN6uucore8features6parser10parse_size14parse_size_u6417hcabf5090504a6d94E_00212100)
                    (local_178,lVar6,local_200);
          uVar10 = local_170;
          if (local_178[0] != 4) {
            _ZN8uu_split8strategy10NumberType4from28__u7b__u7b_closure_u7d__u7d_17h15fe79e5260eb355E
                      (&local_238,lVar6,uVar7,local_178);
            lVar8 = CONCAT44(uStack_234,local_238);
            local_218 = CONCAT44(uStack_224,local_228);
            uStack_210 = CONCAT44(uStack_21c,uStack_220);
            uVar10 = local_230;
            if (lVar8 != 2) goto LAB_0016caf6;
          }
          lVar8 = local_208;
          (*(code *)
            PTR__ZN6uucore8features6parser10parse_size14parse_size_u6417hcabf5090504a6d94E_00212100)
                    (local_158,local_208,uVar9);
          if (local_158[0] != 4) {
            _ZN8uu_split8strategy10NumberType4from28__u7b__u7b_closure_u7d__u7d_17h1344f155129ae797E
                      (&local_238,lVar8,uVar9,local_158);
            lVar8 = CONCAT44(uStack_234,local_238);
            local_218 = CONCAT44(uStack_224,local_228);
            uStack_210 = CONCAT44(uStack_21c,uStack_220);
            local_150 = local_230;
            if (lVar8 != 2) goto LAB_0016cbce;
          }
          if (uVar10 <= local_150 - 1) {
            _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17hfadfb68a35ae07bfE
                      (&local_78,local_208,uVar9);
            *param_1 = 1;
            param_1[1] = local_78;
            param_1[2] = lStack_70;
            local_50 = local_68;
            goto LAB_0016cc13;
          }
          param_1[1] = 1;
          goto LAB_0016cbba;
        }
      }
      cVar5 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hb641e38be83010ceE
                        (lVar8,uVar9,"l",1);
      uVar7 = local_200;
      if (cVar5 == '\0') {
        cVar5 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hb641e38be83010ceE
                          (lVar8,uVar9,"r",1);
        uVar9 = local_200;
        param_2 = local_1f8;
        if (cVar5 == '\0') goto LAB_0016c8ce;
        (*(code *)
          PTR__ZN6uucore8features6parser10parse_size14parse_size_u6417hcabf5090504a6d94E_00212100)
                  (local_d8,lVar6,local_200);
        if (local_d8[0] == 4) {
          param_1[1] = 4;
        }
        else {
          _ZN8uu_split8strategy10NumberType4from28__u7b__u7b_closure_u7d__u7d_17h15fe79e5260eb355E
                    (&local_238,lVar6,uVar9,local_d8);
          lVar8 = CONCAT44(uStack_234,local_238);
          local_218 = CONCAT44(uStack_224,local_228);
          uStack_210 = CONCAT44(uStack_21c,uStack_220);
          if (lVar8 != 2) goto LAB_0016cbce;
          param_1[1] = 4;
          local_d0 = local_230;
        }
      }
      else {
        (*(code *)
          PTR__ZN6uucore8features6parser10parse_size14parse_size_u6417hcabf5090504a6d94E_00212100)
                  (local_138,lVar6,local_200);
        local_d0 = local_130;
        if (local_138[0] != 4) {
          _ZN8uu_split8strategy10NumberType4from28__u7b__u7b_closure_u7d__u7d_17h15fe79e5260eb355E
                    (&local_238,lVar6,uVar7,local_138);
          lVar8 = CONCAT44(uStack_234,local_238);
          local_218 = CONCAT44(uStack_224,local_228);
          uStack_210 = CONCAT44(uStack_21c,uStack_220);
          local_d0 = local_230;
          if (lVar8 != 2) goto LAB_0016cbce;
        }
        param_1[1] = 2;
      }
      goto LAB_0016c7a3;
    }
  }
  lVar6 = local_208;
  local_1f0 = auVar12._8_8_;
  if (auVar12._0_8_ == 0 && lVar8 == 0) {
    (*(code *)
      PTR__ZN6uucore8features6parser10parse_size14parse_size_u6417hcabf5090504a6d94E_00212100)
              (local_198,local_208);
    local_d0 = local_190;
    if (local_198[0] != 4) {
      _ZN8uu_split8strategy10NumberType4from28__u7b__u7b_closure_u7d__u7d_17h15fe79e5260eb355E
                (&local_238,lVar6,uVar9,local_198);
      lVar8 = CONCAT44(uStack_234,local_238);
      local_218 = CONCAT44(uStack_224,local_228);
      uStack_210 = CONCAT44(uStack_21c,uStack_220);
      local_d0 = local_230;
      if (lVar8 != 2) {
LAB_0016cbce:
        param_1[2] = local_218;
        param_1[3] = uStack_210;
        *param_1 = lVar8;
        param_1[1] = local_230;
        return;
      }
    }
    if (local_d0 != 0) {
      param_1[1] = 0;
LAB_0016c7a3:
      param_1[2] = local_d0;
      *param_1 = 2;
      return;
    }
  }
LAB_0016c8ce:
  _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17hfadfb68a35ae07bfE
            (param_1 + 1,param_2,param_3);
  *param_1 = 0;
  return;
}