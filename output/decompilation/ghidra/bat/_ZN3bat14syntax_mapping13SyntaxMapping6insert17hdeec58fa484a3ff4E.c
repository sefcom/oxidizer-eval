undefined *
_ZN3bat14syntax_mapping13SyntaxMapping6insert17hdeec58fa484a3ff4E
          (undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined4 *param_5)

{
  undefined local_90 [96];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  
  _ZN3bat14syntax_mapping17make_glob_matcher17hb323052747e788f0E(local_90,param_3,param_4);
  local_30 = *param_5;
  uStack_2c = param_5[1];
  uStack_28 = param_5[2];
  uStack_24 = param_5[3];
  local_20 = *(undefined8 *)(param_5 + 4);
  _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hc656419b1ae5f038E(param_2,local_90);
  *param_1 = 0xd;
  return param_1;
}