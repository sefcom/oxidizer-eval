undefined8 *
_ZN5uu_nl6helper13parse_options17h86152a37c7326ed9E
          (undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined uVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 **local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  long local_88;
  long *local_80;
  code *local_78;
  long local_70;
  undefined8 local_68;
  undefined8 local_60;
  long local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_c0 = 0;
  uStack_b8 = 8;
  local_b0 = 0;
                    /* try { // try from 0021a964 to 0021ab0f has its CatchHandler @ 0021ae8d */
  uVar1 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_00368420
          )(param_3,"no-renumber",0xb);
  *(undefined *)(param_2 + 0x80) = uVar1;
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17hca7a20bc0e604664E
            (&local_f8,param_3,"section-delimiter",0x11);
  lVar2 = _ZN12clap_builder6parser5error12MatchesError6unwrap17hb382f568f88ddf47E
                    ("section-delimiter",0x11,&local_f8);
  if (lVar2 != 0) {
    local_88 = lVar2;
    if (*(long *)(lVar2 + 0x10) == 1) {
      local_80 = &local_88;
      local_78 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h5cdd61892d989db2E;
      local_f8 = &DAT_0033a158;
      uStack_f0 = 2;
      local_d8 = 0;
      local_e8 = &local_80;
      local_e0 = 1;
      _ZN4core6option15Option_LT_T_GT_11map_or_else17h612ba33885ce226bE(&local_a8,&local_f8);
      local_f8 = (undefined *)CONCAT44(uStack_a4,local_a8);
      uStack_f0 = CONCAT44(uStack_9c,uStack_a0);
      local_e8 = (undefined8 **)local_98;
    }
    else {
      (*(code *)
        PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h94782b8343b62bd8E_003680e8
      )(&local_f8,lVar2);
    }
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hc2399c3ebe619759E(param_2 + 0x30);
    *(undefined8 ***)(param_2 + 0x40) = local_e8;
    *(undefined4 *)(param_2 + 0x30) = (undefined4)local_f8;
    *(undefined4 *)(param_2 + 0x34) = local_f8._4_4_;
    *(undefined4 *)(param_2 + 0x38) = (undefined4)uStack_f0;
    *(undefined4 *)(param_2 + 0x3c) = uStack_f0._4_4_;
  }
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17hca7a20bc0e604664E
            (&local_f8,param_3,&DAT_0014ecf0,0x10);
  lVar2 = _ZN12clap_builder6parser5error12MatchesError6unwrap17hb382f568f88ddf47E
                    (&DAT_0014ecf0,0x10,&local_f8);
  if (lVar2 != 0) {
    (*(code *)
      PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_10clone_from17hbc3bf956d8b34339E_00368428
    )(param_2 + 0x48,lVar2);
  }
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17hca7a20bc0e604664E
            (&local_f8,param_3,"number-format",0xd);
  lVar2 = _ZN12clap_builder6parser5error12MatchesError6unwrap17hb382f568f88ddf47E
                    ("number-format",0xd,&local_f8);
  if (lVar2 == 0) {
    uVar1 = 1;
  }
  else {
    uVar1 = _ZN68__LT_uu_nl__NumberFormat_u20_as_u20_core__convert__From_LT_T_GT__GT_4from17h2422a998c153ce5cE
                      (lVar2);
  }
  *(undefined *)(param_2 + 0x81) = uVar1;
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17hca7a20bc0e604664E
            (&local_f8,param_3,&DAT_0014ec30,0x10);
  lVar2 = _ZN12clap_builder6parser5error12MatchesError6unwrap17hb382f568f88ddf47E
                    (&DAT_0014ec30,0x10,&local_f8);
  if ((lVar2 != 0) &&
     ((*(code *)
        PTR__ZN79__LT_uu_nl__NumberingStyle_u20_as_u20_core__convert__TryFrom_LT__RF_str_GT__GT_8try_from17hfb8a9472cf333bedE_00368430
      )(&local_f8,*(undefined8 *)(lVar2 + 8),*(undefined8 *)(lVar2 + 0x10)),
     local_f8 != (undefined *)0x8000000000000001)) {
    local_70 = (long)local_f8;
    local_68 = uStack_f0;
    local_60 = local_e8;
                    /* try { // try from 0021ab4d to 0021ab65 has its CatchHandler @ 0021ae6f */
    _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h671dedff9df8c788E
              (&local_c0,&local_70,&PTR_s_src_uu_nl_src_helper_rs_0033a178);
  }
                    /* try { // try from 0021ab7b to 0021abbb has its CatchHandler @ 0021ae8d */
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17hca7a20bc0e604664E
            (&local_f8,param_3,"body-numbering",0xe);
  lVar2 = _ZN12clap_builder6parser5error12MatchesError6unwrap17hb382f568f88ddf47E
                    ("body-numbering",0xe,&local_f8);
  if ((lVar2 != 0) &&
     ((*(code *)
        PTR__ZN79__LT_uu_nl__NumberingStyle_u20_as_u20_core__convert__TryFrom_LT__RF_str_GT__GT_8try_from17hfb8a9472cf333bedE_00368430
      )(&local_f8,*(undefined8 *)(lVar2 + 8),*(undefined8 *)(lVar2 + 0x10)),
     local_f8 != (undefined *)0x8000000000000001)) {
    local_58 = (long)local_f8;
    local_50 = uStack_f0;
    local_48 = local_e8;
                    /* try { // try from 0021abf9 to 0021ac11 has its CatchHandler @ 0021ae50 */
    _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h671dedff9df8c788E
              (&local_c0,&local_58,&PTR_s_src_uu_nl_src_helper_rs_0033a190);
  }
                    /* try { // try from 0021ac29 to 0021ac69 has its CatchHandler @ 0021ae8d */
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17hca7a20bc0e604664E
            (&local_f8,param_3,&DAT_0014e410,0x10);
  lVar2 = _ZN12clap_builder6parser5error12MatchesError6unwrap17hb382f568f88ddf47E
                    (&DAT_0014e410,0x10,&local_f8);
  if ((lVar2 != 0) &&
     ((*(code *)
        PTR__ZN79__LT_uu_nl__NumberingStyle_u20_as_u20_core__convert__TryFrom_LT__RF_str_GT__GT_8try_from17hfb8a9472cf333bedE_00368430
      )(&local_f8,*(undefined8 *)(lVar2 + 8),*(undefined8 *)(lVar2 + 0x10)),
     local_f8 != (undefined *)0x8000000000000001)) {
    local_40 = (long)local_f8;
    local_38 = uStack_f0;
    local_30 = local_e8;
                    /* try { // try from 0021aca7 to 0021acbf has its CatchHandler @ 0021ae31 */
    _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h671dedff9df8c788E
              (&local_c0,&local_40,&PTR_s_src_uu_nl_src_helper_rs_0033a1a8);
  }
                    /* try { // try from 0021acd7 to 0021adfe has its CatchHandler @ 0021ae8d */
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h93b5258bce4c83beE
            (&local_f8,param_3);
  plVar3 = (long *)_ZN12clap_builder6parser5error12MatchesError6unwrap17hc0caf75370265cb3E
                             (&local_f8);
  if (plVar3 != (long *)0x0) {
    if (*plVar3 == 0) {
      _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17hc25036316a37fb06E
                (&local_f8,&DAT_00153cc2,0x47);
      local_98 = local_e8;
      local_a8 = (undefined4)local_f8;
      uStack_a4 = local_f8._4_4_;
      uStack_a0 = (undefined4)uStack_f0;
      uStack_9c = uStack_f0._4_4_;
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h671dedff9df8c788E
                (&local_c0,&local_a8,&PTR_s_src_uu_nl_src_helper_rs_0033a1c0);
    }
    else {
      *(long *)(param_2 + 0x78) = *plVar3;
    }
  }
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h197f6d7539a0803dE
            (&local_f8,param_3);
  plVar3 = (long *)_ZN12clap_builder6parser5error12MatchesError6unwrap17h23588c2e3aac3f32E
                             (&local_f8);
  if (plVar3 != (long *)0x0) {
    if (*plVar3 == 0) {
      _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17hc25036316a37fb06E
                (&local_f8,&DAT_00153d09,0x4a);
      local_98 = local_e8;
      local_a8 = (undefined4)local_f8;
      uStack_a4 = local_f8._4_4_;
      uStack_a0 = (undefined4)uStack_f0;
      uStack_9c = uStack_f0._4_4_;
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h671dedff9df8c788E
                (&local_c0,&local_a8,&PTR_s_src_uu_nl_src_helper_rs_0033a1d8);
    }
    else {
      *(long *)(param_2 + 0x70) = *plVar3;
    }
  }
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17he43b25beb4093688E
            (&local_f8,param_3,"line-increment",0xe);
  puVar4 = (undefined8 *)
           _ZN12clap_builder6parser5error12MatchesError6unwrap17h842548ae3ebe6bbbE
                     ("line-increment",0xe,&local_f8);
  if (puVar4 != (undefined8 *)0x0) {
    *(undefined8 *)(param_2 + 0x68) = *puVar4;
  }
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17he43b25beb4093688E
            (&local_f8,param_3,"starting-line-number",0x14);
  puVar4 = (undefined8 *)
           _ZN12clap_builder6parser5error12MatchesError6unwrap17h842548ae3ebe6bbbE
                     ("starting-line-number",0x14,&local_f8);
  if (puVar4 != (undefined8 *)0x0) {
    *(undefined8 *)(param_2 + 0x60) = *puVar4;
  }
  param_1[2] = local_b0;
  *param_1 = local_c0;
  param_1[1] = uStack_b8;
  return param_1;
}