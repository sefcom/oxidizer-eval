ulong __rustcall uu_unexpand::uumain(undefined8 param_1,undefined8 param_2)

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
  code *pcStack_40;
  undefined8 local_38;
  undefined local_28 [16];
  undefined8 local_18;
  
  uVar2 = (*(code *)PTR_disable_rust_signal_handlers_00222868)();
  core::result::Result<T,E>::expect(uVar2);
  local_a8 = uumain::uumain(param_1,param_2);
  if (local_a8._0_8_ != 0) {
    pcStack_40 = _<alloc::boxed::Box<T,A>as_core::fmt::Display>::fmt;
    local_98 = (undefined **)&DAT_00114810;
    local_90 = 1;
    local_78 = 0;
    local_80 = 1;
                    /* try { // try from 001673bf to 001673d0 has its CatchHandler @ 00167557 */
    local_88 = &local_48;
    local_48 = (undefined8 *)local_a8;
    core::option::Option<T>::map_or_else(local_28,&local_98);
    local_38 = local_18;
    cVar1 = _<alloc::string::String_as_core::cmp::PartialEq<&str>>::ne();
    if (cVar1 != '\0') {
                    /* try { // try from 001673f8 to 0016751f has its CatchHandler @ 0016755c */
      local_68 = (*(code *)PTR_util_name_00222870)();
      local_50 = _<&T_as_core::fmt::Display>::fmt;
      local_98 = (undefined **)&DAT_0021c178;
      local_90 = 2;
      local_78 = 0;
      local_88 = &local_58;
      local_80 = 1;
      local_58 = (undefined8 **)local_68;
      (*(code *)PTR__eprint_00222878)(&local_98);
      local_68._8_8_ = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_98 = (undefined **)&DAT_0021c198;
      local_90 = 2;
      local_78 = 0;
      local_80 = 1;
      local_88 = (undefined8 **)local_68;
      local_68._0_8_ = &local_48;
      (*(code *)PTR__eprint_00222878)(&local_98);
    }
    cVar1 = (**(code **)(local_a8._8_8_ + 0x68))(local_a8._0_8_);
    if (cVar1 != '\0') {
      local_68 = (*(code *)PTR_execution_phrase_00222880)();
      local_58 = (undefined8 **)local_68;
      local_50 = _<&T_as_core::fmt::Display>::fmt;
      local_98 = &PTR_DAT_0021c1b8;
      local_90 = 2;
      local_78 = 0;
      local_88 = &local_58;
      local_80 = 1;
      (*(code *)PTR__eprint_00222878)(&local_98);
    }
    uVar3 = (**(code **)(local_a8._8_8_ + 0x60))(local_a8._0_8_);
                    /* try { // try from 00167520 to 0016752b has its CatchHandler @ 00167557 */
    core::ptr::drop_in_place<alloc::string::String>(&local_48);
    core::ptr::
    drop_in_place<alloc::boxed::Box<dyn_clap_builder::builder::value_parser::AnyValueParser>>
              (local_a8._0_8_,local_a8._8_8_);
    return (ulong)uVar3;
  }
  uVar4 = (*(code *)PTR_get_exit_code_00222888)();
  return uVar4;
}