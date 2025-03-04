long * _ZN5uu_df5table5Table3new17h150da2e8fce38b34E(long *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined auVar9 [16];
  long local_570;
  long lStack_568;
  long local_560;
  undefined *local_558;
  long local_550;
  undefined local_548;
  undefined4 local_540;
  undefined4 uStack_53c;
  undefined4 uStack_538;
  undefined4 uStack_534;
  long local_530;
  long local_528;
  long local_520;
  undefined4 local_518;
  undefined4 uStack_514;
  undefined4 uStack_510;
  undefined4 uStack_50c;
  ulong local_508;
  undefined4 local_500;
  undefined4 uStack_4fc;
  undefined4 uStack_4f8;
  undefined4 uStack_4f4;
  undefined8 local_4f0;
  long local_4e8;
  long local_4e0;
  undefined8 local_4d8;
  undefined4 *local_4d0;
  undefined local_4c8 [32];
  undefined8 local_4a8;
  undefined8 uStack_4a0;
  ulong local_498;
  long local_3f0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  long local_3a8;
  long local_2c8;
  long lStack_2c0;
  long local_2b8;
  undefined local_1d8 [208];
  undefined local_108 [216];
  
                    /* try { // try from 001cb52e to 001cb53d has its CatchHandler @ 001cba67 */
  _ZN5uu_df5table6Header11get_headers17h9deb63aa1bbc7ffcE(&local_500);
  lVar5 = *(long *)(param_2 + 8);
  lVar1 = *(long *)(param_2 + 0x10);
  local_4e0 = lVar5 + lVar1;
  local_4d8 = 0;
                    /* try { // try from 001cb56e to 001cb57f has its CatchHandler @ 001cba5d */
  local_4e8 = lVar5;
  local_4d0 = &local_500;
  _ZN98__LT_alloc__vec__Vec_LT_T_GT__u20_as_u20_alloc__vec__spec_from_iter__SpecFromIter_LT_T_C_I_GT__GT_9from_iter17hdd0d63c294815eafE
            (&local_518,&local_4e8);
  puVar4 = (undefined4 *)_ZN5alloc5alloc6Global10alloc_impl17hf61749d460433fffE();
  if (puVar4 == (undefined4 *)0x0) {
                    /* try { // try from 001cba2c to 001cba3b has its CatchHandler @ 001cba73 */
                    /* WARNING: Subroutine does not return */
    _ZN5alloc5alloc18handle_alloc_error17h3816d26e7f8ae8a1E(8,0x18);
  }
  *(undefined8 *)(puVar4 + 4) = local_4f0;
  *puVar4 = local_500;
  puVar4[1] = uStack_4fc;
  puVar4[2] = uStack_4f8;
  puVar4[3] = uStack_4f4;
                    /* try { // try from 001cb5b3 to 001cb5c4 has its CatchHandler @ 001cba73 */
  local_528 = lVar1;
  local_520 = lVar5;
  _ZN5alloc5slice4hack8into_vec17h66565a3942fda66cE(&local_570,puVar4,1);
                    /* try { // try from 001cb5c8 to 001cb5d4 has its CatchHandler @ 001cba6c */
  _ZN5uu_df5table3Row3new17h8c73bfba9893cde9E(local_1d8);
  _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17h3c80df5ce5ec3924E
            (local_4c8,param_3);
  _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h79c16945b7fd0f56E
            (&local_2c8,local_4c8);
  puVar3 = PTR_memcpy_00245ae0;
  if (local_2c8 != -0x8000000000000000) {
    if (*(char *)(param_2 + 0x51) == '\0') {
      do {
        (*(code *)puVar3)(&local_4a8,&local_2c8,0xe8);
        if (local_3f0 == 0) {
                    /* try { // try from 001cb950 to 001cb957 has its CatchHandler @ 001cba80 */
          _ZN4core3ptr50drop_in_place_LT_uu_df__filesystem__Filesystem_GT_17heb85b8cb09ae29f1E
                    (&local_4a8);
        }
        else {
          (*(code *)puVar3)(&local_3b8,&local_2c8,0xe8);
                    /* try { // try from 001cb9a7 to 001cb9b1 has its CatchHandler @ 001cba80 */
          _ZN94__LT_uu_df__table__Row_u20_as_u20_core__convert__From_LT_uu_df__filesystem__Filesystem_GT__GT_4from17h3abce5fbf3fc5b59E
                    (local_108,&local_3b8);
          local_548 = 0;
                    /* try { // try from 001cb9c1 to 001cb9cf has its CatchHandler @ 001cba7e */
          local_558 = local_108;
          local_550 = param_2;
          _ZN5uu_df5table12RowFormatter10get_values17h6dce5b584cdc4209E(&local_540,&local_558);
          (*(code *)puVar3)(&local_3b8,local_108,0xd0);
                    /* try { // try from 001cb9de to 001cb9ed has its CatchHandler @ 001cba7a */
          _ZN65__LT_uu_df__table__Row_u20_as_u20_core__ops__arith__AddAssign_GT_10add_assign17h1c84c760c7ffbf98E
                    (local_1d8,&local_3b8);
          local_3a8 = local_530;
          local_3b8 = CONCAT44(uStack_53c,local_540);
          uStack_3b0 = CONCAT44(uStack_534,uStack_538);
                    /* try { // try from 001cba08 to 001cba14 has its CatchHandler @ 001cba7c */
          _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hf89663a6b69570e9E(&local_570,&local_3b8);
        }
        _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h79c16945b7fd0f56E
                  (&local_2c8,local_4c8);
      } while (local_2c8 != -0x8000000000000000);
    }
    else {
      do {
        (*(code *)puVar3)(&local_4a8,&local_2c8,0xe8);
        (*(code *)puVar3)(&local_3b8,&local_2c8,0xe8);
                    /* try { // try from 001cb66f to 001cb679 has its CatchHandler @ 001cba82 */
        _ZN94__LT_uu_df__table__Row_u20_as_u20_core__convert__From_LT_uu_df__filesystem__Filesystem_GT__GT_4from17h3abce5fbf3fc5b59E
                  (local_108,&local_3b8);
        local_548 = 0;
                    /* try { // try from 001cb689 to 001cb697 has its CatchHandler @ 001cba84 */
        local_558 = local_108;
        local_550 = param_2;
        _ZN5uu_df5table12RowFormatter10get_values17h6dce5b584cdc4209E(&local_540,&local_558);
        (*(code *)puVar3)(&local_3b8,local_108,0xd0);
                    /* try { // try from 001cb6a5 to 001cb6b4 has its CatchHandler @ 001cba96 */
        _ZN65__LT_uu_df__table__Row_u20_as_u20_core__ops__arith__AddAssign_GT_10add_assign17h1c84c760c7ffbf98E
                  (local_1d8,&local_3b8);
        local_3a8 = local_530;
        local_3b8 = CONCAT44(uStack_53c,local_540);
        uStack_3b0 = CONCAT44(uStack_534,uStack_538);
                    /* try { // try from 001cb6cf to 001cb6db has its CatchHandler @ 001cbaa5 */
        _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hf89663a6b69570e9E(&local_570,&local_3b8);
        _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h79c16945b7fd0f56E
                  (&local_2c8,local_4c8);
      } while (local_2c8 != -0x8000000000000000);
    }
  }
                    /* try { // try from 001cb6ff to 001cb759 has its CatchHandler @ 001cbaba */
  _ZN4core3ptr89drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT_uu_df__filesystem__Filesystem_GT__GT_17h34738f1f8620436dE
            (local_4c8);
  if (*(char *)(param_2 + 0x53) != '\0') {
    local_4a8 = local_1d8;
    local_498 = CONCAT71(local_498._1_7_,1);
    uStack_4a0 = param_2;
    _ZN5uu_df5table12RowFormatter10get_values17h6dce5b584cdc4209E(&local_3b8,&local_4a8);
    _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hf89663a6b69570e9E(&local_570,&local_3b8);
  }
  uStack_4a0 = lStack_568 + local_560 * 0x18;
  local_4a8 = (undefined *)lStack_568;
  lVar5 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h9feb0d036dbb7b0dE
                    (&local_4a8);
  if (lVar5 != 0) {
    do {
      local_3b8 = *(long *)(lVar5 + 8);
      uStack_3b0 = local_3b8 + *(long *)(lVar5 + 0x10) * 0x18;
      local_3a8 = 0;
      auVar9 = _ZN110__LT_core__iter__adapters__enumerate__Enumerate_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h168fcdda2a16741aE
                         (&local_3b8);
      lVar5 = auVar9._8_8_;
      while (lVar5 != 0) {
        uVar8 = auVar9._0_8_;
        uVar7 = *(undefined8 *)(auVar9._8_8_ + 8);
        uVar2 = *(undefined8 *)(auVar9._8_8_ + 0x10);
                    /* try { // try from 001cb828 to 001cb857 has its CatchHandler @ 001cbabc */
        uVar6 = _ZN13unicode_width9str_width17hf245007b39258182E(uVar7,uVar2,0);
        if (local_508 <= uVar8) {
                    /* try { // try from 001cba1a to 001cba29 has its CatchHandler @ 001cbaba */
                    /* WARNING: Subroutine does not return */
          _ZN4core9panicking18panic_bounds_check17h25a5330941572dd1E(uVar8,local_508,&DAT_00241b70);
        }
        lVar5 = CONCAT44(uStack_50c,uStack_510);
        if (*(ulong *)(lVar5 + uVar8 * 8) < uVar6) {
          uVar7 = _ZN13unicode_width9str_width17hf245007b39258182E(uVar7,uVar2,0);
          *(undefined8 *)(lVar5 + uVar8 * 8) = uVar7;
        }
        auVar9 = _ZN110__LT_core__iter__adapters__enumerate__Enumerate_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h168fcdda2a16741aE
                           (&local_3b8);
        lVar5 = auVar9._8_8_;
      }
      lVar5 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h9feb0d036dbb7b0dE
                        (&local_4a8);
    } while (lVar5 != 0);
  }
  local_2b8 = local_560;
  local_2c8 = local_570;
  lStack_2c0 = lStack_568;
  local_498 = local_508;
  local_4a8._0_4_ = local_518;
  local_4a8._4_4_ = uStack_514;
  uStack_4a0._0_4_ = uStack_510;
  uStack_4a0._4_4_ = uStack_50c;
                    /* try { // try from 001cb895 to 001cb8ab has its CatchHandler @ 001cba3c */
  _ZN5uu_df5table5Table14get_alignments17hd7c942e203dd63edE(&local_3b8,local_520,local_528);
  param_1[2] = local_3a8;
  *param_1 = local_3b8;
  param_1[1] = uStack_3b0;
  param_1[3] = local_2c8;
  param_1[4] = lStack_2c0;
  param_1[5] = local_2b8;
  *(undefined4 *)(param_1 + 6) = (undefined4)local_4a8;
  *(undefined4 *)((long)param_1 + 0x34) = local_4a8._4_4_;
  *(undefined4 *)(param_1 + 7) = (undefined4)uStack_4a0;
  *(undefined4 *)((long)param_1 + 0x3c) = uStack_4a0._4_4_;
  param_1[8] = local_498;
                    /* try { // try from 001cb8fa to 001cb906 has its CatchHandler @ 001cba6c */
  _ZN4core3ptr38drop_in_place_LT_uu_df__table__Row_GT_17h54411b51149585a8E(local_1d8);
  return param_1;
}