void _ZN7uu_tail5paths13HeaderPrinter5print17hb9d96eaf79a3fd0eE
               (char *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_78;
  undefined8 local_70;
  undefined *local_68;
  ulong local_60;
  undefined8 *local_58;
  code *local_50;
  undefined *local_48;
  code *local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined8 **local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_48 = (undefined *)&local_78;
  if (*param_1 != '\0') {
    local_68 = (undefined *)0x1;
    if ((ulong)(byte)param_1[1] == 0) {
      local_68 = &DAT_00124df6;
    }
    local_60 = (ulong)(byte)param_1[1] ^ 1;
    local_58 = &local_68;
    local_50 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h4163173f9b6529c1E;
    local_40 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h4163173f9b6529c1E;
    local_38 = &DAT_00273938;
    local_30 = 3;
    local_18 = 0;
    local_28 = &local_58;
    local_20 = 2;
    local_78 = param_2;
    local_70 = param_3;
    (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_0027d8c0)(&local_38);
    param_1[1] = '\0';
  }
  return;
}