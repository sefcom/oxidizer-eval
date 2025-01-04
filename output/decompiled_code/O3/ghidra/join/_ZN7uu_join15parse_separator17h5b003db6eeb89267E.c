void __rustcall uu_join::parse_separator(undefined8 *param_1,undefined *param_2,long param_3)

{
  undefined uVar1;
  code *pcVar2;
  int iVar3;
  undefined8 uVar4;
  int extraout_EDX;
  int extraout_EDX_00;
  long local_a0;
  long local_98;
  undefined **local_90;
  long local_88;
  undefined8 **local_80;
  undefined8 local_78;
  undefined8 local_70;
  long local_60;
  long local_58;
  long *local_50;
  code *local_48;
  undefined local_40 [24];
  undefined4 local_28;
  
  if (param_3 == 1) {
    uVar1 = *param_2;
    *param_1 = 0x8000000000000000;
    *(undefined *)(param_1 + 1) = uVar1;
  }
  else if (param_3 == 0) {
    *param_1 = 0x8000000000000002;
  }
  else {
    std::ffi::os_str::_<impl_core::convert::TryFrom<&std::ffi::os_str::OsStr>for&str>::try_from
              (&local_90);
    if (local_90 == (undefined **)0x0) {
      local_60 = local_88;
      local_58 = (long)local_80;
      local_98 = local_88 + (long)local_80;
      local_a0 = local_88;
      iVar3 = core::str::validations::next_code_point(&local_a0);
      if ((iVar3 == 0) || (extraout_EDX == 0x110000)) {
        core::option::expect_failed
                  ("valid string with at least one byte",0x23,
                   &PTR_s_src_uu_join_src_join_rs_00235478);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar3 = core::str::validations::next_code_point(&local_a0);
      if (iVar3 == 0) {
        _<alloc::vec::Vec<u8>as_core::convert::From<&str>>::from(param_1,local_88,local_80);
      }
      else if ((extraout_EDX == 0x5c) && (extraout_EDX_00 == 0x30)) {
        *param_1 = 0x8000000000000000;
        *(undefined *)(param_1 + 1) = 0;
      }
      else {
        local_50 = &local_60;
        local_48 = _<&T_as_core::fmt::Display>::fmt;
        local_90 = &PTR_s_multi_character_tab_00235468;
        local_88 = 1;
        local_70 = 0;
        local_80 = &local_50;
        local_78 = 1;
        core::option::Option<T>::map_or_else(local_40,&local_90);
        local_28 = 1;
        uVar4 = ::alloc::boxed::Box<T>::new(local_40);
        param_1[1] = uVar4;
        param_1[2] = &PTR_drop_in_place<uucore_mods_error_USimpleError>_002352b8;
        *param_1 = 0x8000000000000004;
      }
    }
    else {
      _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_90,"non-UTF-8 multi-byte tab",0x18);
      local_78 = CONCAT44(local_78._4_4_,1);
      uVar4 = ::alloc::boxed::Box<T>::new(&local_90);
      param_1[1] = uVar4;
      param_1[2] = &PTR_drop_in_place<uucore_mods_error_USimpleError>_002352b8;
      *param_1 = 0x8000000000000004;
    }
  }
  return;
}