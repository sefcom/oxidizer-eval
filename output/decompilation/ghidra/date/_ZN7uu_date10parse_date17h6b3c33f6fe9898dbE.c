void _ZN7uu_date10parse_date17h6b3c33f6fe9898dbE(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  
  uVar1 = _ZN55__LT__RF_T_u20_as_u20_core__convert__AsRef_LT_U_GT__GT_6as_ref17h19d63261396b90f5E
                    (param_2);
  _ZN14parse_datetime14parse_datetime17h31f6ee9f0c9ea07fE(&local_50,uVar1);
  if (CONCAT44(uStack_4c,local_50) == -0x7ffffffffffffffe) {
    param_1[1] = CONCAT44(uStack_44,uStack_48);
    param_1[2] = uStack_40;
    *param_1 = 0x8000000000000000;
  }
  else {
    local_28 = uStack_40;
    local_38 = local_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    _ZN7uu_date10parse_date28__u7b__u7b_closure_u7d__u7d_17h0b2ffe81582c5501E
              (param_1,param_2,&local_38);
  }
  return;
}