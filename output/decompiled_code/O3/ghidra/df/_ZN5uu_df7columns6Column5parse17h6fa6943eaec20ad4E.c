undefined8 __rustcall uu_df::columns::Column::parse(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(param_1,param_2,&DAT_0011614d,6);
  if (cVar1 == '\0') {
    cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(param_1,param_2,&DAT_00116153,6);
    uVar2 = 0xb;
    if (cVar1 == '\0') {
      cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(param_1,param_2,&DAT_00116159,6);
      uVar2 = 6;
      if (cVar1 == '\0') {
        cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(param_1,param_2,&DAT_0011615f,5)
        ;
        uVar2 = 7;
        if (cVar1 == '\0') {
          cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                            (param_1,param_2,&DAT_00116164,6);
          uVar2 = 8;
          if (cVar1 == '\0') {
            cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                              (param_1,param_2,&DAT_0011616a,6);
            uVar2 = 9;
            if (cVar1 == '\0') {
              cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                                (param_1,param_2,&DAT_0010bec8,4);
              uVar2 = 1;
              if (cVar1 == '\0') {
                cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                                  (param_1,param_2,&DAT_0010bedc,4);
                uVar2 = 2;
                if (cVar1 == '\0') {
                  cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                                    (param_1,param_2,&DAT_00116170,5);
                  uVar2 = 3;
                  if (cVar1 == '\0') {
                    cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                                      (param_1,param_2,&DAT_00116175,5);
                    uVar2 = 4;
                    if (cVar1 == '\0') {
                      cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                                        (param_1,param_2,&DAT_0010becc,4);
                      uVar2 = 10;
                      if (cVar1 == '\0') {
                        cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                                          (param_1,param_2,&DAT_0011617a,6);
                        uVar2 = 0xc;
                        if (cVar1 != '\0') {
                          uVar2 = 5;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}