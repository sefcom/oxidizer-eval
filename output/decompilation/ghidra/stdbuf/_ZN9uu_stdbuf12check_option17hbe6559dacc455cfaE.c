void _ZN9uu_stdbuf12check_option17hbe6559dacc455cfaE
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  long lVar4;
  undefined local_50 [40];
  
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h7c505c187957c244E
            (local_50);
  lVar4 = _ZN12clap_builder6parser5error12MatchesError6unwrap17hd4ff38606b85a4b5E
                    (param_3,param_4,local_50);
  if (lVar4 == 0) {
    param_1[1] = 0;
  }
  else {
    uVar1 = *(undefined8 *)(lVar4 + 8);
    uVar2 = *(undefined8 *)(lVar4 + 0x10);
    cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h28b68c75f758574cE
                      (uVar1,uVar2,&DAT_0011b76b,1);
    if (cVar3 == '\0') {
      (*(code *)
        PTR__ZN6uucore8features6parser10parse_size14parse_size_u6417hcabf5090504a6d94E_005af740)
                (local_50,uVar1,uVar2);
      _ZN4core6result19Result_LT_T_C_E_GT_11map_or_else17h9be4422441522c52E(param_1,local_50);
      return;
    }
    cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h28b68c75f758574cE
                      (param_3,param_4,&DAT_0011b75b,5);
    if (cVar3 != '\0') {
      _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h1f3fa2d8817656eeE
                (param_1,&DAT_0011b76c,0x23);
      return;
    }
    param_1[1] = 1;
  }
  *param_1 = 0x8000000000000000;
  return;
}