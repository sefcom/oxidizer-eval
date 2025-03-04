long * _ZN10uu_hashsum27create_algorithm_from_flags17h44fb2b955b3a7236E
                 (long *param_1,undefined8 param_2)

{
  char cVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined auVar5 [16];
  char *local_90;
  long local_88;
  long local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  char *local_68;
  long local_60;
  long local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  long local_40;
  long local_38;
  long lStack_30;
  long local_28;
  long lStack_20;
  
  local_40 = 0;
                    /* try { // try from 002da0cb to 002da876 has its CatchHandler @ 002da8a7 */
  cVar1 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                    (param_2,"md5",3);
  if (cVar1 == '\0') {
LAB_002da146:
    cVar1 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                      (param_2,"sha1",4);
    if (cVar1 != '\0') {
      _ZN6uucore8features8checksum11detect_algo17hbb2f85fa7c8cfc19E(&local_90,"sha1sum",7,0);
      if (local_90 == (char *)0x0) goto LAB_002da84b;
      local_50 = (undefined4)local_78;
      uStack_4c = local_78._4_4_;
      uStack_48 = (undefined4)uStack_70;
      uStack_44 = uStack_70._4_4_;
      local_68 = local_90;
      local_60 = local_88;
      local_58 = local_80;
      lVar2 = _ZN10uu_hashsum27create_algorithm_from_flags28__u7b__u7b_closure_u7d__u7d_17h1bc583d45d3e50beE
                        (&local_40,&local_68);
      if (lVar2 != 0) goto LAB_002da877;
    }
    cVar1 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                      (param_2,"sha224",6);
    if (cVar1 != '\0') {
      _ZN6uucore8features8checksum11detect_algo17hbb2f85fa7c8cfc19E(&local_90,"sha224sum",9,0);
      if (local_90 == (char *)0x0) goto LAB_002da84b;
      local_50 = (undefined4)local_78;
      uStack_4c = local_78._4_4_;
      uStack_48 = (undefined4)uStack_70;
      uStack_44 = uStack_70._4_4_;
      local_68 = local_90;
      local_60 = local_88;
      local_58 = local_80;
      lVar2 = _ZN10uu_hashsum27create_algorithm_from_flags28__u7b__u7b_closure_u7d__u7d_17h1bc583d45d3e50beE
                        (&local_40,&local_68);
      if (lVar2 != 0) goto LAB_002da877;
    }
    cVar1 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                      (param_2,"sha256",6);
    if (cVar1 != '\0') {
      _ZN6uucore8features8checksum11detect_algo17hbb2f85fa7c8cfc19E(&local_90,"sha256sum",9,0);
      if (local_90 == (char *)0x0) goto LAB_002da84b;
      local_50 = (undefined4)local_78;
      uStack_4c = local_78._4_4_;
      uStack_48 = (undefined4)uStack_70;
      uStack_44 = uStack_70._4_4_;
      local_68 = local_90;
      local_60 = local_88;
      local_58 = local_80;
      lVar2 = _ZN10uu_hashsum27create_algorithm_from_flags28__u7b__u7b_closure_u7d__u7d_17h1bc583d45d3e50beE
                        (&local_40,&local_68);
      if (lVar2 != 0) goto LAB_002da877;
    }
    cVar1 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                      (param_2,"sha384",6);
    if (cVar1 != '\0') {
      _ZN6uucore8features8checksum11detect_algo17hbb2f85fa7c8cfc19E(&local_90,"sha384sum",9,0);
      if (local_90 == (char *)0x0) goto LAB_002da84b;
      local_50 = (undefined4)local_78;
      uStack_4c = local_78._4_4_;
      uStack_48 = (undefined4)uStack_70;
      uStack_44 = uStack_70._4_4_;
      local_68 = local_90;
      local_60 = local_88;
      local_58 = local_80;
      lVar2 = _ZN10uu_hashsum27create_algorithm_from_flags28__u7b__u7b_closure_u7d__u7d_17h1bc583d45d3e50beE
                        (&local_40,&local_68);
      if (lVar2 != 0) goto LAB_002da877;
    }
    cVar1 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                      (param_2,"sha512",6);
    if (cVar1 != '\0') {
      _ZN6uucore8features8checksum11detect_algo17hbb2f85fa7c8cfc19E(&local_90,"sha512sum",9,0);
      if (local_90 == (char *)0x0) goto LAB_002da84b;
      local_50 = (undefined4)local_78;
      uStack_4c = local_78._4_4_;
      uStack_48 = (undefined4)uStack_70;
      uStack_44 = uStack_70._4_4_;
      local_68 = local_90;
      local_60 = local_88;
      local_58 = local_80;
      lVar2 = _ZN10uu_hashsum27create_algorithm_from_flags28__u7b__u7b_closure_u7d__u7d_17h1bc583d45d3e50beE
                        (&local_40,&local_68);
      if (lVar2 != 0) goto LAB_002da877;
    }
    cVar1 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                      (param_2,"b2sum",5);
    if (cVar1 != '\0') {
      _ZN6uucore8features8checksum11detect_algo17hbb2f85fa7c8cfc19E(&local_90,"b2sum",5,0);
      if (local_90 == (char *)0x0) goto LAB_002da84b;
      local_50 = (undefined4)local_78;
      uStack_4c = local_78._4_4_;
      uStack_48 = (undefined4)uStack_70;
      uStack_44 = uStack_70._4_4_;
      local_68 = local_90;
      local_60 = local_88;
      local_58 = local_80;
      lVar2 = _ZN10uu_hashsum27create_algorithm_from_flags28__u7b__u7b_closure_u7d__u7d_17h1bc583d45d3e50beE
                        (&local_40,&local_68);
      if (lVar2 != 0) goto LAB_002da877;
    }
    cVar1 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                      (param_2,"b3sum",5);
    if (cVar1 != '\0') {
      _ZN6uucore8features8checksum11detect_algo17hbb2f85fa7c8cfc19E(&local_90,"b3sum",5,0);
      if (local_90 == (char *)0x0) goto LAB_002da84b;
      local_50 = (undefined4)local_78;
      uStack_4c = local_78._4_4_;
      uStack_48 = (undefined4)uStack_70;
      uStack_44 = uStack_70._4_4_;
      local_68 = local_90;
      local_60 = local_88;
      local_58 = local_80;
      lVar2 = _ZN10uu_hashsum27create_algorithm_from_flags28__u7b__u7b_closure_u7d__u7d_17h1bc583d45d3e50beE
                        (&local_40,&local_68);
      if (lVar2 != 0) goto LAB_002da877;
    }
    cVar1 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                      (param_2,"sha3",4);
    if (cVar1 != '\0') {
      _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h4357859c597eaa3fE
                (&local_90,param_2,&DAT_00166ae4,4);
      auVar5 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h5d44f088bdacce08E
                         (&DAT_00166ae4,4,&local_90);
      uVar4 = auVar5._8_8_;
      puVar3 = auVar5._0_8_;
      if (puVar3 != (undefined8 *)0x0) {
        uVar4 = *puVar3;
      }
      _ZN6uucore8features8checksum11create_sha317hcd73b2e9e9c5f640E
                (&local_90,puVar3 != (undefined8 *)0x0,uVar4);
      if (local_90 == (char *)0x0) goto LAB_002da84b;
      local_50 = (undefined4)local_78;
      uStack_4c = local_78._4_4_;
      uStack_48 = (undefined4)uStack_70;
      uStack_44 = uStack_70._4_4_;
      local_68 = local_90;
      local_60 = local_88;
      local_58 = local_80;
      lVar2 = _ZN10uu_hashsum27create_algorithm_from_flags28__u7b__u7b_closure_u7d__u7d_17h1bc583d45d3e50beE
                        (&local_40,&local_68);
      if (lVar2 != 0) goto LAB_002da877;
    }
    cVar1 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                      (param_2,"sha3-224",8);
    if (cVar1 != '\0') {
      local_80 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h56ceb8bc84fcc09cE();
      local_90 = &DAT_001696d0;
      local_88 = 8;
      local_78 = &DAT_0043e920;
      uStack_70 = 0xe0;
      lVar2 = _ZN10uu_hashsum27create_algorithm_from_flags28__u7b__u7b_closure_u7d__u7d_17h1bc583d45d3e50beE
                        (&local_40,&local_90);
      if (lVar2 != 0) goto LAB_002da877;
    }
    cVar1 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                      (param_2,&DAT_00169668,8);
    if (cVar1 != '\0') {
      local_80 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h96109929ce1ae329E();
      local_90 = &DAT_001696d8;
      local_88 = 8;
      local_78 = &DAT_0043e950;
      uStack_70 = 0x100;
      lVar2 = _ZN10uu_hashsum27create_algorithm_from_flags28__u7b__u7b_closure_u7d__u7d_17h1bc583d45d3e50beE
                        (&local_40,&local_90);
      if (lVar2 != 0) goto LAB_002da877;
    }
    cVar1 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                      (param_2,&DAT_001698a0,8);
    if (cVar1 != '\0') {
      local_80 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h8957ed870d0d589dE();
      local_90 = &DAT_00169088;
      local_88 = 8;
      local_78 = &DAT_0043e980;
      uStack_70 = 0x180;
      lVar2 = _ZN10uu_hashsum27create_algorithm_from_flags28__u7b__u7b_closure_u7d__u7d_17h1bc583d45d3e50beE
                        (&local_40,&local_90);
      if (lVar2 != 0) goto LAB_002da877;
    }
    cVar1 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                      (param_2,&DAT_00169328,8);
    if (cVar1 != '\0') {
      local_80 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h9e00f0c13a1acd4dE();
      local_90 = "SHA3-512";
      local_88 = 8;
      local_78 = &DAT_0043e9b0;
      uStack_70 = 0x200;
      lVar2 = _ZN10uu_hashsum27create_algorithm_from_flags28__u7b__u7b_closure_u7d__u7d_17h1bc583d45d3e50beE
                        (&local_40,&local_90);
      if (lVar2 != 0) goto LAB_002da877;
    }
    cVar1 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                      (param_2,&DAT_00169670,8);
    if (cVar1 == '\0') {
LAB_002da78b:
      cVar1 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                        (param_2,"shake256S",8);
      if (cVar1 == '\0') {
LAB_002da82a:
        if (local_40 != 0) {
          param_1[3] = local_28;
          param_1[4] = lStack_20;
          param_1[1] = local_38;
          param_1[2] = lStack_30;
          *param_1 = local_40;
          return param_1;
        }
        lVar2 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h5da6a9570b8b523bE(0xe);
      }
      else {
        _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h4357859c597eaa3fE
                  (&local_90,param_2,&DAT_00166ae4,4);
        puVar3 = (undefined8 *)
                 _ZN12clap_builder6parser5error12MatchesError6unwrap17h5d44f088bdacce08E
                           (&DAT_00166ae4,4,&local_90);
        if (puVar3 == (undefined8 *)0x0) {
          lVar2 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h5da6a9570b8b523bE(7);
        }
        else {
          local_80 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h2a30d9bd725b68e7E();
          uStack_70 = *puVar3;
          local_90 = "SHAKE256stride: xidstart( ";
          local_88 = 8;
          local_78 = &DAT_0043eaa0;
          lVar2 = _ZN10uu_hashsum27create_algorithm_from_flags28__u7b__u7b_closure_u7d__u7d_17h1bc583d45d3e50beE
                            (&local_40,&local_90);
          if (lVar2 == 0) goto LAB_002da82a;
        }
      }
    }
    else {
      _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h4357859c597eaa3fE
                (&local_90,param_2,&DAT_00166ae4,4);
      puVar3 = (undefined8 *)
               _ZN12clap_builder6parser5error12MatchesError6unwrap17h5d44f088bdacce08E
                         (&DAT_00166ae4,4,&local_90);
      if (puVar3 == (undefined8 *)0x0) {
        lVar2 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h5da6a9570b8b523bE(6);
      }
      else {
        local_80 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h8cbd87c202e90656E();
        uStack_70 = *puVar3;
        local_90 = &DAT_00169928;
        local_88 = 8;
        local_78 = &DAT_0043ea70;
        lVar2 = _ZN10uu_hashsum27create_algorithm_from_flags28__u7b__u7b_closure_u7d__u7d_17h1bc583d45d3e50beE
                          (&local_40,&local_90);
        if (lVar2 == 0) goto LAB_002da78b;
      }
    }
  }
  else {
    _ZN6uucore8features8checksum11detect_algo17hbb2f85fa7c8cfc19E(&local_90,"md5sum",6,0);
    if (local_90 == (char *)0x0) {
LAB_002da84b:
      param_1[1] = local_88;
      param_1[2] = local_80;
      goto LAB_002da886;
    }
    local_50 = (undefined4)local_78;
    uStack_4c = local_78._4_4_;
    uStack_48 = (undefined4)uStack_70;
    uStack_44 = uStack_70._4_4_;
    local_68 = local_90;
    local_60 = local_88;
    local_58 = local_80;
    lVar2 = _ZN10uu_hashsum27create_algorithm_from_flags28__u7b__u7b_closure_u7d__u7d_17h1bc583d45d3e50beE
                      (&local_40,&local_68);
    if (lVar2 == 0) goto LAB_002da146;
  }
LAB_002da877:
  param_1[1] = lVar2;
  param_1[2] = (long)&DAT_0043ea00;
LAB_002da886:
  *param_1 = 0;
  _ZN4core3ptr90drop_in_place_LT_core__option__Option_LT_uucore__features__checksum__HashAlgorithm_GT__GT_17hc31e744318080425E
            (&local_40);
  return param_1;
}