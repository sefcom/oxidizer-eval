undefined8 __rustcall uu_od::prn_char::format_item_c(undefined8 param_1,byte *param_2,ulong param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined local_a9;
  byte *local_a8;
  code *local_a0;
  undefined *local_98;
  undefined8 local_90;
  undefined8 **local_88;
  undefined8 local_80;
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 local_68 [2];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined local_38;
  undefined4 **local_30;
  undefined8 local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_bounds_check(0,0,&DAT_00243098);
  }
  local_a9 = *param_2;
  if ((char)local_a9 < '\0') {
    if ((local_a9 & 0xc0) == 0x80) {
      _<T_as_alloc::slice::hack::ConvertVec>::to_vec(param_1);
      return param_1;
    }
    if ((param_3 == 1) || ((local_a9 & 0xe0) != 0xc0)) {
      if ((param_3 < 3) || ((local_a9 & 0xf0) != 0xe0)) {
        if ((param_3 < 4) || ((local_a9 & 0xf8) != 0xf0)) {
          local_30 = (undefined4 **)&local_a9;
          local_28 = core::fmt::num::_<impl_core::fmt::Octal_for_i8>::fmt;
          local_50 = 3;
          local_40 = 0x800000020;
          local_38 = 3;
          local_98 = &DAT_002430c8;
          goto LAB_001d57dd;
        }
        puVar1 = &DAT_002430f0;
        uVar2 = 4;
      }
      else {
        puVar1 = &DAT_002430d8;
        uVar2 = 3;
      }
    }
    else {
      puVar1 = &DAT_002430b0;
      uVar2 = 2;
    }
    uVar2 = _<core::ops::range::Range<usize>as_core::slice::index::SliceIndex<[T]>>::index
                      (uVar2,param_2,param_3,puVar1);
    core::str::converts::from_utf8(&local_30,uVar2);
    if ((byte **)local_30 == (byte **)0x0) {
      local_18 = (undefined4)local_28;
      uStack_14 = local_28._4_4_;
      uStack_10 = uStack_20;
      uStack_c = uStack_1c;
      local_a8 = (byte *)&local_18;
      local_a0 = _<&T_as_core::fmt::Display>::fmt;
      local_50 = 4;
      local_40 = 0x20;
      local_38 = 1;
      local_98 = &DAT_0010dad0;
    }
    else {
      local_a8 = &local_a9;
      local_a0 = core::fmt::num::_<impl_core::fmt::Octal_for_i8>::fmt;
      local_50 = 3;
      local_40 = 0x800000020;
      local_38 = 3;
      local_98 = &DAT_002430c8;
    }
    local_88 = (undefined8 **)&local_a8;
  }
  else {
    local_a8 = C_CHARS + (ulong)local_a9 * 0x10;
    local_30 = (undefined4 **)&local_a8;
    local_28 = _<&T_as_core::fmt::Display>::fmt;
    local_50 = 4;
    local_40 = 0x20;
    local_38 = 1;
    local_98 = &DAT_0010dad0;
LAB_001d57dd:
    local_88 = &local_30;
  }
  local_78 = local_68;
  local_48 = 0;
  local_58 = 0;
  local_68[0] = 2;
  local_70 = 1;
  local_90 = 1;
  local_80 = 1;
  core::option::Option<T>::map_or_else(param_1,&local_98);
  return param_1;
}