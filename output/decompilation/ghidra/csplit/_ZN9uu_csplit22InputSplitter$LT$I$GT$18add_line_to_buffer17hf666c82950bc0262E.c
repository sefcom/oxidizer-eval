void _ZN9uu_csplit22InputSplitter_LT_I_GT_18add_line_to_buffer17hf666c82950bc0262E
               (undefined8 *param_1,long param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_30;
  undefined8 local_28;
  
  local_58 = param_3;
  if (*(char *)(param_2 + 0x38) == '\0') {
    if (*(ulong *)(param_2 + 0x30) <= *(ulong *)(param_2 + 0x10)) {
                    /* try { // try from 00260736 to 00260749 has its CatchHandler @ 002607b5 */
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_6remove17ha187cc186cdc8061E
                (&local_58,param_2,0,&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_003debe8);
      local_28 = local_40;
      uStack_30 = uStack_48;
      local_40 = *(undefined8 *)(param_4 + 4);
      uStack_50 = *param_4;
      uStack_4c = param_4[1];
      uStack_48 = *(undefined8 *)(param_4 + 2);
                    /* try { // try from 00260774 to 0026077e has its CatchHandler @ 002607a6 */
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h59c271c22061c5dbE(param_2,&local_58);
      uStack_48 = local_28;
      uStack_50 = (undefined4)uStack_30;
      uStack_4c = uStack_30._4_4_;
      _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17hc4cee2f6f31529f0E
                (param_1,&local_58,&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_003dec00);
      return;
    }
    local_40 = *(undefined8 *)(param_4 + 4);
    uStack_50 = *param_4;
    uStack_4c = param_4[1];
    uStack_48 = *(undefined8 *)(param_4 + 2);
    _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h59c271c22061c5dbE(param_2,&local_58);
  }
  else {
    local_40 = *(undefined8 *)(param_4 + 4);
    uStack_50 = *param_4;
    uStack_4c = param_4[1];
    uStack_48 = *(undefined8 *)(param_4 + 2);
    _ZN5alloc3vec16Vec_LT_T_C_A_GT_6insert17hfd2eab809c60b3f4E(param_2,0,&local_58);
  }
  *param_1 = 0x8000000000000000;
  return;
}