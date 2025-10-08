void _ZN7uu_test6parser6Parser4expr17hea95ff6631384a05E(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  int local_30;
  undefined4 uStack_2c;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  cVar1 = _ZN7uu_test6parser6Parser14peek_is_boolop17h010fbe45650976acE(param_2);
  if (cVar1 == '\0') {
    _ZN7uu_test6parser6Parser4term17h32e18b63e31ea2d0E(&local_30,param_2);
    if (local_30 != 7) goto LAB_001576d0;
  }
  _ZN7uu_test6parser6Parser12maybe_boolop17h303bddc310538db5E(&local_30,param_2);
  if (local_30 == 7) {
    *param_1 = 7;
    return;
  }
LAB_001576d0:
  param_1[2] = local_20;
  param_1[3] = uStack_18;
  *param_1 = CONCAT44(uStack_2c,local_30);
  param_1[1] = uStack_28;
  return;
}