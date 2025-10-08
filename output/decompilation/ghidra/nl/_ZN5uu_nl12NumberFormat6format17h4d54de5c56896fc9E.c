undefined8
_ZN5uu_nl12NumberFormat6format17h4d54de5c56896fc9E
          (undefined8 param_1,char *param_2,long param_3,ulong param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined **local_68;
  undefined8 local_60;
  undefined8 **local_58;
  undefined8 local_50;
  undefined *puStack_48;
  undefined8 local_40;
  long *local_38;
  undefined *local_30;
  undefined8 local_28;
  undefined2 local_20;
  long local_18;
  long local_10;
  
  local_20 = (undefined2)param_4;
  local_18 = param_3;
  if (*param_2 == '\0') {
    if (param_4 < 0x10000) {
      local_38 = &local_18;
      local_68 = (undefined **)&DAT_0014e930;
      puStack_48 = &DAT_00154390;
      goto LAB_0021b3f5;
    }
LAB_0021b45f:
    local_68 = &PTR_DAT_0033a250;
    local_60 = 1;
    local_58 = (undefined8 **)0x8;
    local_50 = 0;
    puStack_48 = (undefined *)0x0;
    (*(code *)PTR__ZN4core9panicking9panic_fmt17h96f341d36638c225E_00368108)
              (&local_68,&PTR_s_src_uu_nl_src_nl_rs_0033a260);
  }
  else {
    if (*param_2 == '\x01') {
      if (param_4 < 0x10000) {
        local_38 = &local_18;
        local_68 = (undefined **)&DAT_0014e930;
        puStack_48 = &DAT_001543c0;
        goto LAB_0021b3f5;
      }
      local_68 = &PTR_DAT_0033a250;
      local_60 = 1;
      local_58 = (undefined8 **)0x8;
      local_50 = 0;
      puStack_48 = (undefined *)0x0;
      (*(code *)PTR__ZN4core9panicking9panic_fmt17h96f341d36638c225E_00368108)
                (&local_68,&PTR_s_src_uu_nl_src_nl_rs_0033a278);
      goto LAB_0021b45f;
    }
    if (param_3 < 0) {
      local_10 = -param_3;
      if (0xffff < param_4 - 1) goto LAB_0021b4c9;
      local_38 = &local_10;
      local_20 = (undefined2)(param_4 - 1);
      local_68 = &PTR_s___0033a2a8;
LAB_0021b3e1:
      puStack_48 = &DAT_001543f0;
LAB_0021b3f5:
      local_28 = 0;
      local_30 = 
      PTR__ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_isize_GT_3fmt17ha20e89585d070df8E_003683c8
      ;
      local_60 = 1;
      local_40 = 1;
      local_58 = &local_38;
      local_50 = 2;
      _ZN4core6option15Option_LT_T_GT_11map_or_else17h612ba33885ce226bE(param_1,&local_68);
      return param_1;
    }
    if (param_4 < 0x10000) {
      local_38 = &local_18;
      local_68 = (undefined **)&DAT_0014e930;
      goto LAB_0021b3e1;
    }
  }
  local_68 = &PTR_DAT_0033a250;
  local_60 = 1;
  local_58 = (undefined8 **)0x8;
  local_50 = 0;
  puStack_48 = (undefined *)0x0;
  (*(code *)PTR__ZN4core9panicking9panic_fmt17h96f341d36638c225E_00368108)
            (&local_68,&PTR_s_src_uu_nl_src_nl_rs_0033a290);
LAB_0021b4c9:
  local_68 = &PTR_DAT_0033a250;
  local_60 = 1;
  local_58 = (undefined8 **)0x8;
  local_50 = 0;
  puStack_48 = (undefined *)0x0;
  (*(code *)PTR__ZN4core9panicking9panic_fmt17h96f341d36638c225E_00368108)
            (&local_68,&PTR_s_src_uu_nl_src_nl_rs_0033a2b8);
  pcVar1 = (code *)swi(3);
  uVar2 = (*pcVar1)();
  return uVar2;
}