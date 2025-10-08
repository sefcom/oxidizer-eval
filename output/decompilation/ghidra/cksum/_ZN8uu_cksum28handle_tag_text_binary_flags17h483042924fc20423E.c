void _ZN8uu_cksum28handle_tag_text_binary_flags17h483042924fc20423E
               (undefined8 *param_1,undefined4 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined uVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  undefined auVar8 [16];
  long local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  local_58 = *param_2;
  uStack_54 = param_2[1];
  uStack_50 = param_2[2];
  uStack_4c = param_2[3];
  local_48 = param_2[4];
  uStack_44 = param_2[5];
  uStack_40 = param_2[6];
  uStack_3c = param_2[7];
  _ZN75__LT_std__env__ArgsOs_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hfc73b5786eb10db9E
            (&local_70,&local_58);
  bVar7 = true;
  uVar3 = 0;
  do {
    uVar2 = local_68;
    lVar1 = local_70;
    auVar8 = _ZN82__LT_alloc__string__String_u20_as_u20_core__convert__AsRef_LT__u5b_u8_u5d__GT__GT_6as_ref17h6c2a555f71a2b08aE
                       (local_68,local_60);
    uVar6 = auVar8._8_8_;
    uVar5 = auVar8._0_8_;
    cVar4 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h2a332431da5eb7c8E
                      (uVar5,uVar6,"-b",2);
    if ((cVar4 == '\0') &&
       (cVar4 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h2a332431da5eb7c8E
                          (uVar5,uVar6,&DAT_00112430,8), cVar4 == '\0')) {
      cVar4 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h2a332431da5eb7c8E
                        (uVar5,uVar6,"--tag",5);
      if (cVar4 == '\0') {
        cVar4 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h2a332431da5eb7c8E
                          (uVar5,uVar6,"--untagged",10);
        if (cVar4 != '\0') {
          bVar7 = false;
        }
      }
      else {
        bVar7 = true;
        uVar3 = 0;
      }
    }
    else {
      uVar3 = 1;
    }
    _ZN4core3ptr47drop_in_place_LT_std__ffi__os_str__OsString_GT_17hddf6d5007c2de64bE(lVar1,uVar2);
    _ZN75__LT_std__env__ArgsOs_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hfc73b5786eb10db9E
              (&local_70,&local_58);
  } while (local_70 != -0x8000000000000000);
  _ZN4core3ptr37drop_in_place_LT_std__env__ArgsOs_GT_17he735fd9805f0296cE(&local_58);
  if (bVar7) {
    uVar3 = 0;
  }
  *(bool *)(param_1 + 1) = bVar7;
  *(undefined *)((long)param_1 + 9) = uVar3;
  *param_1 = 0;
  return;
}