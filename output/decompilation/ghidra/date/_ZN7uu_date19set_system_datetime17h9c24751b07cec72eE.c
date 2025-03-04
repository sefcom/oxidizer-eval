undefined  [16] _ZN7uu_date19set_system_datetime17h9c24751b07cec72eE(undefined4 *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined auVar4 [16];
  long local_18;
  ulong local_10;
  
  iVar1 = _ZN6chrono5naive4date9NaiveDate16num_days_from_ce17h3a5ee0596b8da218E(*param_1);
  local_10 = (ulong)(uint)param_1[2];
  local_18 = (long)(iVar1 + -0xaf93b) * 0x15180 + (ulong)(uint)param_1[1];
  uVar3 = 0;
  iVar1 = (*(code *)PTR_clock_settime_0044db00)(0,&local_18);
  if (iVar1 != 0) {
    lVar2 = _ZN3std3sys3pal4unix2os5errno17hddfd8da9c36b1a59E();
    uVar3 = _ZN131__LT_std__io__error__Error_u20_as_u20_uucore__mods__error__FromIo_LT_alloc__boxed__Box_LT_uucore__mods__error__UIoError_GT__GT__GT_15map_err_context17hb6176365fe96ba27E
                      ((lVar2 << 0x20) + 2);
  }
  auVar4._8_8_ = &
                 PTR__ZN4core3ptr50drop_in_place_LT_uucore__mods__error__UIoError_GT_17h089c244621d090e8E_0040e360
  ;
  auVar4._0_8_ = uVar3;
  return auVar4;
}