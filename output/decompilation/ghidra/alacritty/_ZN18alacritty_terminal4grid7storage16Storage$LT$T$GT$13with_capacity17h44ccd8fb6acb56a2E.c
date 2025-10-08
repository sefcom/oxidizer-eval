void _ZN18alacritty_terminal4grid7storage16Storage_LT_T_GT_13with_capacity17h44ccd8fb6acb56a2E
               (undefined (*param_1) [16],undefined8 param_2,undefined8 param_3)

{
  undefined local_30 [16];
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = param_3;
  local_30 = _ZN5alloc7raw_vec20RawVecInner_LT_A_GT_16with_capacity_in17h6d79adff25664689E
                       (param_2,8,0x20,&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_00977650);
  local_20 = 0;
                    /* try { // try from 0046ecbe to 0046eccf has its CatchHandler @ 0046ecfa */
  _ZN5alloc3vec16Vec_LT_T_C_A_GT_11resize_with17h6e7572d4385195e4E(local_30,param_2,&local_18);
  *(undefined8 *)param_1[1] = local_20;
  *param_1 = local_30;
  *(undefined8 *)(param_1[1] + 8) = 0;
  *(undefined8 *)param_1[2] = param_2;
  *(undefined8 *)(param_1[2] + 8) = param_2;
  return;
}