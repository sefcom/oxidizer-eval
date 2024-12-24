undefined  [16] __rustcall uu_env::native_int_str::get_char_from_native_int(undefined4 param_1)

{
  dwfenc *pdVar1;
  undefined auVar2 [16];
  undefined local_21;
  long local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_21 = (undefined)param_1;
  core::str::converts::from_utf8(&local_20,&local_21,1);
  if (local_20 == 0) {
    pdVar1 = (dwfenc *)get_char_from_native_int::___closure__(local_18,local_10);
  }
  else {
    pdVar1 = &lsda_exception_table_00110000;
  }
  auVar2._8_4_ = param_1;
  auVar2._0_8_ = pdVar1;
  auVar2._12_4_ = 0;
  return auVar2;
}