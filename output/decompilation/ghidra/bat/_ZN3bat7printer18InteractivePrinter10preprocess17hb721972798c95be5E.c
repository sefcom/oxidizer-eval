void _ZN3bat7printer18InteractivePrinter10preprocess17hb721972798c95be5E
               (undefined8 param_1,long param_2,undefined8 param_3,long param_4,long *param_5)

{
  if (*(long *)(param_2 + 0x108) != 0) {
    _ZN3bat12preprocessor11expand_tabs17hd1e4844dd3a3fe09E
              (param_1,param_3,param_4,*(long *)(param_2 + 0x108));
    return;
  }
  *param_5 = *param_5 + param_4;
  _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h6553538e39c64234E
            (param_1,param_3,param_4);
  return;
}