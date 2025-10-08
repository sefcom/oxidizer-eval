void _ZN4just11string_kind10StringKind23from_string_or_backtick17h6eb193e734499b6aE
               (byte *param_1,undefined8 param_2)

{
  byte bVar1;
  byte extraout_DL;
  undefined auVar2 [16];
  undefined8 local_78;
  undefined local_70 [96];
  
  auVar2 = (*(code *)PTR__ZN4just5token5Token6lexeme17h66587cdf67f63270E_00566a10)(param_2);
  bVar1 = _ZN4just11string_kind10StringKind16from_token_start17h243afdb46a506377E
                    (auVar2._0_8_,auVar2._8_8_);
  if (bVar1 == 2) {
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17he141d0e2f3955eabE
              (local_70,&DAT_0017184a,0x33);
    local_78 = 0x8000000000000028;
    _ZN4just5token5Token5error17h986494da066a4455E(param_1,param_2,&local_78);
    return;
  }
  *param_1 = bVar1 & 1;
  param_1[1] = extraout_DL;
  param_1[0x48] = 0x25;
  return;
}