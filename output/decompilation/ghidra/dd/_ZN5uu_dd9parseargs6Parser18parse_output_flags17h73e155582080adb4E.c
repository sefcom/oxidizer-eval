void _ZN5uu_dd9parseargs6Parser18parse_output_flags17h73e155582080adb4E
               (undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined auVar5 [16];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined local_68 [48];
  undefined2 local_38;
  
  _ZN52__LT_char_u20_as_u20_core__str__pattern__Pattern_GT_13into_searcher17h77b0cfb9226a3587E
            (local_68,0x2c);
  local_78 = 0;
  local_38 = 1;
  local_70 = param_4;
  auVar5 = _ZN4core3str4iter22SplitInternal_LT_P_GT_4next17h47b118536c82edfaE(&local_78);
  if (auVar5._0_8_ != 0) {
    do {
      uVar4 = auVar5._8_8_;
      uVar3 = auVar5._0_8_;
      cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h27cd8ef99e7e17deE
                        (uVar3,uVar4,&DAT_00122ce7,3);
      if (cVar1 != '\0') {
        _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h778f954dace7b409E
                  (param_1 + 1,param_3,param_4);
        *param_1 = 0xb;
        return;
      }
      cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h27cd8ef99e7e17deE
                        (uVar3,uVar4,&DAT_00122cea,6);
      puVar2 = (undefined *)(param_2 + 0xc3);
      if (((((cVar1 == '\0') &&
            (cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h27cd8ef99e7e17deE
                               (uVar3,uVar4,&DAT_00122cf0,9), puVar2 = (undefined *)(param_2 + 0xc4)
            , cVar1 == '\0')) &&
           (cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h27cd8ef99e7e17deE
                              (uVar3,uVar4,&DAT_00122cf9,5), puVar2 = (undefined *)(param_2 + 0xc5),
           cVar1 == '\0')) &&
          (((cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h27cd8ef99e7e17deE
                               (uVar3,uVar4,&DAT_00118ee4,4), puVar2 = (undefined *)(param_2 + 0xc6)
            , cVar1 == '\0' &&
            (cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h27cd8ef99e7e17deE
                               (uVar3,uVar4,&DAT_00122cfe,7), puVar2 = (undefined *)(param_2 + 199),
            cVar1 == '\0')) &&
           ((cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h27cd8ef99e7e17deE
                               (uVar3,uVar4,&DAT_00118c58,8), puVar2 = (undefined *)(param_2 + 200),
            cVar1 == '\0' &&
            ((cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h27cd8ef99e7e17deE
                                (uVar3,uVar4,&DAT_00122d05,7),
             puVar2 = (undefined *)(param_2 + 0xc9), cVar1 == '\0' &&
             (cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h27cd8ef99e7e17deE
                                (uVar3,uVar4,&DAT_00122d0c,6),
             puVar2 = (undefined *)(param_2 + 0xca), cVar1 == '\0')))))))) &&
         (cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h27cd8ef99e7e17deE
                            (uVar3,uVar4,"nofollow",8), puVar2 = (undefined *)(param_2 + 0xcb),
         cVar1 == '\0')) {
        cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h27cd8ef99e7e17deE
                          (uVar3,uVar4,&DAT_00122d12,7);
        if (cVar1 != '\0') {
          _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h778f954dace7b409E
                    (&local_c0,uVar3,uVar4);
          *param_1 = 0xb;
          param_1[1] = local_c0;
          param_1[2] = uStack_b8;
          param_1[3] = local_b0;
          return;
        }
        cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h27cd8ef99e7e17deE
                          (uVar3,uVar4,&DAT_00122d19,6);
        if (cVar1 != '\0') {
          _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h778f954dace7b409E
                    (&local_a8,uVar3,uVar4);
          *param_1 = 0xb;
          param_1[1] = local_a8;
          param_1[2] = uStack_a0;
          param_1[3] = local_98;
          return;
        }
        cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h27cd8ef99e7e17deE
                          (uVar3,uVar4,&DAT_00118e84,4);
        if (cVar1 != '\0') {
          _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h778f954dace7b409E
                    (&local_90,uVar3,uVar4);
          *param_1 = 0xb;
          param_1[1] = local_90;
          param_1[2] = uStack_88;
          param_1[3] = local_80;
          return;
        }
        cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h27cd8ef99e7e17deE
                          (uVar3,uVar4,&DAT_00122d3d,6);
        puVar2 = (undefined *)(param_2 + 0xc1);
        if ((cVar1 != '\0') ||
           (cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h27cd8ef99e7e17deE
                              (uVar3,uVar4,&DAT_00122d43,10), puVar2 = (undefined *)(param_2 + 0xcf)
           , cVar1 != '\0')) goto LAB_001d3ce0;
        cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h27cd8ef99e7e17deE
                          (uVar3,uVar4,&DAT_00122d1f,9);
        if (((cVar1 == '\0') &&
            (cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h27cd8ef99e7e17deE
                               (uVar3,uVar4,&DAT_00122d28,0xb), cVar1 == '\0')) &&
           (cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h27cd8ef99e7e17deE
                              (uVar3,uVar4,&DAT_00122d33,10), cVar1 == '\0')) {
          _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h778f954dace7b409E
                    (&local_d8,uVar3,uVar4);
          *param_1 = 5;
          param_1[1] = local_d8;
          param_1[2] = uStack_d0;
          param_1[3] = local_c8;
          return;
        }
      }
      else {
LAB_001d3ce0:
        *puVar2 = 1;
      }
      auVar5 = _ZN4core3str4iter22SplitInternal_LT_P_GT_4next17h47b118536c82edfaE(&local_78);
    } while (auVar5._0_8_ != 0);
  }
  *param_1 = 0xe;
  return;
}