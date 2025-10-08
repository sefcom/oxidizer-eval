void _ZN5uu_dd9parseargs6Parser16parse_conv_flags17h6cbe050dd8e53067E
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
  
  _ZN52__LT_char_u20_as_u20_core__str__pattern__Pattern_GT_13into_searcher17h19abee4db16fb58dE
            (local_68,0x2c);
  local_78 = 0;
  local_38 = 1;
  local_70 = param_4;
  auVar4 = _ZN4core3str4iter22SplitInternal_LT_P_GT_4next17had565c4b2897969eE(&local_78);
  if (auVar4._0_8_ != 0) {
    do {
      uVar3 = auVar4._8_8_;
      uVar2 = auVar4._0_8_;
      cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h9308b2f97abc21f0E
                        (uVar2,uVar3,"ascii",5);
      if (cVar1 == '\0') {
        cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h9308b2f97abc21f0E
                          (uVar2,uVar3,"ebcdic",6);
        if (cVar1 == '\0') {
          cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h9308b2f97abc21f0E
                            (uVar2,uVar3,"ibm",3);
          if (cVar1 == '\0') {
            cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h9308b2f97abc21f0E
                              (uVar2,uVar3,"lcase",5);
            if (cVar1 == '\0') {
              cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h9308b2f97abc21f0E
                                (uVar2,uVar3,"ucase",5);
              if (cVar1 == '\0') {
                cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h9308b2f97abc21f0E
                                  (uVar2,uVar3,"block",5);
                if (cVar1 == '\0') {
                  cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h9308b2f97abc21f0E
                                    (uVar2,uVar3,"unblock",7);
                  if (cVar1 == '\0') {
                    cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h9308b2f97abc21f0E
                                      (uVar2,uVar3,&DAT_0011e9f4,4);
                    if (cVar1 == '\0') {
                      cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h9308b2f97abc21f0E
                                        (uVar2,uVar3,&DAT_0011ea58,4);
                      if (cVar1 == '\0') {
                        cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h9308b2f97abc21f0E
                                          (uVar2,uVar3,"noerror",7);
                        if (cVar1 == '\0') {
                          cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h9308b2f97abc21f0E
                                            (uVar2,uVar3,"sparse",6);
                          if (cVar1 == '\0') {
                            cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h9308b2f97abc21f0E
                                              (uVar2,uVar3,&DAT_0011e9b4,4);
                            if (cVar1 == '\0') {
                              cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h9308b2f97abc21f0E
                                                (uVar2,uVar3,"nocreat",7);
                              if (cVar1 == '\0') {
                                cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h9308b2f97abc21f0E
                                                  (uVar2,uVar3,"notrunc",7);
                                if (cVar1 == '\0') {
                                  cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h9308b2f97abc21f0E
                                                    (uVar2,uVar3,"fdatasync",9);
                                  if (cVar1 == '\0') {
                                    cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h9308b2f97abc21f0E
                                                      (uVar2,uVar3,"fsync: warning: ",5);
                                    if (cVar1 == '\0') {
                                      _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h074386e79a8fa9e7E
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
      auVar4 = _ZN4core3str4iter22SplitInternal_LT_P_GT_4next17had565c4b2897969eE(&local_78);
    } while (auVar4._0_8_ != 0);
  }
  *param_1 = 0xe;
  return;
}