long _ZN6uu_seq14fast_print_seq17h4eb9a89ecd42b36aE
               (undefined8 param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5,
               ulong param_6,undefined4 param_7,undefined4 param_8_00,long param_8)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined4 **ppuVar3;
  long lVar4;
  char cVar5;
  byte bVar6;
  long lVar7;
  undefined8 uVar8;
  ulong extraout_RDX;
  long lVar9;
  long lVar10;
  undefined auVar11 [16];
  ulong local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 **local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 **local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_98;
  long local_90;
  ulong local_88;
  ulong local_80;
  undefined8 local_78;
  undefined local_70 [8];
  undefined8 local_68;
  long local_60;
  undefined4 *local_58;
  code *local_50;
  undefined4 local_40 [2];
  undefined4 uStack_38;
  
  local_40[0] = param_7;
  uStack_38 = param_8_00;
  uVar8 = *(undefined8 *)(param_4 + 8);
  uVar1 = *(undefined8 *)(param_4 + 0x10);
  local_d0 = param_3;
  cVar5 = _ZN10num_bigint7biguint9cmp_slice17h6473709cb847fdc3E
                    (uVar8,uVar1,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
  if (cVar5 < '\0') {
    lVar7 = 0;
  }
  else {
                    /* try { // try from 00171ca9 to 00171d36 has its CatchHandler @ 00171fbb */
    local_78 = param_5;
    _ZN67__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__clone__Clone_GT_5clone17h133769cfed2b71deE
              (&local_c8,uVar8,uVar1);
    local_d8 = local_b8;
    local_e8 = (undefined4)local_c8;
    uStack_e4 = local_c8._4_4_;
    uStack_e0 = (undefined4)uStack_c0;
    uStack_dc = uStack_c0._4_4_;
    (*(code *)
      PTR__ZN10num_bigint7biguint11subtraction120__LT_impl_u20_core__ops__arith__Sub_LT__RF_num_bigint__biguint__BigUint_GT__u20_for_u20_num_bigint__biguint__BigUint_GT_3sub17hcb42c6242933f6efE_00223b70
    )(&local_c8,&local_e8,param_2);
    _ZN10num_bigint7biguint8division91__LT_impl_u20_core__ops__arith__Div_LT_u64_GT__u20_for_u20_num_bigint__biguint__BigUint_GT_3div17hb3d0b8e5d42f970fE
              (&local_e8,&local_c8,local_d0);
    uVar8 = CONCAT44(uStack_dc,uStack_e0);
    bVar6 = _ZN10num_bigint7biguint7convert88__LT_impl_u20_num_traits__cast__ToPrimitive_u20_for_u20_num_bigint__biguint__BigUint_GT_6to_u6417ha0c226e00bec48bcE
                      (uVar8,local_d8);
    _ZN4core3ptr49drop_in_place_LT_num_bigint__biguint__BigUint_GT_17h190a37287d4c5f59E
              (CONCAT44(uStack_e4,local_e8),uVar8);
    _ZN49__LT_T_u20_as_u20_alloc__string__SpecToString_GT_14spec_to_string17haf44c8a775aee2f9E
              (local_70,param_2);
                    /* try { // try from 00171d37 to 00171d78 has its CatchHandler @ 00171fb6 */
    local_80 = extraout_RDX;
    _ZN49__LT_T_u20_as_u20_alloc__string__SpecToString_GT_14spec_to_string17haf44c8a775aee2f9E
              (&local_c8,param_4);
    ppuVar3 = local_b8;
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hb5d0045c8189f1b2E(&local_c8);
    lVar7 = _ZN4core3cmp3Ord3max17hc4036d29a65f4853E(ppuVar3,param_8);
    _ZN63__LT_u8_u20_as_u20_alloc__vec__spec_from_elem__SpecFromElem_GT_9from_elem17he78d97b685c908adE
              (&local_98,lVar7 + param_6);
    lVar4 = local_90;
    lVar10 = local_88 - param_6;
    local_f0 = lVar10 - local_60;
                    /* try { // try from 00171d9c to 00171e2f has its CatchHandler @ 00171fc2 */
    auVar11 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_9index_mut17hf40a0f97a3096e33E
                        (local_f0,lVar10,local_90,local_88);
    _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_15copy_from_slice17h34292d3a419d10fdE
              (auVar11._0_8_,auVar11._8_8_,local_68,local_60,&PTR_s_src_uu_seq_src_seq_rs_0021b300);
    if (local_88 < param_6) {
                    /* try { // try from 00171fa1 to 00171fb3 has its CatchHandler @ 00171fc2 */
      (*(code *)PTR__ZN4core5slice5index26slice_start_index_len_fail17h5fe115fcacae7da6E_00223b80)
                (lVar10,local_88,&PTR_s_src_uu_seq_src_seq_rs_0021b360);
LAB_00171fb4:
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_15copy_from_slice17h34292d3a419d10fdE
              (lVar4 + lVar10,param_6,local_78,param_6,&PTR_s_src_uu_seq_src_seq_rs_0021b318);
    local_f0 = _ZN4core3cmp3Ord3min17he7a4ef9e7b4693b7E(local_f0,lVar10 - param_8);
    uVar8 = (*(code *)
              PTR__ZN4core3fmt3num3imp23__LT_impl_u20_usize_GT_4_fmt17h71a478bc15827a22E_00223b78)
                      (local_d0,&local_58,0x14);
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h9baf5eb350953063E
              (&local_c8,uVar8);
    ppuVar3 = local_b8;
    uVar8 = uStack_c0;
    local_d8 = local_b8;
    local_e8 = (undefined4)local_c8;
    uStack_e4 = local_c8._4_4_;
    uStack_e0 = (undefined4)uStack_c0;
    uStack_dc = uStack_c0._4_4_;
    lVar9 = (-(ulong)((bVar6 & 1) == 0) | local_80) + 1;
    while( true ) {
      lVar9 = lVar9 + -1;
      if (lVar9 == 0) break;
      if (local_88 < local_f0) {
                    /* try { // try from 00171f8c to 00171f9e has its CatchHandler @ 00171fc7 */
        (*(code *)PTR__ZN4core5slice5index26slice_start_index_len_fail17h5fe115fcacae7da6E_00223b80)
                  (local_f0,local_88,&PTR_s_src_uu_seq_src_seq_rs_0021b348);
        goto LAB_00171fb4;
      }
                    /* try { // try from 00171e79 to 00171ea3 has its CatchHandler @ 00171fc0 */
      lVar7 = _ZN83__LT_std__io__buffered__bufwriter__BufWriter_LT_W_GT__u20_as_u20_std__io__Write_GT_9write_all17h7ad87ff7b53aa30aE
                        (param_1,local_f0 + lVar4,local_88 - local_f0);
      if (lVar7 != 0) goto LAB_00171f45;
      _ZN6uucore8features8fast_inc8fast_inc17h9b00daadefd0682aE
                (lVar4,local_88,&local_f0,lVar10,uVar8,ppuVar3);
    }
                    /* try { // try from 00171ead to 00171f44 has its CatchHandler @ 00171fc7 */
    uVar8 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_5index17h4709196e254eeadcE
                      (local_f0,lVar10,lVar4,local_88,&PTR_s_src_uu_seq_src_seq_rs_0021b330);
    lVar7 = _ZN83__LT_std__io__buffered__bufwriter__BufWriter_LT_W_GT__u20_as_u20_std__io__Write_GT_9write_all17h7ad87ff7b53aa30aE
                      (param_1,uVar8);
    if (lVar7 == 0) {
      local_58 = local_40;
      local_50 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h2c2f878c1a275f8aE;
      local_c8 = &DAT_0011b0f0;
      uStack_c0 = 1;
      local_a8 = 0;
      local_b8 = &local_58;
      local_b0 = 1;
      lVar7 = _ZN3std2io5Write9write_fmt17h58381ced614654a5E(param_1,&local_c8);
      if (lVar7 == 0) {
        lVar7 = _ZN83__LT_std__io__buffered__bufwriter__BufWriter_LT_W_GT__u20_as_u20_std__io__Write_GT_5flush17hfb65489923a70636E
                          (param_1);
      }
    }
LAB_00171f45:
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hb5d0045c8189f1b2E(&local_e8);
    _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h92c01f6ee31c8691E
              (local_98,local_90);
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hb5d0045c8189f1b2E(local_70);
  }
  _ZN4core3ptr94drop_in_place_LT_std__io__buffered__bufwriter__BufWriter_LT_std__io__stdio__StdoutLock_GT__GT_17h68c34cef8e3ce886E
            (param_1);
  return lVar7;
}