void _ZN4just6parser6Parser20parse_string_literal17h7c39b9a6292fbeceE(undefined8 *param_1)

{
  undefined7 local_b8;
  undefined uStack_b1;
  undefined7 uStack_b0;
  undefined uStack_a9;
  undefined7 local_a8;
  undefined uStack_a1;
  int local_88 [2];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined local_40;
  undefined7 local_3f;
  undefined uStack_38;
  undefined7 uStack_37;
  undefined uStack_30;
  undefined8 local_2f;
  undefined8 uStack_27;
  undefined8 local_1f;
  undefined7 uStack_17;
  undefined uStack_10;
  undefined7 uStack_f;
  
  _ZN4just6parser6Parser26parse_string_literal_token17h0d1e77bec93423b0E(local_88);
  if (local_88[0] == 1) {
    param_1[9] = CONCAT71(uStack_37,uStack_38);
    *(ulong *)((long)param_1 + 0x41) = CONCAT17(uStack_38,local_3f);
    *param_1 = local_80;
    param_1[1] = local_78;
    param_1[2] = uStack_70;
    param_1[3] = local_68;
    param_1[4] = uStack_60;
    param_1[5] = local_58;
    param_1[6] = uStack_50;
    param_1[7] = local_48;
    *(undefined *)(param_1 + 8) = local_40;
    return;
  }
  local_a8 = (undefined7)local_1f;
  uStack_a1 = (undefined)((ulong)local_1f >> 0x38);
  local_b8 = (undefined7)local_2f;
  uStack_b1 = (undefined)((ulong)local_2f >> 0x38);
  uStack_b0 = (undefined7)uStack_27;
  uStack_a9 = (undefined)((ulong)uStack_27 >> 0x38);
  param_1[4] = CONCAT71(uStack_17,uStack_a1);
  param_1[5] = CONCAT71(uStack_f,uStack_10);
  param_1[2] = CONCAT71(uStack_b0,uStack_b1);
  param_1[3] = CONCAT71(local_a8,uStack_a9);
  *param_1 = CONCAT71(uStack_37,uStack_38);
  param_1[1] = CONCAT71(local_b8,uStack_30);
  *(undefined *)(param_1 + 9) = 0x25;
  return;
}