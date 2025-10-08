long * _ZN18alacritty_terminal4term18TermDamageIterator3new17h9c507061ce1d7d92E
                 (long *param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  long lVar1;
  undefined auVar2 [16];
  
  lVar1 = 0;
  if (param_4 <= param_3) {
    lVar1 = param_3 - param_4;
  }
  auVar2 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_5index17h0245a51238550835E
                     (lVar1);
  *param_1 = auVar2._0_8_;
  param_1[1] = auVar2._0_8_ + auVar2._8_8_ * 0x18;
  param_1[2] = param_4;
  return param_1;
}