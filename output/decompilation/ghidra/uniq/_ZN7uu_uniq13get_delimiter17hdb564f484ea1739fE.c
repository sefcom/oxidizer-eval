char _ZN7uu_uniq13get_delimiter17hdb564f484ea1739fE(undefined8 param_1)

{
  undefined8 uVar1;
  char cVar2;
  byte bVar3;
  char cVar4;
  undefined8 uVar5;
  long lVar6;
  undefined local_50 [8];
  undefined **local_48;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h7d7d706f95974719E
            (&local_48,param_1,"all-repeated",0xc);
  uVar5 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h99da2efbc6cd79ffE
                    ("all-repeated",0xc,&local_48);
  lVar6 = _ZN4core6option15Option_LT_T_GT_7or_else17h88234b026605109bE(uVar5,param_1);
  if (lVar6 == 0) {
    bVar3 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11contains_id17h8ab577f2647f3b72E
                      (param_1,"group",5);
    cVar2 = (bVar3 ^ 1) * '\x02' + '\x02';
  }
  else {
    uVar5 = *(undefined8 *)(lVar6 + 8);
    uVar1 = *(undefined8 *)(lVar6 + 0x10);
    cVar2 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h34f4df7d1e205d5aE
                      (uVar5,uVar1,"append",6);
    if (cVar2 == '\0') {
      cVar4 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h34f4df7d1e205d5aE
                        (uVar5,uVar1,"prepend",7);
      cVar2 = '\x01';
      if (cVar4 == '\0') {
        cVar4 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h34f4df7d1e205d5aE
                          (uVar5,uVar1,"separate",8);
        cVar2 = '\x02';
        if (cVar4 == '\0') {
          cVar4 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h34f4df7d1e205d5aE
                            (uVar5,uVar1,&DAT_00115d10,4);
          cVar2 = '\x03';
          if (cVar4 == '\0') {
            cVar4 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h34f4df7d1e205d5aE
                              (uVar5,uVar1,&DAT_00115d00,4);
            cVar2 = '\x04';
            if (cVar4 == '\0') {
              local_48 = &PTR_s_internal_error__entered_unreacha_00230548;
              local_40 = 1;
              local_38 = local_50;
              local_30 = 0;
              uStack_28 = 0;
                    /* WARNING: Subroutine does not return */
              _ZN4core9panicking9panic_fmt17he12d0d7468628bb4E
                        (&local_48,&PTR_s_src_uu_uniq_src_uniq_rs_00230558);
            }
          }
        }
      }
    }
    else {
      cVar2 = '\0';
    }
  }
  return cVar2;
}