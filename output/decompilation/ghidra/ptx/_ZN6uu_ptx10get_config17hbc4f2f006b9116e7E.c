undefined8 * _ZN6uu_ptx10get_config17hbc4f2f006b9116e7E(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  undefined uVar2;
  byte bVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined **ppuVar7;
  undefined4 *unaff_R15;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined3 local_90;
  undefined uStack_8d;
  undefined3 uStack_8c;
  undefined uStack_89;
  char local_88;
  undefined local_87;
  char *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  char *pcStack_30;
  char *local_28;
  undefined4 local_20;
  undefined local_1c;
  undefined local_1b;
  undefined2 local_1a;
  
  _ZN57__LT_uu_ptx__Config_u20_as_u20_core__default__Default_GT_7default17h5dee5f130f025e64E
            (&local_78);
                    /* try { // try from 002b61cc to 002b625b has its CatchHandler @ 002b66b0 */
  cVar1 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                    (param_2,"traditional",0xb);
  if (cVar1 == '\0') {
    uStack_b0 = "GNU extensions";
    local_a8 = 0xe;
    local_b8 = CONCAT31(local_b8._1_3_,1);
    uVar4 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hfc4024115c711549E(&local_b8);
LAB_002b625c:
    param_1[1] = uVar4;
    param_1[2] = &DAT_003edc08;
    *param_1 = 0x8000000000000000;
    _ZN4core3ptr35drop_in_place_LT_uu_ptx__Config_GT_17h61e3e7302a3c0217E(&local_78);
    return param_1;
  }
  local_20 = local_20 & 0xffffff00;
  local_1b = 1;
  _ZN5alloc3str56__LT_impl_u20_alloc__borrow__ToOwned_u20_for_u20_str_GT_10clone_into17hedde276911c71a78E
            (&local_48);
  cVar1 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11contains_id17h8ab577f2647f3b72E
                    (param_2,"sentence-regexp",0xf);
  if (cVar1 != '\0') {
    uStack_b0 = &DAT_0015ec58;
    local_a8 = 2;
    local_b8 = CONCAT31(local_b8._1_3_,1);
    uVar4 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hfc4024115c711549E(&local_b8);
    goto LAB_002b625c;
  }
                    /* try { // try from 002b6292 to 002b6367 has its CatchHandler @ 002b66b0 */
  uVar2 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                    (param_2,"auto-reference",0xe);
  local_20._0_2_ = CONCAT11(uVar2,(undefined)local_20);
  uVar2 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                    (param_2,"references",10);
  local_20._0_3_ = CONCAT12(uVar2,(undefined2)local_20);
  bVar3 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                    (param_2,"right-side-refs",0xf);
  local_20 = CONCAT13(bVar3 & local_20._3_1_ != '\0',(undefined3)local_20);
  local_1c = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                       (param_2,"ignore-case",0xb);
  cVar1 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11contains_id17h8ab577f2647f3b72E
                    (param_2,"macro-name",10);
  if (cVar1 != '\0') {
    _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h0320162aad36ecc4E
              (&local_b8,param_2,"macro-name",10);
    lVar5 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h3979b7ce1fd00743E
                      ("macro-name",10,&local_b8);
    if (lVar5 == 0) {
      ppuVar7 = &PTR_s_src_uu_ptx_src_ptx_rs_003edc78;
      goto LAB_002b6670;
    }
    _ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h8f45b0d02f4dafdaE
              (&local_b8,lVar5);
                    /* try { // try from 002b6368 to 002b6371 has its CatchHandler @ 002b6698 */
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hbabe7cf62dac4e15E(&local_78);
    local_68 = local_a8;
    local_78 = local_b8;
    uStack_74 = uStack_b4;
    uStack_70 = (undefined4)uStack_b0;
    uStack_6c = uStack_b0._4_4_;
  }
                    /* try { // try from 002b6385 to 002b63dd has its CatchHandler @ 002b66b0 */
  cVar1 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11contains_id17h8ab577f2647f3b72E
                    (param_2,"flag-truncation",0xf);
  if (cVar1 != '\0') {
    _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h0320162aad36ecc4E
              (&local_b8,param_2,"flag-truncation",0xf);
    lVar5 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h3979b7ce1fd00743E
                      ("flag-truncation",0xf,&local_b8);
    if (lVar5 == 0) {
      ppuVar7 = &PTR_s_src_uu_ptx_src_ptx_rs_003edc90;
      goto LAB_002b6670;
    }
    _ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h8f45b0d02f4dafdaE
              (&local_b8,lVar5);
    unaff_R15 = &uStack_60;
                    /* try { // try from 002b63e3 to 002b63ea has its CatchHandler @ 002b6682 */
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hbabe7cf62dac4e15E(unaff_R15);
    uStack_50 = local_a8;
    uStack_60 = local_b8;
    uStack_5c = uStack_b4;
    uStack_58 = (undefined4)uStack_b0;
    uStack_54 = uStack_b0._4_4_;
  }
                    /* try { // try from 002b63fc to 002b6681 has its CatchHandler @ 002b66b0 */
  cVar1 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11contains_id17h8ab577f2647f3b72E
                    (param_2,"width",5);
  if (cVar1 != '\0') {
    _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h0320162aad36ecc4E
              (&local_b8,param_2,"width",5);
    lVar5 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h3979b7ce1fd00743E
                      ("width",5,&local_b8);
    if (lVar5 == 0) {
      ppuVar7 = &PTR_s_src_uu_ptx_src_ptx_rs_003edca8;
      goto LAB_002b6670;
    }
    _ZN4core3num62__LT_impl_u20_core__str__traits__FromStr_u20_for_u20_usize_GT_8from_str17h35e67cae0c0452a5E
              (&local_88,*(undefined8 *)(lVar5 + 8),*(undefined8 *)(lVar5 + 0x10));
    pcStack_30 = local_80;
    if (local_88 != '\0') {
      _ZN4core3ops8function6FnOnce9call_once17h21988aba69442914E(&local_b8,local_87);
      local_90 = (undefined3)((uint)local_b8 >> 8);
      uStack_8d = (undefined)uStack_b4;
      uStack_8c = (undefined3)((uint)uStack_b4 >> 8);
      pcStack_30 = uStack_b0;
      if ((char)local_b8 != '\x03') {
        uVar4 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hfc4024115c711549E(&local_b8);
        goto LAB_002b625c;
      }
    }
  }
  cVar1 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11contains_id17h8ab577f2647f3b72E
                    (param_2,&anon_7bad5d3cfcfc6941f72c3bc4e85b9543_29_llvm_7942943287365551935,8);
  if (cVar1 != '\0') {
    _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h0320162aad36ecc4E
              (&local_b8,param_2,&anon_7bad5d3cfcfc6941f72c3bc4e85b9543_29_llvm_7942943287365551935,
               8);
    lVar5 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h3979b7ce1fd00743E
                      (&anon_7bad5d3cfcfc6941f72c3bc4e85b9543_29_llvm_7942943287365551935,8,
                       &local_b8);
    if (lVar5 == 0) {
      ppuVar7 = &PTR_s_src_uu_ptx_src_ptx_rs_003edcc0;
LAB_002b6670:
      uVar4 = _ZN4core6option13expect_failed17h9e03a1f6ff88dbcfE
                        ("parsing options failed",0x16,ppuVar7);
                    /* catch() { ... } // from try @ 002b63e3 with catch @ 002b6682 */
      *(undefined8 *)(unaff_R15 + 4) = local_a8;
      *unaff_R15 = local_b8;
      unaff_R15[1] = uStack_b4;
      unaff_R15[2] = (undefined4)uStack_b0;
      unaff_R15[3] = uStack_b0._4_4_;
                    /* try { // try from 002b66b3 to 002b66bc has its CatchHandler @ 002b66c5 */
      _ZN4core3ptr35drop_in_place_LT_uu_ptx__Config_GT_17h61e3e7302a3c0217E(&local_78);
      puVar6 = (undefined8 *)_Unwind_Resume(uVar4);
      return puVar6;
    }
    _ZN4core3num62__LT_impl_u20_core__str__traits__FromStr_u20_for_u20_usize_GT_8from_str17h35e67cae0c0452a5E
              (&local_88,*(undefined8 *)(lVar5 + 8),*(undefined8 *)(lVar5 + 0x10));
    local_28 = local_80;
    if (local_88 != '\0') {
      _ZN4core3ops8function6FnOnce9call_once17h21988aba69442914E(&local_b8,local_87);
      local_90 = (undefined3)((uint)local_b8 >> 8);
      uStack_8d = (undefined)uStack_b4;
      uStack_8c = (undefined3)((uint)uStack_b4 >> 8);
      local_28 = uStack_b0;
      if ((char)local_b8 != '\x03') {
        uVar4 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hfc4024115c711549E(&local_b8);
        goto LAB_002b625c;
      }
    }
  }
  cVar1 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                    (param_2,"format=roff",0xb);
  if (cVar1 != '\0') {
    local_1b = 1;
  }
  cVar1 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                    (param_2,"format=tex",10);
  if (cVar1 != '\0') {
    local_1b = 2;
  }
  param_1[10] = local_28;
  *(uint *)(param_1 + 0xb) = local_20;
  *(undefined *)((long)param_1 + 0x5c) = local_1c;
  *(undefined *)((long)param_1 + 0x5d) = local_1b;
  *(undefined2 *)((long)param_1 + 0x5e) = local_1a;
  param_1[8] = local_38;
  param_1[9] = pcStack_30;
  param_1[6] = local_48;
  param_1[7] = uStack_40;
  param_1[4] = CONCAT44(uStack_54,uStack_58);
  param_1[5] = uStack_50;
  param_1[2] = local_68;
  param_1[3] = CONCAT44(uStack_5c,uStack_60);
  *param_1 = CONCAT44(uStack_74,local_78);
  param_1[1] = CONCAT44(uStack_6c,uStack_70);
  return param_1;
}