void _ZN5uu_tr9operation8Sequence16parse_char_range17h1d7a96cfefe74fe4E
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 uVar2;
  int local_30;
  undefined4 uStack_2c;
  undefined8 uStack_28;
  undefined8 uStack_20;
  byte bStack_18;
  byte bStack_17;
  undefined6 uStack_16;
  
  uVar2 = 1;
  _ZN82__LT_nom__internal__And_LT_F_C_G_GT__u20_as_u20_nom__internal__Parser_LT_I_GT__GT_7process17hbd849b2fcb6d173dE
            (&local_30,
             "-\' are in reverse collating sequence order: equivalence class operand must be a single character"
             ,1,param_2,param_3);
  if (local_30 == 3) {
    uVar1 = (uint)bStack_18 * 0x100 + 1 + (uint)bStack_17 * 0x10000;
    if (bStack_17 < bStack_18) {
      uVar1 = (uint)bStack_18;
    }
    param_1[1] = uStack_28;
    param_1[2] = uStack_20;
    *(uint *)(param_1 + 3) = (bStack_18 <= bStack_17) + 10 + (uint)(bStack_18 <= bStack_17);
    *(uint *)((long)param_1 + 0x1c) = (uint)bStack_17;
    *(uint *)(param_1 + 4) = uVar1;
    uVar2 = 0;
  }
  else {
    param_1[3] = uStack_20;
    param_1[4] = CONCAT62(uStack_16,CONCAT11(bStack_17,bStack_18));
    param_1[1] = CONCAT44(uStack_2c,local_30);
    param_1[2] = uStack_28;
  }
  *param_1 = uVar2;
  return;
}