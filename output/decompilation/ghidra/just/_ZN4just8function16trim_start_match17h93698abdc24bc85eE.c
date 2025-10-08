undefined8 *
_ZN4just8function16trim_start_match17h93698abdc24bc85eE
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  
  auVar1._8_8_ = param_4;
  auVar1._0_8_ = param_3;
  auVar2 = _ZN55__LT__RF_str_u20_as_u20_core__str__pattern__Pattern_GT_15strip_prefix_of17hd66f2c78bdb8496cE
                     (param_5,param_6);
  if (auVar2._0_8_ != 0) {
    auVar1 = auVar2;
  }
  _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17he141d0e2f3955eabE
            (&local_30,auVar1._0_8_,auVar1._8_8_);
  param_1[3] = local_20;
  param_1[1] = local_30;
  param_1[2] = uStack_28;
  *param_1 = 0;
  return param_1;
}