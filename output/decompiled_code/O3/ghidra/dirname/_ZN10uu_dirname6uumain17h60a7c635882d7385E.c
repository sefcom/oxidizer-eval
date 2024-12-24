ulong __rustcall uu_dirname::uumain(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  ulong uVar4;
  undefined local_a8 [16];
  undefined **local_98;
  undefined8 local_90;
  undefined8 **local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined local_68 [16];
  undefined8 **local_58;
  code *local_50;
  undefined8 *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined local_28 [8];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  uVar2 = (*(code *)PTR_disable_rust_signal_handlers_0020bfc8)();
  core::result::Result<T,E>::expect(uVar2);
  local_a8 = uumain::uumain(param_1,param_2);
  if (local_a8._0_8_ != 0) {
    uStack_40 = _<alloc::boxed::Box<T,A>as_core::fmt::Display>::fmt;
    local_98 = (undefined **)&DAT_00109eb0;
    local_90 = 1;
    local_78 = 0;
    local_80 = 1;
                    /* try { // try from 0015c38f to 0015c3a0 has its CatchHandler @ 0015c52c */
    local_88 = &local_48;
    local_48 = (undefined8 *)local_a8;
    core::option::Option<T>::map_or_else(local_28,&local_98);
    uStack_40 = (code *)CONCAT44(uStack_1c,uStack_20);
    local_38 = local_18;
                    /* try { // try from 0015c3c0 to 0015c4f4 has its CatchHandler @ 0015c531 */
    cVar1 = _<alloc::string::String_as_core::cmp::PartialEq<&str>>::ne(uStack_40);
    if (cVar1 != '\0') {
      local_68 = (*(code *)PTR_util_name_0020bfd0)();
      local_50 = _<&T_as_core::fmt::Display>::fmt;
      local_98 = (undefined **)&DAT_002060e0;
      local_90 = 2;
      local_78 = 0;
      local_88 = &local_58;
      local_80 = 1;
      local_58 = (undefined8 **)local_68;
      (*(code *)PTR__eprint_0020bf98)(&local_98);
      local_68._8_8_ = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_98 = (undefined **)&DAT_00206100;
      local_90 = 2;
      local_78 = 0;
      local_80 = 1;
      local_88 = (undefined8 **)local_68;
      local_68._0_8_ = &local_48;
      (*(code *)PTR__eprint_0020bf98)(&local_98);
    }
    cVar1 = (**(code **)(local_a8._8_8_ + 0x68))(local_a8._0_8_);
    if (cVar1 != '\0') {
      local_68 = (*(code *)PTR_execution_phrase_0020bfd8)();
      local_58 = (undefined8 **)local_68;
      local_50 = _<&T_as_core::fmt::Display>::fmt;
      local_98 = &PTR_s_Try_____help__for_more_informati_00206120;
      local_90 = 2;
      local_78 = 0;
      local_88 = &local_58;
      local_80 = 1;
      (*(code *)PTR__eprint_0020bf98)(&local_98);
    }
    uVar3 = (**(code **)(local_a8._8_8_ + 0x60))(local_a8._0_8_);
                    /* try { // try from 0015c4f5 to 0015c500 has its CatchHandler @ 0015c52c */
    core::ptr::drop_in_place<alloc::string::String>(&local_48);
    core::ptr::
    drop_in_place<alloc::boxed::Box<dyn_core::error::Error_core::marker::Sync_core::marker::Send>>
              (local_a8._0_8_,local_a8._8_8_);
    return (ulong)uVar3;
  }
  uVar4 = (*(code *)PTR_get_exit_code_0020bfe0)();
  return uVar4;
}