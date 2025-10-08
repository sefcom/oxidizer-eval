void _ZN5uu_dd9parseargs6Parser18parse_status_level17hea4c02f91140d667E
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h9308b2f97abc21f0E
                    (param_2,param_3,&DAT_0011ea3c,4);
  if (cVar1 == '\0') {
    cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h9308b2f97abc21f0E
                      (param_2,param_3,"noxfer",6);
    if (cVar1 == '\0') {
      cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h9308b2f97abc21f0E
                        (param_2,param_3,"progressNoEquals",8);
      if (cVar1 == '\0') {
        _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h074386e79a8fa9e7E
                  (param_1 + 1,param_2,param_3);
        uVar2 = 10;
        goto LAB_0018d457;
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
LAB_0018d457:
  *param_1 = uVar2;
  return;
}