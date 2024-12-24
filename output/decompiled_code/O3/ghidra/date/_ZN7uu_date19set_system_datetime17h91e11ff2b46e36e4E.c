undefined  [16] __rustcall uu_date::set_system_datetime(undefined4 *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined auVar4 [16];
  long local_18;
  ulong local_10;
  
  iVar1 = chrono::naive::date::NaiveDate::num_days_from_ce(*param_1);
  local_10 = (ulong)(uint)param_1[2];
  local_18 = (long)(iVar1 + -0xaf93b) * 0x15180 + (ulong)(uint)param_1[1];
  uVar3 = 0;
  iVar1 = (*(code *)PTR_clock_settime_0044cd80)(0,&local_18);
  if (iVar1 != 0) {
    lVar2 = std::sys::pal::unix::os::errno();
    uVar3 = _<std::io::error::Error_as_uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>
            ::map_err_context((lVar2 << 0x20) + 2);
  }
  auVar4._8_8_ = &PTR_drop_in_place<uucore_mods_error_UIoError>_0040d460;
  auVar4._0_8_ = uVar3;
  return auVar4;
}