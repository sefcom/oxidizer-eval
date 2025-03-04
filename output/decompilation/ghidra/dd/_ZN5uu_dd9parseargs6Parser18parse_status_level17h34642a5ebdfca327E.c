void _ZN5uu_dd9parseargs6Parser18parse_status_level17h34642a5ebdfca327E
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h27cd8ef99e7e17deE
                    (param_2,param_3,&DAT_00118ec4,4);
  if (cVar1 == '\0') {
    cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h27cd8ef99e7e17deE
                      (param_2,param_3,&DAT_00122ce1,6);
    if (cVar1 == '\0') {
      cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h27cd8ef99e7e17deE
                        (param_2,param_3,"progressNoEquals",8);
      if (cVar1 == '\0') {
        _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h778f954dace7b409E
                  (param_1 + 1,param_2,param_3);
        uVar2 = 10;
        goto LAB_001d35f7;
      }
      *(undefined *)(param_1 + 1) = 0;
    }
    else {
      *(undefined *)(param_1 + 1) = 1;
    }
  }
  else {
    *(undefined *)(param_1 + 1) = 2;
  }
  uVar2 = 0xe;
LAB_001d35f7:
  *param_1 = uVar2;
  return;
}