void _ZN2fd4exec15CommandTemplate3new17h03a7a8d5eeffeee5E(undefined8 *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined8 local_a0;
  undefined8 uStack_98;
  long local_90;
  undefined8 *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  long local_50 [4];
  
  local_a0 = 0;
  uStack_98 = 8;
  local_90 = 0;
  local_88 = param_1;
  _ZN154__LT_clap_builder__builder__value_parser__ValueParser_u20_as_u20_core__convert__From_LT_clap_builder__builder__value_parser___AnonymousValueParser_GT__GT_4from17hd3da1d54eddfcf38E
            (&local_80);
  bVar4 = false;
  while( true ) {
                    /* try { // try from 002f3ab0 to 002f3ab7 has its CatchHandler @ 002f3bed */
    lVar2 = _ZN131__LT_clap_builder__parser__matches__arg_matches__OccurrenceValuesRef_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17haf632c7985fa82c6E
                      (&local_80);
    if (lVar2 == 0) break;
    uVar3 = _ZN55__LT__RF_T_u20_as_u20_core__convert__AsRef_LT_U_GT__GT_6as_ref17h01f6f045be682906E
                      (lVar2);
                    /* try { // try from 002f3ac5 to 002f3ae2 has its CatchHandler @ 002f3bef */
    _ZN2fd3fmt14FormatTemplate5parse17hf8dc6f2b9acbeb6eE(local_50,uVar3);
    lVar2 = local_50[0];
    _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hec8f79eece6d4901E
              (&local_a0,local_50,&PTR_s_src_exec_mod_rs_00502270);
    bVar4 = (bool)(bVar4 | lVar2 == 0);
  }
  if (local_90 == 0) {
    local_80 = &PTR_s_No_executable_provided_for___exe_00502248;
    uStack_78 = 1;
    local_70 = (undefined8 *)0x8;
    local_68 = 0;
    uStack_60 = 0;
    uVar3 = _ZN6anyhow9__private10format_err17hb7ed131eb83ec9a9E(&local_80);
    local_88[1] = uVar3;
    *local_88 = 0x8000000000000000;
    _ZN4core3ptr67drop_in_place_LT_alloc__vec__Vec_LT_fd__fmt__FormatTemplate_GT__GT_17h1c695c5634c346d8E
              (&local_a0);
  }
  else {
    if (!bVar4) {
      local_70 = (undefined8 *)_ZN5alloc5alloc6Global10alloc_impl17h6fb1b6049873c120E(8,0x18);
      if (local_70 == (undefined8 *)0x0) {
        (*(code *)PTR__ZN5alloc5alloc18handle_alloc_error17h88aa4f4f9d19c4f9E_00540010)(8,0x18);
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      *local_70 = 0x8000000000000000;
      *(undefined4 *)(local_70 + 1) = (undefined4)local_80;
      *(undefined4 *)((long)local_70 + 0xc) = local_80._4_4_;
      *(undefined4 *)(local_70 + 2) = (undefined4)uStack_78;
      *(undefined4 *)((long)local_70 + 0x14) = uStack_78._4_4_;
      uStack_78 = 1;
      local_68 = 1;
      local_80 = (undefined **)0x0;
                    /* try { // try from 002f3b4e to 002f3bea has its CatchHandler @ 002f3bf1 */
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hec8f79eece6d4901E
                (&local_a0,&local_80,&PTR_s_src_exec_mod_rs_00502258);
    }
    local_88[2] = local_90;
    *local_88 = local_a0;
    local_88[1] = uStack_98;
  }
  return;
}