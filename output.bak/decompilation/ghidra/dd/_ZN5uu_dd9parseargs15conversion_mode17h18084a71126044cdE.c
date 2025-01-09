void __rustcall
uu_dd::parseargs::conversion_mode
          (undefined *param_1,long param_2,long param_3,undefined8 param_4,char param_5,
          undefined param_6)

{
  if (param_2 != 0) {
    if (param_3 == 0) {
      if (param_5 == '\0') {
        *param_1 = 3;
      }
      else {
        *param_1 = 4;
      }
      param_1[1] = param_6;
    }
    else {
      if (param_3 != 1) {
        *param_1 = 0;
        *(long *)(param_1 + 8) = param_2;
        return;
      }
      if (param_5 == '\0') {
        *param_1 = 5;
      }
      else {
        *param_1 = 6;
      }
    }
    *(undefined8 *)(param_1 + 8) = param_4;
    *(long *)(param_1 + 0x10) = param_2;
    return;
  }
  if (param_3 == 0) {
    *param_1 = 1;
    param_1[1] = param_6;
    *(undefined8 *)(param_1 + 8) = param_4;
    return;
  }
  if (param_3 == 1) {
    *param_1 = 2;
    *(undefined8 *)(param_1 + 8) = param_4;
    return;
  }
  *param_1 = 7;
  return;
}