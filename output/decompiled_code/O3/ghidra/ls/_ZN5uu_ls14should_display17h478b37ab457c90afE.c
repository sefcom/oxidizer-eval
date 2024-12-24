uint __rustcall uu_ls::should_display(undefined8 param_1,long param_2)

{
  char cVar1;
  uint uVar2;
  undefined2 local_83;
  undefined local_81;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined local_30 [8];
  undefined8 local_28;
  undefined8 local_20;
  
  if ((*(char *)(param_2 + 0xf0) == '\x02') && (cVar1 = is_hidden(param_1), cVar1 != '\0')) {
    return 0;
  }
  local_83 = 1;
  local_81 = 1;
  std::fs::DirEntry::file_name(local_30,param_1);
                    /* try { // try from 00227cff to 00227d63 has its CatchHandler @ 00227de7 */
  std::ffi::os_str::_<impl_core::convert::TryFrom<&std::ffi::os_str::OsStr>for&str>::try_from
            (&local_80,local_28,local_20);
  if (local_80 == 0) {
    _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_80,uStack_78,local_70);
  }
  else {
    std::sys::os_str::bytes::Slice::to_string_lossy(&local_48,local_28,local_20);
    if (CONCAT44(uStack_44,local_48) != -0x8000000000000000) {
      local_58 = local_38;
      local_80._0_4_ = local_48;
      local_80._4_4_ = uStack_44;
      uStack_78._0_4_ = uStack_40;
      uStack_78._4_4_ = uStack_3c;
      goto LAB_00227d84;
    }
    _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_80,CONCAT44(uStack_3c,uStack_40),local_38)
    ;
  }
  local_58 = local_70;
LAB_00227d84:
                    /* try { // try from 00227d9f to 00227db2 has its CatchHandler @ 00227dd8 */
  uStack_64 = local_80._4_4_;
  local_68 = (undefined4)local_80;
  local_80 = *(long *)(param_2 + 8);
  uStack_60 = (undefined4)uStack_78;
  uStack_5c = uStack_78._4_4_;
  uStack_78 = *(long *)(param_2 + 0x10) * 0x38 + *(long *)(param_2 + 8);
  uVar2 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::any
                    (&local_80,&local_68,&local_83);
                    /* try { // try from 00227db3 to 00227dbe has its CatchHandler @ 00227de7 */
  core::ptr::drop_in_place<alloc::string::String>(&local_68);
  core::ptr::drop_in_place<std::ffi::os_str::OsString>(local_30);
  return uVar2 ^ 1;
}