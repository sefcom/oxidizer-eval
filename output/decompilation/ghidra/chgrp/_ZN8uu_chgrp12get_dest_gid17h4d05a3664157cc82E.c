void _ZN8uu_chgrp12get_dest_gid17h4d05a3664157cc82E(undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  uint local_100;
  undefined4 uStack_fc;
  undefined8 uStack_f8;
  undefined8 local_f0;
  long local_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  uint local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_98;
  
  local_118 = 0;
  uStack_110 = 1;
  local_108 = 0;
                    /* try { // try from 0015fbce to 0015fd82 has its CatchHandler @ 0015fdbc */
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h3e938edac5a056f4E
            (&local_d8,param_2,"reference",9);
  lVar2 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h400a437e510a09d7E
                    ("reference",9,&local_d8);
  if (lVar2 == 0) {
    _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h3e938edac5a056f4E
              (&local_d8,param_2,"GROUP",5);
    lVar2 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h400a437e510a09d7E
                      ("GROUP",5,&local_d8);
    if (lVar2 == 0) {
      uVar3 = 1;
      lVar2 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(lVar2 + 8);
      lVar2 = *(long *)(lVar2 + 0x10);
    }
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h6ad19bc768aeb8f7E
              (&local_d8,uVar3,lVar2);
    local_108 = local_c8;
    local_118 = CONCAT44(uStack_d4,local_d8);
    uStack_110 = CONCAT44(uStack_cc,uStack_d0);
    uStack_dc = _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hde73add49f44b46dE(0,1);
    local_e0 = 0;
    if (lVar2 != 0) {
      _ZN8uu_chgrp18parse_gid_from_str17h3091fc49b902fbfcE(&local_100,uVar3,lVar2);
      local_c8 = local_f0;
      local_d8 = local_100;
      uStack_d4 = uStack_fc;
      uStack_d0 = (undefined4)uStack_f8;
      uStack_cc = uStack_f8._4_4_;
      local_c0 = 1;
      uVar3 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h80792f8261bee4f9E(&local_d8);
      *(undefined8 *)(param_1 + 4) = uVar3;
      *(undefined ***)(param_1 + 6) =
           &
           PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17haa4ce8b8fdd9170bE_001f4898
      ;
      *(undefined8 *)(param_1 + 2) = 0x8000000000000000;
      goto LAB_0015fda0;
    }
  }
  else {
    _ZN3std2fs8metadata17h7f84c2225e5a3fecE(&local_d8,lVar2);
    bVar4 = local_d8 != 2;
    if (bVar4) {
      uVar1 = _ZN8uu_chgrp12get_dest_gid28__u7b__u7b_closure_u7d__u7d_17h2a08498cce2049c6E
                        (&local_118,local_98);
      uStack_fc = 1;
      uStack_f8 = CONCAT44(uStack_f8._4_4_,uVar1);
    }
    else {
      uStack_f8 = CONCAT44(uStack_cc,uStack_d0);
    }
    local_100 = (uint)!bVar4;
    _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17ha9d3aa68c90c43caE
              (&local_e8,&local_100,*(undefined8 *)(lVar2 + 8),*(undefined8 *)(lVar2 + 0x10));
    if (local_e8 != 0) {
      *(long *)(param_1 + 4) = local_e8;
      *(ulong *)(param_1 + 6) = CONCAT44(uStack_dc,local_e0);
      *(undefined8 *)(param_1 + 2) = 0x8000000000000000;
LAB_0015fda0:
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hde73add49f44b46dE
                (local_118,uStack_110);
      return;
    }
  }
  *(undefined8 *)(param_1 + 6) = local_108;
  *(undefined8 *)(param_1 + 2) = local_118;
  *(undefined8 *)(param_1 + 4) = uStack_110;
  *param_1 = local_e0;
  param_1[1] = uStack_dc;
  return;
}