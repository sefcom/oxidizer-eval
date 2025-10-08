void _ZN9alacritty3cli15TerminalOptions7command17ha3af24ef4be7c6daE
               (undefined8 *param_1,long param_2,long param_3)

{
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  
  if (param_3 == 0) {
    *param_1 = 0x8000000000000001;
  }
  else {
    (*(code *)
      PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h94782b8343b62bd8E_009de2a8
    )(&local_48);
                    /* try { // try from 00533f86 to 00533f95 has its CatchHandler @ 00533ffd */
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17ha7488b37c10c715dE
              (&local_30,param_2 + 0x18,param_3 + -1);
    param_1[4] = uStack_28;
    param_1[5] = local_20;
    param_1[2] = local_38;
    param_1[3] = local_30;
    *param_1 = local_48;
    param_1[1] = uStack_40;
  }
  return;
}