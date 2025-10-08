ulong * _ZN9uu_mktemp7Options4from17h9e8f44a051439882E(ulong *param_1,undefined8 param_2)

{
  bool bVar1;
  ulong uVar2;
  char cVar3;
  undefined uVar4;
  undefined uVar5;
  undefined uVar6;
  undefined uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 local_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  ulong uStack_a8;
  ulong local_98;
  ulong uStack_90;
  ulong local_88;
  ulong local_78;
  undefined8 uStack_70;
  ulong local_68;
  ulong local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulong local_48;
  ulong uStack_40;
  
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h789cfa99835b6965E
            (&local_e0,param_2,"tmpdir",6);
  uVar8 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h12ab4f930c67ffa3E
                    ("tmpdir",6,&local_e0);
  lVar9 = _ZN4core6option15Option_LT_T_GT_7or_else17h248713d5b765eca6E(uVar8,param_2);
  if (lVar9 == 0) {
    local_60 = 0x8000000000000000;
  }
  else {
    _ZN67__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__clone__Clone_GT_5clone17h5e9a9c3d89a1dce2E
              (&local_60,*(undefined8 *)(lVar9 + 8),*(undefined8 *)(lVar9 + 0x10));
  }
                    /* try { // try from 0016479f to 001648b0 has its CatchHandler @ 00164b12 */
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17hf4be33f6152294d1E
            (&local_e0,param_2,"template",8);
  lVar9 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h948cd45e5aec830eE
                    ("template",8,&local_e0);
  if (lVar9 == 0) {
    if (local_60 == 0x8000000000000000) {
      (*(code *)PTR__ZN3std3env8temp_dir17h4c6b7a08795666f1E_00200128)(&local_e0);
    }
    else {
      uStack_d8 = local_58;
      uStack_d4 = uStack_54;
      local_d0 = uStack_50;
      uStack_cc = uStack_4c;
      local_e0 = local_60;
    }
    uStack_a8 = CONCAT44(uStack_cc,local_d0);
    local_b8 = local_e0;
    uStack_b0 = CONCAT44(uStack_d4,uStack_d8);
                    /* try { // try from 00164943 to 00164958 has its CatchHandler @ 00164ab8 */
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h3c498dae33407f89E
              (&local_e0,"tmp.XXXXXXXXXX",0xe);
    local_68 = CONCAT44(uStack_cc,local_d0);
    uStack_70 = CONCAT44(uStack_d4,uStack_d8);
    bVar1 = false;
    goto LAB_00164987;
  }
  _ZN3std3env3var17hf86fc8a5cc8e1c21E(&local_e0);
  uVar2 = local_e0;
  _ZN4core3ptr91drop_in_place_LT_core__result__Result_LT_alloc__string__String_C_std__env__VarError_GT__GT_17hed0475f018d949a2E
            (&local_e0);
  if (((uVar2 & 1) == 0) &&
     (cVar3 = (*(code *)
                PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_00200120
              )(param_2,"t",1), cVar3 != '\0')) {
    _ZN3std3env6var_os17hdb714acdd43fad0eE(&local_e0);
    if (local_e0 != 0x8000000000000000) {
LAB_00164885:
      local_48 = CONCAT44(uStack_d4,uStack_d8);
      uStack_40 = CONCAT44(uStack_cc,local_d0);
    }
    bVar1 = true;
    local_b8 = local_e0;
  }
  else {
    if (local_60 == 0x8000000000000000) {
      cVar3 = (*(code *)
                PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_00200120
              )(param_2,"t",1);
      if (cVar3 == '\0') {
        cVar3 = (*(code *)
                  PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches11contains_id17h5efeb7e2d2f22590E_001fff38
                )(param_2,"tmpdir",6);
        local_b8 = 0x8000000000000000;
        bVar1 = true;
        if (cVar3 == '\0') goto LAB_001648c6;
      }
      (*(code *)PTR__ZN3std3env8temp_dir17h4c6b7a08795666f1E_00200128)(&local_e0);
      goto LAB_00164885;
    }
    local_48 = CONCAT44(uStack_54,local_58);
    uStack_40 = CONCAT44(uStack_4c,uStack_50);
    bVar1 = false;
    local_b8 = local_60;
  }
LAB_001648c6:
  uStack_b0 = local_48;
  uStack_a8 = uStack_40;
                    /* try { // try from 001648d8 to 001648e5 has its CatchHandler @ 00164ac2 */
  (*(code *)
    PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h94782b8343b62bd8E_00200130
  )(&local_e0,lVar9);
  uStack_70 = CONCAT44(uStack_d4,uStack_d8);
  local_68 = CONCAT44(uStack_cc,local_d0);
LAB_00164987:
                    /* try { // try from 00164987 to 001649ca has its CatchHandler @ 00164af9 */
  local_98 = local_b8;
  uStack_90 = uStack_b0;
  local_88 = uStack_a8;
  local_78 = local_e0;
  uVar4 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_00200120
          )(param_2,"directory",9);
  uVar5 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_00200120
          )(param_2,"dry-run",7);
  uVar6 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_00200120
          )(param_2,"quiet",5);
                    /* try { // try from 001649cb to 00164a0f has its CatchHandler @ 00164ae0 */
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17hf4be33f6152294d1E
            (&local_e0,param_2,"suffix",6);
  lVar9 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h948cd45e5aec830eE
                    ("suffix",6,&local_e0);
  if (lVar9 == 0) {
    local_b8._0_4_ = 0;
    local_b8._4_4_ = 0x80000000;
  }
  else {
    (*(code *)
      PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h94782b8343b62bd8E_00200130
    )(&local_e0,lVar9);
    uStack_a8 = CONCAT44(uStack_cc,local_d0);
    local_b8._0_4_ = (undefined4)local_e0;
    local_b8._4_4_ = local_e0._4_4_;
    uStack_b0 = CONCAT44(uStack_d4,uStack_d8);
  }
                    /* try { // try from 00164a35 to 00164a49 has its CatchHandler @ 00164ad1 */
  uVar7 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_00200120
          )(param_2,"t",1);
  param_1[2] = local_68;
  *param_1 = local_78;
  param_1[1] = uStack_70;
  *(undefined *)(param_1 + 9) = uVar4;
  *(undefined *)((long)param_1 + 0x49) = uVar5;
  *(undefined *)((long)param_1 + 0x4a) = uVar6;
  param_1[3] = local_98;
  param_1[4] = uStack_90;
  param_1[5] = local_88;
  *(undefined4 *)(param_1 + 6) = (undefined4)local_b8;
  *(undefined4 *)((long)param_1 + 0x34) = local_b8._4_4_;
  *(undefined4 *)(param_1 + 7) = (undefined4)uStack_b0;
  *(undefined4 *)((long)param_1 + 0x3c) = uStack_b0._4_4_;
  param_1[8] = uStack_a8;
  *(undefined *)((long)param_1 + 0x4b) = uVar7;
  if (bVar1) {
    _ZN4core3ptr67drop_in_place_LT_core__option__Option_LT_std__path__PathBuf_GT__GT_17h92010b458ccdc0ceE
              (&local_60);
  }
  return param_1;
}