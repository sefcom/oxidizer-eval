ulong * _ZN4just8function7require17h73196fd372847d20E
                  (ulong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  int local_68 [2];
  ulong local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_28;
  undefined8 local_20;
  
  local_28 = param_3;
  local_20 = param_4;
  _ZN4just5which5which17hd176e22496e4e776E(local_68,*param_2);
  if (local_68[0] != 1) {
    param_1[2] = CONCAT44(uStack_54,local_58);
    param_1[3] = CONCAT44(uStack_4c,uStack_50);
    param_1[1] = local_60;
  }
  else {
    param_1[2] = CONCAT44(uStack_54,local_58);
    param_1[3] = CONCAT44(uStack_4c,uStack_50);
    param_1[1] = local_60;
  }
  *param_1 = (ulong)(local_68[0] == 1);
  return param_1;
}