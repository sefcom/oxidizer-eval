void _ZN21ruff_python_formatter9statement7stmt_if23format_elif_else_clause17ha6be920a41468cd8E
               (undefined8 param_1,long param_2,undefined8 *param_3,undefined8 param_4,
               undefined8 param_5,undefined param_6)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  undefined auVar5 [16];
  long local_120;
  long local_118;
  uint local_110;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 *local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  long local_e8;
  long *local_e0;
  long *local_d8;
  undefined8 local_d0;
  long local_c8;
  undefined local_c0 [16];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 **local_a0;
  undefined *local_98;
  undefined local_90 [16];
  long local_80;
  undefined local_78 [16];
  undefined local_68;
  undefined8 *local_60;
  undefined *local_58;
  long *local_50;
  undefined *local_48;
  uint *local_40;
  undefined *local_38;
  
  local_e8 = param_2 + 0x18;
  uVar1 = *param_3;
  lVar3 = param_3[1];
  local_120 = param_2;
  local_108 = param_1;
  local_100 = param_3;
  local_f8 = param_4;
  local_f0 = param_5;
  lVar2 = (**(code **)(lVar3 + 0x30))(uVar1);
  _ZN5alloc2rc10RcInnerPtr10inc_strong17h8686aaaa10b78ebbE(*(undefined8 *)(lVar2 + 0x10));
  lVar2 = *(long *)(lVar2 + 0x10);
  local_118 = lVar2;
                    /* try { // try from 0041e8df to 0041ea3c has its CatchHandler @ 0041ea59 */
  auVar5 = _ZN21ruff_python_formatter8comments8Comments8dangling17hb5267ccf96b17255E(lVar2,param_2);
  local_d0 = 0x57;
  local_c8 = param_2;
  local_c0 = _ZN21ruff_python_formatter8comments3map21MultiMap_LT_K_C_V_GT_7leading17hb31877b14c47a989E
                       (lVar2 + 0x10,&local_d0);
  local_e0 = &local_120;
  local_d8 = &local_e8;
  local_d0 = 6;
  local_b0 = local_f8;
  local_a8 = local_f0;
  local_a0 = &local_e0;
  local_98 = &DAT_0067ee20;
  local_c8 = param_2;
  local_80 = param_2;
  local_68 = param_6;
  local_90 = auVar5;
  local_78 = auVar5;
  lVar3 = _ZN14ruff_formatter9formatter24Formatter_LT_Context_GT_7options17he55f9fce45a2dc4aE
                    (uVar1,lVar3);
  bVar4 = *(char *)(lVar3 + 0xc) == '\x01';
  if (bVar4) {
    local_10c = *(undefined4 *)(local_120 + 0x6c);
  }
  local_110 = (uint)bVar4;
  local_58 = &DAT_0067e140;
  local_50 = &local_80;
  local_48 = &DAT_0067e160;
  local_40 = &local_110;
  local_38 = &DAT_0067e810;
  local_60 = &local_d0;
  _ZN102__LT_ruff_formatter__formatter__Formatter_LT_Context_GT__u20_as_u20_ruff_formatter__buffer__Buffer_GT_9write_fmt17h7287e9dfefd137eaE
            (local_108,local_100,&local_60,3);
  _ZN4core3ptr62drop_in_place_LT_ruff_python_formatter__comments__Comments_GT_17he9abffb240eba4a8E
            (&local_118);
  return;
}