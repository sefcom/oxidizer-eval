undefined8
_ZN5uu_du20format_error_message17hc0aac58ff7c8913bE
          (undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
          ,undefined8 param_6)

{
  undefined8 *local_88;
  code *local_80;
  undefined8 *local_78;
  code *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined local_50;
  undefined **local_48;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_18;
  undefined8 local_10;
  
  local_38 = (undefined *)&local_88;
  if (*param_2 == 0) {
    local_48 = &PTR_DAT_00284850;
  }
  else {
    if ((int)*param_2 != 1) {
      local_48 = &PTR_DAT_00284890;
      local_40 = 3;
      goto LAB_001f5a04;
    }
    local_48 = &PTR_DAT_00284870;
  }
  local_40 = 2;
LAB_001f5a04:
  local_78 = &local_68;
  local_88 = &local_18;
  local_50 = 1;
  local_68 = 0;
  local_70 = _ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17h75932a24bee941d9E;
  local_80 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h6327d06d698acdd2E;
  local_28 = 0;
  local_30 = 2;
  local_60 = param_3;
  local_58 = param_4;
  local_18 = param_5;
  local_10 = param_6;
  _ZN4core6option15Option_LT_T_GT_11map_or_else17he00bf600f5f44dbcE(param_1,&local_48);
  return param_1;
}