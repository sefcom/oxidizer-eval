void _ZN5uu_cp20show_error_if_needed17h37308d2f7c80265fE(long *param_1)

{
  undefined *puVar1;
  undefined local_68 [16];
  long *local_58;
  undefined *local_50;
  undefined8 local_48;
  undefined **local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined *local_20;
  code *local_18;
  
  if ((*param_1 != -0x7ffffffffffffffc) && (*param_1 != -0x7ffffffffffffff9)) {
    local_58 = param_1;
    local_68 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_00267628)();
    puVar1 = PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_00267630;
    local_18 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17haac06c1252b30d1dE;
    local_50 = &DAT_0025e700;
    local_48 = 2;
    local_30 = 0;
    local_40 = &local_20;
    local_38 = 1;
    local_20 = local_68;
    (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_00267630)(&local_50);
    local_68._0_8_ = &local_58;
    local_68._8_8_ = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h37de6691381edacbE;
    local_50 = &DAT_0025e620;
    local_48 = 2;
    local_30 = 0;
    local_38 = 1;
    local_40 = (undefined **)local_68;
    (*(code *)puVar1)(&local_50);
  }
  return;
}