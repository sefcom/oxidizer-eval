long * _ZN7uu_stat6Stater3new17hf7bef9b18037fce5E(long *param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  char cVar4;
  undefined uVar5;
  undefined uVar6;
  long lVar7;
  long lVar8;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  long local_138;
  long local_130;
  long local_128;
  long local_120;
  long local_118;
  long local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined4 local_f0;
  long local_c0;
  long lStack_b8;
  long lStack_b0;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  long local_98;
  long local_88;
  long local_80;
  long local_78;
  long local_70 [8];
  
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17h97bb3de9165840fcE
            (&local_108);
  _ZN12clap_builder6parser5error12MatchesError6unwrap17h764dae6f0238603fE(local_70,&local_108);
  if (local_70[0] == 0) {
LAB_00175fb3:
    local_c0 = 0;
    lStack_b8 = 8;
    lStack_b0 = 0;
LAB_00175fd7:
                    /* try { // try from 00175fd7 to 001761aa has its CatchHandler @ 001764a5 */
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h1259f2eee6e0998aE
              (&local_148,"missing operand\nTry \'stat --help\' for more information.",0x37);
    uStack_f8 = local_138;
    local_108 = CONCAT44(uStack_144,local_148);
    uStack_100 = CONCAT44(uStack_13c,uStack_140);
    local_f0 = 1;
    lVar7 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h173a34a4352a059dE(&local_108);
    param_1[1] = lVar7;
    param_1[2] = (long)&
                       PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17ha0121f635ad8d572E_00219a38
    ;
  }
  else {
    _ZN4core4iter6traits8iterator8Iterator7collect17h61a8f821538b3ebeE(&local_108,local_70);
    local_c0 = local_108;
    local_148 = (undefined4)uStack_100;
    uStack_144 = uStack_100._4_4_;
    uStack_140 = (undefined4)uStack_f8;
    uStack_13c = uStack_f8._4_4_;
    if (local_108 == -0x8000000000000000) goto LAB_00175fb3;
    lStack_b8 = uStack_100;
    lStack_b0 = uStack_f8;
    if (uStack_f8 == 0) goto LAB_00175fd7;
    cVar4 = (*(code *)
              PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches11contains_id17h5efeb7e2d2f22590E_002222c0
            )(param_2,"printf",6);
    if (cVar4 == '\0') {
      _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h240e0a37f9b20972E
                (&local_108,param_2,"format");
      lVar7 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h0c141a8c310d1e76E
                        ("format",&local_108);
      if (lVar7 == 0) {
        lVar8 = 0;
        local_110 = 0;
      }
      else {
        lVar8 = *(long *)(lVar7 + 8);
        local_110 = *(long *)(lVar7 + 0x10);
      }
      if (lVar8 == 0) {
        local_110 = 0;
      }
      lVar7 = 1;
      if (lVar8 != 0) {
        lVar7 = lVar8;
      }
    }
    else {
      _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h240e0a37f9b20972E
                (&local_108,param_2,"printf");
      lVar7 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h0c141a8c310d1e76E
                        ("printf",&local_108);
      if (lVar7 == 0) {
                    /* try { // try from 001763ee to 00176406 has its CatchHandler @ 001764a5 */
        (*(code *)PTR__ZN4core6option13expect_failed17h3f620cfb8545dc61E_00222100)
                  ("Invalid format string",0x15,&PTR_s_src_uu_stat_src_stat_rs_00219f80);
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      local_110 = *(long *)(lVar7 + 0x10);
      lVar7 = *(long *)(lVar7 + 8);
    }
    uVar5 = (*(code *)
              PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches11contains_id17h5efeb7e2d2f22590E_002222c0
            )(param_2,"printf",6);
    uVar6 = (*(code *)
              PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_002222c8
            )(param_2,"terse",5);
    cVar4 = (*(code *)
              PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_002222c8
            )(param_2,"file-system",0xb);
    if (local_110 == 0) {
      _ZN7uu_stat6Stater14default_format17h2dd040e5543d36f9E(&local_108,cVar4,uVar6,0);
                    /* try { // try from 001761b5 to 001761c2 has its CatchHandler @ 0017644d */
      _ZN7uu_stat6Stater15generate_tokens17hafb5d93f144f9d1eE(&local_148,uStack_100,uStack_f8,uVar5)
      ;
      lVar7 = local_138;
      local_128 = CONCAT44(uStack_144,local_148);
      if (local_128 == -0x8000000000000000) {
        param_1[1] = CONCAT44(uStack_13c,uStack_140);
        param_1[2] = local_138;
        *param_1 = -0x8000000000000000;
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h44f04a5137e020d4E(&local_108);
        goto LAB_00176025;
      }
      local_130 = CONCAT44(uStack_13c,uStack_140);
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h44f04a5137e020d4E(&local_108);
LAB_0017620c:
                    /* try { // try from 0017620c to 00176223 has its CatchHandler @ 0017647e */
      _ZN7uu_stat6Stater14default_format17h2dd040e5543d36f9E(&local_108,cVar4,uVar6,1);
                    /* try { // try from 0017622e to 0017623b has its CatchHandler @ 0017646f */
      _ZN7uu_stat6Stater15generate_tokens17hafb5d93f144f9d1eE(&local_148,uStack_100,uStack_f8,uVar5)
      ;
      lVar8 = local_138;
      local_118 = CONCAT44(uStack_144,local_148);
      if (local_118 == -0x8000000000000000) {
        param_1[1] = CONCAT44(uStack_13c,uStack_140);
        param_1[2] = local_138;
        *param_1 = -0x8000000000000000;
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h44f04a5137e020d4E(&local_108);
      }
      else {
        local_120 = CONCAT44(uStack_13c,uStack_140);
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h44f04a5137e020d4E(&local_108);
        if (cVar4 != '\0') {
          local_a8 = -0x8000000000000000;
LAB_00176364:
                    /* try { // try from 00176364 to 00176378 has its CatchHandler @ 00176427 */
          uVar5 = (*(code *)
                    PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_002222c8
                  )(param_2,"dereference",0xb);
          param_1[2] = lStack_b0;
          *param_1 = local_c0;
          param_1[1] = lStack_b8;
          param_1[9] = local_a8;
          param_1[10] = CONCAT44(uStack_9c,uStack_a0);
          param_1[0xb] = local_98;
          param_1[3] = local_128;
          param_1[4] = local_130;
          param_1[5] = lVar7;
          param_1[6] = local_118;
          param_1[7] = local_120;
          param_1[8] = lVar8;
          *(undefined *)(param_1 + 0xc) = uVar5;
          *(char *)((long)param_1 + 0x61) = cVar4;
          *(bool *)((long)param_1 + 0x62) = local_110 != 0;
          return param_1;
        }
                    /* try { // try from 001762a1 to 001762d3 has its CatchHandler @ 00176439 */
        (*(code *)PTR__ZN6uucore8features5fsext12read_fs_list17h6f122f433e9b10c6E_002222d0)
                  (&local_88);
        if (local_88 != -0x8000000000000000) {
          local_108 = local_88;
          uStack_100 = local_80;
          uStack_f8 = local_78;
                    /* try { // try from 00176313 to 0017631f has its CatchHandler @ 00176409 */
          _ZN4core4iter6traits8iterator8Iterator7collect17h584a9aedd2c4ca7aE
                    (&local_148,local_80,local_78 * 0x98 + local_80);
          _ZN4core3ptr78drop_in_place_LT_alloc__vec__Vec_LT_uucore__features__fsext__MountInfo_GT__GT_17h434567c17f904e59E
                    (&local_108);
          lVar3 = local_138;
          uVar2 = CONCAT44(uStack_13c,uStack_140);
                    /* try { // try from 00176334 to 00176349 has its CatchHandler @ 00176418 */
          _ZN5alloc5slice11stable_sort17h61594ff5ae92828dE(uVar2,local_138);
          _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_7reverse17h9eae5c74aeddd1f8E(uVar2,lVar3);
          local_98 = local_138;
          local_a8 = CONCAT44(uStack_144,local_148);
          uStack_a0 = uStack_140;
          uStack_9c = uStack_13c;
          goto LAB_00176364;
        }
        lVar7 = _ZN7uu_stat6Stater3new28__u7b__u7b_closure_u7d__u7d_17h243deef8a3840657E(local_80);
        param_1[1] = lVar7;
        param_1[2] = (long)&
                           PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17ha0121f635ad8d572E_00219a38
        ;
        *param_1 = -0x8000000000000000;
        _ZN4core3ptr58drop_in_place_LT_alloc__vec__Vec_LT_uu_stat__Token_GT__GT_17h3cf71f1ca7f8d943E
                  (local_118,local_120);
      }
      _ZN4core3ptr58drop_in_place_LT_alloc__vec__Vec_LT_uu_stat__Token_GT__GT_17h3cf71f1ca7f8d943E
                (local_128,local_130);
      goto LAB_00176025;
    }
    _ZN7uu_stat6Stater15generate_tokens17hafb5d93f144f9d1eE(&local_108,lVar7,local_110,uVar5);
    local_128 = local_108;
    if (local_108 != -0x8000000000000000) {
      local_130 = uStack_100;
      lVar7 = uStack_f8;
      goto LAB_0017620c;
    }
    param_1[1] = uStack_100;
    param_1[2] = uStack_f8;
  }
  *param_1 = -0x8000000000000000;
LAB_00176025:
  _ZN4core3ptr70drop_in_place_LT_alloc__vec__Vec_LT_std__ffi__os_str__OsString_GT__GT_17he5ceda648946ad06E
            (&local_c0);
  return param_1;
}