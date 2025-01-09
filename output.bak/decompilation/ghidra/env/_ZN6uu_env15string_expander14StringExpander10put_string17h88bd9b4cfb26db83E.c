void __rustcall
uu_env::string_expander::StringExpander::put_one_char(undefined8 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined4 local_2c;
  undefined local_28 [24];
  
  local_2c = 0;
  uVar1 = core::char::methods::encode_utf8_raw(param_2,&local_2c);
  _<T_as_alloc::slice::hack::ConvertVec>::to_vec(local_28,uVar1);
  put_string(param_1,local_28);
  return;
}