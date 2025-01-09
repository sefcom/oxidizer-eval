void __rustcall
uu_wc::files0_iter(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
                    /* try { // try from 001bd265 to 001bd273 has its CatchHandler @ 001bd2f8 */
  std::io::buffered::bufreader::BufReader<R>::with_capacity(&local_48,0x2000,param_2,param_3);
  uVar1 = param_4[2];
  uVar2 = *param_4;
  uVar3 = param_4[1];
  param_1[8] = uStack_20;
  param_1[9] = local_18;
  param_1[6] = uStack_30;
  param_1[7] = local_28;
  param_1[4] = uStack_40;
  param_1[5] = local_38;
  *param_1 = uVar2;
  param_1[1] = uVar3;
  param_1[2] = uVar1;
  param_1[3] = local_48;
  *(undefined *)(param_1 + 10) = 0;
  return;
}