ulong _ZN5uu_ls17extract_hyperlink17hae52003f9f8916daE(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  char cVar4;
  long lVar5;
  ulong uVar6;
  undefined8 unaff_RBP;
  undefined local_50 [8];
  undefined **local_48;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h5fe44c4217b6c6aeE
            (&local_48,param_1,"hyperlink",9);
  lVar5 = _ZN12clap_builder6parser5error12MatchesError6unwrap17he9eef133f866d763E
                    ("hyperlink",9,&local_48);
  if (lVar5 == 0) {
    (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_0048fd98)
              (&PTR_s_src_uu_ls_src_ls_rs_00386870);
LAB_00291fe0:
    local_48 = &PTR_s_internal_error__entered_unreacha_00386860;
    local_40 = 1;
    local_38 = local_50;
    local_30 = 0;
    uStack_28 = 0;
    (*(code *)PTR__ZN4core9panicking9panic_fmt17h96f341d36638c225E_0048f818)
              (&local_48,&PTR_s_src_uu_ls_src_ls_rs_00386888);
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return uVar6;
  }
  uVar1 = *(undefined8 *)(lVar5 + 8);
  uVar2 = *(undefined8 *)(lVar5 + 0x10);
  cVar4 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h652dfc76ef3eba10E
                    (uVar1,uVar2,"always",6);
  uVar6 = CONCAT71((int7)((ulong)unaff_RBP >> 8),1);
  if (cVar4 == '\0') {
    cVar4 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h652dfc76ef3eba10E
                      (uVar1,uVar2,"yes",3);
    if (cVar4 == '\0') {
      cVar4 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h652dfc76ef3eba10E
                        (uVar1,uVar2,"force",5);
      if (cVar4 == '\0') {
        cVar4 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h652dfc76ef3eba10E
                          (uVar1,uVar2,&DAT_001cfd50,4);
        if (cVar4 == '\0') {
          cVar4 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h652dfc76ef3eba10E
                            (uVar1,uVar2,"tty",3);
          if (cVar4 == '\0') {
            cVar4 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h652dfc76ef3eba10E
                              (uVar1,uVar2,"if-tty",6);
            if (cVar4 == '\0') {
              cVar4 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h652dfc76ef3eba10E
                                (uVar1,uVar2,"never",5);
              if (cVar4 == '\0') {
                cVar4 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h652dfc76ef3eba10E
                                  (uVar1,uVar2,"no",2);
                if (cVar4 == '\0') {
                  cVar4 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h652dfc76ef3eba10E
                                    (uVar1,uVar2,&DAT_001cfe7c,4);
                  if (cVar4 == '\0') goto LAB_00291fe0;
                }
              }
              uVar6 = 0;
              goto LAB_00291f0c;
            }
          }
        }
        (*(code *)PTR__ZN3std2io5stdio6stdout17hb6a8e10bcccf3287E_0048f9a0)();
        uVar6 = _ZN3std3sys2io11is_terminal6isatty11is_terminal17h0e1d734d892dc985E();
        return uVar6;
      }
    }
  }
LAB_00291f0c:
  return uVar6 & 0xffffffff;
}