undefined8
_ZN18alacritty_terminal4term15TermDamageState5reset17h273368bb6739a3e2E
          (long param_1,undefined8 param_2)

{
  undefined8 local_8;
  
  *(undefined *)(param_1 + 0x28) = 0;
  local_8 = param_2;
  _ZN94__LT_core__slice__iter__IterMut_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_8for_each17h79b605f0884a99ecE
            (*(long *)(param_1 + 8),*(long *)(param_1 + 8) + *(long *)(param_1 + 0x10) * 0x18,
             &local_8);
  return local_8;
}