void _ZN5uu_ls16parse_time_style17hacb3b16b50cd334eE(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong extraout_RDX;
  undefined **ppuVar9;
  undefined auVar10 [16];
  undefined auVar11 [12];
  undefined8 local_f8;
  undefined8 uStack_f0;
  long local_e8;
  long local_c8;
  undefined8 *puStack_c0;
  long local_b8;
  long local_a8;
  long lStack_a0;
  long local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  long local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  long local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  long local_38;
  
  puVar7 = (undefined8 *)_ZN5alloc5alloc6Global10alloc_impl17h6fb1b6049873c120E(8,0x78,0);
  if (puVar7 == (undefined8 *)0x0) {
    (*(code *)PTR__ZN5alloc5alloc18handle_alloc_error17h88aa4f4f9d19c4f9E_0048f900)(8,0x78);
LAB_0029139b:
    ppuVar9 = &PTR_s_src_uu_ls_src_ls_rs_00386770;
LAB_002913ab:
                    /* try { // try from 002913ab to 002913d6 has its CatchHandler @ 0029143c */
    (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_0048fd98)(ppuVar9);
LAB_002913d7:
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
                    /* try { // try from 00290f80 to 00290f96 has its CatchHandler @ 00291429 */
  _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h24216b49f21f2bafE
            (&local_f8,&DAT_001cfff0,8);
  local_58 = local_e8;
  local_68 = (undefined4)local_f8;
  uStack_64 = local_f8._4_4_;
  uStack_60 = (undefined4)uStack_f0;
  uStack_5c = uStack_f0._4_4_;
                    /* try { // try from 00290fb0 to 00290fc3 has its CatchHandler @ 00291409 */
  _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h24216b49f21f2bafE
            (&local_f8,&DAT_001d0100,8);
  local_38 = local_e8;
  local_48 = (undefined4)local_f8;
  uStack_44 = local_f8._4_4_;
  uStack_40 = (undefined4)uStack_f0;
  uStack_3c = uStack_f0._4_4_;
                    /* try { // try from 00290fdd to 00290ff0 has its CatchHandler @ 002913f7 */
  _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h24216b49f21f2bafE
            (&local_f8,"iso",3);
  local_b8 = local_e8;
  local_c8 = local_f8;
  puStack_c0 = (undefined8 *)uStack_f0;
                    /* try { // try from 00291004 to 00291017 has its CatchHandler @ 002913e8 */
  _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h24216b49f21f2bafE
            (&local_f8,"locale",6);
  local_98 = local_e8;
  local_a8 = local_f8;
  lStack_a0 = uStack_f0;
                    /* try { // try from 0029102b to 0029103e has its CatchHandler @ 002913d9 */
  _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h24216b49f21f2bafE
            (&local_f8,"+FORMAT (e.g., +%H:%M) for a \'date\'-style format",0x30);
  local_78 = local_e8;
  local_88 = local_f8;
  lVar8 = local_88;
  uStack_80 = uStack_f0;
  lVar1 = uStack_80;
  puVar7[2] = local_58;
  *puVar7 = CONCAT44(uStack_64,local_68);
  puVar7[1] = CONCAT44(uStack_5c,uStack_60);
  puVar7[5] = local_38;
  puVar7[3] = CONCAT44(uStack_44,local_48);
  puVar7[4] = CONCAT44(uStack_3c,uStack_40);
  puVar7[8] = local_b8;
  puVar7[6] = local_c8;
  puVar7[7] = puStack_c0;
  puVar7[9] = local_a8;
  puVar7[10] = lStack_a0;
  puVar7[0xb] = local_98;
  local_88._0_4_ = (undefined4)local_f8;
  local_88._4_4_ = (undefined4)((ulong)local_f8 >> 0x20);
  uStack_80._0_4_ = (undefined4)uStack_f0;
  uStack_80._4_4_ = (undefined4)((ulong)uStack_f0 >> 0x20);
  *(undefined4 *)(puVar7 + 0xc) = (undefined4)local_88;
  *(undefined4 *)((long)puVar7 + 100) = local_88._4_4_;
  *(undefined4 *)(puVar7 + 0xd) = (undefined4)uStack_80;
  *(undefined4 *)((long)puVar7 + 0x6c) = uStack_80._4_4_;
  puVar7[0xe] = local_e8;
  local_c8 = 5;
  local_b8 = 5;
  puStack_c0 = puVar7;
  local_88 = lVar8;
  uStack_80 = lVar1;
                    /* try { // try from 002910d9 to 0029136a has its CatchHandler @ 0029143c */
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h5fe44c4217b6c6aeE
            (&local_f8,param_2,"time-style",10);
  lVar8 = _ZN12clap_builder6parser5error12MatchesError6unwrap17he9eef133f866d763E
                    ("time-style",10,&local_f8);
  if (lVar8 == 0) {
    cVar4 = (*(code *)
              PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_0048fda0
            )(param_2,"full-time",9);
    if (cVar4 != '\0') goto LAB_0029122f;
LAB_00291285:
    lVar8 = -0x7ffffffffffffffd;
  }
  else {
    cVar4 = (*(code *)
              PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_0048fda0
            )(param_2,"full-time",9);
    if (cVar4 != '\0') {
      (*(code *)
        PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches10indices_of17h172437770ffa9ae0E_0048fda8
      )(&local_f8,param_2,"full-time",9);
      if (local_f8 == 0) goto LAB_0029139b;
      local_98 = local_e8;
      local_a8 = local_f8;
      lStack_a0 = uStack_f0;
      auVar10 = (*(code *)
                  PTR__ZN125__LT_clap_builder__parser__matches__arg_matches__Indices_u20_as_u20_core__iter__traits__double_ended__DoubleEndedIterator_GT_9next_back17he8af42fbff276d33E_0048fdb0
                )(&local_a8);
      (*(code *)
        PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches10indices_of17h172437770ffa9ae0E_0048fda8
      )(&local_f8,param_2,"time-style",10);
      if (local_f8 == 0) {
        ppuVar9 = &PTR_s_src_uu_ls_src_ls_rs_00386788;
        goto LAB_002913ab;
      }
      local_78 = local_e8;
      local_88 = local_f8;
      uStack_80 = uStack_f0;
      bVar5 = (*(code *)
                PTR__ZN125__LT_clap_builder__parser__matches__arg_matches__Indices_u20_as_u20_core__iter__traits__double_ended__DoubleEndedIterator_GT_9next_back17he8af42fbff276d33E_0048fdb0
              )(&local_88);
      if (((auVar10 & (undefined  [16])0x1) != (undefined  [16])0x0) &&
         ((bVar5 & auVar10._8_8_ <= extraout_RDX) == 0)) goto LAB_0029122f;
    }
    lVar1 = *(long *)(lVar8 + 8);
    lVar2 = *(long *)(lVar8 + 0x10);
    cVar4 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h652dfc76ef3eba10E
                      (lVar1,lVar2,&DAT_001cfff0,8);
    if (cVar4 == '\0') {
      cVar4 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h652dfc76ef3eba10E
                        (lVar1,lVar2,&DAT_001d0100,8);
      if (cVar4 == '\0') {
        cVar4 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h652dfc76ef3eba10E
                          (lVar1,lVar2,"iso",3);
        if (cVar4 == '\0') {
          cVar4 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h652dfc76ef3eba10E
                            (lVar1,lVar2,"locale",6);
          if (cVar4 != '\0') goto LAB_00291285;
          lStack_a0 = lVar1 + lVar2;
          local_a8 = lVar1;
          auVar11 = _ZN4core3str11validations15next_code_point17h1047ff23da431e49E(&local_a8);
          iVar6 = 0x110000;
          if ((auVar11 & (undefined  [12])0x1) != (undefined  [12])0x0) {
            iVar6 = auVar11._8_4_;
          }
          if (iVar6 == 0x2b) {
            lVar8 = _ZN4core3str6traits112__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeFrom_LT_usize_GT__GT_3get17h28e9e81c5537bbedE
                              (1,lVar1,lVar2);
            if (lVar8 == 0) {
              (*(code *)PTR__ZN4core3str16slice_error_fail17h1a2885084e28d077E_0048fc68)
                        (lVar1,lVar2,1,lVar2,&PTR_s_src_uu_ls_src_ls_rs_003867b8);
              goto LAB_002913d7;
            }
            _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h24216b49f21f2bafE
                      (&local_f8,lVar8);
            param_1[3] = local_e8;
            *(undefined4 *)(param_1 + 1) = (undefined4)local_f8;
            *(undefined4 *)((long)param_1 + 0xc) = local_f8._4_4_;
            *(undefined4 *)(param_1 + 2) = (undefined4)uStack_f0;
            *(undefined4 *)((long)param_1 + 0x14) = uStack_f0._4_4_;
            goto LAB_00291297;
          }
          if (iVar6 != 0x110000) {
            (*(code *)
              PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h94782b8343b62bd8E_0048fc58
            )(&local_88,lVar8);
            param_1[4] = (long)puStack_c0;
            param_1[5] = local_b8;
            param_1[2] = local_78;
            param_1[3] = local_c8;
            *param_1 = local_88;
            param_1[1] = uStack_80;
            return;
          }
          ppuVar9 = &PTR_s_src_uu_ls_src_ls_rs_003867a0;
          goto LAB_002913ab;
        }
        lVar8 = -0x7ffffffffffffffe;
      }
      else {
        lVar8 = -0x7fffffffffffffff;
      }
    }
    else {
LAB_0029122f:
      lVar8 = -0x8000000000000000;
    }
  }
  param_1[1] = lVar8;
LAB_00291297:
  *param_1 = -0x7ffffffffffffffa;
  _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17h89a7ff1ac4baee33E
            (&local_c8);
  return;
}