void _ZN4just6parser6Parser6accept17hbdbbefbcb8377711E
               (undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  char local_18;
  undefined4 local_17;
  undefined3 uStack_13;
  
  cVar1 = _ZN4just6parser6Parser7next_is17hc7c4171067e02951E(param_2,param_3);
  if (cVar1 == '\0') {
    *(undefined *)(param_1 + 8) = 0x25;
  }
  else {
    _ZN4just6parser6Parser7advance17ha6fdbb87ccd3a5f7E(&local_60,param_2);
    if (local_18 != '%') {
      *(uint *)((long)param_1 + 0x4c) = CONCAT31(uStack_13,local_17._3_1_);
      *(undefined4 *)((long)param_1 + 0x49) = local_17;
      param_1[8] = local_20;
      param_1[6] = local_30;
      param_1[7] = uStack_28;
      param_1[4] = local_40;
      param_1[5] = uStack_38;
      param_1[2] = local_50;
      param_1[3] = uStack_48;
      *param_1 = local_60;
      param_1[1] = uStack_58;
      *(char *)(param_1 + 9) = local_18;
      return;
    }
    param_1[8] = local_20;
    param_1[6] = local_30;
    param_1[7] = uStack_28;
    param_1[4] = local_40;
    param_1[5] = uStack_38;
    param_1[2] = local_50;
    param_1[3] = uStack_48;
    *param_1 = local_60;
    param_1[1] = uStack_58;
  }
  *(undefined *)(param_1 + 9) = 0x25;
  return;
}