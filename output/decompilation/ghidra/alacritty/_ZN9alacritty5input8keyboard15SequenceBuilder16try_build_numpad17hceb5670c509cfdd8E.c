void _ZN9alacritty5input8keyboard15SequenceBuilder16try_build_numpad17hceb5670c509cfdd8E
               (undefined8 *param_1,ulong param_2,long param_3)

{
  char cVar1;
  uint uVar2;
  undefined *puVar3;
  char local_38 [2];
  ushort local_36;
  undefined8 local_30;
  undefined8 local_28;
  
  if (((param_2 & 1) == 0) || (*(char *)(param_3 + 0x7a) != '\x03')) {
    *param_1 = 0x8000000000000001;
    return;
  }
  (*(code *)PTR__ZN5winit8keyboard3Key6as_ref17ha61159f0166fa8fbE_009dfee0)(local_38,param_3);
  if (local_38[0] == ' ') {
    cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h8240391abffeb7c9E
                      (local_30,local_28,&DAT_00201a7c,1);
    if (cVar1 == '\0') {
      cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h8240391abffeb7c9E
                        (local_30,local_28,&DAT_00201a9a,1);
      if (cVar1 == '\0') {
        cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h8240391abffeb7c9E
                          (local_30,local_28,&DAT_00201a9b,1);
        if (cVar1 == '\0') {
          cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h8240391abffeb7c9E
                            (local_30,local_28,&DAT_00201a9c,1);
          if (cVar1 == '\0') {
            cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h8240391abffeb7c9E
                              (local_30,local_28,&DAT_00201a9d,1);
            if (cVar1 == '\0') {
              cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h8240391abffeb7c9E
                                (local_30,local_28,&DAT_00201a9e,1);
              if (cVar1 == '\0') {
                cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h8240391abffeb7c9E
                                  (local_30,local_28,&DAT_00201a9f,1);
                if (cVar1 == '\0') {
                  cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h8240391abffeb7c9E
                                    (local_30,local_28,&DAT_00201aa0,1);
                  if (cVar1 == '\0') {
                    cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h8240391abffeb7c9E
                                      (local_30,local_28,&DAT_00201aa1,1);
                    if (cVar1 == '\0') {
                      cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h8240391abffeb7c9E
                                        (local_30,local_28,&DAT_00201aa2,1);
                      if (cVar1 == '\0') {
                        cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h8240391abffeb7c9E
                                          (local_30,local_28,&DAT_00201a8c,1);
                        if (cVar1 == '\0') {
                          cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h8240391abffeb7c9E
                                            (local_30,local_28,&DAT_001ff45e,1);
                          if (cVar1 == '\0') {
                            cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h8240391abffeb7c9E
                                              (local_30,local_28,&DAT_00201a78,1);
                            if (cVar1 == '\0') {
                              cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h8240391abffeb7c9E
                                                (local_30,local_28,"-",1);
                              if (cVar1 == '\0') {
                                cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h8240391abffeb7c9E
                                                  (local_30,local_28,&DAT_00201a83,1);
                                if (cVar1 == '\0') {
                                  cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h8240391abffeb7c9E
                                                    (local_30,local_28,"=",1);
                                  if (cVar1 == '\0') goto LAB_00557c9c;
                                  puVar3 = &DAT_002033cf;
                                }
                                else {
                                  puVar3 = &DAT_002033d4;
                                }
                              }
                              else {
                                puVar3 = &DAT_002033d9;
                              }
                            }
                            else {
                              puVar3 = &DAT_002033de;
                            }
                          }
                          else {
                            puVar3 = &DAT_002033e3;
                          }
                        }
                        else {
                          puVar3 = &DAT_002033e8;
                        }
                      }
                      else {
                        puVar3 = &DAT_002033ed;
                      }
                    }
                    else {
                      puVar3 = &DAT_002033f2;
                    }
                  }
                  else {
                    puVar3 = &DAT_002033f7;
                  }
                }
                else {
                  puVar3 = &DAT_002033fc;
                }
              }
              else {
                puVar3 = &DAT_00203401;
              }
            }
            else {
              puVar3 = &DAT_00203406;
            }
          }
          else {
            puVar3 = &DAT_0020340b;
          }
        }
        else {
          puVar3 = &DAT_00203410;
        }
      }
      else {
        puVar3 = &DAT_00203415;
      }
    }
    else {
      puVar3 = &DAT_0020341a;
    }
  }
  else {
    if (((local_38[0] != '\x1f') || (uVar2 = local_36 - 0xe, 0x13 < (ushort)uVar2)) ||
       ((0x907f9U >> (uVar2 & 0x1f) & 1) == 0)) {
LAB_00557c9c:
      *param_1 = 0x8000000000000001;
      _ZN4core3ptr56drop_in_place_LT_winit__keyboard__Key_LT__RF_str_GT__GT_17h2dc152dabd79984bE
                (local_38);
      return;
    }
    puVar3 = (&PTR_DAT_00987798)[uVar2 & 0xffff];
  }
  _ZN4core3ptr56drop_in_place_LT_winit__keyboard__Key_LT__RF_str_GT__GT_17h2dc152dabd79984bE
            (local_38);
  *param_1 = 0x8000000000000000;
  param_1[1] = puVar3;
  param_1[2] = 5;
  *(undefined4 *)(param_1 + 3) = 0x110000;
  return;
}