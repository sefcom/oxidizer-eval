byte _ZN5uu_ls12extract_sort17hff53e8825dcc58c2E(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  long lVar4;
  undefined local_50 [8];
  undefined **local_48;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h7f0bb7fe0c729ea9E
            (&local_48,param_1,&anon_3f7e092f2ea554bdd060175bd8ea63d9_21_llvm_16502254941234113161,4
            );
  lVar4 = _ZN12clap_builder6parser5error12MatchesError6unwrap17hac05afd0923194a9E
                    (&anon_3f7e092f2ea554bdd060175bd8ea63d9_21_llvm_16502254941234113161,4,&local_48
                    );
  if (lVar4 == 0) {
    cVar3 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                      (param_1,&anon_f45a42eab3604eaa40558bbeffd2bfb7_12_llvm_10979288589332586409,1
                      );
    if (cVar3 != '\0') {
      return 3;
    }
    cVar3 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                      (param_1,&anon_f45a42eab3604eaa40558bbeffd2bfb7_11_llvm_10979288589332586409,1
                      );
    if (cVar3 != '\0') {
      return 2;
    }
    cVar3 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                      (param_1,&anon_f45a42eab3604eaa40558bbeffd2bfb7_13_llvm_10979288589332586409,1
                      );
    if (cVar3 == '\0') {
      cVar3 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                        (param_1,&anon_f45a42eab3604eaa40558bbeffd2bfb7_14_llvm_10979288589332586409
                         ,1);
      if (cVar3 != '\0') {
        return 4;
      }
      cVar3 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                        (param_1,&anon_f45a42eab3604eaa40558bbeffd2bfb7_15_llvm_10979288589332586409
                         ,1);
      return cVar3 << 2 | 1;
    }
  }
  else {
    uVar1 = *(undefined8 *)(lVar4 + 8);
    uVar2 = *(undefined8 *)(lVar4 + 0x10);
    cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h615ea01bc1975db3E
                      (uVar1,uVar2,&DAT_00123ff4,4);
    if (cVar3 == '\0') {
      cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h615ea01bc1975db3E
                        (uVar1,uVar2,&DAT_0012400c,4);
      if (cVar3 != '\0') {
        return 1;
      }
      cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h615ea01bc1975db3E
                        (uVar1,uVar2,
                         &anon_3f7e092f2ea554bdd060175bd8ea63d9_22_llvm_16502254941234113161,4);
      if (cVar3 != '\0') {
        return 3;
      }
      cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h615ea01bc1975db3E
                        (uVar1,uVar2,
                         &anon_0961294ef8eb7b5431de28de81a5ae4f_9_llvm_9099371528486416302,4);
      if (cVar3 != '\0') {
        return 2;
      }
      cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h615ea01bc1975db3E
                        (uVar1,uVar2,&DAT_00134c2f,7);
      if (cVar3 != '\0') {
        return 4;
      }
      cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h615ea01bc1975db3E
                        (uVar1,uVar2,&DAT_00134c36,9);
      if (cVar3 != '\0') {
        return 5;
      }
      cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h615ea01bc1975db3E
                        (uVar1,uVar2,&DAT_00134c3f,5);
      if (cVar3 != '\0') {
        return 6;
      }
      local_48 = &PTR_DAT_00312278;
      local_40 = 1;
      local_38 = local_50;
      local_30 = 0;
      uStack_28 = 0;
                    /* WARNING: Subroutine does not return */
      _ZN4core9panicking9panic_fmt17he12d0d7468628bb4E(&local_48,&PTR_DAT_00312288);
    }
  }
  return 0;
}