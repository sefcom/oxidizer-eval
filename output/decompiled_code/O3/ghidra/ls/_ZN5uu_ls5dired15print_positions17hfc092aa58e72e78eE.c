void __rustcall
uu_ls::dired::print_positions(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long *local_98;
  code *local_90;
  undefined **local_88;
  undefined8 local_80;
  undefined *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  undefined8 local_38;
  
  local_78 = (undefined *)&local_98;
  local_98 = &local_40;
  local_90 = _<&T_as_core::fmt::Display>::fmt;
  local_88 = (undefined **)&DAT_00123d10;
  local_80 = 1;
  uStack_68 = 0;
  local_70 = 1;
  local_40 = param_1;
  local_38 = param_2;
  std::io::stdio::_print(&local_88);
  local_50 = param_4 * 0x10 + param_3;
  local_58 = param_3;
  lVar1 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next(&local_58);
  if (lVar1 != 0) {
    do {
      local_90 = _<&T_as_core::fmt::Display>::fmt;
      local_88 = &PTR_s__00313358;
      local_80 = 1;
      uStack_68 = 0;
      local_70 = 1;
      local_98 = &local_48;
      local_78 = (undefined *)&local_98;
      local_48 = lVar1;
      std::io::stdio::_print(&local_88);
      lVar1 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next
                        (&local_58);
    } while (lVar1 != 0);
  }
  local_88 = &PTR_s__00313348;
  local_80 = 1;
  local_78 = (undefined *)0x8;
  local_70 = 0;
  uStack_68 = 0;
  std::io::stdio::_print(&local_88);
  return;
}