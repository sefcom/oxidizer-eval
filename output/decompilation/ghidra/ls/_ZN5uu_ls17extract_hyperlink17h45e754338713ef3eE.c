ulong _ZN5uu_ls17extract_hyperlink17h45e754338713ef3eE(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  uint uVar4;
  long lVar5;
  undefined8 unaff_RBP;
  ulong uVar6;
  undefined local_50 [8];
  undefined **local_48;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h7f0bb7fe0c729ea9E
            (&local_48,param_1,anon_3f7e092f2ea554bdd060175bd8ea63d9_39_llvm_16502254941234113161,9)
  ;
  lVar5 = _ZN12clap_builder6parser5error12MatchesError6unwrap17hac05afd0923194a9E
                    (anon_3f7e092f2ea554bdd060175bd8ea63d9_39_llvm_16502254941234113161,9,&local_48)
  ;
  if (lVar5 == 0) {
    _ZN4core6option13unwrap_failed17h0e11329e76906eaaE(&PTR_DAT_003122f0);
LAB_0021f7b9:
    local_48 = &PTR_DAT_003122e0;
    local_40 = 1;
    local_38 = local_50;
    local_30 = 0;
    uStack_28 = 0;
                    /* WARNING: Subroutine does not return */
    _ZN4core9panicking9panic_fmt17he12d0d7468628bb4E(&local_48,&PTR_DAT_00312308);
  }
  uVar1 = *(undefined8 *)(lVar5 + 8);
  uVar2 = *(undefined8 *)(lVar5 + 0x10);
  cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h615ea01bc1975db3E
                    (uVar1,uVar2,&DAT_00134cef,6);
  uVar6 = CONCAT71((int7)((ulong)unaff_RBP >> 8),1);
  if (cVar3 == '\0') {
    cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h615ea01bc1975db3E
                      (uVar1,uVar2,&DAT_00134cf5,3);
    if (cVar3 == '\0') {
      cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h615ea01bc1975db3E
                        (uVar1,uVar2,&DAT_00134cf8,5);
      if (cVar3 == '\0') {
        cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h615ea01bc1975db3E
                          (uVar1,uVar2,&DAT_00123f34,4);
        if (cVar3 == '\0') {
          cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h615ea01bc1975db3E
                            (uVar1,uVar2,&DAT_00134cfd,3);
          if (cVar3 == '\0') {
            cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h615ea01bc1975db3E
                              (uVar1,uVar2,&DAT_00134d00,6);
            if (cVar3 == '\0') {
              cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h615ea01bc1975db3E
                                (uVar1,uVar2,&DAT_00134d06,5);
              if (cVar3 == '\0') {
                cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h615ea01bc1975db3E
                                  (uVar1,uVar2,&DAT_00134d0b,2);
                if (cVar3 == '\0') {
                  cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h615ea01bc1975db3E
                                    (uVar1,uVar2,&DAT_00123ff4,4);
                  if (cVar3 == '\0') goto LAB_0021f7b9;
                }
              }
              uVar6 = 0;
              goto LAB_0021f74c;
            }
          }
        }
        local_48 = (undefined **)_ZN3std2io5stdio6stdout17h077da66234850927E();
        uVar4 = _ZN3std3sys3pal4unix2io11is_terminal17hd2a7310729156a1eE(&local_48);
        uVar6 = (ulong)uVar4;
      }
    }
  }
LAB_0021f74c:
  return uVar6 & 0xffffffff;
}