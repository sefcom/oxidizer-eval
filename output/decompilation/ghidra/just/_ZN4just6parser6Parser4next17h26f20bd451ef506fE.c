void _ZN4just6parser6Parser4next17h26f20bd451ef506fE(undefined8 *param_1,undefined8 param_2)

{
  undefined local_d0 [16];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  
  local_d0 = _ZN4just6parser6Parser4rest17h006cb6290a6cc038E(param_2);
  _ZN4core4iter6traits8iterator8Iterator8try_fold17hc0d12f79d33f0a11E(&local_c0,local_d0);
  if ((char)uStack_80 == '%') {
    _ZN4just6parser6Parser14internal_error17ha5200abb7b463c9fE(&local_c0,param_2);
    param_1[8] = local_78;
    param_1[9] = uStack_70;
    param_1[6] = local_88;
    param_1[7] = CONCAT44(uStack_7c,uStack_80);
    param_1[4] = local_98;
    param_1[5] = uStack_90;
    param_1[2] = uStack_a8;
    param_1[3] = uStack_a0;
    *param_1 = uStack_b8;
    param_1[1] = uStack_b0;
    return;
  }
  param_1[6] = uStack_90;
  param_1[7] = local_88;
  param_1[4] = uStack_a0;
  param_1[5] = local_98;
  param_1[2] = uStack_b0;
  param_1[3] = uStack_a8;
  *param_1 = local_c0;
  param_1[1] = uStack_b8;
  *(uint *)((long)param_1 + 0x41) = CONCAT13((undefined)uStack_7c,uStack_80._1_3_);
  *(undefined4 *)((long)param_1 + 0x44) = uStack_7c;
  *(char *)(param_1 + 8) = (char)uStack_80;
  *(undefined *)(param_1 + 9) = 0x25;
  return;
}