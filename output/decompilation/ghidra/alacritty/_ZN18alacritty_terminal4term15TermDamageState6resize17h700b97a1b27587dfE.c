void _ZN18alacritty_terminal4term15TermDamageState6resize17h700b97a1b27587dfE
               (long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined *)(param_1 + 0x28) = 1;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  _ZN5alloc3vec16Vec_LT_T_C_A_GT_7reserve17h2fe219f6dc78a3feE(param_1,param_3);
  if (param_3 != 0) {
    local_48 = 0;
    do {
      lVar1 = local_48 + 1;
      local_38 = 0;
      local_40 = param_2;
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h03702a85e1bf04ebE
                (param_1,&local_48,&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_00977998);
      local_48 = lVar1;
    } while (param_3 != lVar1);
  }
  return;
}