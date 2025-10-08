void _ZN7uu_sort11KeySettings19check_compatibility17hffc9b72d1f0610fbE
               (undefined8 *param_1,byte param_2,char param_3,char param_4)

{
  undefined4 local_54;
  char *local_50;
  undefined *local_48;
  undefined4 *local_40;
  undefined *local_38;
  undefined **local_30;
  undefined8 local_28;
  undefined8 *local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  if (param_2 < 4) {
    if (param_4 == '\0') {
      if (param_3 == '\0') goto LAB_001d080a;
      local_54 = *(undefined4 *)("n" + (ulong)param_2 * 4);
      local_50 = "i";
    }
    else {
      local_54 = *(undefined4 *)("n" + (ulong)param_2 * 4);
      local_50 = "d";
    }
    local_48 = PTR__ZN43__LT_char_u20_as_u20_core__fmt__Display_GT_3fmt17h0215b7857ad55b0cE_002975b0
    ;
    local_40 = &local_54;
    local_38 = PTR__ZN43__LT_char_u20_as_u20_core__fmt__Display_GT_3fmt17h0215b7857ad55b0cE_002975b0
    ;
    local_30 = &PTR_s_options_____are_incompatible_0028cdc0;
    local_28 = 3;
    local_10 = 0;
    local_20 = &local_50;
    local_18 = 2;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17h9f6bdb3fe8306f69E(param_1,&local_30);
    return;
  }
LAB_001d080a:
  *param_1 = 0x8000000000000000;
  return;
}