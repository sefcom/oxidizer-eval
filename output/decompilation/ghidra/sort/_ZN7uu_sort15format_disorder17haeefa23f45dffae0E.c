void _ZN7uu_sort15format_disorder17haeefa23f45dffae0E
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,byte param_6)

{
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined local_68;
  undefined8 *local_60;
  undefined *local_58;
  undefined8 *local_50;
  code *local_48;
  undefined8 *local_40;
  code *local_38;
  undefined *local_30;
  undefined8 local_28;
  undefined8 **local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  if ((param_6 & 1) != 0) {
    *param_1 = 0;
    param_1[1] = 1;
    param_1[2] = 0;
    return;
  }
  local_80 = 1;
  local_68 = 0;
  local_60 = &local_80;
  local_58 = 
  PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_00296f10
  ;
  local_50 = &local_90;
  local_48 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hb14ea78d6197468cE;
  local_40 = &local_88;
  local_38 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h5333ced964958e04E;
  local_30 = &DAT_0028cbd0;
  local_28 = 3;
  local_10 = 0;
  local_20 = &local_60;
  local_18 = 3;
  local_90 = param_4;
  local_88 = param_5;
  local_78 = param_2;
  local_70 = param_3;
  _ZN4core6option15Option_LT_T_GT_11map_or_else17h9f6bdb3fe8306f69E(param_1,&local_30);
  return;
}