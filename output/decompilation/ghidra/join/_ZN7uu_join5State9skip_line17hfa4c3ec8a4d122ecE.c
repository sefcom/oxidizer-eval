undefined8
_ZN7uu_join5State9skip_line17hfa4c3ec8a4d122ecE
          (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  if (*(char *)(param_1 + 0x59) != '\0') {
    lVar1 = _ZN7uu_join5State16print_first_line17h5910ce581bed7f0aE(param_1,param_2,param_4);
    if (lVar1 != 0) {
      uVar2 = (*(code *)
                PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17hcd961c31063bf4faE_00239380
              )(lVar1);
      return uVar2;
    }
  }
  _ZN7uu_join5State15reset_next_line17h05bf92bdc2a868ecE(&local_40,param_1,param_3);
  if (CONCAT44(uStack_3c,local_40) == -0x7fffffffffffffff) {
    return 0;
  }
  local_18 = local_30;
  local_28 = local_40;
  uStack_24 = uStack_3c;
  uStack_20 = uStack_38;
  uStack_1c = uStack_34;
  uVar2 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h06a7bb4fb867f987E(&local_28);
  return uVar2;
}