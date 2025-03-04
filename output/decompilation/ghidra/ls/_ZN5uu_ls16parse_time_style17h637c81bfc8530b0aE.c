void _ZN5uu_ls16parse_time_style17h637c81bfc8530b0aE(undefined *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  int extraout_EDX;
  undefined **ppuVar10;
  undefined auVar11 [16];
  undefined auVar12 [16];
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined7 uStack_e0;
  undefined uStack_d9;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  puVar6 = (undefined8 *)_ZN5alloc5alloc6Global10alloc_impl17hf61749d460433fffE(0x78);
  if (puVar6 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    _ZN5alloc5alloc18handle_alloc_error17h3816d26e7f8ae8a1E(8,0x78);
  }
                    /* try { // try from 0021e7b9 to 0021e7d1 has its CatchHandler @ 0021ec48 */
  _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h09d6369a280ff05aE
            (&local_f0,&DAT_00124710,8);
  local_58 = CONCAT17(uStack_d9,uStack_e0);
  local_68 = local_f0;
  uStack_64 = uStack_ec;
  uStack_60 = uStack_e8;
  uStack_5c = uStack_e4;
                    /* try { // try from 0021e7ec to 0021e801 has its CatchHandler @ 0021ec36 */
  _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h09d6369a280ff05aE
            (&local_f0,&DAT_00124818,8);
  local_38 = CONCAT17(uStack_d9,uStack_e0);
  local_48 = local_f0;
  uStack_44 = uStack_ec;
  uStack_40 = uStack_e8;
  uStack_3c = uStack_e4;
                    /* try { // try from 0021e81c to 0021e831 has its CatchHandler @ 0021ec24 */
  _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h09d6369a280ff05aE
            (&local_f0,&DAT_00134b6e,3);
  local_78 = CONCAT17(uStack_d9,uStack_e0);
  local_88 = CONCAT44(uStack_ec,local_f0);
  uStack_80 = CONCAT44(uStack_e4,uStack_e8);
                    /* try { // try from 0021e849 to 0021e85e has its CatchHandler @ 0021ec15 */
  _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h09d6369a280ff05aE
            (&local_f0,&DAT_00134b71,6);
  local_98 = CONCAT17(uStack_d9,uStack_e0);
  local_a8 = local_f0;
  uStack_a4 = uStack_ec;
  uStack_a0 = uStack_e8;
  uStack_9c = uStack_e4;
                    /* try { // try from 0021e873 to 0021e888 has its CatchHandler @ 0021ec06 */
  _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h09d6369a280ff05aE
            (&local_f0,&DAT_00134b77,0x30);
  local_b8 = CONCAT17(uStack_d9,uStack_e0);
  local_c8 = CONCAT44(uStack_ec,local_f0);
  uStack_c0 = CONCAT44(uStack_e4,uStack_e8);
  puVar6[2] = local_58;
  *puVar6 = CONCAT44(uStack_64,local_68);
  puVar6[1] = CONCAT44(uStack_5c,uStack_60);
  puVar6[5] = local_38;
  puVar6[3] = CONCAT44(uStack_44,local_48);
  puVar6[4] = CONCAT44(uStack_3c,uStack_40);
  puVar6[8] = local_78;
  puVar6[6] = local_88;
  puVar6[7] = uStack_80;
  puVar6[9] = CONCAT44(uStack_a4,local_a8);
  puVar6[10] = CONCAT44(uStack_9c,uStack_a0);
  puVar6[0xb] = local_98;
  *(undefined4 *)(puVar6 + 0xc) = local_f0;
  *(undefined4 *)((long)puVar6 + 100) = uStack_ec;
  *(undefined4 *)(puVar6 + 0xd) = uStack_e8;
  *(undefined4 *)((long)puVar6 + 0x6c) = uStack_e4;
  puVar6[0xe] = local_b8;
  _ZN5alloc5slice4hack8into_vec17h6d59ee658acb7704E(&local_a8,puVar6,5);
                    /* try { // try from 0021e91c to 0021eac5 has its CatchHandler @ 0021ec5b */
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h7f0bb7fe0c729ea9E
            (&local_f0,param_2,anon_3f7e092f2ea554bdd060175bd8ea63d9_31_llvm_16502254941234113161,10
            );
  lVar7 = _ZN12clap_builder6parser5error12MatchesError6unwrap17hac05afd0923194a9E
                    (anon_3f7e092f2ea554bdd060175bd8ea63d9_31_llvm_16502254941234113161,10,&local_f0
                    );
  if (lVar7 == 0) {
    cVar3 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                      (param_2,anon_3f7e092f2ea554bdd060175bd8ea63d9_32_llvm_16502254941234113161,9)
    ;
    if (cVar3 != '\0') goto LAB_0021ea78;
LAB_0021eaca:
    uVar8 = 0x8000000000000003;
  }
  else {
    cVar3 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                      (param_2,anon_3f7e092f2ea554bdd060175bd8ea63d9_32_llvm_16502254941234113161,9)
    ;
    if (cVar3 != '\0') {
      _ZN12clap_builder6parser7matches11arg_matches10ArgMatches10indices_of17h365fe016942495a0E
                (&local_f0,param_2,
                 anon_3f7e092f2ea554bdd060175bd8ea63d9_32_llvm_16502254941234113161,9);
      if (CONCAT44(uStack_ec,local_f0) == 0) {
        ppuVar10 = &PTR_DAT_003121f0;
        goto LAB_0021ebdc;
      }
      auVar11 = _ZN4core4iter6traits8iterator8Iterator4fold17hedf7a65ebd7287e8E(&local_c8);
      _ZN12clap_builder6parser7matches11arg_matches10ArgMatches10indices_of17h365fe016942495a0E
                (&local_f0,param_2,
                 anon_3f7e092f2ea554bdd060175bd8ea63d9_31_llvm_16502254941234113161,10);
      if (CONCAT44(uStack_ec,local_f0) == 0) {
        ppuVar10 = &PTR_DAT_00312208;
        goto LAB_0021ebdc;
      }
      local_b8 = CONCAT17(uStack_d9,uStack_e0);
      local_c8 = CONCAT44(uStack_ec,local_f0);
      uStack_c0 = CONCAT44(uStack_e4,uStack_e8);
      auVar12 = _ZN4core4iter6traits8iterator8Iterator4fold17hedf7a65ebd7287e8E(&local_c8);
      if ((auVar11._0_8_ != 0) && ((auVar12._0_8_ == 0 || (auVar12._8_8_ < auVar11._8_8_))))
      goto LAB_0021ea78;
    }
    lVar1 = *(long *)(lVar7 + 8);
    lVar2 = *(long *)(lVar7 + 0x10);
    cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h615ea01bc1975db3E
                      (lVar1,lVar2,&DAT_00124710,8);
    if (cVar3 == '\0') {
      cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h615ea01bc1975db3E
                        (lVar1,lVar2,&DAT_00124818,8);
      if (cVar3 == '\0') {
        cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h615ea01bc1975db3E
                          (lVar1,lVar2,&DAT_00134b6e,3);
        if (cVar3 == '\0') {
          cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h615ea01bc1975db3E
                            (lVar1,lVar2,&DAT_00134b71,6);
          if (cVar3 == '\0') {
            uStack_80 = lVar1 + lVar2;
            local_88 = lVar1;
            iVar4 = _ZN4core3str11validations15next_code_point17haf8c055704158b90E(&local_88);
            iVar5 = 0x110000;
            if (iVar4 != 0) {
              iVar5 = extraout_EDX;
            }
            if (iVar5 != 0x2b) {
              if (iVar5 != 0x110000) {
                    /* try { // try from 0021eb2c to 0021eba4 has its CatchHandler @ 0021ec5b */
                _ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h8f45b0d02f4dafdaE
                          (&local_c8,lVar7);
                *(undefined8 *)(param_1 + 0x30) = local_98;
                *(ulong *)(param_1 + 0x20) = CONCAT44(uStack_a4,local_a8);
                *(ulong *)(param_1 + 0x28) = CONCAT44(uStack_9c,uStack_a0);
                uStack_ec._3_1_ = (undefined)local_c8;
                uStack_e8 = (undefined4)((ulong)local_c8 >> 8);
                uStack_e4._0_3_ = (undefined3)((ulong)local_c8 >> 0x28);
                uStack_e4._3_1_ = (undefined)uStack_c0;
                *param_1 = 6;
                *(ulong *)(param_1 + 1) = CONCAT44(uStack_ec,local_f0);
                *(ulong *)(param_1 + 9) = CONCAT44(uStack_e4,uStack_e8);
                *(undefined8 *)(param_1 + 0x10) = uStack_c0;
                *(undefined8 *)(param_1 + 0x18) = local_b8;
                return;
              }
              do {
                ppuVar10 = &PTR_DAT_00312220;
LAB_0021ebdc:
                    /* try { // try from 0021ebdc to 0021ec05 has its CatchHandler @ 0021ec5b */
                _ZN4core6option13unwrap_failed17h0e11329e76906eaaE(ppuVar10);
              } while( true );
            }
            lVar9 = _ZN4core3str6traits112__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeFrom_LT_usize_GT__GT_3get17hccefea64a1916a27E
                              (1,lVar1,lVar2);
            if (lVar9 == 0) {
              uVar8 = _ZN4core3str16slice_error_fail17h5dbb61534404fe7eE
                                (lVar1,lVar2,1,lVar2,&PTR_DAT_00312238);
                    /* catch() { ... } // from try @ 0021e873 with catch @ 0021ec06 */
                    /* try { // try from 0021ec09 to 0021ec45 has its CatchHandler @ 0021ec70 */
              _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hb27a9c8978a01f77E
                        (&local_a8);
              _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hb27a9c8978a01f77E
                        (&local_88);
              _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hb27a9c8978a01f77E
                        (&local_48);
              _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hb27a9c8978a01f77E
                        (&local_68);
              _ZN72__LT_alloc__boxed__Box_LT_T_C_A_GT__u20_as_u20_core__ops__drop__Drop_GT_4drop17h71cf5105b81b6fd4E
                        (lVar7);
              _Unwind_Resume(uVar8);
              return;
            }
            _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h09d6369a280ff05aE
                      (&local_f0,lVar9);
            *(ulong *)(param_1 + 0x18) = CONCAT17(uStack_d9,uStack_e0);
            *(undefined4 *)(param_1 + 8) = local_f0;
            *(undefined4 *)(param_1 + 0xc) = uStack_ec;
            *(undefined4 *)(param_1 + 0x10) = uStack_e8;
            *(undefined4 *)(param_1 + 0x14) = uStack_e4;
            goto LAB_0021eadc;
          }
          goto LAB_0021eaca;
        }
        uVar8 = 0x8000000000000002;
      }
      else {
        uVar8 = 0x8000000000000001;
      }
    }
    else {
LAB_0021ea78:
      uVar8 = 0x8000000000000000;
    }
  }
  *(undefined8 *)(param_1 + 8) = uVar8;
LAB_0021eadc:
  *param_1 = 7;
  _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17hbaa87f9dbd448729E
            (&local_a8);
  return;
}