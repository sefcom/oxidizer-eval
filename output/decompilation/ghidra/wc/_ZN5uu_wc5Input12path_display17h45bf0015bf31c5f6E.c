undefined8 _ZN5uu_wc5Input12path_display17h45bf0015bf31c5f6E(undefined8 param_1,long *param_2)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined auStack_28 [24];
  
  if (*param_2 != -0x7fffffffffffffff) {
    (*(code *)PTR__ZN6uucore8features13quoting_style11escape_name17h942044e1943bd5afE_001ffcb0)
              (auStack_28,param_2[1],param_2[2],&DAT_0011a13f);
    _ZN5alloc6string6String9from_utf817hcb4419710bc0e60bE(&uStack_50,auStack_28);
    uStack_3c = uStack_44;
    uStack_40 = uStack_48;
    uStack_48 = (undefined4)uStack_50;
    uStack_44 = uStack_50._4_4_;
    uStack_50 = 1;
    _ZN4core6result19Result_LT_T_C_E_GT_6expect17h9cf535346213a901E
              (param_1,&uStack_50,&PTR_s_src_uu_wc_src_wc_rs_001f9300);
    return param_1;
  }
  uVar1 = _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h805faec68bbcdbafE
                    (param_1,"standard input",0xe);
  return uVar1;
}