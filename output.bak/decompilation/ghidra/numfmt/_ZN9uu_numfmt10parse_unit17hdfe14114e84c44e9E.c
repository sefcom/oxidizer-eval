void __rustcall uu_numfmt::parse_unit(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  
  cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(param_2,param_3,&DAT_0011580c,4);
  if (cVar1 == '\0') {
    cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(param_2,param_3,"si",2);
    if (cVar1 == '\0') {
      cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(param_2,param_3,"iec",3);
      if (cVar1 == '\0') {
        cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(param_2,param_3,"iec-i",5);
        if (cVar1 == '\0') {
          cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                            (param_2,param_3,&DAT_00115898,4);
          if (cVar1 == '\0') {
            _<T_as_alloc::slice::hack::ConvertVec>::to_vec
                      (param_1,"Unsupported unit is specified",0x1d);
            return;
          }
          *(undefined *)(param_1 + 1) = 5;
        }
        else {
          *(undefined *)(param_1 + 1) = 1;
        }
      }
      else {
        *(undefined *)(param_1 + 1) = 0;
      }
    }
    else {
      *(undefined *)(param_1 + 1) = 3;
    }
  }
  else {
    *(undefined *)(param_1 + 1) = 2;
  }
  *param_1 = 0x8000000000000000;
  return;
}