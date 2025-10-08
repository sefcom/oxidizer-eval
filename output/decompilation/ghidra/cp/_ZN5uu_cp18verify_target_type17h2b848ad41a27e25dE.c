undefined8 *
_ZN5uu_cp18verify_target_type17h2b848ad41a27e25dE
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 *local_88;
  undefined *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined local_60;
  undefined **local_58;
  undefined8 local_50;
  undefined *local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  uVar2 = 0x8000000000000003;
  cVar1 = (*(code *)PTR__ZN3std4path4Path6is_dir17h02edbc48c38d7d9eE_00267ad0)(param_2,param_3);
  if (*param_4 == '\x01') {
    if (cVar1 == '\0') {
LAB_001a55b4:
      uVar2 = 0x800000000000000c;
      goto LAB_001a5624;
    }
    local_58 = &PTR_s_cannot_overwrite_directory_with_n_0025eae8;
  }
  else {
    if (cVar1 != '\0') goto LAB_001a55b4;
    local_58 = &PTR_s_target__0025edb0;
  }
  local_88 = &local_78;
  local_60 = 1;
  local_78 = 1;
  local_80 = 
  PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_00267af0
  ;
  local_50 = 2;
  local_38 = 0;
  local_40 = 1;
  local_70 = param_2;
  local_68 = param_3;
  local_48 = (undefined *)&local_88;
  _ZN4core6option15Option_LT_T_GT_11map_or_else17ha891a5b84284deb4E(param_1 + 1,&local_58);
LAB_001a5624:
  *param_1 = uVar2;
  return param_1;
}