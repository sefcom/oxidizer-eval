undefined  [16] __rustcall uu_touch::datetime_to_filetime(undefined4 *param_1)

{
  int iVar1;
  undefined auVar2 [16];
  
  iVar1 = chrono::naive::date::NaiveDate::num_days_from_ce(*param_1);
  auVar2._0_8_ = (long)(iVar1 + -0xaf93b) * 0x15180 + (ulong)(uint)param_1[1];
  auVar2._8_4_ = param_1[2];
  auVar2._12_4_ = 0;
  return auVar2;
}