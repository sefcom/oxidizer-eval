void _ZN9alacritty6config8bindings22default_mouse_bindings17h2153847eb619f59fE(undefined8 *param_1)

{
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50 [6];
  undefined2 local_20;
  undefined4 local_1c;
  undefined2 local_18;
  
  local_68 = 0;
  uStack_60 = 8;
  local_58 = 0;
  local_1c = 0;
  local_50[0] = 0x8000000000000007;
  local_18 = 0;
  local_20 = 1;
                    /* try { // try from 00539b39 to 00539bae has its CatchHandler @ 00539bc7 */
  _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hbb65b17423c1033aE(&local_68,local_50,&PTR_DAT_00981c30);
  local_1c = 0x20;
  local_50[0] = 0x8000000000000007;
  local_18 = 0;
  local_20 = 1;
  _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hbb65b17423c1033aE(&local_68,local_50,&PTR_DAT_00981c30);
  local_1c = 0;
  local_50[0] = 0x800000000000000b;
  local_18 = 0x800;
  local_20 = 2;
  _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hbb65b17423c1033aE(&local_68,local_50,&PTR_DAT_00981c30);
  param_1[2] = local_58;
  *param_1 = local_68;
  param_1[1] = uStack_60;
  return;
}