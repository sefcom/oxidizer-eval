void _ZN21ruff_python_formatter10expression11binary_like10BinaryLike7flatten15recurse_compare17h864917a931c07552E
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               undefined8 param_9)

{
  code *pcVar1;
  undefined auVar2 [16];
  undefined **local_b8;
  long local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined *local_80;
  long local_78;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  long local_58 [4];
  undefined local_38;
  undefined local_37;
  
  local_70 = param_4;
  local_68 = param_5;
  auVar2 = _ZN8smallvec17SmallVec_LT_A_GT_11try_reserve17h1e9b0af026a914f8E
                     (param_9,param_1[4] * 2 + 1);
  _ZN8smallvec10infallible17heb4b400111f45abdE(auVar2._0_8_,auVar2._8_8_);
  local_b0 = *param_1;
  local_b8 = (undefined **)0x0;
  local_a8 = param_2;
  local_a0 = param_3;
  _ZN21ruff_python_formatter10expression11binary_like10BinaryLike7flatten3rec17h7d3a8bfd844cf3d6E
            (&local_b8,param_6,param_7,param_8,param_9);
  local_60 = param_1[4];
  local_58[0] = param_1[2];
  if (local_60 == local_58[0]) {
    if (local_60 != 0) {
      local_78 = (local_60 + -1) * 0x50 + param_1[3];
      local_80 = (undefined *)(local_60 + param_1[1] + -1);
      _ZN4core4iter6traits8iterator8Iterator3zip17hd5bd690253e7c151E(&local_b8);
      auVar2 = _ZN111__LT_core__iter__adapters__zip__Zip_LT_A_C_B_GT__u20_as_u20_core__iter__adapters__zip__ZipImpl_LT_A_C_B_GT__GT_4next17haf805d6695fcc6f5E
                         (&local_b8);
      if (auVar2._0_8_ != 0) {
        do {
          local_37 = *auVar2._0_8_;
          local_58[2] = 4;
          local_58[3] = 0;
          local_38 = 1;
          local_58[1] = 3;
          _ZN8smallvec17SmallVec_LT_A_GT_4push17h1d2aed1a79494331E(param_9,local_58 + 1);
          local_58[1] = 1;
          local_58[2] = auVar2._8_8_;
          _ZN21ruff_python_formatter10expression11binary_like10BinaryLike7flatten3rec17h7d3a8bfd844cf3d6E
                    (local_58 + 1,param_6,param_7,param_8,param_9);
          auVar2 = _ZN111__LT_core__iter__adapters__zip__Zip_LT_A_C_B_GT__u20_as_u20_core__iter__adapters__zip__ZipImpl_LT_A_C_B_GT__GT_4next17haf805d6695fcc6f5E
                             (&local_b8);
        } while (auVar2._0_8_ != 0);
      }
      local_b0 = 4;
      local_a8 = 0;
      local_a0._0_2_ = CONCAT11(*local_80,1);
      local_b8 = (undefined **)0x3;
      _ZN8smallvec17SmallVec_LT_A_GT_4push17h1d2aed1a79494331E(param_9,&local_b8);
      local_b0 = local_78;
      local_a8 = local_70;
      local_a0 = local_68;
      local_b8 = (undefined **)0x2;
      _ZN21ruff_python_formatter10expression11binary_like10BinaryLike7flatten3rec17h7d3a8bfd844cf3d6E
                (&local_b8,param_6,param_7,param_8,param_9);
    }
    return;
  }
  local_b8 = &PTR_s_Compare_expression_with_an_unbal_0067d4a8;
  local_b0 = 1;
  local_a8 = 8;
  local_a0 = 0;
  uStack_98 = 0;
  (*(code *)PTR__ZN4core9panicking13assert_failed17h449f2a7fe5426575E_006bd7a8)
            (0,&local_60,local_58,&local_b8,&PTR_s_crates_ruff_python_formatter_src_0067d4b8);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}