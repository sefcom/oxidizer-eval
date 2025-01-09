void __rustcall
uu_dd::parseargs::Parser::parse_conv_flags
          (undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined auVar4 [16];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined local_68 [48];
  undefined2 local_38;
  
  _<char_as_core::str::pattern::Pattern>::into_searcher(local_68,0x2c);
  local_78 = 0;
  local_38 = 1;
  local_70 = param_4;
  auVar4 = core::str::iter::SplitInternal<P>::next(&local_78);
  if (auVar4._0_8_ != 0) {
    do {
      uVar3 = auVar4._8_8_;
      uVar2 = auVar4._0_8_;
      cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(uVar2,uVar3,&DAT_00122d4d,5);
      if (cVar1 == '\0') {
        cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(uVar2,uVar3,&DAT_00122d52,6);
        if (cVar1 == '\0') {
          cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(uVar2,uVar3,&DAT_00122d58,3);
          if (cVar1 == '\0') {
            cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(uVar2,uVar3,&DAT_00122d5b,5)
            ;
            if (cVar1 == '\0') {
              cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                                (uVar2,uVar3,&DAT_00122d60,5);
              if (cVar1 == '\0') {
                cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                                  (uVar2,uVar3,&DAT_00122d65,5);
                if (cVar1 == '\0') {
                  cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                                    (uVar2,uVar3,&DAT_00122d6a,7);
                  if (cVar1 == '\0') {
                    cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                                      (uVar2,uVar3,&DAT_00118e88,4);
                    if (cVar1 == '\0') {
                      cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                                        (uVar2,uVar3,&DAT_00118ee4,4);
                      if (cVar1 == '\0') {
                        cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                                          (uVar2,uVar3,&DAT_00122d71,7);
                        if (cVar1 == '\0') {
                          cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                                            (uVar2,uVar3,&DAT_00122d78,6);
                          if (cVar1 == '\0') {
                            cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                                              (uVar2,uVar3,&DAT_00118e48,4);
                            if (cVar1 == '\0') {
                              cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                                                (uVar2,uVar3,&DAT_00122d7e,7);
                              if (cVar1 == '\0') {
                                cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                                                  (uVar2,uVar3,&DAT_00122d85,7);
                                if (cVar1 == '\0') {
                                  cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                                                    (uVar2,uVar3,&DAT_00122d8c,9);
                                  if (cVar1 == '\0') {
                                    cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                                                      (uVar2,uVar3,&DAT_00122d95,5);
                                    if (cVar1 == '\0') {
                                      _<T_as_alloc::slice::hack::ConvertVec>::to_vec
                                                (&local_90,uVar2,uVar3);
                                      *param_1 = 6;
                                      param_1[1] = local_90;
                                      param_1[2] = uStack_88;
                                      param_1[3] = local_80;
                                      return;
                                    }
                                    *(undefined *)(param_2 + 0xaf) = 1;
                                  }
                                  else {
                                    *(undefined *)(param_2 + 0xae) = 1;
                                  }
                                }
                                else {
                                  *(undefined *)(param_2 + 0xad) = 1;
                                }
                              }
                              else {
                                *(undefined *)(param_2 + 0xac) = 1;
                              }
                            }
                            else {
                              *(undefined *)(param_2 + 0xab) = 1;
                            }
                          }
                          else {
                            *(undefined *)(param_2 + 0xaa) = 1;
                          }
                        }
                        else {
                          *(undefined *)(param_2 + 0xa9) = 1;
                        }
                      }
                      else {
                        *(undefined *)(param_2 + 0xa8) = 1;
                      }
                    }
                    else {
                      *(undefined *)(param_2 + 0xa7) = 1;
                    }
                  }
                  else {
                    *(undefined *)(param_2 + 0xa6) = 1;
                  }
                }
                else {
                  *(undefined *)(param_2 + 0xa5) = 1;
                }
              }
              else {
                *(undefined *)(param_2 + 0xa3) = 1;
              }
            }
            else {
              *(undefined *)(param_2 + 0xa4) = 1;
            }
          }
          else {
            *(undefined *)(param_2 + 0xa2) = 1;
          }
        }
        else {
          *(undefined *)(param_2 + 0xa1) = 1;
        }
      }
      else {
        *(undefined *)(param_2 + 0xa0) = 1;
      }
      auVar4 = core::str::iter::SplitInternal<P>::next(&local_78);
    } while (auVar4._0_8_ != 0);
  }
  *param_1 = 0xe;
  return;
}