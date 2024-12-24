undefined8 * __rustcall
uu_cp::verify_target_type(undefined8 *param_1,undefined8 param_2,undefined8 param_3,char *param_4)

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
  
  cVar1 = std::path::Path::is_dir(param_2,param_3);
  if (*param_4 == '\0') {
    uVar2 = 0xd;
    if (cVar1 != '\0') goto LAB_00207f89;
    local_50 = &PTR_s_target__002b59e0;
  }
  else {
    uVar2 = 0xd;
    if (cVar1 == '\0') goto LAB_00207f89;
    local_50 = &PTR_s_cannot_overwrite_directory_with_n_002b56e8;
  }
  local_80 = &local_70;
  local_58 = 1;
  local_70 = 1;
  local_78 = _<os_display::Quoted_as_core::fmt::Display>::fmt;
  local_48 = 2;
  local_30 = 0;
  local_40 = &local_80;
  local_38 = 1;
  local_68 = param_2;
  local_60 = param_3;
  core::option::Option<T>::map_or_else(param_1 + 1,&local_50);
  uVar2 = 4;
LAB_00207f89:
  *param_1 = uVar2;
  return param_1;
}