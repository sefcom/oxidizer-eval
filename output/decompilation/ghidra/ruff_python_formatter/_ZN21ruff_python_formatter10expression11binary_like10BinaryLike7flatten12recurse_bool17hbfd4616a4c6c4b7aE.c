void _ZN21ruff_python_formatter10expression11binary_like10BinaryLike7flatten12recurse_bool17hbfd4616a4c6c4b7aE
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               undefined8 param_9)

{
  long lVar1;
  long lVar2;
  undefined auVar3 [16];
  undefined8 local_70;
  long local_68;
  undefined8 local_60;
  undefined8 local_58;
  long local_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  local_48 = param_4;
  local_40 = param_5;
  auVar3 = _ZN8smallvec17SmallVec_LT_A_GT_11try_reserve17h1e9b0af026a914f8E
                     (param_9,*(long *)(param_1 + 0x10) * 2 + -1);
  _ZN8smallvec10infallible17heb4b400111f45abdE(auVar3._0_8_,auVar3._8_8_);
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 != 0) {
    lVar1 = *(long *)(param_1 + 8);
    local_70 = 0;
    local_68 = lVar1;
    local_60 = param_2;
    local_58 = param_3;
    _ZN21ruff_python_formatter10expression11binary_like10BinaryLike7flatten3rec17h7d3a8bfd844cf3d6E
              (&local_70,param_6,param_7,param_8,param_9);
    local_68 = 4;
    local_60 = 0;
    local_58._0_2_ = CONCAT11(*(undefined *)(param_1 + 0x24),2);
    local_70 = 3;
    _ZN8smallvec17SmallVec_LT_A_GT_4push17h1d2aed1a79494331E(param_9,&local_70);
    if (lVar2 != 1) {
      local_50 = lVar2 * 0x50 + lVar1 + -0x50;
      local_38 = param_1;
      if (lVar1 + 0x50 != local_50) {
        lVar2 = lVar2 * 0x50 + -0xa0;
        local_68 = lVar1 + 0x50;
        do {
          lVar1 = local_68 + 0x50;
          local_70 = 1;
          _ZN21ruff_python_formatter10expression11binary_like10BinaryLike7flatten3rec17h7d3a8bfd844cf3d6E
                    (&local_70,param_6,param_7,param_8);
          local_68 = 4;
          local_60 = 0;
          local_58._0_2_ = CONCAT11(*(undefined *)(local_38 + 0x24),2);
          local_70 = 3;
          _ZN8smallvec17SmallVec_LT_A_GT_4push17h1d2aed1a79494331E(param_9,&local_70);
          lVar2 = lVar2 + -0x50;
          local_68 = lVar1;
        } while (lVar2 != 0);
      }
      local_68 = local_50;
      local_60 = local_48;
      local_58 = local_40;
      local_70 = 2;
      _ZN21ruff_python_formatter10expression11binary_like10BinaryLike7flatten3rec17h7d3a8bfd844cf3d6E
                (&local_70,param_6,param_7,param_8);
    }
  }
  return;
}