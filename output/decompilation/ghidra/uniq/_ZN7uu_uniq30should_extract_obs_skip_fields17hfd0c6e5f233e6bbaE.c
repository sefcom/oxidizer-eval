ulong _ZN7uu_uniq30should_extract_obs_skip_fields17hfd0c6e5f233e6bbaE
                (undefined8 param_1,undefined8 param_2,byte param_3,byte param_4,undefined8 param_5,
                undefined8 param_6)

{
  char cVar1;
  byte bVar2;
  uint in_EAX;
  ulong uVar3;
  undefined auVar4 [16];
  
  uVar3 = (ulong)in_EAX;
  auVar4 = _ZN4core4char7methods15encode_utf8_raw17h5e8f6d90a161f6f4E(0x2d,&stack0xffffffffffffffdc)
  ;
  cVar1 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17h164e9dfb27ee38d7E
                    (param_1,param_2,auVar4._0_8_,auVar4._8_8_,param_5,param_6,uVar3);
  if ((((cVar1 != '\0') &&
       (bVar2 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17h164e9dfb27ee38d7E
                          (param_1,param_2,&DAT_0011b1d1,2,param_5,param_6,uVar3),
       ((param_3 | param_4 | bVar2) & 1) == 0)) &&
      (cVar1 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17h164e9dfb27ee38d7E
                         (param_1,param_2,&DAT_0011b1cf,2), cVar1 == '\0')) &&
     (cVar1 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17h164e9dfb27ee38d7E
                        (param_1,param_2,&DAT_0011b1cd,2), cVar1 == '\0')) {
    uVar3 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17h164e9dfb27ee38d7E
                      (param_1,param_2,&DAT_0011b1d3,2);
    return uVar3 ^ 1;
  }
  return 0;
}