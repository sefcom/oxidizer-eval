ulong _ZN5uu_ls23extract_indicator_style17he22d10d1f55443b8E(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  uint uVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 unaff_RBP;
  undefined7 uVar8;
  ulong uVar7;
  undefined auStack_48 [40];
  
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h5fe44c4217b6c6aeE
            (auStack_48,param_1,"indicator-style",0xf);
  lVar6 = _ZN12clap_builder6parser5error12MatchesError6unwrap17he9eef133f866d763E
                    ("indicator-style",0xf,auStack_48);
  uVar8 = (undefined7)((ulong)unaff_RBP >> 8);
  if (lVar6 == 0) {
    _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h5fe44c4217b6c6aeE
              (auStack_48,param_1,&DAT_001d0008,8);
    lVar6 = _ZN12clap_builder6parser5error12MatchesError6unwrap17he9eef133f866d763E
                      (&DAT_001d0008,8,auStack_48);
    if (lVar6 == 0) {
      cVar3 = (*(code *)
                PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_0048fda0
              )(param_1,"p",1);
      uVar7 = CONCAT71(uVar8,1);
      if (cVar3 == '\0') {
        uVar5 = (*(code *)
                  PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_0048fda0
                )(param_1,"file-type",9);
        uVar7 = (ulong)CONCAT31((int3)((uint)uVar5 >> 8),(char)uVar5 * '\x02');
      }
      goto LAB_002925d9;
    }
    uVar1 = *(undefined8 *)(lVar6 + 8);
    uVar2 = *(undefined8 *)(lVar6 + 0x10);
    cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h652dfc76ef3eba10E
                      (uVar1,uVar2,"never",5);
    if (cVar3 == '\0') {
      cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h652dfc76ef3eba10E
                        (uVar1,uVar2,"no",2);
      if (cVar3 == '\0') {
        cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h652dfc76ef3eba10E
                          (uVar1,uVar2,&DAT_001cfe7c,4);
        if (cVar3 == '\0') {
          cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h652dfc76ef3eba10E
                            (uVar1,uVar2,"always",6);
          uVar7 = CONCAT71(uVar8,3);
          if (cVar3 != '\0') goto LAB_002925d9;
          cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h652dfc76ef3eba10E
                            (uVar1,uVar2,"yes",3);
          if (cVar3 != '\0') goto LAB_002925d9;
          cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h652dfc76ef3eba10E
                            (uVar1,uVar2,"force",5);
          if (cVar3 != '\0') goto LAB_002925d9;
          cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h652dfc76ef3eba10E
                            (uVar1,uVar2,&DAT_001cfd50,4);
          if (cVar3 == '\0') {
            cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h652dfc76ef3eba10E
                              (uVar1,uVar2,"tty",3);
            if (cVar3 == '\0') {
              cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h652dfc76ef3eba10E
                                (uVar1,uVar2,"if-tty",6);
              if (cVar3 == '\0') goto LAB_002925d7;
            }
          }
          (*(code *)PTR__ZN3std2io5stdio6stdout17hb6a8e10bcccf3287E_0048f9a0)();
          cVar3 = _ZN3std3sys2io11is_terminal6isatty11is_terminal17h0e1d734d892dc985E();
          uVar7 = (ulong)((uint)(cVar3 != '\0') * 3);
          goto LAB_002925d9;
        }
      }
    }
  }
  else {
    uVar1 = *(undefined8 *)(lVar6 + 8);
    uVar2 = *(undefined8 *)(lVar6 + 0x10);
    cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h652dfc76ef3eba10E
                      (uVar1,uVar2,&DAT_001cfe7c,4);
    if (cVar3 == '\0') {
      cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h652dfc76ef3eba10E
                        (uVar1,uVar2,"file-type",9);
      uVar7 = CONCAT71(uVar8,2);
      if (cVar3 == '\0') {
        cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h652dfc76ef3eba10E
                          (uVar1,uVar2,&DAT_001d0008,8);
        uVar7 = CONCAT71(uVar8,3);
        if (cVar3 == '\0') {
          uVar4 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h652dfc76ef3eba10E
                            (uVar1,uVar2,"slash",5);
          uVar7 = (ulong)uVar4;
        }
      }
      goto LAB_002925d9;
    }
  }
LAB_002925d7:
  uVar7 = 0;
LAB_002925d9:
  return uVar7 & 0xffffffff;
}