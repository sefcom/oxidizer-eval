void __rustcall
uu_cat::write_end_of_line
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,char param_5
          )

{
  long lVar1;
  
  lVar1 = _<std::io::stdio::StdoutLock_as_std::io::Write>::write_all(param_2,param_3,param_4);
  if (lVar1 == 0) {
    if (param_5 != '\0') {
      lVar1 = _<std::io::stdio::StdoutLock_as_std::io::Write>::flush(param_2);
      if (lVar1 != 0) goto LAB_001b0f6e;
    }
    *param_1 = 0x8000000000000006;
  }
  else {
LAB_001b0f6e:
    *param_1 = 0x8000000000000000;
    param_1[1] = lVar1;
  }
  return;
}