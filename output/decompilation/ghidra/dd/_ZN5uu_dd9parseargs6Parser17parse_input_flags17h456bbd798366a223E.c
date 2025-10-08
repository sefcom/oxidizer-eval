void _ZN5uu_dd9parseargs6Parser17parse_input_flags17h456bbd798366a223E
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
  
  _ZN52__LT_char_u20_as_u20_core__str__pattern__Pattern_GT_13into_searcher17h19abee4db16fb58dE
            (local_e0,0x2c);
  local_f0 = 0;
  local_b0 = 1;
  local_e8 = param_4;
  auVar5 = _ZN4core3str4iter22SplitInternal_LT_P_GT_4next17had565c4b2897969eE(&local_f0);
  if (auVar5._0_8_ != 0) {
    local_100 = 0xb;
    do {
      uVar3 = auVar5._8_8_;
      uVar2 = auVar5._0_8_;
      cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h9308b2f97abc21f0E
                        (uVar2,uVar3,"cio",3);
      if (cVar1 != '\0') {
        puVar4 = local_90;
        goto LAB_0018d7cf;
      }
      cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h9308b2f97abc21f0E
                        (uVar2,uVar3,"direct",6);
      if (cVar1 == '\0') {
        cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h9308b2f97abc21f0E
                          (uVar2,uVar3,"directory",9);
        if (cVar1 == '\0') {
          cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h9308b2f97abc21f0E
                            (uVar2,uVar3,"dsync",5);
          if (cVar1 == '\0') {
            cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h9308b2f97abc21f0E
                              (uVar2,uVar3,&DAT_0011ea58,4);
            if (cVar1 == '\0') {
              cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h9308b2f97abc21f0E
                                (uVar2,uVar3,"nocache",7);
              if (cVar1 == '\0') {
                cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h9308b2f97abc21f0E
                                  (uVar2,uVar3,"nonblock",8);
                if (cVar1 == '\0') {
                  cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h9308b2f97abc21f0E
                                    (uVar2,uVar3,"noatime",7);
                  if (cVar1 == '\0') {
                    cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h9308b2f97abc21f0E
                                      (uVar2,uVar3,"noctty",6);
                    if (cVar1 == '\0') {
                      cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h9308b2f97abc21f0E
                                        (uVar2,uVar3,"nofollow",8);
                      if (cVar1 == '\0') {
                        cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h9308b2f97abc21f0E
                                          (uVar2,uVar3,"nolinks",7);
                        if (cVar1 != '\0') {
                          puVar4 = local_78;
LAB_0018d7cf:
                          _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h074386e79a8fa9e7E
                                    (puVar4,uVar2,uVar3);
                          *param_1 = local_100;
                          uVar2 = puVar4[1];
                          param_1[1] = *puVar4;
                          param_1[2] = uVar2;
                          param_1[3] = puVar4[2];
                          return;
                        }
                        cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h9308b2f97abc21f0E
                                          (uVar2,uVar3,"binary",6);
                        if (cVar1 != '\0') {
                          puVar4 = local_60;
                          goto LAB_0018d7cf;
                        }
                        cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h9308b2f97abc21f0E
                                          (uVar2,uVar3,&DAT_0011e9f0,4);
                        if (cVar1 != '\0') {
                          puVar4 = local_48;
                          goto LAB_0018d7cf;
                        }
                        cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h9308b2f97abc21f0E
                                          (uVar2,uVar3,"fullblock",9);
                        if (cVar1 == '\0') {
                          cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h9308b2f97abc21f0E
                                            (uVar2,uVar3,"count_bytes",0xb);
                          if (cVar1 == '\0') {
                            cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h9308b2f97abc21f0E
                                              (uVar2,uVar3,"skip_bytes",10);
                            if (cVar1 == '\0') {
                              cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h9308b2f97abc21f0E
                                                (uVar2,uVar3,"append",6);
                              if ((cVar1 == '\0') &&
                                 (cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h9308b2f97abc21f0E
                                                    (uVar2,uVar3,"seek_bytes",10), cVar1 == '\0')) {
                                local_100 = 5;
                                puVar4 = local_a8;
                                goto LAB_0018d7cf;
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
      auVar5 = _ZN4core3str4iter22SplitInternal_LT_P_GT_4next17had565c4b2897969eE(&local_f0);
    } while (auVar5._0_8_ != 0);
  }
  *param_1 = 0xe;
  return;
}