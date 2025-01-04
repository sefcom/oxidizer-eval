ulong __rustcall
uu_split::should_extract_obs_lines
          (undefined8 param_1,undefined8 param_2,char param_3,char param_4,undefined8 param_5,
          undefined8 param_6)

{
  char cVar1;
  uint in_EAX;
  undefined8 uVar2;
  ulong uVar3;
  
  uVar3 = (ulong)in_EAX;
  uVar2 = core::char::methods::encode_utf8_raw(&stack0xffffffffffffffdc);
  cVar1 = core::slice::_<impl[T]>::starts_with(param_1,param_2,uVar2,1,param_5,param_6,uVar3);
  if (cVar1 != '\0') {
    cVar1 = core::slice::_<impl[T]>::starts_with(param_1,param_2,"--",2,param_5,param_6,uVar3);
    if (cVar1 != '\0') {
      return 0;
    }
    if (param_3 != '\0') {
      return 0;
    }
    if (param_4 != '\0') {
      return 0;
    }
    cVar1 = core::slice::_<impl[T]>::starts_with(param_1,param_2,"-a",2);
    if ((((cVar1 == '\0') &&
         (cVar1 = core::slice::_<impl[T]>::starts_with(param_1,param_2,"-b",2), cVar1 == '\0')) &&
        (cVar1 = core::slice::_<impl[T]>::starts_with(param_1,param_2,"-C",2), cVar1 == '\0')) &&
       ((cVar1 = core::slice::_<impl[T]>::starts_with(param_1,param_2,"-l",2), cVar1 == '\0' &&
        (cVar1 = core::slice::_<impl[T]>::starts_with(param_1,param_2,"-n",2), cVar1 == '\0')))) {
      uVar3 = core::slice::_<impl[T]>::starts_with(param_1,param_2,"-t",2);
      return uVar3 ^ 1;
    }
  }
  return 0;
}