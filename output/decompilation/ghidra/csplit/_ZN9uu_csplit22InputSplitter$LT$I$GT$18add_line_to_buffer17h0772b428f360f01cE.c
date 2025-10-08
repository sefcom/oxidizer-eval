void _ZN9uu_csplit22InputSplitter_LT_I_GT_18add_line_to_buffer17h0772b428f360f01cE
               (undefined8 *param_1,long param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined local_38 [16];
  undefined8 local_28;
  
  local_58 = param_3;
  if (*(char *)(param_2 + 0x58) == '\0') {
    if (*(ulong *)(param_2 + 0x50) <= *(ulong *)(param_2 + 0x10)) {
                    /* try { // try from 00218644 to 00218655 has its CatchHandler @ 002186cd */
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_6remove17h1fd652b2cb545617E
                (&local_58,param_2,&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_00341cb8);
      local_28 = local_40;
      local_50 = *param_4;
      uStack_4c = param_4[1];
      uStack_48 = param_4[2];
      uStack_44 = param_4[3];
      local_40 = *(undefined8 *)(param_4 + 4);
                    /* try { // try from 00218680 to 00218691 has its CatchHandler @ 002186b2 */
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hcf44091d9b41540aE
                (param_2,&local_58,&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_00341cd0);
      _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h93be4edd8ab7bad5E
                (param_1,local_38,&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_00341ce8);
      return;
    }
    local_50 = *param_4;
    uStack_4c = param_4[1];
    uStack_48 = param_4[2];
    uStack_44 = param_4[3];
    local_40 = *(undefined8 *)(param_4 + 4);
    _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hcf44091d9b41540aE
              (param_2,&local_58,&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_00341ca0);
  }
  else {
    local_50 = *param_4;
    uStack_4c = param_4[1];
    uStack_48 = param_4[2];
    uStack_44 = param_4[3];
    local_40 = *(undefined8 *)(param_4 + 4);
    _ZN5alloc3vec16Vec_LT_T_C_A_GT_6insert17he51302ddad578716E(param_2,&local_58);
  }
  *param_1 = 0x8000000000000000;
  return;
}