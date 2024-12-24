undefined  [16] __rustcall uu_sleep::sleep(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined auVar2 [16];
  char local_89;
  undefined local_88 [24];
  undefined4 local_70;
  undefined local_68 [80];
  
  local_89 = '\0';
  fundu::standard::parser::DurationParser::with_time_units(local_68,&DAT_00113d4c,4);
  auVar2 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::fold
                     (param_1,param_2 * 0x10 + param_1,local_68,&local_89);
  if (local_89 == '\0') {
    std::thread::sleep(auVar2._0_8_,auVar2._8_8_ & 0xffffffff);
    uVar1 = 0;
  }
  else {
    _<T_as_alloc::slice::hack::ConvertVec>::to_vec(local_88,1,0);
    local_70 = 1;
    uVar1 = ::alloc::boxed::Box<T>::new(local_88);
  }
  auVar2._8_8_ = &PTR_drop_in_place<uucore_mods_error_UUsageError>_002172a0;
  auVar2._0_8_ = uVar1;
  return auVar2;
}