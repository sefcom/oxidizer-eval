void _ZN7uu_test6parser6Parser4expr17h14b244d6254724abE(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  int local_30;
  undefined4 uStack_2c;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  cVar1 = _ZN7uu_test6parser6Parser14peek_is_boolop17h626769eb8da01166E(param_2);
  if (((cVar1 != '\0') ||
      (_ZN7uu_test6parser6Parser4term17h385cc0ae73b5bef0E(&local_30,param_2), local_30 == 7)) &&
     (_ZN7uu_test6parser6Parser12maybe_boolop17h62a19c04e1420d25E(&local_30,param_2), local_30 == 7)
     ) {
    *param_1 = 7;
    return;
  }
  param_1[2] = local_20;
  param_1[3] = uStack_18;
  *param_1 = CONCAT44(uStack_2c,local_30);
  param_1[1] = uStack_28;
  return;
}