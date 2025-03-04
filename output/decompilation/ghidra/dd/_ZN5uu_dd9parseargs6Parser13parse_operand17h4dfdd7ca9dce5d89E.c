void _ZN5uu_dd9parseargs6Parser13parse_operand17h4dfdd7ca9dce5d89E
               (long *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long local_88;
  undefined uStack_80;
  undefined7 uStack_7f;
  undefined uStack_78;
  undefined7 uStack_77;
  undefined uStack_70;
  undefined7 uStack_6f;
  undefined8 *local_68;
  undefined8 local_60;
  undefined8 local_58;
  long local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  _ZN4core3str21__LT_impl_u20_str_GT_10split_once17h587279427cde36f1E(&local_50,param_3,param_4);
  if (local_50 == 0) {
LAB_001d3483:
    _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h778f954dace7b409E
              (param_1 + 1,param_3,param_4);
    *param_1 = 0;
    return;
  }
  local_68 = param_2;
  cVar2 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h27cd8ef99e7e17deE
                    (local_50,local_48,&DAT_00122cb3,2);
  if (cVar2 != '\0') {
    _ZN5uu_dd9parseargs6Parser11parse_bytes17h54695c3411a8c383E(&local_88,local_40,local_38);
    lVar3 = CONCAT71(uStack_7f,uStack_80);
    if (local_88 != 0xe) {
LAB_001d329b:
      param_1[2] = CONCAT71(uStack_77,uStack_78);
      param_1[3] = CONCAT71(uStack_6f,uStack_70);
      *param_1 = local_88;
      param_1[1] = lVar3;
      return;
    }
    *local_68 = 1;
    local_68[1] = lVar3;
    goto LAB_001d3200;
  }
  local_58 = local_40;
  local_60 = local_38;
  cVar2 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h27cd8ef99e7e17deE
                    (local_50,local_48,&DAT_00122cb5,3);
  if (cVar2 != '\0') {
    _ZN5uu_dd9parseargs6Parser11parse_bytes17h54695c3411a8c383E(&local_88,local_58,local_60);
    lVar3 = CONCAT71(uStack_7f,uStack_80);
    if (local_88 != 0xe) goto LAB_001d329b;
    local_68[6] = 1;
    local_68[7] = lVar3;
    goto LAB_001d3200;
  }
  cVar2 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h27cd8ef99e7e17deE
                    (local_50,local_48,&DAT_00118ed4,4);
  uVar1 = local_58;
  if (cVar2 != '\0') {
    *(undefined *)(local_68 + 0x18) = 1;
    _ZN5uu_dd9parseargs6Parser16parse_conv_flags17h2792d84d78d66501E
              (&local_88,local_68,local_58,local_60);
    goto LAB_001d30d6;
  }
  cVar2 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h27cd8ef99e7e17deE
                    (local_50,local_48,&DAT_00122cb8,5);
  if (cVar2 != '\0') {
    _ZN5uu_dd9parseargs6Parser7parse_n17h10e17107a528a6d1E(&local_88,uVar1,local_60);
    lVar3 = CONCAT71(uStack_7f,uStack_80);
    lVar4 = CONCAT71(uStack_77,uStack_78);
    if (local_88 != 0xe) goto LAB_001d3414;
    local_68[0xc] = lVar3;
    local_68[0xd] = lVar4;
    goto LAB_001d3200;
  }
  cVar2 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h27cd8ef99e7e17deE
                    (local_50,local_48,&DAT_00122cbd,3);
  if (cVar2 != '\0') {
    _ZN5uu_dd9parseargs6Parser11parse_bytes17h54695c3411a8c383E(&local_88,uVar1,local_60);
    lVar3 = CONCAT71(uStack_7f,uStack_80);
    if (local_88 != 0xe) goto LAB_001d329b;
    local_68[2] = 1;
    local_68[3] = lVar3;
    goto LAB_001d3200;
  }
  cVar2 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h27cd8ef99e7e17deE
                    (local_50,local_48,&DAT_00122cc0,2);
  if (cVar2 == '\0') {
    cVar2 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h27cd8ef99e7e17deE
                      (local_50,local_48,&DAT_00122cc2,5);
    if (cVar2 == '\0') {
      cVar2 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h27cd8ef99e7e17deE
                        (local_50,local_48,&DAT_00122cc7,3);
      if (cVar2 != '\0') {
        _ZN5uu_dd9parseargs6Parser11parse_bytes17h54695c3411a8c383E(&local_88,uVar1,local_60);
        lVar3 = CONCAT71(uStack_7f,uStack_80);
        if (local_88 != 0xe) goto LAB_001d329b;
        local_68[4] = 1;
        local_68[5] = lVar3;
        goto LAB_001d3200;
      }
      cVar2 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h27cd8ef99e7e17deE
                        (local_50,local_48,&DAT_00122cca,2);
      if (cVar2 != '\0') {
        _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h778f954dace7b409E
                  (&local_88,uVar1,local_60);
        plVar5 = local_68 + 0x11;
                    /* try { // try from 001d32ee to 001d32f5 has its CatchHandler @ 001d34c7 */
        _ZN4core3ptr70drop_in_place_LT_core__option__Option_LT_alloc__string__String_GT__GT_17hb99fd7eea970333fE
                  (plVar5);
        goto LAB_001d31ee;
      }
      cVar2 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h27cd8ef99e7e17deE
                        (local_50,local_48,&DAT_00122ccc,5);
      if (cVar2 == '\0') {
        cVar2 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h27cd8ef99e7e17deE
                          (local_50,local_48,&DAT_00118ec0,4);
        if ((cVar2 == '\0') &&
           (cVar2 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h27cd8ef99e7e17deE
                              (local_50,local_48,&DAT_00122cd1,5), cVar2 == '\0')) {
          cVar2 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h27cd8ef99e7e17deE
                            (local_50,local_48,&DAT_00118e98,4);
          if ((cVar2 == '\0') &&
             (cVar2 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h27cd8ef99e7e17deE
                                (local_50,local_48,&DAT_00122cd6,5), cVar2 == '\0')) {
            cVar2 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h27cd8ef99e7e17deE
                              (local_50,local_48,&DAT_00122cdb,6);
            if (cVar2 == '\0') goto LAB_001d3483;
            _ZN5uu_dd9parseargs6Parser18parse_status_level17h34642a5ebdfca327E
                      (&local_88,local_58,local_60);
            if (local_88 != 0xe) {
              param_1[3] = CONCAT71(uStack_6f,uStack_70);
              *(ulong *)((long)param_1 + 9) = CONCAT17(uStack_78,uStack_7f);
              *(ulong *)((long)param_1 + 0x11) = CONCAT17(uStack_70,uStack_77);
              *param_1 = local_88;
              *(undefined *)(param_1 + 1) = uStack_80;
              return;
            }
            *(undefined *)(local_68 + 0x1a) = uStack_80;
          }
          else {
            _ZN5uu_dd9parseargs6Parser7parse_n17h10e17107a528a6d1E(&local_88,uVar1,local_60);
            lVar3 = CONCAT71(uStack_7f,uStack_80);
            lVar4 = CONCAT71(uStack_77,uStack_78);
            if (local_88 != 0xe) goto LAB_001d3414;
            local_68[8] = lVar3;
            local_68[9] = lVar4;
          }
        }
        else {
          _ZN5uu_dd9parseargs6Parser7parse_n17h10e17107a528a6d1E(&local_88,uVar1,local_60);
          lVar3 = CONCAT71(uStack_7f,uStack_80);
          lVar4 = CONCAT71(uStack_77,uStack_78);
          if (local_88 != 0xe) {
LAB_001d3414:
            *param_1 = local_88;
            param_1[1] = lVar3;
            param_1[2] = lVar4;
            param_1[3] = CONCAT71(uStack_6f,uStack_70);
            return;
          }
          local_68[10] = lVar3;
          local_68[0xb] = lVar4;
        }
        goto LAB_001d3200;
      }
      _ZN5uu_dd9parseargs6Parser18parse_output_flags17h73e155582080adb4E
                (&local_88,local_68,uVar1,local_60);
    }
    else {
      _ZN5uu_dd9parseargs6Parser17parse_input_flags17h12f922d383d81c43E
                (&local_88,local_68,uVar1,local_60);
    }
LAB_001d30d6:
    if (local_88 != 0xe) {
      param_1[3] = CONCAT71(uStack_6f,uStack_70);
      param_1[1] = CONCAT71(uStack_7f,uStack_80);
      param_1[2] = CONCAT71(uStack_77,uStack_78);
      *param_1 = local_88;
      return;
    }
  }
  else {
    _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h778f954dace7b409E
              (&local_88,uVar1,local_60);
    plVar5 = local_68 + 0xe;
                    /* try { // try from 001d31e6 to 001d31ed has its CatchHandler @ 001d34c9 */
    _ZN4core3ptr70drop_in_place_LT_core__option__Option_LT_alloc__string__String_GT__GT_17hb99fd7eea970333fE
              (plVar5);
LAB_001d31ee:
    plVar5[2] = CONCAT71(uStack_77,uStack_78);
    *plVar5 = local_88;
    plVar5[1] = CONCAT71(uStack_7f,uStack_80);
  }
LAB_001d3200:
  *param_1 = 0xe;
  return;
}