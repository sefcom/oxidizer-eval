void _ZN8uu_tsort5Graph9run_tsort17h43715d18696d47b7E(long param_1)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  undefined auVar6 [16];
  undefined local_b9;
  long local_b8;
  undefined local_b0 [16];
  undefined8 *local_a0;
  code *local_98;
  undefined *local_80;
  undefined8 local_78;
  undefined8 **local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined local_50 [32];
  
  lVar1 = param_1 + 0x18;
  local_b8 = param_1;
  _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_4iter17h2e9a564f7dfa53c1E(&local_80,lVar1);
  _ZN4core4iter6traits8iterator8Iterator7collect17h9ae749e509b3424eE(local_50,&local_80);
                    /* try { // try from 001601fa to 00160215 has its CatchHandler @ 00160405 */
  auVar6 = _ZN5alloc11collections9vec_deque21VecDeque_LT_T_C_A_GT_15make_contiguous17h9ad4ec71a91aebadE
                     (local_50);
  uVar5 = auVar6._8_8_;
  if (1 < uVar5) {
    if (uVar5 < 0x15) {
      _ZN4core5slice4sort6shared9smallsort25insertion_sort_shift_left17h78ed74d5313b9014E
                (auVar6._0_8_,uVar5);
    }
    else {
                    /* try { // try from 001603d3 to 001603ff has its CatchHandler @ 00160405 */
      (*(code *)PTR__ZN4core5slice4sort8unstable7ipnsort17hc2dcb20d7cb0ee0fE_001f1d08)
                (auVar6._0_8_,uVar5,&local_b9);
    }
  }
  auVar6 = _ZN5alloc11collections9vec_deque21VecDeque_LT_T_C_A_GT_15make_contiguous17h9ad4ec71a91aebadE
                     (local_50);
  uVar5 = auVar6._8_8_;
  if (1 < uVar5) {
    if (uVar5 < 0x15) {
      _ZN4core5slice4sort6shared9smallsort25insertion_sort_shift_left17h78ed74d5313b9014E
                (auVar6._0_8_,uVar5);
    }
    else {
      (*(code *)PTR__ZN4core5slice4sort8unstable7ipnsort17hc2dcb20d7cb0ee0fE_001f1d08)
                (auVar6._0_8_,uVar5,&local_b9);
    }
  }
  if (*(long *)(local_b8 + 0x30) != 0) {
    do {
                    /* try { // try from 0016027d to 001602ee has its CatchHandler @ 00160407 */
      auVar6 = _ZN8uu_tsort5Graph14find_next_node17hbfa4e9bfcfa20386E(local_b8,local_50);
      local_a0 = (undefined8 *)local_b0;
      local_98 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hdba2249fdd736854E;
      local_80 = &DAT_001eb328;
      local_78 = 2;
      local_60 = 0;
      local_68 = 1;
      local_70 = &local_a0;
      local_b0 = auVar6;
      (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_001f1dd0)(&local_80);
      _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_6remove17hd917ffa485446d7fE
                (&local_a0,lVar1,local_b0._0_8_,local_b0._8_8_);
      if (local_a0 == (undefined8 *)&DAT_8000000000000000) {
        _ZN4core3ptr63drop_in_place_LT_core__option__Option_LT_uu_tsort__Node_GT__GT_17h50c07e5077228638E
                  (0x8000000000000000,local_98);
      }
      else {
        _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17hd96c388e51fdbafeE
                  (&local_80,&local_a0);
        auVar6 = _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17had4bf394b9d9334bE
                           (&local_80);
        lVar4 = auVar6._0_8_;
        while (lVar4 != 0) {
                    /* try { // try from 00160333 to 0016035c has its CatchHandler @ 0016041c */
          lVar4 = _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_13get_inner_mut17h9c29cb3229f656caE
                            (lVar1,auVar6._0_8_,auVar6._8_8_);
          if (lVar4 == 0) {
                    /* try { // try from 00160398 to 001603a4 has its CatchHandler @ 0016041e */
            (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_001f1dc8)
                      (&PTR_s_src_uu_tsort_src_tsort_001eb348);
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          plVar2 = (long *)(lVar4 + 0x28);
          *plVar2 = *plVar2 + -1;
          if (*plVar2 == 0) {
            _ZN5alloc11collections9vec_deque21VecDeque_LT_T_C_A_GT_9push_back17hbf92dcd24a88f4ebE
                      (local_50,auVar6._0_8_,auVar6._8_8_,&PTR_s_src_uu_tsort_src_tsort_001eb360);
          }
          auVar6 = _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17had4bf394b9d9334bE
                             (&local_80);
          lVar4 = auVar6._0_8_;
        }
                    /* try { // try from 00160360 to 00160367 has its CatchHandler @ 00160407 */
        _ZN4core3ptr67drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT__RF_str_GT__GT_17h7e29c45486167c57E
                  (&local_80);
      }
    } while (*(long *)(local_b8 + 0x30) != 0);
  }
  _ZN4core3ptr75drop_in_place_LT_alloc__collections__vec_deque__VecDeque_LT__RF_str_GT__GT_17h6126f693902a4b74E
            (local_50);
  return;
}