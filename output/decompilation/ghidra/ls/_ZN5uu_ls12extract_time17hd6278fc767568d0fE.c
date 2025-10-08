ulong _ZN5uu_ls12extract_time17hd6278fc767568d0fE(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  char cVar4;
  undefined4 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 unaff_RBP;
  undefined7 uVar8;
  undefined auStack_58 [8];
  undefined **local_50;
  undefined8 local_48;
  undefined *local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h5fe44c4217b6c6aeE
            (&local_50,param_1,&DAT_001cfd68,4);
  lVar6 = _ZN12clap_builder6parser5error12MatchesError6unwrap17he9eef133f866d763E
                    (&DAT_001cfd68,4,&local_50);
  uVar8 = (undefined7)((ulong)unaff_RBP >> 8);
  if (lVar6 == 0) {
    cVar4 = (*(code *)
              PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_0048fda0
            )(param_1,"u",1);
    uVar7 = CONCAT71(uVar8,1);
    if (cVar4 == '\0') {
      uVar5 = (*(code *)
                PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_0048fda0
              )(param_1,"c",1);
      uVar7 = (ulong)CONCAT31((int3)((uint)uVar5 >> 8),(char)uVar5 * '\x02');
    }
  }
  else {
    uVar1 = *(undefined8 *)(lVar6 + 8);
    uVar2 = *(undefined8 *)(lVar6 + 0x10);
    cVar4 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h652dfc76ef3eba10E
                      (uVar1,uVar2,"ctime",5);
    uVar7 = CONCAT71(uVar8,2);
    if (cVar4 == '\0') {
      cVar4 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h652dfc76ef3eba10E
                        (uVar1,uVar2,"status",6);
      if (cVar4 == '\0') {
        cVar4 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h652dfc76ef3eba10E
                          (uVar1,uVar2,"access",6);
        uVar7 = CONCAT71(uVar8,1);
        if (cVar4 == '\0') {
          cVar4 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h652dfc76ef3eba10E
                            (uVar1,uVar2,"atime",5);
          if (cVar4 == '\0') {
            cVar4 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h652dfc76ef3eba10E
                              (uVar1,uVar2,"use",3);
            if (cVar4 == '\0') {
              cVar4 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h652dfc76ef3eba10E
                                (uVar1,uVar2,"mtime",5);
              if (cVar4 == '\0') {
                cVar4 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h652dfc76ef3eba10E
                                  (uVar1,uVar2,"modification",0xc);
                if (cVar4 == '\0') {
                  cVar4 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h652dfc76ef3eba10E
                                    (uVar1,uVar2,"birth",5);
                  uVar7 = CONCAT71(uVar8,3);
                  if (cVar4 == '\0') {
                    cVar4 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h652dfc76ef3eba10E
                                      (uVar1,uVar2,"creation",8);
                    if (cVar4 == '\0') {
                      local_50 = &PTR_s_internal_error__entered_unreacha_00386820;
                      local_48 = 1;
                      local_38 = 0;
                      uStack_30 = 0;
                      local_40 = auStack_58;
                      (*(code *)PTR__ZN4core9panicking9panic_fmt17h96f341d36638c225E_0048f818)
                                (&local_50,&PTR_s_src_uu_ls_src_ls_rs_00386830);
                      pcVar3 = (code *)swi(3);
                      uVar7 = (*pcVar3)();
                      return uVar7;
                    }
                  }
                  goto LAB_00291a7a;
                }
              }
              uVar7 = 0;
            }
          }
        }
      }
    }
  }
LAB_00291a7a:
  return uVar7 & 0xffffffff;
}