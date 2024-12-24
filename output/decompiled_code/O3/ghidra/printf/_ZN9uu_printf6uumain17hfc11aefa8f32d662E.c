ulong __rustcall uu_printf::uumain(undefined8 param_1,undefined8 param_2)

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
  
  uVar2 = (*(code *)PTR_disable_rust_signal_handlers_00224c30)();
  core::result::Result<T,E>::expect(uVar2);
  local_a8 = uumain::uumain(param_1,param_2);
  if (local_a8._0_8_ != 0) {
    uStack_40 = _<alloc::boxed::Box<T,A>as_core::fmt::Display>::fmt;
    local_98 = (undefined **)&DAT_001147d0;
    local_90 = 1;
    local_78 = 0;
    local_80 = 1;
                    /* try { // try from 0016b32f to 0016b340 has its CatchHandler @ 0016b4cc */
    local_88 = &local_48;
    local_48 = (undefined8 *)local_a8;
    core::option::Option<T>::map_or_else(local_28,&local_98);
    uStack_40 = (code *)CONCAT44(uStack_1c,uStack_20);
    local_38 = local_18;
                    /* try { // try from 0016b360 to 0016b494 has its CatchHandler @ 0016b4d1 */
    cVar1 = _<alloc::string::String_as_core::cmp::PartialEq<&str>>::ne(uStack_40);
    if (cVar1 != '\0') {
      local_68 = (*(code *)PTR_util_name_00224c38)();
      local_50 = _<&T_as_core::fmt::Display>::fmt;
      local_98 = (undefined **)&DAT_0021e6c8;
      local_90 = 2;
      local_78 = 0;
      local_88 = &local_58;
      local_80 = 1;
      local_58 = (undefined8 **)local_68;
      (*(code *)PTR__eprint_00224bd8)(&local_98);
      local_68._8_8_ = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_98 = (undefined **)&DAT_0021e6e8;
      local_90 = 2;
      local_78 = 0;
      local_80 = 1;
      local_88 = (undefined8 **)local_68;
      local_68._0_8_ = &local_48;
      (*(code *)PTR__eprint_00224bd8)(&local_98);
    }
    cVar1 = (**(code **)(local_a8._8_8_ + 0x68))(local_a8._0_8_);
    if (cVar1 != '\0') {
      local_68 = (*(code *)PTR_execution_phrase_00224c40)();
      local_58 = (undefined8 **)local_68;
      local_50 = _<&T_as_core::fmt::Display>::fmt;
      local_98 = &PTR_DAT_0021e708;
      local_90 = 2;
      local_78 = 0;
      local_88 = &local_58;
      local_80 = 1;
      (*(code *)PTR__eprint_00224bd8)(&local_98);
    }
    uVar3 = (**(code **)(local_a8._8_8_ + 0x60))(local_a8._0_8_);
                    /* try { // try from 0016b495 to 0016b4a0 has its CatchHandler @ 0016b4cc */
    core::ptr::drop_in_place<alloc::string::String>(&local_48);
    core::ptr::
    drop_in_place<alloc::boxed::Box<dyn_core::error::Error_core::marker::Sync_core::marker::Send>>
              (local_a8._0_8_,local_a8._8_8_);
    return (ulong)uVar3;
  }
  uVar4 = (*(code *)PTR_get_exit_code_00224c48)();
  return uVar4;
}