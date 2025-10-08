void _ZN9uu_chroot14parse_userspec17h253265bc6f25e3bcE
               (undefined8 *param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  _ZN4core3str21__LT_impl_u20_str_GT_10split_once17ha5f14f7e36c5d4c1E(&local_68);
  if (local_68 == 0) {
    uVar3 = 0x8000000000000000;
    if (param_3 != 0) {
      _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h9f2965073c9f102fE
                (param_1 + 1,param_2,param_3);
      uVar3 = 0x8000000000000001;
    }
  }
  else {
    cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h05bfd7e2261aa2d8E
                      (local_68,local_60,1,0);
    cVar2 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h05bfd7e2261aa2d8E
                      (local_58,local_50,1,0);
    if (cVar1 == '\0') {
      if (cVar2 != '\0') {
        _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h9f2965073c9f102fE
                  (param_1 + 1,local_68,local_60);
        *param_1 = 0x8000000000000001;
        return;
      }
      _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h9f2965073c9f102fE
                (&local_80,local_68,local_60);
                    /* try { // try from 001667d0 to 001667df has its CatchHandler @ 00166805 */
      _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h9f2965073c9f102fE
                (&local_48,local_58,local_50);
      param_1[5] = local_38;
      param_1[3] = local_48;
      param_1[4] = uStack_40;
      param_1[2] = local_70;
      *param_1 = local_80;
      param_1[1] = uStack_78;
      return;
    }
    uVar3 = 0x8000000000000000;
    if (cVar2 == '\0') {
      _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h9f2965073c9f102fE
                (param_1 + 1,local_58,local_50);
      uVar3 = 0x8000000000000002;
    }
  }
  *param_1 = uVar3;
  return;
}