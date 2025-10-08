void _ZN9alacritty7migrate9Migration15success_message17h6e70dbedf75118d1E
               (undefined8 param_1,long param_2,char param_3)

{
  long local_60;
  long local_58;
  long *local_50;
  code *local_48;
  long *local_40;
  code *local_38;
  undefined **local_30;
  undefined8 local_28;
  undefined8 **local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_60 = param_2 + 0x10;
  if (param_3 == '\0') {
    local_30 = &PTR_s_Successfully_migrated_009837e8;
  }
  else {
    local_30 = &PTR_s_Successfully_migrated_import_009837c8;
  }
  local_40 = &local_60;
  local_50 = &local_58;
  local_38 = _ZN42__LT__RF_T_u20_as_u20_core__fmt__Debug_GT_3fmt17hb5cf510104176b6cE;
  local_48 = _ZN42__LT__RF_T_u20_as_u20_core__fmt__Debug_GT_3fmt17hc05483ad51a2aec5E;
  local_28 = 2;
  local_10 = 0;
  local_20 = &local_50;
  local_18 = 2;
  local_58 = param_2;
  _ZN4core6option15Option_LT_T_GT_11map_or_else17h50b4264313244ea1E(param_1,0,param_3,&local_30);
  return;
}