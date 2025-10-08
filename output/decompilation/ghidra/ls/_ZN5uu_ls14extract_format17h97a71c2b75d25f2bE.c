void _ZN5uu_ls14extract_format17h97a71c2b75d25f2bE(undefined *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  long lVar4;
  undefined uVar5;
  char *pcVar6;
  undefined local_60 [8];
  undefined **local_58;
  undefined8 local_50;
  undefined *local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h5fe44c4217b6c6aeE
            (&local_58,param_2,"format",6);
  lVar4 = _ZN12clap_builder6parser5error12MatchesError6unwrap17he9eef133f866d763E
                    ("format",6,&local_58);
  if (lVar4 == 0) {
    cVar3 = (*(code *)
              PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_0048fda0
            )(param_2,&DAT_001cfd3c,4);
    if (cVar3 != '\0') {
      *param_1 = 1;
      *(undefined **)(param_1 + 8) = &DAT_001cfd3c;
      *(undefined8 *)(param_1 + 0x10) = 4;
      return;
    }
    pcVar6 = "x";
    cVar3 = (*(code *)
              PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_0048fda0
            )(param_2,"x",1);
    if (cVar3 != '\0') {
      *param_1 = 3;
LAB_002915e4:
      *(char **)(param_1 + 8) = pcVar6;
      *(undefined8 *)(param_1 + 0x10) = 1;
      return;
    }
    pcVar6 = "m";
    cVar3 = (*(code *)
              PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_0048fda0
            )(param_2,"m",1);
    if (cVar3 != '\0') {
      *param_1 = 4;
      goto LAB_002915e4;
    }
    pcVar6 = "C";
    cVar3 = (*(code *)
              PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_0048fda0
            )(param_2,"C",1);
    if (cVar3 != '\0') {
      *param_1 = 0;
      goto LAB_002915e4;
    }
    (*(code *)PTR__ZN3std2io5stdio6stdout17hb6a8e10bcccf3287E_0048f9a0)();
    cVar3 = _ZN3std3sys2io11is_terminal6isatty11is_terminal17h0e1d734d892dc985E();
    if (cVar3 != '\0') {
      *param_1 = 0;
      goto LAB_002916b7;
    }
  }
  else {
    uVar1 = *(undefined8 *)(lVar4 + 8);
    uVar2 = *(undefined8 *)(lVar4 + 0x10);
    cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h652dfc76ef3eba10E
                      (uVar1,uVar2,&DAT_001cfd3c,4);
    uVar5 = 1;
    if ((cVar3 != '\0') ||
       (cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h652dfc76ef3eba10E
                          (uVar1,uVar2,"verbose",7), cVar3 != '\0')) {
LAB_00291542:
      *param_1 = uVar5;
      *(char **)(param_1 + 8) = "format";
      *(undefined8 *)(param_1 + 0x10) = 6;
      return;
    }
    cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h652dfc76ef3eba10E
                      (uVar1,uVar2,"single-column",0xd);
    uVar5 = 2;
    if (cVar3 != '\0') goto LAB_00291542;
    cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h652dfc76ef3eba10E
                      (uVar1,uVar2,"columns",7);
    if ((cVar3 != '\0') ||
       (cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h652dfc76ef3eba10E
                          (uVar1,uVar2,"vertical",8), cVar3 != '\0')) {
      uVar5 = 0;
      goto LAB_00291542;
    }
    cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h652dfc76ef3eba10E
                      (uVar1,uVar2,"across",6);
    uVar5 = 3;
    if ((cVar3 != '\0') ||
       (cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h652dfc76ef3eba10E
                          (uVar1,uVar2,"horizontal",10), cVar3 != '\0')) goto LAB_00291542;
    cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h652dfc76ef3eba10E
                      (uVar1,uVar2,"commas",6);
    uVar5 = 4;
    if (cVar3 != '\0') goto LAB_00291542;
    local_58 = &PTR_s_internal_error__entered_unreacha_003867d0;
    local_50 = 1;
    local_48 = local_60;
    local_40 = 0;
    uStack_38 = 0;
    (*(code *)PTR__ZN4core9panicking9panic_fmt17h96f341d36638c225E_0048f818)
              (&local_58,&PTR_s_src_uu_ls_src_ls_rs_003867e0);
  }
  *param_1 = 2;
LAB_002916b7:
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}