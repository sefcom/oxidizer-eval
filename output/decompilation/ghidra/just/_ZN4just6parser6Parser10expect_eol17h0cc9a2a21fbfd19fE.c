void _ZN4just6parser6Parser10expect_eol17h0cc9a2a21fbfd19fE(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  
  _ZN4just6parser6Parser6accept17hbdbbefbcb8377711E(&local_a8,param_2,0x10);
  if ((char)uStack_60 != '%') {
    *(undefined4 *)((long)param_1 + 0x4c) = uStack_5c;
    *(uint *)((long)param_1 + 0x49) = CONCAT13((undefined)uStack_5c,uStack_60._1_3_);
    param_1[8] = local_68;
    param_1[6] = local_78;
    param_1[7] = uStack_70;
    param_1[4] = local_88;
    param_1[5] = uStack_80;
    param_1[2] = local_98;
    param_1[3] = uStack_90;
    *param_1 = local_a8;
    param_1[1] = uStack_a0;
    *(char *)(param_1 + 9) = (char)uStack_60;
    return;
  }
  cVar1 = _ZN4just6parser6Parser7next_is17hc7c4171067e02951E(param_2,0x13);
  if (cVar1 == '\0') {
    _ZN4just6parser6Parser6expect17h35e1151927597ac7E(&local_a8,param_2,0x14);
    if ((char)uStack_60 != '%') {
      param_1[8] = local_68;
      param_1[9] = CONCAT44(uStack_5c,uStack_60);
      param_1[6] = local_78;
      param_1[7] = uStack_70;
      param_1[4] = local_88;
      param_1[5] = uStack_80;
      param_1[2] = local_98;
      param_1[3] = uStack_90;
      *param_1 = local_a8;
      param_1[1] = uStack_a0;
      return;
    }
  }
  *(undefined *)(param_1 + 9) = 0x25;
  return;
}