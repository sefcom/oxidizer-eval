ulong _ZN7uu_uniq30should_extract_obs_skip_fields17h51b5db688d315961E
                (undefined8 param_1,undefined8 param_2,char param_3,char param_4,undefined8 param_5,
                undefined8 param_6)

{
  char cVar1;
  uint in_EAX;
  ulong uVar2;
  undefined auVar3 [16];
  
  uVar2 = (ulong)in_EAX;
  auVar3 = _ZN4core4char7methods15encode_utf8_raw17h4a752b0d300141c4E(0x2d,&stack0xffffffffffffffdc)
  ;
  cVar1 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17haa80fb3b22d1f855E
                    (param_1,param_2,auVar3._0_8_,auVar3._8_8_,param_5,param_6,uVar2);
  if (cVar1 != '\0') {
    cVar1 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17haa80fb3b22d1f855E
                      (param_1,param_2,"--",2,param_5,param_6,uVar2);
    if (cVar1 != '\0') {
      return 0;
    }
    if (param_3 != '\0') {
      return 0;
    }
    if (param_4 != '\0') {
      return 0;
    }
    cVar1 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17haa80fb3b22d1f855E
                      (param_1,param_2,"-s",2);
    if ((cVar1 == '\0') &&
       (cVar1 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17haa80fb3b22d1f855E
                          (param_1,param_2,"-f",2), cVar1 == '\0')) {
      uVar2 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17haa80fb3b22d1f855E
                        (param_1,param_2,"-w",2);
      return uVar2 ^ 1;
    }
  }
  return 0;
}