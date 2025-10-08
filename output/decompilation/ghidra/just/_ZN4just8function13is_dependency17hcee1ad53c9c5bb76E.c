undefined8 * _ZN4just8function13is_dependency17hcee1ad53c9c5bb76E(undefined8 *param_1,long *param_2)

{
  char *pcVar1;
  
  pcVar1 = "false";
  if (*(byte *)(*param_2 + 0x48) != 0) {
    pcVar1 = "true";
  }
  _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17he141d0e2f3955eabE
            (param_1 + 1,pcVar1,*(byte *)(*param_2 + 0x48) ^ 5);
  *param_1 = 0;
  return param_1;
}