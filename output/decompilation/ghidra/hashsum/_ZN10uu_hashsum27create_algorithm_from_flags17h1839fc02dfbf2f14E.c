long * _ZN10uu_hashsum27create_algorithm_from_flags17h1839fc02dfbf2f14E
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
                    /* try { // try from 00181dfb to 00182552 has its CatchHandler @ 00182583 */
  cVar1 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_0025ac40
          )(param_2,"md5",3);
  if (cVar1 == '\0') {
LAB_00181e76:
    cVar1 = (*(code *)
              PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_0025ac40
            )(param_2,&DAT_00111d90,4);
    if (cVar1 != '\0') {
      (*(code *)PTR__ZN6uucore8features8checksum11detect_algo17hf5ee5896e94cf2e7E_0025ac38)
                (&local_90,"sha1sum",7,0);
      if (local_90 == (char *)0x0) goto LAB_00182527;
      local_50 = (undefined4)local_78;
      uStack_4c = local_78._4_4_;
      uStack_48 = (undefined4)uStack_70;
      uStack_44 = uStack_70._4_4_;
      local_68 = local_90;
      local_60 = local_88;
      local_58 = local_80;
      lVar2 = _ZN10uu_hashsum27create_algorithm_from_flags28__u7b__u7b_closure_u7d__u7d_17hbf9d7cdaa9aa6f90E
                        (&local_40,&local_68);
      if (lVar2 != 0) goto LAB_00182553;
    }
    cVar1 = (*(code *)
              PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_0025ac40
            )(param_2,"sha224",6);
    if (cVar1 != '\0') {
      (*(code *)PTR__ZN6uucore8features8checksum11detect_algo17hf5ee5896e94cf2e7E_0025ac38)
                (&local_90,"sha224sum",9,0);
      if (local_90 == (char *)0x0) goto LAB_00182527;
      local_50 = (undefined4)local_78;
      uStack_4c = local_78._4_4_;
      uStack_48 = (undefined4)uStack_70;
      uStack_44 = uStack_70._4_4_;
      local_68 = local_90;
      local_60 = local_88;
      local_58 = local_80;
      lVar2 = _ZN10uu_hashsum27create_algorithm_from_flags28__u7b__u7b_closure_u7d__u7d_17hbf9d7cdaa9aa6f90E
                        (&local_40,&local_68);
      if (lVar2 != 0) goto LAB_00182553;
    }
    cVar1 = (*(code *)
              PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_0025ac40
            )(param_2,"sha256",6);
    if (cVar1 != '\0') {
      (*(code *)PTR__ZN6uucore8features8checksum11detect_algo17hf5ee5896e94cf2e7E_0025ac38)
                (&local_90,"sha256sum",9,0);
      if (local_90 == (char *)0x0) goto LAB_00182527;
      local_50 = (undefined4)local_78;
      uStack_4c = local_78._4_4_;
      uStack_48 = (undefined4)uStack_70;
      uStack_44 = uStack_70._4_4_;
      local_68 = local_90;
      local_60 = local_88;
      local_58 = local_80;
      lVar2 = _ZN10uu_hashsum27create_algorithm_from_flags28__u7b__u7b_closure_u7d__u7d_17hbf9d7cdaa9aa6f90E
                        (&local_40,&local_68);
      if (lVar2 != 0) goto LAB_00182553;
    }
    cVar1 = (*(code *)
              PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_0025ac40
            )(param_2,"sha384",6);
    if (cVar1 != '\0') {
      (*(code *)PTR__ZN6uucore8features8checksum11detect_algo17hf5ee5896e94cf2e7E_0025ac38)
                (&local_90,"sha384sum",9,0);
      if (local_90 == (char *)0x0) goto LAB_00182527;
      local_50 = (undefined4)local_78;
      uStack_4c = local_78._4_4_;
      uStack_48 = (undefined4)uStack_70;
      uStack_44 = uStack_70._4_4_;
      local_68 = local_90;
      local_60 = local_88;
      local_58 = local_80;
      lVar2 = _ZN10uu_hashsum27create_algorithm_from_flags28__u7b__u7b_closure_u7d__u7d_17hbf9d7cdaa9aa6f90E
                        (&local_40,&local_68);
      if (lVar2 != 0) goto LAB_00182553;
    }
    cVar1 = (*(code *)
              PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_0025ac40
            )(param_2,"sha512",6);
    if (cVar1 != '\0') {
      (*(code *)PTR__ZN6uucore8features8checksum11detect_algo17hf5ee5896e94cf2e7E_0025ac38)
                (&local_90,"sha512sum",9,0);
      if (local_90 == (char *)0x0) goto LAB_00182527;
      local_50 = (undefined4)local_78;
      uStack_4c = local_78._4_4_;
      uStack_48 = (undefined4)uStack_70;
      uStack_44 = uStack_70._4_4_;
      local_68 = local_90;
      local_60 = local_88;
      local_58 = local_80;
      lVar2 = _ZN10uu_hashsum27create_algorithm_from_flags28__u7b__u7b_closure_u7d__u7d_17hbf9d7cdaa9aa6f90E
                        (&local_40,&local_68);
      if (lVar2 != 0) goto LAB_00182553;
    }
    cVar1 = (*(code *)
              PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_0025ac40
            )(param_2,"b2sum",5);
    if (cVar1 != '\0') {
      (*(code *)PTR__ZN6uucore8features8checksum11detect_algo17hf5ee5896e94cf2e7E_0025ac38)
                (&local_90,"b2sum",5,0);
      if (local_90 == (char *)0x0) goto LAB_00182527;
      local_50 = (undefined4)local_78;
      uStack_4c = local_78._4_4_;
      uStack_48 = (undefined4)uStack_70;
      uStack_44 = uStack_70._4_4_;
      local_68 = local_90;
      local_60 = local_88;
      local_58 = local_80;
      lVar2 = _ZN10uu_hashsum27create_algorithm_from_flags28__u7b__u7b_closure_u7d__u7d_17hbf9d7cdaa9aa6f90E
                        (&local_40,&local_68);
      if (lVar2 != 0) goto LAB_00182553;
    }
    cVar1 = (*(code *)
              PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_0025ac40
            )(param_2,"b3sum",5);
    if (cVar1 != '\0') {
      (*(code *)PTR__ZN6uucore8features8checksum11detect_algo17hf5ee5896e94cf2e7E_0025ac38)
                (&local_90,"b3sum",5,0);
      if (local_90 == (char *)0x0) goto LAB_00182527;
      local_50 = (undefined4)local_78;
      uStack_4c = local_78._4_4_;
      uStack_48 = (undefined4)uStack_70;
      uStack_44 = uStack_70._4_4_;
      local_68 = local_90;
      local_60 = local_88;
      local_58 = local_80;
      lVar2 = _ZN10uu_hashsum27create_algorithm_from_flags28__u7b__u7b_closure_u7d__u7d_17hbf9d7cdaa9aa6f90E
                        (&local_40,&local_68);
      if (lVar2 != 0) goto LAB_00182553;
    }
    cVar1 = (*(code *)
              PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_0025ac40
            )(param_2,&DAT_00111d18,4);
    if (cVar1 != '\0') {
      _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h0a57e03627a031faE
                (&local_90,param_2);
      auVar5 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h910b4fe3294f6236E(&local_90);
      uVar4 = auVar5._8_8_;
      puVar3 = auVar5._0_8_;
      if (puVar3 != (undefined8 *)0x0) {
        uVar4 = *puVar3;
      }
      (*(code *)PTR__ZN6uucore8features8checksum11create_sha317h99da0dd0a73781c3E_0025aee0)
                (&local_90,puVar3 != (undefined8 *)0x0,uVar4);
      if (local_90 == (char *)0x0) goto LAB_00182527;
      local_50 = (undefined4)local_78;
      uStack_4c = local_78._4_4_;
      uStack_48 = (undefined4)uStack_70;
      uStack_44 = uStack_70._4_4_;
      local_68 = local_90;
      local_60 = local_88;
      local_58 = local_80;
      lVar2 = _ZN10uu_hashsum27create_algorithm_from_flags28__u7b__u7b_closure_u7d__u7d_17hbf9d7cdaa9aa6f90E
                        (&local_40,&local_68);
      if (lVar2 != 0) goto LAB_00182553;
    }
    cVar1 = (*(code *)
              PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_0025ac40
            )(param_2,"sha3-224",8);
    if (cVar1 != '\0') {
      local_80 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h30a79606e34047a2E();
      local_90 = &DAT_00111f30;
      local_88 = 8;
      local_78 = &DAT_00251670;
      uStack_70 = 0xe0;
      lVar2 = _ZN10uu_hashsum27create_algorithm_from_flags28__u7b__u7b_closure_u7d__u7d_17hbf9d7cdaa9aa6f90E
                        (&local_40,&local_90);
      if (lVar2 != 0) goto LAB_00182553;
    }
    cVar1 = (*(code *)
              PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_0025ac40
            )(param_2,&DAT_00111f18,8);
    if (cVar1 != '\0') {
      local_80 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h30a79606e34047a2E();
      local_90 = &DAT_00111f38;
      local_88 = 8;
      local_78 = &DAT_002516a0;
      uStack_70 = 0x100;
      lVar2 = _ZN10uu_hashsum27create_algorithm_from_flags28__u7b__u7b_closure_u7d__u7d_17hbf9d7cdaa9aa6f90E
                        (&local_40,&local_90);
      if (lVar2 != 0) goto LAB_00182553;
    }
    cVar1 = (*(code *)
              PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_0025ac40
            )(param_2,"sha3-384",8);
    if (cVar1 != '\0') {
      local_80 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h30a79606e34047a2E();
      local_90 = "SHA3-384TrailingESTRPIPENotFoundTimedOut\x14";
      local_88 = 8;
      local_78 = &DAT_002516d0;
      uStack_70 = 0x180;
      lVar2 = _ZN10uu_hashsum27create_algorithm_from_flags28__u7b__u7b_closure_u7d__u7d_17hbf9d7cdaa9aa6f90E
                        (&local_40,&local_90);
      if (lVar2 != 0) goto LAB_00182553;
    }
    cVar1 = (*(code *)
              PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_0025ac40
            )(param_2,&DAT_00111e78,8);
    if (cVar1 != '\0') {
      local_80 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h30a79606e34047a2E();
      local_90 = "SHA3-512shake256\n       no-namesextern \"ENOTUNIQELIBEXECENOTSOCKsha3-512\x1c";
      local_88 = 8;
      local_78 = &DAT_00251700;
      uStack_70 = 0x200;
      lVar2 = _ZN10uu_hashsum27create_algorithm_from_flags28__u7b__u7b_closure_u7d__u7d_17hbf9d7cdaa9aa6f90E
                        (&local_40,&local_90);
      if (lVar2 != 0) goto LAB_00182553;
    }
    cVar1 = (*(code *)
              PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_0025ac40
            )(param_2,&DAT_00111f20,8);
    if (cVar1 == '\0') {
LAB_00182483:
      cVar1 = (*(code *)
                PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_0025ac40
              )(param_2,&DAT_00111e40,8);
      if (cVar1 == '\0') {
LAB_00182506:
        if (local_40 != 0) {
          param_1[3] = local_28;
          param_1[4] = lStack_20;
          param_1[1] = local_38;
          param_1[2] = lStack_30;
          *param_1 = local_40;
          return param_1;
        }
        lVar2 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h5151485f78da14f2E(0xe);
      }
      else {
        _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h0a57e03627a031faE
                  (&local_90,param_2);
        puVar3 = (undefined8 *)
                 _ZN12clap_builder6parser5error12MatchesError6unwrap17h910b4fe3294f6236E(&local_90);
        if (puVar3 == (undefined8 *)0x0) {
          lVar2 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h5151485f78da14f2E(7);
        }
        else {
          local_80 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h30a79606e34047a2E();
          uStack_70 = *puVar3;
          local_90 = &DAT_00111f68;
          local_88 = 8;
          local_78 = &DAT_002517e8;
          lVar2 = _ZN10uu_hashsum27create_algorithm_from_flags28__u7b__u7b_closure_u7d__u7d_17hbf9d7cdaa9aa6f90E
                            (&local_40,&local_90);
          if (lVar2 == 0) goto LAB_00182506;
        }
      }
    }
    else {
      _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h0a57e03627a031faE
                (&local_90,param_2);
      puVar3 = (undefined8 *)
               _ZN12clap_builder6parser5error12MatchesError6unwrap17h910b4fe3294f6236E(&local_90);
      if (puVar3 == (undefined8 *)0x0) {
        lVar2 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h5151485f78da14f2E(6);
      }
      else {
        local_80 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h30a79606e34047a2E();
        uStack_70 = *puVar3;
        local_90 = "SHAKE128";
        local_88 = 8;
        local_78 = &DAT_002517b8;
        lVar2 = _ZN10uu_hashsum27create_algorithm_from_flags28__u7b__u7b_closure_u7d__u7d_17hbf9d7cdaa9aa6f90E
                          (&local_40,&local_90);
        if (lVar2 == 0) goto LAB_00182483;
      }
    }
  }
  else {
    (*(code *)PTR__ZN6uucore8features8checksum11detect_algo17hf5ee5896e94cf2e7E_0025ac38)
              (&local_90,"md5sum",6,0);
    if (local_90 == (char *)0x0) {
LAB_00182527:
      param_1[1] = local_88;
      param_1[2] = local_80;
      goto LAB_00182562;
    }
    local_50 = (undefined4)local_78;
    uStack_4c = local_78._4_4_;
    uStack_48 = (undefined4)uStack_70;
    uStack_44 = uStack_70._4_4_;
    local_68 = local_90;
    local_60 = local_88;
    local_58 = local_80;
    lVar2 = _ZN10uu_hashsum27create_algorithm_from_flags28__u7b__u7b_closure_u7d__u7d_17hbf9d7cdaa9aa6f90E
                      (&local_40,&local_68);
    if (lVar2 == 0) goto LAB_00181e76;
  }
LAB_00182553:
  param_1[1] = lVar2;
  param_1[2] = (long)&DAT_00251750;
LAB_00182562:
  *param_1 = 0;
  _ZN4core3ptr90drop_in_place_LT_core__option__Option_LT_uucore__features__checksum__HashAlgorithm_GT__GT_17hb1b168fd0887dd2eE
            (&local_40);
  return param_1;
}