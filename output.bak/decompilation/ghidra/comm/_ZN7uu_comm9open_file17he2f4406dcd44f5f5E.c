undefined8 * __rustcall
uu_comm::open_file(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined param_4)

{
  char cVar1;
  undefined8 uVar2;
  int local_30;
  undefined4 local_2c;
  undefined8 local_28;
  
  cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(param_2,param_3,"-",1);
  if (cVar1 == '\0') {
    std::fs::File::open(&local_30,param_2,param_3);
    if (local_30 == 0) {
      std::io::buffered::bufreader::BufReader<R>::with_capacity(param_1,0x2000,local_2c);
    }
    else {
      *param_1 = local_28;
      param_4 = 0xb;
    }
  }
  else {
    uVar2 = std::io::stdio::stdin();
    *param_1 = 0;
    param_1[1] = uVar2;
  }
  *(undefined *)(param_1 + 6) = param_4;
  return param_1;
}