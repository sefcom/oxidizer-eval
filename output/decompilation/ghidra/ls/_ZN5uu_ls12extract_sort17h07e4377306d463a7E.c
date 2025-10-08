char _ZN5uu_ls12extract_sort17h07e4377306d463a7E(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  char cVar4;
  long lVar5;
  undefined local_50 [8];
  undefined **local_48;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h5fe44c4217b6c6aeE
            (&local_48,param_1,&DAT_001cfee4,4);
  lVar5 = _ZN12clap_builder6parser5error12MatchesError6unwrap17he9eef133f866d763E
                    (&DAT_001cfee4,4,&local_48);
  if (lVar5 == 0) {
    cVar4 = (*(code *)
              PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_0048fda0
            )(param_1,"t",1);
    if (cVar4 != '\0') {
      return '\x03';
    }
    cVar4 = (*(code *)
              PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_0048fda0
            )(param_1,"S",1);
    if (cVar4 != '\0') {
      return '\x02';
    }
    cVar4 = (*(code *)
              PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_0048fda0
            )(param_1,"U",1);
    if (cVar4 == '\0') {
      cVar4 = (*(code *)
                PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_0048fda0
              )(param_1,"v",1);
      if (cVar4 != '\0') {
        return '\x04';
      }
      cVar4 = (*(code *)
                PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_0048fda0
              )(param_1,"X",1);
      return cVar4 * '\x04' + '\x01';
    }
  }
  else {
    uVar1 = *(undefined8 *)(lVar5 + 8);
    uVar2 = *(undefined8 *)(lVar5 + 0x10);
    cVar4 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h652dfc76ef3eba10E
                      (uVar1,uVar2,&DAT_001cfe7c,4);
    if (cVar4 == '\0') {
      cVar4 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h652dfc76ef3eba10E
                        (uVar1,uVar2,&DAT_001cfeac,4);
      if (cVar4 != '\0') {
        return '\x01';
      }
      cVar4 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h652dfc76ef3eba10E
                        (uVar1,uVar2,&DAT_001cfd68,4);
      if (cVar4 != '\0') {
        return '\x03';
      }
      cVar4 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h652dfc76ef3eba10E
                        (uVar1,uVar2,&DAT_001cfef8,4);
      if (cVar4 != '\0') {
        return '\x02';
      }
      cVar4 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h652dfc76ef3eba10E
                        (uVar1,uVar2,"version",7);
      if (cVar4 != '\0') {
        return '\x04';
      }
      cVar4 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h652dfc76ef3eba10E
                        (uVar1,uVar2,"extension",9);
      if (cVar4 != '\0') {
        return '\x05';
      }
      cVar4 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h652dfc76ef3eba10E
                        (uVar1,uVar2,"width",5);
      if (cVar4 != '\0') {
        return '\x06';
      }
      local_48 = &PTR_s_internal_error__entered_unreacha_003867f8;
      local_40 = 1;
      local_38 = local_50;
      local_30 = 0;
      uStack_28 = 0;
      (*(code *)PTR__ZN4core9panicking9panic_fmt17h96f341d36638c225E_0048f818)
                (&local_48,&PTR_s_src_uu_ls_src_ls_rs_00386808);
      pcVar3 = (code *)swi(3);
      cVar4 = (*pcVar3)();
      return cVar4;
    }
  }
  return '\0';
}