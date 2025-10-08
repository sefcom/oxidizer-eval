void _ZN9alacritty7display4hint9HintState15update_alphabet17hfa8d2fcb226dbb8aE
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  
  cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h8240391abffeb7c9E
                    (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),param_2,param_3);
  if (cVar1 == '\0') {
    _ZN5alloc3str56__LT_impl_u20_alloc__borrow__ToOwned_u20_for_u20_str_GT_10clone_into17h29d41bfe54f0b37fE
              (param_2,param_3,param_1);
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  return;
}