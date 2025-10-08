undefined8 * _ZN6uu_cut14get_delimiters17hcb390251ab0b3ea3E(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  char cVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined auVar9 [16];
  int local_58;
  undefined4 uStack_54;
  long local_50;
  long local_48;
  undefined4 local_40;
  
  cVar2 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001ffcf0
          )(param_2,"whitespace-delimited",0x14);
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h3ff74e05d0cadf2bE
            (&local_58,param_2,"delimiter",9);
  lVar3 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h3e44d99a4fa5a9d3E
                    ("delimiter",9,&local_58);
  if (lVar3 == 0) {
    pcVar6 = (char *)0x0;
    if (cVar2 == '\0') {
      pcVar6 = "\t";
    }
LAB_0016a130:
    auVar9._8_8_ = 1;
    auVar9._0_8_ = pcVar6;
  }
  else {
    if (cVar2 != '\0') {
      pcVar6 = "invalid input: Only one of --delimiter (-d) or -w option can be specified";
      uVar5 = 0x49;
LAB_0016a1ea:
      _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17hdd477e9923447a3cE
                (&local_58,pcVar6,uVar5);
      local_40 = 1;
      uVar5 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h8c28acd2624e9f9fE(&local_58);
      param_1[1] = uVar5;
      param_1[2] = &
                   PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17h331995778b4fc266E_001f9218
      ;
      uVar5 = 1;
      goto LAB_0016a216;
    }
    uVar5 = *(undefined8 *)(lVar3 + 8);
    lVar1 = *(long *)(lVar3 + 0x10);
    cVar2 = _ZN78__LT_std__ffi__os_str__OsString_u20_as_u20_core__cmp__PartialEq_LT_str_GT__GT_2eq17h1ffd8f17dc4fb6beE
                      (uVar5,lVar1);
    if (lVar1 == 0 || cVar2 != '\0') {
      pcVar6 = "";
      goto LAB_0016a130;
    }
    (*(code *)PTR__ZN4core3str8converts9from_utf817h8a6dc80f786921e0E_001ffc10)
              (&local_58,uVar5,lVar1);
    if (((local_58 != 1) &&
        (uVar4 = _ZN81__LT_core__str__iter__Chars_u20_as_u20_core__iter__traits__iterator__Iterator_GT_5count17h41a8767c0185b7ecE
                           (local_50,local_48 + local_50), 1 < uVar4)) ||
       (((*(code *)PTR__ZN4core3str8converts9from_utf817h8a6dc80f786921e0E_001ffc10)
                   (&local_58,*(undefined8 *)(lVar3 + 8),*(undefined8 *)(lVar3 + 0x10)), lVar1 != 1
        && (CONCAT44(uStack_54,local_58) != 0)))) {
      pcVar6 = "the delimiter must be a single character";
      uVar5 = 0x28;
      goto LAB_0016a1ea;
    }
    auVar9 = (*(code *)
               PTR__ZN95__LT_uu_cut__Delimiter_u20_as_u20_core__convert__From_LT__RF_std__ffi__os_str__OsString_GT__GT_4from17h9cfa98f4095a0128E_001ffdb0
             )(lVar3);
  }
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h3ff74e05d0cadf2bE
            (&local_58,param_2,&DAT_0011d5b0,0x10);
  auVar7 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h3e44d99a4fa5a9d3E
                     (&DAT_0011d5b0,0x10,&local_58);
  lVar3 = auVar7._0_8_;
  if (lVar3 == 0) {
    auVar8._8_8_ = 0;
    auVar8._0_8_ = auVar7._8_8_;
    auVar8 = auVar8 << 0x40;
  }
  else {
    auVar8 = _ZN6uu_cut14get_delimiters28__u7b__u7b_closure_u7d__u7d_17hb8cb5833204c5644E
                       (*(undefined8 *)(lVar3 + 8),*(undefined8 *)(lVar3 + 0x10));
  }
  *(undefined (*) [16])(param_1 + 1) = auVar9;
  *(undefined (*) [16])(param_1 + 3) = auVar8;
  uVar5 = 0;
LAB_0016a216:
  *param_1 = uVar5;
  return param_1;
}