void _ZN7uu_sort11KeySettings13set_sort_mode17h47a8d4b518e5b435E
               (long *param_1,long param_2,byte param_3)

{
  byte bVar1;
  undefined4 local_78;
  undefined4 local_74;
  undefined **local_70;
  long lStack_68;
  undefined **local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined *local_40;
  code *local_38;
  undefined4 *local_30;
  code *local_28;
  
  local_40 = (undefined *)&local_78;
  bVar1 = *(byte *)(param_2 + 5);
  if (((ulong)bVar1 == 6) || (bVar1 == param_3)) {
    _ZN7uu_sort11KeySettings19check_compatibility17hd03ca512104bcd48E
              (&local_70,param_3,*(undefined *)(param_2 + 3),*(undefined *)(param_2 + 2));
    if (local_70 == (undefined **)0x8000000000000000) {
      *(byte *)(param_2 + 5) = param_3;
      *param_1 = -0x8000000000000000;
    }
    else {
      param_1[2] = (long)local_60;
      *param_1 = (long)local_70;
      param_1[1] = lStack_68;
    }
  }
  else {
    local_78 = *(undefined4 *)("n" + (ulong)bVar1 * 4);
    local_74 = *(undefined4 *)("n" + (long)(char)param_3 * 4);
    local_38 = _ZN43__LT_char_u20_as_u20_core__fmt__Display_GT_3fmt17hfe75cd72bcd9c522E;
    local_30 = &local_74;
    local_28 = _ZN43__LT_char_u20_as_u20_core__fmt__Display_GT_3fmt17hfe75cd72bcd9c522E;
    local_70 = &PTR_s_options_____are_incompatible_002ff878;
    lStack_68 = 3;
    local_50 = 0;
    local_60 = &local_40;
    local_58 = 2;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17h391d7c162d69f44bE(param_1,&local_70);
  }
  return;
}