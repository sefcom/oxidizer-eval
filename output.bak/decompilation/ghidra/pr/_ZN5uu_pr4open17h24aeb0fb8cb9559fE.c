undefined8 * __rustcall uu_pr::open(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  int local_c8 [2];
  undefined8 local_c0;
  undefined4 local_90;
  
  cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(param_2,param_3,"-",1);
  if (cVar1 == '\0') {
    std::fs::metadata(local_c8,param_2,param_3);
    if (local_c8[0] == 2) {
      open::___closure__(param_1,param_2,param_3,local_c0);
    }
    else {
      open::___closure__(&local_e8,param_2,param_3,local_90);
      param_1[2] = local_d8;
      param_1[3] = uStack_d0;
      *param_1 = local_e8;
      param_1[1] = uStack_e0;
    }
  }
  else {
    uVar2 = std::io::stdio::stdin();
    uVar2 = ::alloc::boxed::Box<T>::new(uVar2);
    param_1[1] = uVar2;
    param_1[2] = &DAT_00409430;
    *param_1 = 0x8000000000000005;
  }
  return param_1;
}