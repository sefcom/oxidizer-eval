void _ZN5uu_ls8pad_left17h9cc9c358e56c676aE
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  code *pcVar1;
  undefined **local_60;
  undefined8 local_58;
  undefined8 **local_50;
  undefined8 local_48;
  undefined *puStack_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 *local_20;
  code *local_18;
  undefined8 local_10;
  undefined2 local_8;
  
  local_8 = (undefined2)param_4;
  local_30 = param_2;
  local_28 = param_3;
  if (param_4 < 0x10000) {
    local_20 = &local_30;
    local_18 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hf27cb4f53db833cdE;
    local_10 = 0;
    local_60 = (undefined **)&DAT_001cf290;
    local_58 = 1;
    puStack_40 = &DAT_001d41d0;
    local_38 = 1;
    local_50 = &local_20;
    local_48 = 2;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17h69a0b1154707aabfE(param_1,&local_60);
    return;
  }
  local_60 = &PTR_DAT_003864a8;
  local_58 = 1;
  local_50 = (undefined8 **)0x8;
  local_48 = 0;
  puStack_40 = (undefined *)0x0;
  (*(code *)PTR__ZN4core9panicking9panic_fmt17h96f341d36638c225E_0048f818)
            (&local_60,&PTR_s_src_uu_ls_src_ls_rs_00386be0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}