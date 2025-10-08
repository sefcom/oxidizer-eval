void _ZN21ruff_python_formatter9statement17stmt_function_def22format_function_header17h0c50132786962415E
               (int *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  undefined local_b1;
  undefined8 local_b0;
  char *local_a8;
  undefined *local_a0;
  undefined4 local_98;
  undefined local_94;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 *local_80;
  long *local_78;
  long *local_70;
  undefined *local_68;
  long local_60;
  long local_58;
  int local_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  undefined8 local_40;
  int local_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  undefined8 local_28;
  
  local_60 = param_3;
  lVar1 = (**(code **)(param_2[1] + 0x30))(*param_2);
  _ZN5alloc2rc10RcInnerPtr10inc_strong17h8686aaaa10b78ebbE(*(undefined8 *)(lVar1 + 0x10));
  local_b0 = *(undefined8 *)(lVar1 + 0x10);
  if (*(char *)(param_3 + 0x7c) == '\0') {
LAB_0041ddc6:
    local_58 = param_3 + 0x30;
    local_a8 = "def";
    local_a0 = (undefined *)0x3;
    uStack_88 = &DAT_0067c890;
    local_80 = (undefined8 *)&local_b1;
    local_78 = (long *)&DAT_0067cbf0;
    local_70 = &local_58;
    local_68 = &DAT_0067a988;
    local_90 = &local_a8;
    _ZN102__LT_ruff_formatter__formatter__Formatter_LT_Context_GT__u20_as_u20_ruff_formatter__buffer__Buffer_GT_9write_fmt17h7287e9dfefd137eaE
              (&local_38,param_2,&local_90,3);
    if (local_38 == 4) {
      local_a8 = *(char **)(param_3 + 0x68);
      if (local_a8 != (char *)0x0) {
        _ZN21ruff_python_formatter14FormatNodeRule3fmt17hec7ac514f5c830e4E
                  (&local_90,&local_a0,local_a8,param_2);
        if ((int)local_90 != 4) {
          *(undefined8 **)(param_1 + 4) = local_80;
          local_50 = (int)local_90;
          iStack_4c = local_90._4_4_;
          iStack_48 = (int)uStack_88;
          iStack_44 = uStack_88._4_4_;
          goto LAB_0041def9;
        }
      }
      local_90 = (char **)(param_3 + 0x58);
      uStack_88 = (undefined *)(param_3 + 0x70);
      local_80 = &local_b0;
      local_78 = &local_60;
      local_a0 = &DAT_0067ed78;
      local_98 = 0;
      local_94 = 0;
      local_a8 = (char *)&local_90;
      _ZN104__LT_ruff_formatter__builders__Group_LT_Context_GT__u20_as_u20_ruff_formatter__Format_LT_Context_GT__GT_3fmt17hb09a1a8dca914ab0E
                (param_1,&local_a8,param_2);
      goto LAB_0041defc;
    }
    *(undefined8 *)(param_1 + 4) = local_28;
    local_50 = local_38;
    iStack_4c = iStack_34;
    iStack_48 = iStack_30;
    iStack_44 = iStack_2c;
  }
  else {
    local_a8 = "async";
    local_a0 = (undefined *)0x5;
    uStack_88 = &DAT_0067c890;
    local_80 = (undefined8 *)&local_b1;
    local_78 = (long *)&DAT_0067cbf0;
                    /* try { // try from 0041dda4 to 0041dec2 has its CatchHandler @ 0041df15 */
    local_90 = &local_a8;
    _ZN102__LT_ruff_formatter__formatter__Formatter_LT_Context_GT__u20_as_u20_ruff_formatter__buffer__Buffer_GT_9write_fmt17h7287e9dfefd137eaE
              (&local_50,param_2,&local_90,2);
    if (local_50 == 4) goto LAB_0041ddc6;
    *(undefined8 *)(param_1 + 4) = local_40;
  }
LAB_0041def9:
  *param_1 = local_50;
  param_1[1] = iStack_4c;
  param_1[2] = iStack_48;
  param_1[3] = iStack_44;
LAB_0041defc:
  _ZN4core3ptr62drop_in_place_LT_ruff_python_formatter__comments__Comments_GT_17he9abffb240eba4a8E
            (&local_b0);
  return;
}