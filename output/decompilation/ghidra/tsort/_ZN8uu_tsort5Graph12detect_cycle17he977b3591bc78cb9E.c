void _ZN8uu_tsort5Graph12detect_cycle17he977b3591bc78cb9E(undefined4 *param_1,long param_2)

{
  code *pcVar1;
  char cVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined local_c9;
  undefined8 local_c8;
  undefined8 local_c0;
  ulong local_b8;
  undefined local_b0 [16];
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  local_c8 = 0;
  local_c0 = 8;
  local_b8 = 0;
  _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_4iter17h2e9a564f7dfa53c1E(&local_60,param_2 + 0x18)
  ;
  while( true ) {
    lVar3 = _ZN92__LT_hashbrown__map__Iter_LT_K_C_V_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h781c599668cd142aE
                      (&local_60);
    if (lVar3 == 0) break;
                    /* try { // try from 0016083d to 00160847 has its CatchHandler @ 001609d4 */
    _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17he0bb8203879665a3E(&local_c8,lVar3);
  }
  if (1 < local_b8) {
    if (local_b8 < 0x15) {
      _ZN4core5slice4sort6shared9smallsort25insertion_sort_shift_left17hcb7b59225195c5b3E
                (local_c0,local_b8,1);
    }
    else {
                    /* try { // try from 001609a3 to 001609b0 has its CatchHandler @ 001609cf */
      (*(code *)PTR__ZN4core5slice4sort8unstable7ipnsort17h2f1712faeb7eb0eeE_001f1d00)
                (local_c0,local_b8,&local_c9);
    }
  }
                    /* try { // try from 0016085e to 00160867 has its CatchHandler @ 001609cf */
  _ZN87__LT_hashbrown__map__HashMap_LT_K_C_V_C_S_C_A_GT__u20_as_u20_core__default__Default_GT_7default17ha19d1886ac477c4cE
            (&local_60);
  local_78 = local_40;
  uStack_74 = uStack_3c;
  uStack_70 = uStack_38;
  uStack_6c = uStack_34;
  local_88 = local_50;
  uStack_84 = uStack_4c;
  uStack_80 = uStack_48;
  uStack_7c = uStack_44;
  local_98 = local_60;
  uStack_94 = uStack_5c;
  uStack_90 = uStack_58;
  uStack_8c = uStack_54;
                    /* try { // try from 00160890 to 001608a5 has its CatchHandler @ 001609bb */
  local_b0 = _ZN5alloc7raw_vec20RawVecInner_LT_A_GT_16with_capacity_in17h71d8534b57e79723E
                       (*(undefined8 *)(param_2 + 0x30),8,0x10,
                        &PTR_s_src_uu_tsort_src_tsort_001eb408);
  local_a0 = 0;
  _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17h07e54bea6521bd7bE
            (&local_60,&local_c8);
  puVar4 = (undefined8 *)
           _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h45888b6cb6b61f5bE
                     (&local_60);
  if (puVar4 != (undefined8 *)0x0) {
    do {
                    /* try { // try from 00160900 to 00160925 has its CatchHandler @ 001609f6 */
      lVar3 = _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_9get_inner17h0d0bb528157eeff4E
                        (&local_98,puVar4);
      if (lVar3 == 0) {
        cVar2 = _ZN8uu_tsort5Graph3dfs17h69e8652cb4211fe8E
                          (param_2,*puVar4,puVar4[1],&local_98,local_b0);
        if (cVar2 != '\0') {
          *(undefined8 *)(param_1 + 4) = local_a0;
          *param_1 = local_b0._0_4_;
          param_1[1] = local_b0._4_4_;
          param_1[2] = local_b0._8_4_;
          param_1[3] = local_b0._12_4_;
                    /* try { // try from 0016093b to 00160944 has its CatchHandler @ 001609b6 */
          _ZN4core3ptr71drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT__RF__RF_str_GT__GT_17h0b68fb3399b74d1aE
                    (&local_60);
          _ZN4core3ptr72drop_in_place_LT_std__collections__hash__set__HashSet_LT__RF_str_GT__GT_17h67c827c73ff2c6a7E
                    (CONCAT44(uStack_94,local_98),CONCAT44(uStack_8c,uStack_90));
          return;
        }
      }
      puVar4 = (undefined8 *)
               _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h45888b6cb6b61f5bE
                         (&local_60);
    } while (puVar4 != (undefined8 *)0x0);
  }
                    /* try { // try from 0016097e to 001609a0 has its CatchHandler @ 001609f1 */
  _ZN4core3ptr71drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT__RF__RF_str_GT__GT_17h0b68fb3399b74d1aE
            (&local_60);
  (*(code *)PTR__ZN4core9panicking5panic17h85d6dd562679980cE_001f1d70)
            ("i",0x28,&PTR_s_src_uu_tsort_src_tsort_001eb420);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}