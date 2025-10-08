void _ZN7uu_stat13pad_and_print17h4c659c1797f3ded6E
               (undefined8 param_1,undefined8 param_2,int param_3,ulong param_4,char param_5)

{
  code *pcVar1;
  undefined **local_60;
  undefined8 local_58;
  undefined8 **local_50;
  undefined8 local_48;
  undefined *puStack_40;
  undefined8 local_38;
  undefined8 *local_30;
  code *local_28;
  undefined8 local_20;
  undefined2 local_18;
  undefined8 local_10;
  undefined8 local_8;
  
  local_18 = (undefined2)param_4;
  local_10 = param_1;
  local_8 = param_2;
  if (param_3 == 0) {
    if (param_5 == '\0') {
      if (param_4 < 0x10000) {
        puStack_40 = &DAT_0011d388;
        goto LAB_00173324;
      }
      goto LAB_001733fd;
    }
    if (param_4 < 0x10000) {
      puStack_40 = &DAT_0011d3b8;
      goto LAB_00173324;
    }
LAB_0017338d:
    local_60 = &PTR_DAT_00219960;
    local_58 = 1;
    local_50 = (undefined8 **)0x8;
    local_48 = 0;
    puStack_40 = (undefined *)0x0;
    (*(code *)PTR__ZN4core9panicking9panic_fmt17h96f341d36638c225E_00221f70)
              (&local_60,&PTR_s_src_uu_stat_src_stat_rs_00219ab8);
  }
  else {
    if (param_5 != '\0') {
      if (param_4 < 0x10000) {
        puStack_40 = &DAT_0011d418;
LAB_00173324:
        local_30 = &local_10;
        local_20 = 0;
        local_28 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h917f70ba7096f615E;
        local_58 = 1;
        local_60 = (undefined **)&DAT_0011ab40;
        local_38 = 1;
        local_50 = &local_30;
        local_48 = 2;
        (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_00222270)(&local_60);
        return;
      }
      local_60 = &PTR_DAT_00219960;
      local_58 = 1;
      local_50 = (undefined8 **)0x8;
      local_48 = 0;
      puStack_40 = (undefined *)0x0;
      (*(code *)PTR__ZN4core9panicking9panic_fmt17h96f341d36638c225E_00221f70)
                (&local_60,&PTR_s_src_uu_stat_src_stat_rs_00219ae8);
      goto LAB_0017338d;
    }
    if (param_4 < 0x10000) {
      puStack_40 = &DAT_0011d3e8;
      goto LAB_00173324;
    }
  }
  local_60 = &PTR_DAT_00219960;
  local_58 = 1;
  local_50 = (undefined8 **)0x8;
  local_48 = 0;
  puStack_40 = (undefined *)0x0;
  (*(code *)PTR__ZN4core9panicking9panic_fmt17h96f341d36638c225E_00221f70)
            (&local_60,&PTR_s_src_uu_stat_src_stat_rs_00219ad0);
LAB_001733fd:
  local_60 = &PTR_DAT_00219960;
  local_58 = 1;
  local_50 = (undefined8 **)0x8;
  local_48 = 0;
  puStack_40 = (undefined *)0x0;
  (*(code *)PTR__ZN4core9panicking9panic_fmt17h96f341d36638c225E_00221f70)
            (&local_60,&PTR_s_src_uu_stat_src_stat_rs_00219aa0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}