void _ZN10check_docs13report_errors17h75874821b4daa881E
               (long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  long *local_88;
  code *local_80;
  long local_78;
  undefined **local_70;
  undefined8 local_68;
  undefined *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_40;
  undefined8 local_38;
  
  local_60 = (undefined *)&local_88;
  if (param_4 != 0) {
    local_88 = &local_40;
    local_80 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h8c5b7927cb42b082E;
    local_70 = &PTR_s_Invalid_detected__002d33f8;
    local_68 = 2;
    local_50 = 0;
    local_58 = 1;
    local_40 = param_1;
    local_38 = param_2;
    (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_002fea18)(&local_70);
    puVar1 = PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_002fea18;
    param_4 = param_4 << 3;
    local_78 = param_3;
    do {
      lVar2 = local_78 + 8;
      local_80 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h2fa94dfe70534f88E;
      local_70 = (undefined **)&DAT_002d3418;
      local_68 = 2;
      local_50 = 0;
      local_58 = 1;
      local_88 = &local_78;
      local_60 = (undefined *)&local_88;
      (*(code *)puVar1)(&local_70);
      param_4 = param_4 + -8;
      local_78 = lVar2;
    } while (param_4 != 0);
  }
  return;
}