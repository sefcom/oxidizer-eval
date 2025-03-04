undefined8 *
_ZN5uu_cp18verify_target_type17h7b1c78bb10dff0f5E
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 *local_80;
  code *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined local_58;
  undefined **local_50;
  undefined8 local_48;
  undefined8 **local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  cVar1 = _ZN3std4path4Path6is_dir17h9ac0db933706da51E(param_2,param_3);
  if (*param_4 == '\0') {
    uVar2 = 0xd;
    if (cVar1 != '\0') goto LAB_002088e9;
    local_50 = &PTR_s_target__002b60b0;
  }
  else {
    uVar2 = 0xd;
    if (cVar1 == '\0') goto LAB_002088e9;
    local_50 = &PTR_s_cannot_overwrite_directory_with_n_002b5db8;
  }
  local_80 = &local_70;
  local_58 = 1;
  local_70 = 1;
  local_78 = _ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17h75932a24bee941d9E;
  local_48 = 2;
  local_30 = 0;
  local_40 = &local_80;
  local_38 = 1;
  local_68 = param_2;
  local_60 = param_3;
  _ZN4core6option15Option_LT_T_GT_11map_or_else17h805a87bba4bea7c2E(param_1 + 1,&local_50);
  uVar2 = 4;
LAB_002088e9:
  *param_1 = uVar2;
  return param_1;
}