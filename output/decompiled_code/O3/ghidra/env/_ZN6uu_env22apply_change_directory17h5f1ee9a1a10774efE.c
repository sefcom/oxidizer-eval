undefined8 __rustcall uu_env::apply_change_directory(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long local_a0;
  undefined **local_98;
  undefined8 uStack_90;
  undefined8 **local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 *local_68;
  code *local_60;
  long *local_58;
  code *local_50;
  undefined8 local_48;
  long local_40;
  undefined8 local_38;
  undefined local_30;
  undefined local_28 [16];
  undefined8 local_18;
  
  lVar1 = *(long *)(param_1 + 0x78);
  if ((*(long *)(param_1 + 0x58) == 0) && (lVar1 != 0)) {
    _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_98,&DAT_00124a92,0x26);
    local_80 = CONCAT44(local_80._4_4_,0x7d);
    uVar2 = ::alloc::boxed::Box<T>::new(&local_98);
  }
  else {
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x80);
      local_a0 = std::env::set_current_dir(lVar1,uVar2);
      if (local_a0 != 0) {
        local_48 = 1;
        local_30 = 1;
        local_68 = &local_48;
        local_60 = _<os_display::Quoted_as_core::fmt::Display>::fmt;
        local_58 = &local_a0;
        local_50 = _<std::io::error::Error_as_core::fmt::Display>::fmt;
        local_98 = &PTR_DAT_002493b8;
        uStack_90 = 2;
        local_78 = 0;
        local_88 = &local_68;
        local_80 = 2;
                    /* try { // try from 001cf08d to 001cf0ca has its CatchHandler @ 001cf0f1 */
        local_40 = lVar1;
        local_38 = uVar2;
        core::option::Option<T>::map_or_else(local_28,&local_98);
        local_80 = CONCAT44(local_80._4_4_,0x7d);
        local_88 = (undefined8 **)local_18;
        uVar2 = ::alloc::boxed::Box<T>::new(&local_98);
        core::ptr::drop_in_place<std::io::error::Error>(&local_a0);
        return uVar2;
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}