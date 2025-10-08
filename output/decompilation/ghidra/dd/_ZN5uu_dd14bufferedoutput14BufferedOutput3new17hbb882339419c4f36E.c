void _ZN5uu_dd14bufferedoutput14BufferedOutput3new17hbb882339419c4f36E
               (undefined (*param_1) [16],undefined *param_2)

{
  undefined uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined auVar4 [16];
  
  uVar1 = *param_2;
  uVar2 = *(undefined4 *)(param_2 + 4);
                    /* try { // try from 0018c32c to 0018c341 has its CatchHandler @ 0018c37d */
  auVar4 = _ZN5alloc7raw_vec20RawVecInner_LT_A_GT_16with_capacity_in17hcd13cdacfb44ecb8E
                     (*(undefined8 *)(*(long *)(param_2 + 0x10) + 0x78),1,1,
                      &PTR_s_src_uu_dd_src_bufferedoutput_rs_0023d758);
  param_1[1][8] = uVar1;
  *(undefined2 *)(param_1[1] + 9) = *(undefined2 *)(param_2 + 1);
  param_1[1][0xb] = param_2[3];
  *(undefined4 *)(param_1[1] + 0xc) = uVar2;
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)param_1[2] = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1[2] + 8) = uVar3;
  *param_1 = auVar4;
  *(undefined8 *)param_1[1] = 0;
  return;
}