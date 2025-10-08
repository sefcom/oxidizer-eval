void _ZN7uu_sort11KeySettings13set_sort_mode17h0494465a2c1513d1E
               (undefined8 *param_1,long param_2,byte param_3)

{
  byte bVar1;
  undefined4 local_70;
  undefined4 local_6c;
  undefined **local_68;
  undefined8 uStack_60;
  undefined4 **local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 *local_38;
  undefined *local_30;
  undefined4 *local_28;
  undefined *local_20;
  
  bVar1 = *(byte *)(param_2 + 5);
  if (bVar1 == 6 || bVar1 == param_3) {
    _ZN7uu_sort11KeySettings19check_compatibility17hffc9b72d1f0610fbE
              (&local_68,param_3,*(undefined *)(param_2 + 3),*(undefined *)(param_2 + 2));
    param_1[2] = local_58;
    *param_1 = local_68;
    param_1[1] = uStack_60;
  }
  else {
    local_70 = *(undefined4 *)(&DAT_0012c2a0 + (ulong)bVar1 * 4);
    local_6c = *(undefined4 *)(&DAT_0012c2a0 + (ulong)param_3 * 4);
    local_38 = &local_70;
    local_30 = PTR__ZN43__LT_char_u20_as_u20_core__fmt__Display_GT_3fmt17h0215b7857ad55b0cE_002975b0
    ;
    local_28 = &local_6c;
    local_20 = PTR__ZN43__LT_char_u20_as_u20_core__fmt__Display_GT_3fmt17h0215b7857ad55b0cE_002975b0
    ;
    local_68 = &PTR_s_options_____are_incompatible_0028cdc0;
    uStack_60 = 3;
    local_48 = 0;
    local_58 = &local_38;
    local_50 = 2;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17h9f6bdb3fe8306f69E(param_1,&local_68);
  }
  return;
}