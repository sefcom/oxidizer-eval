undefined8 *
_ZN6uu_cut14get_delimiters17h4e08f74774217561E(undefined8 *param_1,undefined8 param_2,char param_3)

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
  long local_58;
  long local_50;
  long local_48;
  undefined4 local_40;
  
  cVar2 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                    (param_2,"whitespace-delimited",0x14);
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h10dd5ae5c078d536E
            (&local_58,param_2,"delimiter",9);
  lVar3 = _ZN12clap_builder6parser5error12MatchesError6unwrap17hf521713d5ef52bfeE
                    ("delimiter",9,&local_58);
  if (lVar3 == 0) {
    pcVar6 = (char *)0x0;
    if (cVar2 == '\0') {
      pcVar6 = "\t";
    }
    auVar7._8_8_ = 1;
    auVar7._0_8_ = pcVar6;
    goto LAB_001b749c;
  }
  if (cVar2 == '\0') {
    if (param_3 == '\0') {
      cVar2 = _ZN78__LT_std__ffi__os_str__OsString_u20_as_u20_core__cmp__PartialEq_LT_str_GT__GT_2eq17hcddac707bfdce135E
                        (*(undefined8 *)(lVar3 + 8),*(undefined8 *)(lVar3 + 0x10));
      auVar8._8_8_ = 1;
      auVar8._0_8_ = "";
      auVar7._8_8_ = 1;
      auVar7._0_8_ = "";
      if ((cVar2 == '\0') && (lVar1 = *(long *)(lVar3 + 0x10), auVar7 = auVar8, lVar1 != 0)) {
        uVar5 = *(undefined8 *)(lVar3 + 8);
        _ZN3std3ffi6os_str95__LT_impl_u20_core__convert__TryFrom_LT__RF_std__ffi__os_str__OsStr_GT__u20_for_u20__RF_str_GT_8try_from17h660bab9c45707695E
                  (&local_58,uVar5,lVar1);
        if (local_58 == 0) {
          uVar4 = _ZN81__LT_core__str__iter__Chars_u20_as_u20_core__iter__traits__iterator__Iterator_GT_5count17hc7941fd67a47c62aE
                            (local_50,local_48 + local_50);
          if (uVar4 < 2) goto LAB_001b745e;
        }
        else {
LAB_001b745e:
          _ZN3std3ffi6os_str95__LT_impl_u20_core__convert__TryFrom_LT__RF_std__ffi__os_str__OsStr_GT__u20_for_u20__RF_str_GT_8try_from17h660bab9c45707695E
                    (&local_58,uVar5,lVar1);
          if ((lVar1 == 1) || (local_58 == 0)) {
            auVar7 = _ZN95__LT_uu_cut__Delimiter_u20_as_u20_core__convert__From_LT__RF_std__ffi__os_str__OsString_GT__GT_4from17h0afb93ec6e302b7bE
                               (lVar3);
            goto LAB_001b749c;
          }
        }
        pcVar6 = "the delimiter must be a single character";
        uVar5 = 0x28;
        goto LAB_001b73a4;
      }
    }
    else {
      auVar7._8_8_ = 1;
      auVar7._0_8_ = &DAT_0011dcc0;
    }
LAB_001b749c:
    _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h10dd5ae5c078d536E
              (&local_58,param_2,&DAT_001153e0,0x10);
    auVar8 = _ZN12clap_builder6parser5error12MatchesError6unwrap17hf521713d5ef52bfeE
                       (&DAT_001153e0,0x10,&local_58);
    lVar3 = auVar8._0_8_;
    if (lVar3 == 0) {
      auVar9._8_8_ = 0;
      auVar9._0_8_ = auVar8._8_8_;
      auVar9 = auVar9 << 0x40;
    }
    else {
      auVar9 = _ZN6uu_cut14get_delimiters28__u7b__u7b_closure_u7d__u7d_17ha4ee148139715a2eE
                         (*(undefined8 *)(lVar3 + 8),*(undefined8 *)(lVar3 + 0x10));
    }
    *(undefined (*) [16])(param_1 + 1) = auVar7;
    *(undefined (*) [16])(param_1 + 3) = auVar9;
    uVar5 = 0;
  }
  else {
    pcVar6 = "invalid input: Only one of --delimiter (-d) or -w option can be specified";
    uVar5 = 0x49;
LAB_001b73a4:
    _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h5054b97c46bbc40bE
              (&local_58,pcVar6,uVar5);
    local_40 = 1;
    uVar5 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hac334f3a9663fcffE(&local_58);
    param_1[1] = uVar5;
    param_1[2] = &
                 PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17h18e10280f0a721dfE_00228da0
    ;
    uVar5 = 1;
  }
  *param_1 = uVar5;
  return param_1;
}