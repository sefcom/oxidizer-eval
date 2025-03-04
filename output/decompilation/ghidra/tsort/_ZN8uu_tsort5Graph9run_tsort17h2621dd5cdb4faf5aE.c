undefined8 * _ZN8uu_tsort5Graph9run_tsort17h2621dd5cdb4faf5aE(undefined8 *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined auVar6 [16];
  undefined local_e1;
  undefined8 *local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined local_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  long local_50 [4];
  
  local_e0 = param_1;
  _ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_15try_allocate_in17h22ab93a426132a55E
            (&local_d8,*(undefined8 *)(param_2 + 0x18),0);
  local_b0 = CONCAT44(uStack_cc,uStack_d0);
  if (CONCAT44(uStack_d4,local_d8) != 0) {
LAB_001b695b:
    uVar3 = _ZN5alloc7raw_vec12handle_error17h2372476369f9b8acE();
                    /* catch() { ... } // from try @ 001b67b2 with catch @ 001b6966
                       catch() { ... } // from try @ 001b68cb with catch @ 001b6966 */
    _ZN4core3ptr75drop_in_place_LT_alloc__collections__vec_deque__VecDeque_LT__RF_str_GT__GT_17h1190539f0e1ad7feE
              (local_98);
    _ZN4core3ptr51drop_in_place_LT_alloc__vec__Vec_LT__RF_str_GT__GT_17h5f70d679a77a97edE(&local_b0)
    ;
    puVar4 = (undefined8 *)_Unwind_Resume(uVar3);
    return puVar4;
  }
  uStack_a8 = CONCAT44(uStack_c4,local_c8);
  local_a0 = 0;
                    /* try { // try from 001b6772 to 001b67b1 has its CatchHandler @ 001b696b */
  _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_4iter17hc8089db10f6b491bE(&local_d8,param_2);
  local_58 = local_b8;
  local_68 = local_c8;
  uStack_64 = uStack_c4;
  uStack_60 = uStack_c0;
  uStack_5c = uStack_bc;
  local_78 = local_d8;
  uStack_74 = uStack_d4;
  uStack_70 = uStack_d0;
  uStack_6c = uStack_cc;
  _ZN141__LT_alloc__collections__vec_deque__VecDeque_LT_T_GT__u20_as_u20_alloc__collections__vec_deque__spec_from_iter__SpecFromIter_LT_T_C_I_GT__GT_14spec_from_iter17hf462620b0ae1bf0aE
            (local_98,&local_78);
                    /* try { // try from 001b67b2 to 001b67eb has its CatchHandler @ 001b6966 */
  auVar6 = _ZN5alloc11collections9vec_deque21VecDeque_LT_T_C_A_GT_15make_contiguous17hade1d2ed3a63ca34E
                     (local_98);
  uVar5 = auVar6._8_8_;
  if (1 < uVar5) {
    if (uVar5 < 0x15) {
      _ZN4core5slice4sort6shared9smallsort25insertion_sort_shift_left17hb4368774700ae4a6E
                (auVar6._0_8_,uVar5,1,&local_e1);
    }
    else {
      _ZN4core5slice4sort8unstable7ipnsort17hf51f3faef85c7917E(auVar6._0_8_,uVar5,&local_e1);
    }
  }
  do {
    do {
      auVar6 = _ZN5alloc11collections9vec_deque21VecDeque_LT_T_C_A_GT_9pop_front17h21c96a6c4f6a5b39E
                         (local_98);
      puVar4 = local_e0;
      lVar2 = auVar6._0_8_;
      if (lVar2 == 0) {
        if (*(long *)(param_2 + 0x18) == 0) {
          local_e0[3] = local_a0;
          *(undefined4 *)(local_e0 + 1) = (undefined4)local_b0;
          *(undefined4 *)((long)local_e0 + 0xc) = local_b0._4_4_;
          *(undefined4 *)(local_e0 + 2) = (undefined4)uStack_a8;
          *(undefined4 *)((long)local_e0 + 0x14) = uStack_a8._4_4_;
          *local_e0 = 0;
          _ZN4core3ptr75drop_in_place_LT_alloc__collections__vec_deque__VecDeque_LT__RF_str_GT__GT_17h1190539f0e1ad7feE
                    (local_98);
        }
        else {
                    /* try { // try from 001b68cb to 001b68d7 has its CatchHandler @ 001b6966 */
          _ZN8uu_tsort5Graph12detect_cycle17h0c5291f558dc399aE(&local_d8,param_2);
          local_e0[3] = CONCAT44(uStack_c4,local_c8);
          *(undefined4 *)(local_e0 + 1) = local_d8;
          *(undefined4 *)((long)local_e0 + 0xc) = uStack_d4;
          *(undefined4 *)(local_e0 + 2) = uStack_d0;
          *(undefined4 *)((long)local_e0 + 0x14) = uStack_cc;
          *local_e0 = 1;
                    /* try { // try from 001b68f6 to 001b68ff has its CatchHandler @ 001b696b */
          _ZN4core3ptr75drop_in_place_LT_alloc__collections__vec_deque__VecDeque_LT__RF_str_GT__GT_17h1190539f0e1ad7feE
                    (local_98);
          _ZN4core3ptr51drop_in_place_LT_alloc__vec__Vec_LT__RF_str_GT__GT_17h5f70d679a77a97edE
                    (&local_b0);
          puVar4 = local_e0;
        }
        return puVar4;
      }
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hbbd106ac298c97ceE(&local_b0,lVar2);
      _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_6remove17h7f917ab83a911431E
                (local_50,param_2,lVar2,auVar6._8_8_);
    } while (local_50[0] == -0x8000000000000000);
    _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17ha34f728323d6f0c1E
              (&local_d8,local_50);
    auVar6 = _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h9f648d1fd42f1db6E
                       (&local_d8);
    lVar2 = auVar6._0_8_;
    while (lVar2 != 0) {
                    /* try { // try from 001b6897 to 001b68c1 has its CatchHandler @ 001b6977 */
      lVar2 = _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_13get_inner_mut17h03536305409d1b4dE
                        (param_2,auVar6._0_8_,auVar6._8_8_);
      if (lVar2 == 0) {
                    /* try { // try from 001b694e to 001b695a has its CatchHandler @ 001b6975 */
        _ZN4core6option13unwrap_failed17h0e11329e76906eaaE
                  (&PTR_s_src_uu_tsort_src_tsort_rs_00221518);
        goto LAB_001b695b;
      }
      plVar1 = (long *)(lVar2 + 0x28);
      *plVar1 = *plVar1 + -1;
      if (*plVar1 == 0) {
        _ZN5alloc11collections9vec_deque21VecDeque_LT_T_C_A_GT_9push_back17hadb7dbb4bc596622E
                  (local_98,auVar6._0_8_,auVar6._8_8_);
      }
      auVar6 = _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h9f648d1fd42f1db6E
                         (&local_d8);
      lVar2 = auVar6._0_8_;
    }
                    /* try { // try from 001b6800 to 001b683c has its CatchHandler @ 001b6970 */
    _ZN4core3ptr67drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT__RF_str_GT__GT_17hf9489df68880ab9dE
              (&local_d8);
  } while( true );
}