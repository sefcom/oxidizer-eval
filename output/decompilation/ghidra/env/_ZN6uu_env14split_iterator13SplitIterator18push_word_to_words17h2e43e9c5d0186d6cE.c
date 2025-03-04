void _ZN6uu_env14split_iterator13SplitIterator18push_word_to_words17h2e43e9c5d0186d6cE
               (undefined8 *param_1)

{
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined8 local_8;
  
  local_8 = param_1[2];
  local_18 = *(undefined4 *)param_1;
  uStack_14 = *(undefined4 *)((long)param_1 + 4);
  uStack_10 = *(undefined4 *)(param_1 + 1);
  uStack_c = *(undefined4 *)((long)param_1 + 0xc);
  *param_1 = 0;
  param_1[1] = 1;
  param_1[2] = 0;
  _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hb06191b2410fa606E(param_1 + 8,&local_18);
  return;
}