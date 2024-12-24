undefined8 __rustcall
uu_df::filesystem::mount_info_from_path(undefined8 **param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 **local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  long *local_68;
  long *local_60;
  long *local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  long *local_40;
  long local_38;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uVar1 = _<&T_as_core::convert::AsRef<U>>::as_ref(param_3);
  std::fs::canonicalize(&local_88,uVar1);
  if (local_88 == (undefined8 **)0x8000000000000000) {
    core::ptr::drop_in_place<core::result::Result<std::path::PathBuf,std::io::error::Error>>
              (&local_88);
    uVar1 = 0;
  }
  else {
    local_50 = (undefined4)local_80;
    uStack_4c = local_80._4_4_;
    uStack_48 = (undefined4)uStack_78;
    uStack_44 = uStack_78._4_4_;
    local_58 = (long *)local_88;
    local_60 = (long *)(param_1 + param_2 * 0x13);
    local_88 = &local_58;
                    /* try { // try from 0017b231 to 0017b294 has its CatchHandler @ 0017b2b1 */
    local_80 = &local_58;
    uStack_78 = local_88;
    local_68 = (long *)param_1;
    _<core::iter::adapters::map::Map<I,F>as_core::iter::traits::iterator::Iterator>::try_fold
              (&local_40,&local_68,&local_88);
    if (local_38 == -0x8000000000000000) {
      core::ptr::
      drop_in_place<core::ops::control_flow::ControlFlow<(&uucore::features::fsext::MountInfo,std::path::PathBuf)>>
                (&local_40);
      local_40 = (long *)0x0;
    }
    else {
      uStack_70 = uStack_28;
      uStack_6c = uStack_24;
      local_88 = (undefined8 **)local_40;
      local_80 = (long **)local_38;
      core::ptr::drop_in_place<(&uucore::features::fsext::MountInfo,std::path::PathBuf)>(&local_88);
    }
    local_88 = param_1;
    local_80 = (long **)param_2;
    uStack_78 = &local_58;
    uVar1 = core::option::Option<T>::or_else(local_40,&local_88);
    core::ptr::drop_in_place<std::path::PathBuf>(&local_58);
  }
  return uVar1;
}