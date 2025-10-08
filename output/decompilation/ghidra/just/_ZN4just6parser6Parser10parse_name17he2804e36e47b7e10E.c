void _ZN4just6parser6Parser10parse_name17he2804e36e47b7e10E(undefined8 *param_1,undefined8 param_2)

{
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  char cStack_10;
  undefined7 uStack_f;
  
  _ZN4just6parser6Parser6expect17h35e1151927597ac7E(&local_58,param_2,0x18);
  if (cStack_10 == '%') {
    _ZN4just4name4Name15from_identifier17hbd4ef0ea8f6e05d8E(param_1,&local_58);
    *(undefined *)(param_1 + 9) = 0x25;
    return;
  }
  param_1[8] = local_18;
  param_1[9] = CONCAT71(uStack_f,cStack_10);
  param_1[6] = local_28;
  param_1[7] = uStack_20;
  param_1[4] = local_38;
  param_1[5] = uStack_30;
  param_1[2] = local_48;
  param_1[3] = uStack_40;
  *param_1 = local_58;
  param_1[1] = uStack_50;
  return;
}