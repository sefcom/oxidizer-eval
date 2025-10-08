undefined  [16] _ZN8uu_touch20datetime_to_filetime17h5b8a0eb5c393ab6aE(undefined4 *param_1)

{
  int iVar1;
  undefined auVar2 [16];
  
  iVar1 = _ZN6chrono5naive4date9NaiveDate16num_days_from_ce17h3a63bbbadb6054a1E(*param_1);
  auVar2._0_8_ = (long)(iVar1 + -0xaf93b) * 0x15180 + (ulong)(uint)param_1[1];
  auVar2._8_4_ = param_1[2];
  auVar2._12_4_ = 0;
  return auVar2;
}