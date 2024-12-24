void __rustcall
uu_dd::parseargs::Parser::parse_input_flags
          (undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined auVar5 [16];
  undefined8 local_100;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined local_e0 [48];
  undefined2 local_b0;
  undefined8 local_a8 [3];
  undefined8 local_90 [3];
  undefined8 local_78 [3];
  undefined8 local_60 [3];
  undefined8 local_48 [3];
  
  _<char_as_core::str::pattern::Pattern>::into_searcher(local_e0,0x2c);
  local_f0 = 0;
  local_b0 = 1;
  local_e8 = param_4;
  auVar5 = core::str::iter::SplitInternal<P>::next(&local_f0);
  if (auVar5._0_8_ != 0) {
    local_100 = 0xb;
    do {
      uVar3 = auVar5._8_8_;
      uVar2 = auVar5._0_8_;
      cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(uVar2,uVar3,&DAT_00122ddf,3);
      if (cVar1 != '\0') {
        puVar4 = local_90;
        goto LAB_001d3adf;
      }
      cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(uVar2,uVar3,&DAT_00122de2,6);
      if (cVar1 == '\0') {
        cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(uVar2,uVar3,&DAT_00122de8,9);
        if (cVar1 == '\0') {
          cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(uVar2,uVar3,&DAT_00122df1,5);
          if (cVar1 == '\0') {
            cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(uVar2,uVar3,&DAT_00118fe4,4)
            ;
            if (cVar1 == '\0') {
              cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                                (uVar2,uVar3,&DAT_00122df6,7);
              if (cVar1 == '\0') {
                cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                                  (uVar2,uVar3,&DAT_00118d58,8);
                if (cVar1 == '\0') {
                  cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                                    (uVar2,uVar3,&DAT_00122dfd,7);
                  if (cVar1 == '\0') {
                    cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                                      (uVar2,uVar3,&DAT_00122e04,6);
                    if (cVar1 == '\0') {
                      cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                                        (uVar2,uVar3,"nofollow",8);
                      if (cVar1 == '\0') {
                        cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                                          (uVar2,uVar3,&DAT_00122e0a,7);
                        if (cVar1 != '\0') {
                          puVar4 = local_78;
LAB_001d3adf:
                          _<T_as_alloc::slice::hack::ConvertVec>::to_vec(puVar4,uVar2,uVar3);
                          *param_1 = local_100;
                          uVar2 = puVar4[1];
                          param_1[1] = *puVar4;
                          param_1[2] = uVar2;
                          param_1[3] = puVar4[2];
                          return;
                        }
                        cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                                          (uVar2,uVar3,&DAT_00122e11,6);
                        if (cVar1 != '\0') {
                          puVar4 = local_60;
                          goto LAB_001d3adf;
                        }
                        cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                                          (uVar2,uVar3,&DAT_00118f84,4);
                        if (cVar1 != '\0') {
                          puVar4 = local_48;
                          goto LAB_001d3adf;
                        }
                        cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                                          (uVar2,uVar3,&DAT_00122e17,9);
                        if (cVar1 == '\0') {
                          cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                                            (uVar2,uVar3,&DAT_00122e20,0xb);
                          if (cVar1 == '\0') {
                            cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                                              (uVar2,uVar3,&DAT_00122e2b,10);
                            if (cVar1 == '\0') {
                              cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                                                (uVar2,uVar3,&DAT_00122e35,6);
                              if ((cVar1 == '\0') &&
                                 (cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                                                    (uVar2,uVar3,&DAT_00122e3b,10), cVar1 == '\0'))
                              {
                                local_100 = 5;
                                puVar4 = local_a8;
                                goto LAB_001d3adf;
                              }
                            }
                            else {
                              *(undefined *)(param_2 + 0xbf) = 1;
                            }
                          }
                          else {
                            *(undefined *)(param_2 + 0xbe) = 1;
                          }
                        }
                        else {
                          *(undefined *)(param_2 + 0xbd) = 1;
                        }
                      }
                      else {
                        *(undefined *)(param_2 + 0xb9) = 1;
                      }
                    }
                    else {
                      *(undefined *)(param_2 + 0xb8) = 1;
                    }
                  }
                  else {
                    *(undefined *)(param_2 + 0xb7) = 1;
                  }
                }
                else {
                  *(undefined *)(param_2 + 0xb6) = 1;
                }
              }
              else {
                *(undefined *)(param_2 + 0xb5) = 1;
              }
            }
            else {
              *(undefined *)(param_2 + 0xb4) = 1;
            }
          }
          else {
            *(undefined *)(param_2 + 0xb3) = 1;
          }
        }
        else {
          *(undefined *)(param_2 + 0xb2) = 1;
        }
      }
      else {
        *(undefined *)(param_2 + 0xb1) = 1;
      }
      auVar5 = core::str::iter::SplitInternal<P>::next(&local_f0);
    } while (auVar5._0_8_ != 0);
  }
  *param_1 = 0xe;
  return;
}