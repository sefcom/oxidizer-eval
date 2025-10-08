undefined8 * _ZN6uu_ptx10get_config17h0871b6c26e5986f1E(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  char cVar3;
  undefined uVar4;
  byte bVar5;
  undefined8 uVar6;
  long lVar7;
  undefined **ppuVar8;
  undefined local_d0 [8];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  char local_98;
  undefined local_97;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined *puStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined local_2c;
  undefined local_2b;
  undefined2 local_2a;
  
  (*(code *)
    PTR__ZN57__LT_uu_ptx__Config_u20_as_u20_core__default__Default_GT_7default17hd765301625a6e0fdE_003800e8
  )(&local_88);
                    /* try { // try from 0022b3ef to 0022b8f6 has its CatchHandler @ 0022b8f9 */
  cVar3 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_003802a8
          )(param_2,"traditional",0xb);
  if (cVar3 == '\0') {
    uStack_c0 = "GNU extensions";
    local_b8 = (undefined *)0xe;
    local_c8 = (undefined **)CONCAT71(local_c8._1_7_,1);
    uVar6 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h2875cf048a4ad78bE(&local_c8);
    goto LAB_0022b48c;
  }
  local_30 = local_30 & 0xffffff00;
  local_2b = 1;
  _ZN5alloc3str56__LT_impl_u20_alloc__borrow__ToOwned_u20_for_u20_str_GT_10clone_into17h29d41bfe54f0b37fE
            (&local_58);
  cVar3 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches11contains_id17h5efeb7e2d2f22590E_00380298
          )(param_2,"sentence-regexp",0xf);
  if (cVar3 != '\0') {
    uStack_c0 = "-S:";
    local_b8 = (undefined *)0x2;
    local_c8 = (undefined **)CONCAT71(local_c8._1_7_,1);
    uVar6 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h2875cf048a4ad78bE(&local_c8);
    goto LAB_0022b48c;
  }
  uVar4 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_003802a8
          )(param_2,"auto-reference",0xe);
  local_30._0_2_ = CONCAT11(uVar4,(undefined)local_30);
  uVar4 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_003802a8
          )(param_2,"references",10);
  local_30._0_3_ = CONCAT12(uVar4,(undefined2)local_30);
  bVar5 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_003802a8
          )(param_2,"right-side-refs",0xf);
  local_30 = CONCAT13(local_30._3_1_ & bVar5,(undefined3)local_30);
  local_2c = (*(code *)
               PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_003802a8
             )(param_2,"ignore-case",0xb);
  cVar3 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches11contains_id17h5efeb7e2d2f22590E_00380298
          )(param_2,"macro-name",10);
  if (cVar3 == '\0') {
LAB_0022b5b1:
    cVar3 = (*(code *)
              PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches11contains_id17h5efeb7e2d2f22590E_00380298
            )(param_2,"flag-truncation",0xf);
    if (cVar3 != '\0') {
      _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h88d1a3ba1868cd68E
                (&local_c8,param_2,"flag-truncation",0xf);
      lVar7 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h04f490a5ade46ed0E
                        ("flag-truncation",0xf,&local_c8);
      if (lVar7 == 0) {
        ppuVar8 = &PTR_s_src_uu_ptx_src_ptx_rs_00351818;
        goto LAB_0022b8aa;
      }
      (*(code *)
        PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h94782b8343b62bd8E_0037fed8
      )(&local_c8,lVar7);
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hdf1f386795eaa8a5E(&uStack_70);
      puStack_60 = local_b8;
      uStack_70 = (undefined4)local_c8;
      uStack_6c = local_c8._4_4_;
      uStack_68 = (undefined4)uStack_c0;
      uStack_64 = uStack_c0._4_4_;
    }
    cVar3 = (*(code *)
              PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches11contains_id17h5efeb7e2d2f22590E_00380298
            )(param_2,"width",5);
    if (cVar3 != '\0') {
      _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h88d1a3ba1868cd68E
                (&local_c8,param_2,"width",5);
      lVar7 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h04f490a5ade46ed0E
                        ("width",5,&local_c8);
      if (lVar7 == 0) {
        ppuVar8 = &PTR_s_src_uu_ptx_src_ptx_rs_00351830;
        goto LAB_0022b8aa;
      }
      _ZN4core3num23__LT_impl_u20_usize_GT_16from_ascii_radix17he77532141bbadde7E
                (&local_98,*(undefined8 *)(lVar7 + 8),*(undefined8 *)(lVar7 + 0x10));
      if (local_98 == '\x01') {
        local_c8._0_2_ = CONCAT11(local_97,2);
        uVar6 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h2875cf048a4ad78bE(&local_c8);
        goto LAB_0022b48c;
      }
      uStack_40 = local_90;
    }
    cVar3 = (*(code *)
              PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches11contains_id17h5efeb7e2d2f22590E_00380298
            )(param_2,&DAT_001525d8,8);
    if (cVar3 != '\0') {
      _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h88d1a3ba1868cd68E
                (&local_c8,param_2,&DAT_001525d8,8);
      lVar7 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h04f490a5ade46ed0E
                        (&DAT_001525d8,8,&local_c8);
      if (lVar7 == 0) {
        ppuVar8 = &PTR_s_src_uu_ptx_src_ptx_rs_00351848;
        goto LAB_0022b8aa;
      }
      _ZN4core3num23__LT_impl_u20_usize_GT_16from_ascii_radix17he77532141bbadde7E
                (&local_98,*(undefined8 *)(lVar7 + 8),*(undefined8 *)(lVar7 + 0x10));
      if (local_98 != '\0') {
        local_c8._0_2_ = CONCAT11(local_97,2);
        uVar6 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h2875cf048a4ad78bE(&local_c8);
LAB_0022b48c:
        param_1[1] = uVar6;
        param_1[2] = &DAT_00351798;
        *param_1 = 0x8000000000000000;
        _ZN4core3ptr35drop_in_place_LT_uu_ptx__Config_GT_17h513a670c84b922c8E(&local_88);
        return param_1;
      }
      local_38 = local_90;
    }
    _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h88d1a3ba1868cd68E
              (&local_c8,param_2,"format",6);
    lVar7 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h04f490a5ade46ed0E
                      ("format",6,&local_c8);
    uVar4 = local_2b;
    if (lVar7 != 0) {
      uVar6 = *(undefined8 *)(lVar7 + 8);
      uVar1 = *(undefined8 *)(lVar7 + 0x10);
      cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hc639eb17d6278023E
                        (uVar6,uVar1,"roff",4);
      uVar4 = 1;
      if (cVar3 == '\0') {
        cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hc639eb17d6278023E
                          (uVar6,uVar1,"tex",3);
        uVar4 = 2;
        if (cVar3 == '\0') {
          local_c8 = &PTR_s_internal_error__entered_unreacha_00351768;
          uStack_c0 = (char *)0x1;
          local_b8 = local_d0;
          local_b0 = 0;
          uStack_a8 = 0;
          (*(code *)PTR__ZN4core9panicking9panic_fmt17h96f341d36638c225E_0037fee8)
                    (&local_c8,&PTR_s_src_uu_ptx_src_ptx_rs_00351860);
          goto LAB_0022b8f7;
        }
      }
    }
    local_2b = uVar4;
    cVar3 = (*(code *)
              PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_003802a8
            )(param_2,"roff",4);
    if (cVar3 != '\0') {
      local_2b = 1;
    }
    cVar3 = (*(code *)
              PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_003802a8
            )(param_2,"tex",3);
    if (cVar3 != '\0') {
      local_2b = 2;
    }
    param_1[10] = local_38;
    *(uint *)(param_1 + 0xb) = local_30;
    *(undefined *)((long)param_1 + 0x5c) = local_2c;
    *(undefined *)((long)param_1 + 0x5d) = local_2b;
    *(undefined2 *)((long)param_1 + 0x5e) = local_2a;
    param_1[8] = local_48;
    param_1[9] = uStack_40;
    param_1[6] = local_58;
    param_1[7] = uStack_50;
    param_1[4] = CONCAT44(uStack_64,uStack_68);
    param_1[5] = puStack_60;
    param_1[2] = local_78;
    param_1[3] = CONCAT44(uStack_6c,uStack_70);
    *param_1 = CONCAT44(uStack_84,local_88);
    param_1[1] = CONCAT44(uStack_7c,uStack_80);
    return param_1;
  }
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h88d1a3ba1868cd68E
            (&local_c8,param_2,"macro-name",10);
  lVar7 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h04f490a5ade46ed0E
                    ("macro-name",10,&local_c8);
  if (lVar7 != 0) {
    (*(code *)
      PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h94782b8343b62bd8E_0037fed8
    )(&local_c8,lVar7);
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hdf1f386795eaa8a5E(&local_88);
    local_78 = local_b8;
    local_88 = (undefined4)local_c8;
    uStack_84 = local_c8._4_4_;
    uStack_80 = (undefined4)uStack_c0;
    uStack_7c = uStack_c0._4_4_;
    goto LAB_0022b5b1;
  }
  ppuVar8 = &PTR_s_src_uu_ptx_src_ptx_rs_00351800;
LAB_0022b8aa:
  (*(code *)PTR__ZN4core6option13expect_failed17h3f620cfb8545dc61E_0037ff10)
            ("parsing options failed",0x16,ppuVar8);
LAB_0022b8f7:
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}