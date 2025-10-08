void _ZN9alacritty7display6damage11FrameDamage5reset17hc5350e11c260da59E
               (long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  *(undefined *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  _ZN5alloc3vec16Vec_LT_T_C_A_GT_7reserve17h2fe219f6dc78a3feE();
  if (param_2 != 0) {
    local_48 = 0;
    do {
      lVar1 = local_48 + 1;
      local_38 = 0;
      local_40 = param_3;
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h03702a85e1bf04ebE
                (param_1,&local_48,&PTR_s_alacritty_src_display_damage_rs_00982360);
      local_48 = lVar1;
    } while (param_2 != lVar1);
  }
  return;
}