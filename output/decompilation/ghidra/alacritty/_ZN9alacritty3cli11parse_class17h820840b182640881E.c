void _ZN9alacritty3cli11parse_class17h820840b182640881E
               (undefined8 *param_1,long param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  long local_40;
  undefined8 local_38;
  long local_30;
  undefined8 local_28;
  
  _ZN4core3str21__LT_impl_u20_str_GT_10split_once17ha4263c82d6adeb01E(&local_40);
  uVar2 = param_3;
  lVar3 = param_2;
  if ((local_40 != 0) &&
     (cVar1 = _ZN52__LT_char_u20_as_u20_core__str__pattern__Pattern_GT_15is_contained_in17h822e1c3c690e59b6E
                        (0x2c,local_30,local_28), param_3 = local_38, param_2 = local_40,
     uVar2 = local_28, lVar3 = local_30, cVar1 != '\0')) {
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h4cfefc754dbf8feeE
              (param_1 + 1,"Too many parameters",0x13);
    *param_1 = 0x8000000000000000;
    return;
  }
  _ZN9alacritty6config6window5Class3new17h2eae1c576e64848aE(param_1,param_2,param_3,lVar3,uVar2);
  return;
}