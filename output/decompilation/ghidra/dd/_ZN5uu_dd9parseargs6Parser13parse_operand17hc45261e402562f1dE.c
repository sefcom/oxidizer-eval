long * _ZN5uu_dd9parseargs6Parser13parse_operand17hc45261e402562f1dE
                 (long *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  long local_80;
  undefined uStack_78;
  undefined7 uStack_77;
  undefined uStack_70;
  undefined7 uStack_6f;
  undefined uStack_68;
  undefined7 uStack_67;
  undefined8 local_60;
  undefined8 local_58;
  long local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  _ZN4core3str21__LT_impl_u20_str_GT_10split_once17hf156b2cc47c681beE(&local_50,param_3,param_4);
  if (local_50 == 0) {
LAB_0018d2fa:
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h074386e79a8fa9e7E
              (param_1 + 1,param_3,param_4);
    *param_1 = 0;
    return param_1;
  }
  cVar2 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h9308b2f97abc21f0E
                    (local_50,local_48,"bs",2);
  if (cVar2 == '\0') {
    local_58 = local_40;
    local_60 = local_38;
    cVar2 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h9308b2f97abc21f0E
                      (local_50,local_48,"cbs",3);
    if (cVar2 == '\0') {
      cVar2 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h9308b2f97abc21f0E
                        (local_50,local_48,&DAT_0011ea4c,4);
      uVar1 = local_58;
      if (cVar2 == '\0') {
        cVar2 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h9308b2f97abc21f0E
                          (local_50,local_48,"count",5);
        if (cVar2 != '\0') {
          _ZN5uu_dd9parseargs6Parser7parse_n17heb126d767e01e2d5E(&local_80,uVar1,local_60);
          lVar3 = CONCAT71(uStack_77,uStack_78);
          lVar4 = CONCAT71(uStack_6f,uStack_70);
          if (local_80 != 0xe) goto LAB_0018d28b;
          param_2[0xc] = lVar3;
          param_2[0xd] = lVar4;
          goto LAB_0018d061;
        }
        cVar2 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h9308b2f97abc21f0E
                          (local_50,local_48,"ibs",3);
        if (cVar2 != '\0') {
          _ZN5uu_dd9parseargs6Parser11parse_bytes17h00e70da24ed84a9cE(&local_80,uVar1,local_60);
          lVar3 = CONCAT71(uStack_77,uStack_78);
          if (local_80 != 0xe) goto LAB_0018d0fc;
          param_2[2] = 1;
          param_2[3] = lVar3;
          goto LAB_0018d061;
        }
        cVar2 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h9308b2f97abc21f0E
                          (local_50,local_48,"if",2);
        if (cVar2 != '\0') {
          _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h074386e79a8fa9e7E
                    (&local_80,uVar1,local_60);
          _ZN4core3ptr70drop_in_place_LT_core__option__Option_LT_alloc__string__String_GT__GT_17h458f2cd4198a43edE
                    (param_2 + 0xe);
          param_2[0x10] = CONCAT71(uStack_6f,uStack_70);
          param_2[0xe] = local_80;
          param_2[0xf] = CONCAT71(uStack_77,uStack_78);
          goto LAB_0018d061;
        }
        cVar2 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h9308b2f97abc21f0E
                          (local_50,local_48,"iflag",5);
        if (cVar2 == '\0') {
          cVar2 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h9308b2f97abc21f0E
                            (local_50,local_48,"obs",3);
          if (cVar2 != '\0') {
            _ZN5uu_dd9parseargs6Parser11parse_bytes17h00e70da24ed84a9cE(&local_80,uVar1,local_60);
            lVar3 = CONCAT71(uStack_77,uStack_78);
            if (local_80 != 0xe) goto LAB_0018d0fc;
            param_2[4] = 1;
            param_2[5] = lVar3;
            goto LAB_0018d061;
          }
          cVar2 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h9308b2f97abc21f0E
                            (local_50,local_48,"of",2);
          if (cVar2 != '\0') {
            _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h074386e79a8fa9e7E
                      (&local_80,uVar1,local_60);
            _ZN4core3ptr70drop_in_place_LT_core__option__Option_LT_alloc__string__String_GT__GT_17h458f2cd4198a43edE
                      (param_2 + 0x11);
            param_2[0x13] = CONCAT71(uStack_6f,uStack_70);
            param_2[0x11] = local_80;
            param_2[0x12] = CONCAT71(uStack_77,uStack_78);
            goto LAB_0018d061;
          }
          cVar2 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h9308b2f97abc21f0E
                            (local_50,local_48,"oflag",5);
          if (cVar2 == '\0') {
            cVar2 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h9308b2f97abc21f0E
                              (local_50,local_48,&DAT_0011ea38,4);
            if ((cVar2 == '\0') &&
               (cVar2 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h9308b2f97abc21f0E
                                  (local_50,local_48,"oseek",5), cVar2 == '\0')) {
              cVar2 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h9308b2f97abc21f0E
                                (local_50,local_48,&DAT_0011ea00,4);
              if ((cVar2 == '\0') &&
                 (cVar2 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h9308b2f97abc21f0E
                                    (local_50,local_48,"iseek",5), cVar2 == '\0')) {
                cVar2 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h9308b2f97abc21f0E
                                  (local_50,local_48,"status",6);
                if (cVar2 == '\0') goto LAB_0018d2fa;
                _ZN5uu_dd9parseargs6Parser18parse_status_level17hea4c02f91140d667E
                          (&local_80,local_58,local_60);
                if (local_80 != 0xe) {
                  param_1[3] = CONCAT71(uStack_67,uStack_68);
                  *(ulong *)((long)param_1 + 9) = CONCAT17(uStack_70,uStack_77);
                  *(ulong *)((long)param_1 + 0x11) = CONCAT17(uStack_68,uStack_6f);
                  *param_1 = local_80;
                  *(undefined *)(param_1 + 1) = uStack_78;
                  return param_1;
                }
                *(undefined *)(param_2 + 0x1a) = uStack_78;
              }
              else {
                _ZN5uu_dd9parseargs6Parser7parse_n17heb126d767e01e2d5E(&local_80,uVar1,local_60);
                lVar3 = CONCAT71(uStack_77,uStack_78);
                lVar4 = CONCAT71(uStack_6f,uStack_70);
                if (local_80 != 0xe) goto LAB_0018d28b;
                param_2[8] = lVar3;
                param_2[9] = lVar4;
              }
            }
            else {
              _ZN5uu_dd9parseargs6Parser7parse_n17heb126d767e01e2d5E(&local_80,uVar1,local_60);
              lVar3 = CONCAT71(uStack_77,uStack_78);
              lVar4 = CONCAT71(uStack_6f,uStack_70);
              if (local_80 != 0xe) {
LAB_0018d28b:
                *param_1 = local_80;
                param_1[1] = lVar3;
                param_1[2] = lVar4;
                param_1[3] = CONCAT71(uStack_67,uStack_68);
                return param_1;
              }
              param_2[10] = lVar3;
              param_2[0xb] = lVar4;
            }
            goto LAB_0018d061;
          }
          _ZN5uu_dd9parseargs6Parser18parse_output_flags17h7dcc2f9cdb69a82aE
                    (&local_80,param_2,uVar1,local_60);
        }
        else {
          _ZN5uu_dd9parseargs6Parser17parse_input_flags17h456bbd798366a223E
                    (&local_80,param_2,uVar1,local_60);
        }
      }
      else {
        *(undefined *)(param_2 + 0x18) = 1;
        _ZN5uu_dd9parseargs6Parser16parse_conv_flags17h6cbe050dd8e53067E
                  (&local_80,param_2,local_58,local_60);
      }
      if (local_80 != 0xe) {
        param_1[3] = CONCAT71(uStack_67,uStack_68);
        param_1[1] = CONCAT71(uStack_77,uStack_78);
        param_1[2] = CONCAT71(uStack_6f,uStack_70);
        *param_1 = local_80;
        return param_1;
      }
    }
    else {
      _ZN5uu_dd9parseargs6Parser11parse_bytes17h00e70da24ed84a9cE(&local_80,local_58,local_60);
      lVar3 = CONCAT71(uStack_77,uStack_78);
      if (local_80 != 0xe) goto LAB_0018d0fc;
      param_2[6] = 1;
      param_2[7] = lVar3;
    }
  }
  else {
    _ZN5uu_dd9parseargs6Parser11parse_bytes17h00e70da24ed84a9cE(&local_80,local_40,local_38);
    lVar3 = CONCAT71(uStack_77,uStack_78);
    if (local_80 != 0xe) {
LAB_0018d0fc:
      param_1[2] = CONCAT71(uStack_6f,uStack_70);
      param_1[3] = CONCAT71(uStack_67,uStack_68);
      *param_1 = local_80;
      param_1[1] = lVar3;
      return param_1;
    }
    *param_2 = 1;
    param_2[1] = lVar3;
  }
LAB_0018d061:
  *param_1 = 0xe;
  return param_1;
}