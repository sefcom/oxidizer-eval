void __rustcall
uu_dd::parseargs::Parser::parse_status_level
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(param_2,param_3,&DAT_00118fc4,4);
  if (cVar1 == '\0') {
    cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(param_2,param_3,&DAT_00122dd9,6);
    if (cVar1 == '\0') {
      cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(param_2,param_3,"progress",8);
      if (cVar1 == '\0') {
        _<T_as_alloc::slice::hack::ConvertVec>::to_vec(param_1 + 1,param_2,param_3);
        uVar2 = 10;
        goto LAB_001d3767;
      }
      *(undefined *)(param_1 + 1) = 0;
    }
    else {
      *(undefined *)(param_1 + 1) = 1;
    }
  }
  else {
    *(undefined *)(param_1 + 1) = 2;
  }
  uVar2 = 0xe;
LAB_001d3767:
  *param_1 = uVar2;
  return;
}