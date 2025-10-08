char _ZN7uu_uniq13get_delimiter17h924dde71cdd564baE(undefined8 param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  char cVar3;
  byte bVar4;
  char cVar5;
  undefined8 uVar6;
  long lVar7;
  undefined local_50 [8];
  undefined **local_48;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h4a2509cd518fbd9fE
            (&local_48,param_1,&DAT_0011b144,0xc);
  uVar6 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h0de382a77e5c484bE
                    (&DAT_0011b144,0xc,&local_48);
  lVar7 = _ZN4core6option15Option_LT_T_GT_7or_else17h6f9ec205e9cdec7fE(uVar6,param_1);
  if (lVar7 == 0) {
    bVar4 = (*(code *)
              PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches11contains_id17h5efeb7e2d2f22590E_001fc370
            )(param_1,&DAT_0011b195,5);
    cVar3 = (bVar4 ^ 1) * '\x02' + '\x02';
  }
  else {
    uVar6 = *(undefined8 *)(lVar7 + 8);
    uVar1 = *(undefined8 *)(lVar7 + 0x10);
    cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h679c5716f854e642E
                      (uVar6,uVar1,&DAT_0011b4d5,6);
    if (cVar3 == '\0') {
      cVar5 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h679c5716f854e642E
                        (uVar6,uVar1,&DAT_0011b471,7);
      cVar3 = '\x01';
      if (cVar5 == '\0') {
        cVar5 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h679c5716f854e642E
                          (uVar6,uVar1,&DAT_00118a30,8);
        cVar3 = '\x02';
        if (cVar5 == '\0') {
          cVar5 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h679c5716f854e642E
                            (uVar6,uVar1,&DAT_0011914c,4);
          cVar3 = '\x03';
          if (cVar5 == '\0') {
            cVar5 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h679c5716f854e642E
                              (uVar6,uVar1,&DAT_0011913c,4);
            cVar3 = '\x04';
            if (cVar5 == '\0') {
              local_48 = &PTR_DAT_001f5940;
              local_40 = 1;
              local_38 = local_50;
              local_30 = 0;
              uStack_28 = 0;
              (*(code *)PTR__ZN4core9panicking9panic_fmt17h96f341d36638c225E_001fc1d0)
                        (&local_48,&PTR_DAT_001f5950);
              pcVar2 = (code *)swi(3);
              cVar3 = (*pcVar2)();
              return cVar3;
            }
          }
        }
      }
    }
    else {
      cVar3 = '\0';
    }
  }
  return cVar3;
}