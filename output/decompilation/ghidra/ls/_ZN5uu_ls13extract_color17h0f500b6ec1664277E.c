ulong _ZN5uu_ls13extract_color17h0f500b6ec1664277E(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 unaff_RBP;
  undefined8 local_48 [5];
  
  cVar3 = _ZN5uu_ls24is_color_compatible_term17h4d28f84ec695f678E();
  if (cVar3 == '\0') {
LAB_0021f605:
    uVar6 = 0;
  }
  else {
    _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h7f0bb7fe0c729ea9E
              (local_48,param_1,&anon_3f7e092f2ea554bdd060175bd8ea63d9_28_llvm_16502254941234113161,
               5);
    lVar5 = _ZN12clap_builder6parser5error12MatchesError6unwrap17hac05afd0923194a9E
                      (&anon_3f7e092f2ea554bdd060175bd8ea63d9_28_llvm_16502254941234113161,5,
                       local_48);
    if (lVar5 == 0) {
      uVar6 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11contains_id17h8ab577f2647f3b72E
                        (param_1,&anon_3f7e092f2ea554bdd060175bd8ea63d9_28_llvm_16502254941234113161
                         ,5);
      return uVar6;
    }
    uVar1 = *(undefined8 *)(lVar5 + 8);
    uVar2 = *(undefined8 *)(lVar5 + 0x10);
    cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h615ea01bc1975db3E
                      (uVar1,uVar2,1,0);
    uVar6 = CONCAT71((int7)((ulong)unaff_RBP >> 8),1);
    if (cVar3 != '\0') goto LAB_0021f607;
    cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h615ea01bc1975db3E
                      (uVar1,uVar2,&DAT_00134cef,6);
    if (cVar3 != '\0') goto LAB_0021f607;
    cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h615ea01bc1975db3E
                      (uVar1,uVar2,&DAT_00134cf5,3);
    if (cVar3 != '\0') goto LAB_0021f607;
    cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h615ea01bc1975db3E
                      (uVar1,uVar2,&DAT_00134cf8,5);
    if (cVar3 != '\0') goto LAB_0021f607;
    cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h615ea01bc1975db3E
                      (uVar1,uVar2,&DAT_00123f34,4);
    if (cVar3 == '\0') {
      cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h615ea01bc1975db3E
                        (uVar1,uVar2,&DAT_00134cfd,3);
      if (cVar3 == '\0') {
        cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h615ea01bc1975db3E
                          (uVar1,uVar2,&DAT_00134d00,6);
        if (cVar3 == '\0') goto LAB_0021f605;
      }
    }
    local_48[0] = _ZN3std2io5stdio6stdout17h077da66234850927E();
    uVar4 = _ZN3std3sys3pal4unix2io11is_terminal17hd2a7310729156a1eE(local_48);
    uVar6 = (ulong)uVar4;
  }
LAB_0021f607:
  return uVar6 & 0xffffffff;
}