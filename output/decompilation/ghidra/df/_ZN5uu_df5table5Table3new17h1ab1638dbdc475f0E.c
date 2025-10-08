long * _ZN5uu_df5table5Table3new17h1ab1638dbdc475f0E(long *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  undefined auVar10 [16];
  undefined8 local_450;
  undefined8 uStack_448;
  long local_440;
  long local_438;
  long local_430;
  ulong local_428;
  undefined *local_420;
  long local_418;
  undefined local_410;
  undefined8 local_408;
  long *local_400;
  long local_3f8;
  long local_3f0;
  undefined4 *local_3e8;
  undefined4 local_3e0;
  undefined4 uStack_3dc;
  undefined4 uStack_3d8;
  undefined4 uStack_3d4;
  undefined8 local_3d0;
  undefined local_3c8 [32];
  undefined local_3a8 [24];
  long local_390;
  long lStack_388;
  long local_380;
  undefined4 *local_378;
  long local_2d8;
  undefined local_2a8 [208];
  undefined *local_1d8;
  long local_1d0;
  undefined local_1c8;
  undefined local_108 [216];
  
                    /* try { // try from 0016c5ea to 0016c5f6 has its CatchHandler @ 0016ca8c */
  _ZN5uu_df5table6Header11get_headers17h2b6e3eeea1b48b3eE(&local_3e0);
  lVar8 = *(long *)(param_2 + 8);
  lVar1 = *(long *)(param_2 + 0x10);
  lStack_388 = lVar8 + lVar1;
  local_380 = 0;
                    /* try { // try from 0016c627 to 0016c638 has its CatchHandler @ 0016ca87 */
  local_390 = lVar8;
  local_378 = &local_3e0;
  _ZN4core4iter6traits8iterator8Iterator7collect17h6fc38ef75d149566E(&local_438,&local_390);
  puVar4 = (undefined4 *)_ZN5alloc5alloc6Global10alloc_impl17h6fb1b6049873c120E(8,0x18);
  if (puVar4 == (undefined4 *)0x0) {
                    /* try { // try from 0016ca29 to 0016ca38 has its CatchHandler @ 0016cae3 */
    (*(code *)PTR__ZN5alloc5alloc18handle_alloc_error17h88aa4f4f9d19c4f9E_00209e90)(8,0x18);
LAB_0016ca4e:
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  *(undefined8 *)(puVar4 + 4) = local_3d0;
  *puVar4 = local_3e0;
  puVar4[1] = uStack_3dc;
  puVar4[2] = uStack_3d8;
  puVar4[3] = uStack_3d4;
  local_450 = 1;
  local_440 = 1;
                    /* try { // try from 0016c68b to 0016c697 has its CatchHandler @ 0016ca7d */
  uStack_448 = puVar4;
  local_400 = param_1;
  local_3f8 = lVar1;
  local_3f0 = lVar8;
  _ZN5uu_df5table3Row3new17h9186d85196a04d3bE(local_2a8);
  local_408 = param_3;
  _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17h21e6825ac7f6927eE
            (local_3c8,param_3);
  _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h0f20750b6c1dd1d2E
            (&local_390,local_3c8);
  if (*(char *)(param_2 + 0x51) == '\x01') {
    do {
      (*(code *)
        PTR__ZN94__LT_uu_df__table__Row_u20_as_u20_core__convert__From_LT_uu_df__filesystem__Filesystem_GT__GT_4from17h5bb8f604f83ef093E_0020a1a8
      )(local_108,&local_390);
      local_410 = 0;
                    /* try { // try from 0016c72b to 0016c737 has its CatchHandler @ 0016caa5 */
      local_420 = local_108;
      local_418 = param_2;
      _ZN5uu_df5table12RowFormatter10get_values17hdf51f7a80eb4184bE(local_3a8,&local_420);
      (*(code *)PTR_memcpy_00209e88)(&local_1d8,local_108,0xd0);
                    /* try { // try from 0016c749 to 0016c759 has its CatchHandler @ 0016cab7 */
      (*(code *)
        PTR__ZN65__LT_uu_df__table__Row_u20_as_u20_core__ops__arith__AddAssign_GT_10add_assign17hc07f7a0b7d63dbc9E_0020a198
      )(local_2a8,&local_1d8);
                    /* try { // try from 0016c75a to 0016c76d has its CatchHandler @ 0016cac9 */
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hce097b6b3d6d1bdfE
                (&local_450,local_3a8,&PTR_s_src_uu_df_src_table_rsIUse_IFree_00202f38);
      _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h0f20750b6c1dd1d2E
                (&local_390,local_3c8);
    } while (local_390 != -0x8000000000000000);
  }
  else {
    do {
      if (local_2d8 == 0) {
        _ZN4core3ptr50drop_in_place_LT_uu_df__filesystem__Filesystem_GT_17h59dcd820d6503e9bE
                  (&local_390);
      }
      else {
        (*(code *)
          PTR__ZN94__LT_uu_df__table__Row_u20_as_u20_core__convert__From_LT_uu_df__filesystem__Filesystem_GT__GT_4from17h5bb8f604f83ef093E_0020a1a8
        )(local_108,&local_390);
        local_410 = 0;
                    /* try { // try from 0016c9e1 to 0016c9ed has its CatchHandler @ 0016caa1 */
        local_420 = local_108;
        local_418 = param_2;
        _ZN5uu_df5table12RowFormatter10get_values17hdf51f7a80eb4184bE(local_3a8,&local_420);
        (*(code *)PTR_memcpy_00209e88)(&local_1d8,local_108,0xd0);
                    /* try { // try from 0016c9ff to 0016ca0f has its CatchHandler @ 0016caa3 */
        (*(code *)
          PTR__ZN65__LT_uu_df__table__Row_u20_as_u20_core__ops__arith__AddAssign_GT_10add_assign17hc07f7a0b7d63dbc9E_0020a198
        )(local_2a8,&local_1d8);
                    /* try { // try from 0016ca10 to 0016ca23 has its CatchHandler @ 0016ca9f */
        _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hce097b6b3d6d1bdfE
                  (&local_450,local_3a8,&PTR_s_src_uu_df_src_table_rsIUse_IFree_00202f38);
      }
      _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h0f20750b6c1dd1d2E
                (&local_390,local_3c8);
    } while (local_390 != -0x8000000000000000);
  }
                    /* try { // try from 0016c78d to 0016c7ee has its CatchHandler @ 0016cae1 */
  _ZN4core3ptr89drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT_uu_df__filesystem__Filesystem_GT__GT_17hd711030a980c8f88E
            (local_3c8);
  if (*(char *)(param_2 + 0x53) != '\0') {
    local_1d8 = local_2a8;
    local_1c8 = 1;
    local_1d0 = param_2;
    _ZN5uu_df5table12RowFormatter10get_values17hdf51f7a80eb4184bE(&local_390,&local_1d8);
    _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hce097b6b3d6d1bdfE
              (&local_450,&local_390,&PTR_s_src_uu_df_src_table_rsIUse_IFree_00202f08);
  }
  if (local_440 != 0) {
    local_3e8 = uStack_448 + local_440 * 6;
    puVar4 = uStack_448;
    do {
      puVar5 = puVar4 + 6;
      local_390 = *(long *)(puVar4 + 2);
      lStack_388 = local_390 + *(long *)(puVar4 + 4) * 0x18;
      local_380 = 0;
      auVar10 = _ZN110__LT_core__iter__adapters__enumerate__Enumerate_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h9f2ee3703a036410E
                          (&local_390);
      lVar8 = auVar10._8_8_;
      while (lVar8 != 0) {
        lVar8 = auVar10._8_8_;
        uVar9 = auVar10._0_8_;
                    /* try { // try from 0016c8ae to 0016c8d2 has its CatchHandler @ 0016cb0f */
        uVar6 = _ZN4core4iter6traits12double_ended19DoubleEndedIterator5rfold17h29668c6b9213f166E
                          (*(long *)(lVar8 + 8),*(long *)(lVar8 + 0x10) + *(long *)(lVar8 + 8));
        if (local_428 <= uVar9) {
                    /* try { // try from 0016ca3b to 0016ca4d has its CatchHandler @ 0016cae1 */
          (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_00209d80)
                    (uVar9,local_428,&PTR_s_src_uu_df_src_table_rsIUse_IFree_00202f20);
          goto LAB_0016ca4e;
        }
        if (*(ulong *)(local_430 + uVar9 * 8) < uVar6) {
          uVar7 = _ZN4core4iter6traits12double_ended19DoubleEndedIterator5rfold17h29668c6b9213f166E
                            (*(long *)(lVar8 + 8),*(long *)(lVar8 + 0x10) + *(long *)(lVar8 + 8));
          *(undefined8 *)(local_430 + uVar9 * 8) = uVar7;
        }
        auVar10 = _ZN110__LT_core__iter__adapters__enumerate__Enumerate_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h9f2ee3703a036410E
                            (&local_390);
        lVar8 = auVar10._8_8_;
      }
      puVar4 = puVar5;
    } while (puVar5 != local_3e8);
  }
                    /* try { // try from 0016c8e9 to 0016c8ff has its CatchHandler @ 0016ca50 */
  _ZN5uu_df5table5Table14get_alignments17h30bf81e1dc4abfc2E(&local_390,local_3f0,local_3f8);
  plVar3 = local_400;
  local_400[2] = local_380;
  *local_400 = local_390;
  local_400[1] = lStack_388;
  *(undefined4 *)(local_400 + 3) = (undefined4)local_450;
  *(undefined4 *)((long)local_400 + 0x1c) = local_450._4_4_;
  *(undefined4 *)(local_400 + 4) = (undefined4)uStack_448;
  *(undefined4 *)((long)local_400 + 0x24) = uStack_448._4_4_;
  local_400[5] = local_440;
  local_400[6] = local_438;
  local_400[7] = local_430;
  local_400[8] = local_428;
  _ZN4core3ptr38drop_in_place_LT_uu_df__table__Row_GT_17hd2993f597084129fE(local_2a8);
  return plVar3;
}