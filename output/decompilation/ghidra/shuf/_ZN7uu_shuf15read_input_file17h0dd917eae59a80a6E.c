undefined8 *
_ZN7uu_shuf15read_input_file17h0dd917eae59a80a6E
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  long local_30;
  undefined8 local_28;
  
  cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17haac61b2152f123acE
                    (param_2,param_3,"-",1);
  if (cVar1 == '\0') {
    _ZN3std2fs4read17h030b17e0e1466fa8E(&local_50,param_2,param_3);
    _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17h18c090cde01c2b9cE
              (param_1,&local_50,param_2,param_3);
  }
  else {
    local_50 = 0;
    uStack_48 = 1;
    local_40 = 0;
                    /* try { // try from 00168a9a to 00168ac1 has its CatchHandler @ 00168b3d */
    local_38 = (*(code *)PTR__ZN3std2io5stdio5stdin17h9a05a2c3e7544b2aE_00200ca8)();
    uVar2 = (*(code *)
              PTR__ZN55__LT_std__io__stdio__Stdin_u20_as_u20_std__io__Read_GT_11read_to_end17h3553e0b49d623411E_00200cb0
            )(&local_38,&local_50);
    _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17h7c83e9fc7c9d22e6E
              (&local_30,uVar2);
    if (local_30 == 0) {
      param_1[2] = local_40;
      *param_1 = local_50;
      param_1[1] = uStack_48;
    }
    else {
      param_1[1] = local_30;
      param_1[2] = local_28;
      *param_1 = 0x8000000000000000;
      _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h7c3318fa84a63376E
                (local_50,uStack_48);
    }
  }
  return param_1;
}