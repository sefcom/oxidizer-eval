void _ZN5uu_ls14extract_format17h7d78a4a0dcc4169dE(undefined *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  long lVar4;
  undefined uVar5;
  undefined1 *puVar6;
  undefined local_60 [8];
  undefined **local_58;
  undefined8 local_50;
  undefined *local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h7f0bb7fe0c729ea9E
            (&local_58,param_2,&anon_3f7e092f2ea554bdd060175bd8ea63d9_20_llvm_16502254941234113161,6
            );
  lVar4 = _ZN12clap_builder6parser5error12MatchesError6unwrap17hac05afd0923194a9E
                    (&anon_3f7e092f2ea554bdd060175bd8ea63d9_20_llvm_16502254941234113161,6,&local_58
                    );
  if (lVar4 == 0) {
    cVar3 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                      (param_2,&anon_8bf1419b86641518549345aedc57e906_1_llvm_11260003342554782039,4)
    ;
    if (cVar3 != '\0') {
      *param_1 = 1;
      *(undefined4 **)(param_1 + 8) =
           &anon_8bf1419b86641518549345aedc57e906_1_llvm_11260003342554782039;
      *(undefined8 *)(param_1 + 0x10) = 4;
      return;
    }
    puVar6 = &anon_8bf1419b86641518549345aedc57e906_3_llvm_11260003342554782039;
    cVar3 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                      (param_2,&anon_8bf1419b86641518549345aedc57e906_3_llvm_11260003342554782039,1)
    ;
    if (cVar3 == '\0') {
      puVar6 = &anon_8bf1419b86641518549345aedc57e906_5_llvm_11260003342554782039;
      cVar3 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                        (param_2,&anon_8bf1419b86641518549345aedc57e906_5_llvm_11260003342554782039,
                         1);
      if (cVar3 == '\0') {
        puVar6 = &anon_8bf1419b86641518549345aedc57e906_2_llvm_11260003342554782039;
        cVar3 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                          (param_2,&
                                   anon_8bf1419b86641518549345aedc57e906_2_llvm_11260003342554782039
                           ,1);
        if (cVar3 == '\0') {
          local_58 = (undefined **)_ZN3std2io5stdio6stdout17h077da66234850927E();
          cVar3 = _ZN3std3sys3pal4unix2io11is_terminal17hd2a7310729156a1eE(&local_58);
          if (cVar3 == '\0') {
            *param_1 = 2;
          }
          else {
            *param_1 = 0;
          }
          *(undefined8 *)(param_1 + 8) = 0;
          return;
        }
        *param_1 = 0;
      }
      else {
        *param_1 = 4;
      }
    }
    else {
      *param_1 = 3;
    }
    *(undefined1 **)(param_1 + 8) = puVar6;
    *(undefined8 *)(param_1 + 0x10) = 1;
    return;
  }
  uVar1 = *(undefined8 *)(lVar4 + 8);
  uVar2 = *(undefined8 *)(lVar4 + 0x10);
  cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h615ea01bc1975db3E
                    (uVar1,uVar2,&anon_8bf1419b86641518549345aedc57e906_1_llvm_11260003342554782039,
                     4);
  uVar5 = 1;
  if ((cVar3 == '\0') &&
     (cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h615ea01bc1975db3E
                        (uVar1,uVar2,&DAT_00134bba,7), cVar3 == '\0')) {
    cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h615ea01bc1975db3E
                      (uVar1,uVar2,&DAT_00134bc1,0xd);
    uVar5 = 2;
    if (cVar3 == '\0') {
      cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h615ea01bc1975db3E
                        (uVar1,uVar2,&DAT_00134bce,7);
      if ((cVar3 == '\0') &&
         (cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h615ea01bc1975db3E
                            (uVar1,uVar2,"verticalNovember",8), cVar3 == '\0')) {
        cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h615ea01bc1975db3E
                          (uVar1,uVar2,&DAT_00134bd5,6);
        uVar5 = 3;
        if ((cVar3 == '\0') &&
           (cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h615ea01bc1975db3E
                              (uVar1,uVar2,&DAT_00134bdb,10), cVar3 == '\0')) {
          cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h615ea01bc1975db3E
                            (uVar1,uVar2,&DAT_00134be5,6);
          uVar5 = 4;
          if (cVar3 == '\0') {
            local_58 = &PTR_DAT_00312250;
            local_50 = 1;
            local_48 = local_60;
            local_40 = 0;
            uStack_38 = 0;
                    /* WARNING: Subroutine does not return */
            _ZN4core9panicking9panic_fmt17he12d0d7468628bb4E(&local_58,&PTR_DAT_00312260);
          }
        }
      }
      else {
        uVar5 = 0;
      }
    }
  }
  *param_1 = uVar5;
  *(undefined6 **)(param_1 + 8) =
       &anon_3f7e092f2ea554bdd060175bd8ea63d9_20_llvm_16502254941234113161;
  *(undefined8 *)(param_1 + 0x10) = 6;
  return;
}