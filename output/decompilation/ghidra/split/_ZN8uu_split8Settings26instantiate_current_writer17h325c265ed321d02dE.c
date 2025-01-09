undefined8 * __rustcall
uu_split::Settings::instantiate_current_writer
          (undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined param_5)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 *local_80;
  code *local_78;
  undefined **local_70;
  undefined8 local_68;
  undefined8 **local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined local_40 [24];
  
  local_90 = param_3;
  local_88 = param_4;
  cVar1 = platform::unix::paths_refer_to_same_file
                    (*(undefined8 *)(param_2 + 0x78),*(undefined8 *)(param_2 + 0x80));
  if (cVar1 == '\0') {
    platform::unix::instantiate_current_writer(param_1,param_2 + 0x88,param_3,param_4,param_5);
  }
  else {
    local_80 = &local_90;
    local_78 = _<&T_as_core::fmt::Display>::fmt;
    local_70 = &PTR_s____would_overwrite_input__aborti_00248380;
    local_68 = 2;
    local_50 = 0;
    local_60 = &local_80;
    local_58 = 1;
    core::option::Option<T>::map_or_else(local_40,0,&local_70);
    uVar2 = std::io::error::Error::new(0x27,local_40);
    param_1[1] = uVar2;
    *param_1 = 0x8000000000000000;
  }
  return param_1;
}