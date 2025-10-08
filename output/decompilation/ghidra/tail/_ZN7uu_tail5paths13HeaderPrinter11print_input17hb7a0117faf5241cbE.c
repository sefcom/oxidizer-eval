void _ZN7uu_tail5paths13HeaderPrinter11print_input17hb7a0117faf5241cbE
               (char *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  ulong uStack_60;
  undefined8 *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 **ppuStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  puStack_48 = (undefined *)&uStack_78;
  if (*param_1 != '\0') {
    puStack_68 = (undefined *)0x1;
    if ((ulong)(byte)param_1[1] == 0) {
      puStack_68 = &DAT_00124df6;
    }
    uStack_60 = (ulong)(byte)param_1[1] ^ 1;
    puStack_58 = &puStack_68;
    pcStack_50 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h4163173f9b6529c1E;
    pcStack_40 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h4163173f9b6529c1E;
    puStack_38 = &DAT_00273938;
    uStack_30 = 3;
    uStack_18 = 0;
    ppuStack_28 = &puStack_58;
    uStack_20 = 2;
    uStack_78 = param_2;
    uStack_70 = param_3;
    (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_0027d8c0)(&puStack_38);
    param_1[1] = '\0';
  }
  return;
}