bool __rustcall uu_env::native_int_str::get_single_native_int_value(undefined4 *param_1)

{
  long lVar1;
  undefined in_AL;
  undefined7 in_register_00000001;
  undefined8 uStack_8;
  
  uStack_8 = CONCAT71(in_register_00000001,in_AL) & 0xffffffff;
  lVar1 = core::char::methods::encode_utf8_raw(*param_1,(long)&uStack_8 + 4);
  return lVar1 == 1;
}