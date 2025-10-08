undefined8
_ZN5uu_mv20rename_with_fallback17h3652858bdc29b866E
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 *local_28;
  
  local_50 = param_5;
  lVar1 = _ZN3std2fs6rename17hd8b2464d64e6b77aE();
  local_28 = &local_50;
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    local_48 = param_1;
    local_40 = param_2;
    local_38 = param_3;
    local_30 = param_4;
    uVar2 = _ZN5uu_mv20rename_with_fallback28__u7b__u7b_closure_u7d__u7d_17h22f84ef8b347243aE
                      (&local_48,lVar1);
  }
  return uVar2;
}