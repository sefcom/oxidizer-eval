char _ZN5uu_ls12extract_time17h4f1c34fa33e953acE(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  char cVar4;
  long lVar5;
  undefined local_50 [8];
  undefined **local_48;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h7f0bb7fe0c729ea9E
            (&local_48,param_1,&anon_3f7e092f2ea554bdd060175bd8ea63d9_22_llvm_16502254941234113161,4
            );
  lVar5 = _ZN12clap_builder6parser5error12MatchesError6unwrap17hac05afd0923194a9E
                    (&anon_3f7e092f2ea554bdd060175bd8ea63d9_22_llvm_16502254941234113161,4,&local_48
                    );
  if (lVar5 == 0) {
    cVar3 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                      (param_1,&anon_8bf1419b86641518549345aedc57e906_9_llvm_11260003342554782039,1)
    ;
    cVar4 = '\x01';
    if (cVar3 == '\0') {
      cVar4 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                        (param_1,&anon_8bf1419b86641518549345aedc57e906_10_llvm_11260003342554782039
                         ,1);
      cVar4 = cVar4 * '\x02';
    }
  }
  else {
    uVar1 = *(undefined8 *)(lVar5 + 8);
    uVar2 = *(undefined8 *)(lVar5 + 0x10);
    cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h615ea01bc1975db3E
                      (uVar1,uVar2,&DAT_00134c86,5);
    cVar4 = '\x02';
    if (cVar3 == '\0') {
      cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h615ea01bc1975db3E
                        (uVar1,uVar2,&DAT_00134c8b,6);
      cVar4 = '\x02';
      if (cVar3 == '\0') {
        cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h615ea01bc1975db3E
                          (uVar1,uVar2,&DAT_00134c91,6);
        cVar4 = '\x01';
        if (cVar3 == '\0') {
          cVar4 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h615ea01bc1975db3E
                            (uVar1,uVar2,&DAT_00134c97,5);
          if (cVar4 == '\0') {
            cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h615ea01bc1975db3E
                              (uVar1,uVar2,&DAT_00134c9c,3);
            cVar4 = '\x01';
            if (cVar3 == '\0') {
              cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h615ea01bc1975db3E
                                (uVar1,uVar2,&DAT_00134c9f,5);
              cVar4 = '\x03';
              if (cVar3 == '\0') {
                cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h615ea01bc1975db3E
                                  (uVar1,uVar2,"creation*direct*",8);
                cVar4 = '\x03';
                if (cVar3 == '\0') {
                  local_48 = &PTR_DAT_003122a0;
                  local_40 = 1;
                  local_38 = local_50;
                  local_30 = 0;
                  uStack_28 = 0;
                    /* WARNING: Subroutine does not return */
                  _ZN4core9panicking9panic_fmt17he12d0d7468628bb4E(&local_48,&PTR_DAT_003122b0);
                }
              }
            }
          }
          else {
            cVar4 = '\x01';
          }
        }
      }
    }
  }
  return cVar4;
}