void _ZN8uu_tsort4Node13add_successor17hc806fe8fc5e165c9E
               (long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[2];
  if (lVar1 == *param_1) {
    _ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17hc80c5d59652a036dE(param_1);
  }
  lVar2 = param_1[1];
  *(undefined8 *)(lVar2 + lVar1 * 0x10) = param_2;
  *(undefined8 *)(lVar2 + 8 + lVar1 * 0x10) = param_3;
  param_1[2] = lVar1 + 1;
  return;
}