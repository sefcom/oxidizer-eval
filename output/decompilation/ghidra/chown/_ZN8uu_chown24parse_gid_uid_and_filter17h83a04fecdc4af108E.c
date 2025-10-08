ulong * _ZN8uu_chown24parse_gid_uid_and_filter17h83a04fecdc4af108E
                  (ulong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong *puVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined4 local_268;
  undefined4 local_25c;
  ulong local_258;
  ulong local_250;
  ulong local_248;
  ulong local_240;
  ulong local_238;
  ulong local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 local_208;
  ulong local_178;
  ulong local_170;
  ulong local_168;
  ulong *local_160;
  code *local_158;
  ulong *puStack_150;
  code *local_148;
  uint local_124;
  undefined4 local_120;
  long local_b0;
  ulong local_a8;
  
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h5935285ab4a5747dE
            (&local_228,param_2,"from",4);
  lVar2 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h9b44e677d9dc182bE
                    ("from",4,&local_228);
  if (lVar2 == 0) {
    iVar6 = 0;
    local_268 = 0;
  }
  else {
    _ZN8uu_chown10parse_spec17h35c2058a4fb20997E
              (&local_228,*(undefined8 *)(lVar2 + 8),*(undefined8 *)(lVar2 + 0x10),0x3a);
    if ((int)local_228 == 1) {
      param_1[1] = local_220;
      param_1[2] = (ulong)uStack_218;
      *param_1 = 0x8000000000000000;
      return param_1;
    }
    local_25c = (undefined4)uStack_218;
    uVar5 = (uint)(local_220 >> 0x20);
    if (((ulong)local_228 & 0x100000000) == 0) {
      iVar6 = (uVar5 & 1) * 2;
      local_268 = (undefined4)uStack_218;
    }
    else {
      local_268 = (undefined4)local_220;
      iVar6 = (uVar5 & 1) * 2 + 1;
    }
  }
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h5935285ab4a5747dE
            (&local_228,param_2,"reference",9);
  lVar2 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h9b44e677d9dc182bE
                    ("reference",9,&local_228);
  if (lVar2 == 0) {
    _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h5935285ab4a5747dE
              (&local_228,param_2,"OWNER",5);
    lVar2 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h9b44e677d9dc182bE
                      ("OWNER",5,&local_228);
    if (lVar2 == 0) {
      uVar3 = (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_001fd010)
                        (&PTR_s_src_uu_chown_src_chown_rs_001f5ee0);
                    /* catch() { ... } // from try @ 00160b52 with catch @ 00160bf3 */
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h98a49a101b406adaE
                (local_240,local_238);
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h98a49a101b406adaE
                (local_258,local_250);
      puVar4 = (ulong *)_Unwind_Resume(uVar3);
      return puVar4;
    }
    (*(code *)
      PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h94782b8343b62bd8E_001fcee8
    )(&local_228,lVar2);
    uVar8 = (ulong)uStack_218;
    uVar9 = local_220;
    uVar7 = (ulong)local_228;
                    /* try { // try from 001609dc to 001609f0 has its CatchHandler @ 00160c07 */
    _ZN8uu_chown10parse_spec17h35c2058a4fb20997E(&local_228,local_220,uStack_218,0x3a);
    if (((ulong)local_228 & 1) != 0) {
      *(undefined4 *)(param_1 + 1) = (undefined4)local_220;
      *(undefined4 *)((long)param_1 + 0xc) = local_220._4_4_;
      *(undefined4 *)(param_1 + 2) = (undefined4)uStack_218;
      *(undefined4 *)((long)param_1 + 0x14) = uStack_218._4_4_;
      *param_1 = 0x8000000000000000;
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h98a49a101b406adaE(uVar7,uVar9);
      return param_1;
    }
    local_120 = (undefined4)uStack_218;
    uVar1 = local_220._4_4_;
  }
  else {
    _ZN3std2fs8metadata17h235a34ba4fc3f8eaE(&local_228,lVar2);
    _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17hd465c1b746ec1c17E
              (&local_160,&local_228,*(undefined8 *)(lVar2 + 8),*(undefined8 *)(lVar2 + 0x10));
    if ((int)local_160 == 2) {
      param_1[1] = (ulong)local_158;
      param_1[2] = (ulong)puStack_150;
      *param_1 = 0x8000000000000000;
      return param_1;
    }
    (*(code *)
      PTR__ZN98__LT_uucore__features__entries__Passwd_u20_as_u20_uucore__features__entries__Locate_LT_u32_GT__GT_6locate17h5d0bb482984d9c00E_001fd000
    )(&local_b0,(ulong)local_124);
    if ((local_b0 == -0x8000000000000000) ||
       (_ZN6uucore8features7entries7uid2usr28__u7b__u7b_closure_u7d__u7d_17h8535064aed5e7fd9E
                  (&local_228,&local_b0), local_a8 = local_220,
       local_228 == (undefined *)0x8000000000000000)) {
      _ZN8uu_chown24parse_gid_uid_and_filter28__u7b__u7b_closure_u7d__u7d_17h18486d473721014cE
                (&local_258,local_124,local_a8);
    }
    else {
      local_258 = (ulong)local_228;
      local_250 = local_220;
      local_248 = (ulong)uStack_218;
    }
                    /* try { // try from 00160ab0 to 00160ad9 has its CatchHandler @ 00160c1d */
    (*(code *)
      PTR__ZN97__LT_uucore__features__entries__Group_u20_as_u20_uucore__features__entries__Locate_LT_u32_GT__GT_6locate17hf537d3ad4e514fa6E_001fd008
    )(&local_228,local_120);
    if (local_228 == (undefined *)0x8000000000000000) {
      _ZN8uu_chown24parse_gid_uid_and_filter28__u7b__u7b_closure_u7d__u7d_17h18486d473721014cE
                (&local_240,local_120);
    }
    else {
      local_240 = (ulong)local_228;
      local_238 = local_220;
      local_230 = (ulong)uStack_218;
    }
    local_160 = &local_258;
    local_158 = 
    _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
    puStack_150 = &local_240;
    local_148 = 
    _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
    local_228 = &DAT_001f5ec0;
    local_220 = 2;
    local_208 = 0;
    local_210 = 2;
                    /* try { // try from 00160b52 to 00160b63 has its CatchHandler @ 00160bf3 */
    uStack_218 = &local_160;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17h4bc4c2e4ba7ee2f5E(&local_178,&local_228);
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h98a49a101b406adaE
              (local_240,local_238);
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h98a49a101b406adaE
              (local_258,local_250);
    local_228._4_4_ = 1;
    uVar7 = local_178;
    uVar8 = local_168;
    local_220 = (ulong)local_124;
    uVar9 = local_170;
    uVar1 = 1;
  }
  *param_1 = uVar7;
  param_1[1] = uVar9;
  param_1[2] = uVar8;
  *(undefined4 *)(param_1 + 3) = uVar1;
  *(undefined4 *)((long)param_1 + 0x1c) = local_120;
  *(undefined4 *)(param_1 + 4) = local_228._4_4_;
  *(int *)((long)param_1 + 0x24) = (int)local_220;
  *(int *)(param_1 + 5) = iVar6;
  *(undefined4 *)((long)param_1 + 0x2c) = local_268;
  *(undefined4 *)(param_1 + 6) = local_25c;
  return param_1;
}