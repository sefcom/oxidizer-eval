void _ZN21ruff_python_formatter10expression10expr_slice24leading_comments_spacing17ha1d79216a4455bd3E
               (undefined8 *param_1,undefined8 *param_2,long param_3,long param_4)

{
  undefined local_41;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  undefined *local_28;
  int local_20;
  undefined4 uStack_1c;
  undefined8 uStack_18;
  undefined8 local_10;
  
  if (param_4 != 0) {
    if (*(char *)(param_3 + 9) != '\0') {
      local_40 = (undefined *)CONCAT62(local_40._2_6_,0x201);
      (**(code **)(param_2[1] + 0x18))(*param_2,&local_40);
      *(undefined4 *)param_1 = 4;
      return;
    }
    local_40 = &local_41;
    local_38 = &DAT_0067cbf0;
    local_28 = &DAT_0067cbf0;
    local_30 = local_40;
    _ZN102__LT_ruff_formatter__formatter__Formatter_LT_Context_GT__u20_as_u20_ruff_formatter__buffer__Buffer_GT_9write_fmt17h7287e9dfefd137eaE
              (&local_20,param_2,&local_40,2);
    if (local_20 != 4) {
      param_1[2] = local_10;
      *param_1 = CONCAT44(uStack_1c,local_20);
      param_1[1] = uStack_18;
      return;
    }
  }
  *(undefined4 *)param_1 = 4;
  return;
}