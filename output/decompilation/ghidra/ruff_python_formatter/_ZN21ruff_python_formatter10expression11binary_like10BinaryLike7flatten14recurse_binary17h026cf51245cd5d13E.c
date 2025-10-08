void _ZN21ruff_python_formatter10expression11binary_like10BinaryLike7flatten14recurse_binary17h026cf51245cd5d13E
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 *param_6,undefined8 param_7,undefined8 param_8,
               undefined8 param_9)

{
  undefined uVar1;
  undefined8 local_50;
  undefined local_48 [16];
  long local_38;
  
  local_48._0_8_ = *param_1;
  local_50 = 0;
  local_48._8_8_ = param_2;
  local_38 = param_3;
  _ZN21ruff_python_formatter10expression11binary_like10BinaryLike7flatten3rec17h7d3a8bfd844cf3d6E
            (&local_50,param_6,param_7,param_8,param_9);
  uVar1 = *(undefined *)((long)param_1 + 0x1c);
  local_48 = _ZN21ruff_python_formatter8comments8Comments8dangling17h377ee9ebf27dc56bE
                       (*param_6,param_1);
  local_38 = (ulong)CONCAT61(local_38._2_6_,uVar1) << 8;
  local_50 = 3;
  _ZN8smallvec17SmallVec_LT_A_GT_4push17h1d2aed1a79494331E(param_9,&local_50);
  local_48._0_8_ = param_1[1];
  local_50 = 2;
  local_48._8_8_ = param_4;
  local_38 = param_5;
  _ZN21ruff_python_formatter10expression11binary_like10BinaryLike7flatten3rec17h7d3a8bfd844cf3d6E
            (&local_50,param_6,param_7,param_8,param_9);
  return;
}