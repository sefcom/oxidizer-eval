ulong __rustcall
uu_uniq::should_extract_obs_skip_fields
          (undefined8 param_1,undefined8 param_2,char param_3,char param_4,undefined8 param_5,
          undefined8 param_6)

{
  char cVar1;
  uint in_EAX;
  ulong uVar2;
  undefined auVar3 [16];
  
  uVar2 = (ulong)in_EAX;
  auVar3 = core::char::methods::encode_utf8_raw(0x2d,&stack0xffffffffffffffdc);
  cVar1 = core::slice::_<impl[T]>::starts_with
                    (param_1,param_2,auVar3._0_8_,auVar3._8_8_,param_5,param_6,uVar2);
  if (cVar1 != '\0') {
    cVar1 = core::slice::_<impl[T]>::starts_with(param_1,param_2,"--",2,param_5,param_6,uVar2);
    if (cVar1 != '\0') {
      return 0;
    }
    if (param_3 != '\0') {
      return 0;
    }
    if (param_4 != '\0') {
      return 0;
    }
    cVar1 = core::slice::_<impl[T]>::starts_with(param_1,param_2,"-s",2);
    if ((cVar1 == '\0') &&
       (cVar1 = core::slice::_<impl[T]>::starts_with(param_1,param_2,"-f",2), cVar1 == '\0')) {
      uVar2 = core::slice::_<impl[T]>::starts_with(param_1,param_2,"-w",2);
      return uVar2 ^ 1;
    }
  }
  return 0;
}