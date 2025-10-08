void _ZN5uu_dd9parseargs6Parser18parse_output_flags17h7dcc2f9cdb69a82aE
               (undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined auVar4 [16];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
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
                        (uVar2,uVar3,"cio",3);
      if (cVar1 != '\0') {
        _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h074386e79a8fa9e7E
                  (param_1 + 1,param_3,param_4);
        *param_1 = 0xb;
        return;
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
                          _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h074386e79a8fa9e7E
                                    (&local_c0,uVar2,uVar3);
                          *param_1 = 0xb;
                          param_1[1] = local_c0;
                          param_1[2] = uStack_b8;
                          param_1[3] = local_b0;
                          return;
                        }
                        cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h9308b2f97abc21f0E
                                          (uVar2,uVar3,"binary",6);
                        if (cVar1 != '\0') {
                          _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h074386e79a8fa9e7E
                                    (&local_a8,uVar2,uVar3);
                          *param_1 = 0xb;
                          param_1[1] = local_a8;
                          param_1[2] = uStack_a0;
                          param_1[3] = local_98;
                          return;
                        }
                        cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h9308b2f97abc21f0E
                                          (uVar2,uVar3,&DAT_0011e9f0,4);
                        if (cVar1 != '\0') {
                          _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h074386e79a8fa9e7E
                                    (&local_90,uVar2,uVar3);
                          *param_1 = 0xb;
                          param_1[1] = local_90;
                          param_1[2] = uStack_88;
                          param_1[3] = local_80;
                          return;
                        }
                        cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h9308b2f97abc21f0E
                                          (uVar2,uVar3,"append",6);
                        if (cVar1 == '\0') {
                          cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h9308b2f97abc21f0E
                                            (uVar2,uVar3,"seek_bytes",10);
                          if (cVar1 == '\0') {
                            cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h9308b2f97abc21f0E
                                              (uVar2,uVar3,"fullblock",9);
                            if (((cVar1 == '\0') &&
                                (cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h9308b2f97abc21f0E
                                                   (uVar2,uVar3,"count_bytes",0xb), cVar1 == '\0'))
                               && (cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h9308b2f97abc21f0E
                                                     (uVar2,uVar3,"skip_bytes",10), cVar1 == '\0'))
                            {
                              _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h074386e79a8fa9e7E
                                        (&local_d8,uVar2,uVar3);
                              *param_1 = 5;
                              param_1[1] = local_d8;
                              param_1[2] = uStack_d0;
                              param_1[3] = local_c8;
                              return;
                            }
                          }
                          else {
                            *(undefined *)(param_2 + 0xcf) = 1;
                          }
                        }
                        else {
                          *(undefined *)(param_2 + 0xc1) = 1;
                        }
                      }
                      else {
                        *(undefined *)(param_2 + 0xcb) = 1;
                      }
                    }
                    else {
                      *(undefined *)(param_2 + 0xca) = 1;
                    }
                  }
                  else {
                    *(undefined *)(param_2 + 0xc9) = 1;
                  }
                }
                else {
                  *(undefined *)(param_2 + 200) = 1;
                }
              }
              else {
                *(undefined *)(param_2 + 199) = 1;
              }
            }
            else {
              *(undefined *)(param_2 + 0xc6) = 1;
            }
          }
          else {
            *(undefined *)(param_2 + 0xc5) = 1;
          }
        }
        else {
          *(undefined *)(param_2 + 0xc4) = 1;
        }
      }
      else {
        *(undefined *)(param_2 + 0xc3) = 1;
      }
      auVar4 = _ZN4core3str4iter22SplitInternal_LT_P_GT_4next17had565c4b2897969eE(&local_78);
    } while (auVar4._0_8_ != 0);
  }
  *param_1 = 0xe;
  return;
}