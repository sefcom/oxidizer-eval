ulong _ZN8uu_split24should_extract_obs_lines17h45a9ca9df26354c5E
                (undefined8 param_1,undefined8 param_2,char param_3,char param_4,undefined8 param_5,
                undefined8 param_6)

{
  char cVar1;
  uint in_EAX;
  undefined8 uVar2;
  ulong uVar3;
  
  uVar3 = (ulong)in_EAX;
  uVar2 = _ZN4core4char7methods15encode_utf8_raw17h4a752b0d300141c4E(&stack0xffffffffffffffdc);
  cVar1 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17hcb49aff15e773791E
                    (param_1,param_2,uVar2,1,param_5,param_6,uVar3);
  if (cVar1 != '\0') {
    cVar1 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17hcb49aff15e773791E
                      (param_1,param_2,"--",2,param_5,param_6,uVar3);
    if (cVar1 != '\0') {
      return 0;
    }
    if (param_3 != '\0') {
      return 0;
    }
    if (param_4 != '\0') {
      return 0;
    }
    cVar1 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17hcb49aff15e773791E
                      (param_1,param_2,"-a",2);
    if ((((cVar1 == '\0') &&
         (cVar1 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17hcb49aff15e773791E
                            (param_1,param_2,"-b",2), cVar1 == '\0')) &&
        (cVar1 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17hcb49aff15e773791E
                           (param_1,param_2,"-C",2), cVar1 == '\0')) &&
       ((cVar1 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17hcb49aff15e773791E
                           (param_1,param_2,"-l",2), cVar1 == '\0' &&
        (cVar1 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17hcb49aff15e773791E
                           (param_1,param_2,"-n",2), cVar1 == '\0')))) {
      uVar3 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17hcb49aff15e773791E
                        (param_1,param_2,"-t",2);
      return uVar3 ^ 1;
    }
  }
  return 0;
}