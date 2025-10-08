undefined8 *
_ZN7uu_shuf10split_seps17he07f8c4bbcda6c2aE
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined param_4)

{
  undefined local_41;
  undefined8 local_40;
  long lStack_38;
  long local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined *local_18;
  undefined local_10;
  
  local_18 = &local_41;
  local_10 = 0;
  local_41 = param_4;
  local_28 = param_2;
  local_20 = param_3;
  _ZN4core4iter6traits8iterator8Iterator7collect17h0ab5c37a6b7336bdE(&local_40,&local_28);
  if ((local_30 != 0) && (*(long *)(lStack_38 + 8 + (local_30 + -1) * 0x10) == 0)) {
    local_30 = local_30 + -1;
  }
  param_1[2] = local_30;
  *param_1 = local_40;
  param_1[1] = lStack_38;
  return param_1;
}