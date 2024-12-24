undefined8 __rustcall
uu_ls::colors::color_name
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined8 param_5,
          undefined8 param_6,long param_7,undefined param_8)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long local_240;
  undefined8 local_238;
  undefined local_230 [160];
  long local_190;
  undefined8 local_188;
  undefined local_180 [160];
  int local_e0 [2];
  undefined8 local_d8;
  
  if ((*(char *)(param_4 + 0x128) == '\0') && (*(long *)(param_4 + 0x100) != 0)) {
    StyleManager::apply_style_based_on_dir_entry
              (param_1,param_5,param_4 + 0x100,param_2,param_3,param_8);
  }
  else {
    if (param_7 == 0) {
      plVar2 = (long *)PathData::get_metadata(param_4,param_6);
      std::fs::symlink_metadata
                (&local_190,*(undefined8 *)(param_4 + 0x20),*(undefined8 *)(param_4 + 0x28));
      if ((int)local_190 == 2) {
        local_240 = 2;
        core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>
                  (local_188);
        plVar3 = (long *)0x0;
      }
      else {
        (*(code *)PTR_memcpy_0031dc80)(&local_240,&local_190,0xb0);
        plVar3 = (long *)0x0;
        if (local_240 != 2) {
          plVar3 = &local_240;
        }
      }
      if (plVar2 != (long *)0x0) {
        plVar3 = plVar2;
      }
    }
    else {
      get_metadata_with_deref_opt
                (local_e0,*(undefined8 *)(param_7 + 0x20),*(undefined8 *)(param_7 + 0x28),
                 *(char *)(param_4 + 0x128));
      if (local_e0[0] == 2) {
        color_name::___closure__
                  (&local_240,*(undefined8 *)(param_4 + 0x20),*(undefined8 *)(param_4 + 0x28),
                   local_d8);
      }
      else {
        (*(code *)PTR_memcpy_0031dc80)(&local_240,local_e0,0xb0);
      }
      lVar1 = local_240;
      if (local_240 == 2) {
        local_190 = 2;
        core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>
                  (local_238);
        plVar3 = (long *)0x0;
      }
      else {
        (*(code *)PTR_memcpy_0031dc80)(local_180,local_230,0xa0);
        local_190 = lVar1;
        local_188 = local_238;
        plVar3 = &local_190;
      }
    }
    StyleManager::apply_style_based_on_metadata
              (param_1,param_5,param_4,plVar3,param_2,param_3,param_8);
  }
  return param_1;
}