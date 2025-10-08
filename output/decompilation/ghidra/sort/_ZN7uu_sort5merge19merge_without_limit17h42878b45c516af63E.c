void _ZN7uu_sort5merge19merge_without_limit17h42878b45c516af63E
               (long *param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long local_2e0;
  long local_2d8;
  long *local_2d0;
  long local_2c8;
  undefined8 local_2c0;
  undefined local_2b8 [16];
  long local_2a8;
  undefined local_2a0 [16];
  undefined8 local_290;
  long local_288;
  long local_280;
  long local_278;
  long local_270;
  long local_268;
  long local_260;
  long local_258;
  long local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  long local_230;
  long local_228;
  long lStack_220;
  undefined local_218 [16];
  long local_208;
  undefined4 local_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  long local_160;
  long local_158;
  long local_150;
  long local_148;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined8 local_110;
  long local_108;
  long lStack_100;
  long local_f8;
  undefined8 local_d0 [2];
  undefined8 local_c0;
  undefined8 local_b0;
  undefined local_a8;
  
                    /* try { // try from 001c93de to 001c93ef has its CatchHandler @ 001c9a73 */
  local_2d0 = param_1;
  local_2c8 = param_2;
  local_2c0 = param_3;
  _ZN3std4sync4mpmc7channel17h23653b051ee49459E(&local_228);
  lVar6 = lStack_220;
  lVar4 = local_228;
  local_268 = local_228;
  local_260 = lStack_220;
  local_280 = local_218._0_8_;
  local_258 = local_218._0_8_;
  local_288 = local_218._8_8_;
  local_250 = local_218._8_8_;
  uVar1 = *(undefined8 *)(param_2 + 8);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  _ZN102__LT_core__iter__adapters__map__Map_LT_I_C_F_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_9size_hint17h39e7b7df2911933cE
            (&local_228,uVar1,uVar2);
                    /* try { // try from 001c946d to 001c9482 has its CatchHandler @ 001c9a83 */
  local_2b8 = _ZN5alloc7raw_vec20RawVecInner_LT_A_GT_16with_capacity_in17hfd8a024c458e05a7E
                        (local_228,8,0x78,&PTR_s_src_uu_sort_src_merge_rs_0028c8c8);
  local_2a8 = 0;
  _ZN102__LT_core__iter__adapters__map__Map_LT_I_C_F_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_9size_hint17h39e7b7df2911933cE
            (&local_228,uVar1,uVar2);
                    /* try { // try from 001c94b6 to 001c94ce has its CatchHandler @ 001c9a7b */
  local_2a0 = _ZN5alloc7raw_vec20RawVecInner_LT_A_GT_16with_capacity_in17hfd8a024c458e05a7E
                        (local_228,8,0x10,&PTR_s_src_uu_sort_src_merge_rs_0028c8e0);
  local_290 = 0;
  _ZN4core4iter6traits8iterator8Iterator9enumerate17h6b5309ea41ee41d1E(&local_108,local_2c8);
  local_278 = -0x7fffffffffffffff;
  while( true ) {
                    /* try { // try from 001c9520 to 001c9534 has its CatchHandler @ 001c9af7 */
    _ZN110__LT_core__iter__adapters__enumerate__Enumerate_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h6ae339dbe463d158E
              (&local_160,&local_108);
    lVar7 = local_148;
    lVar8 = local_150;
    lVar3 = local_158;
    if (local_158 == local_278) {
                    /* try { // try from 001c96bb to 001c96c7 has its CatchHandler @ 001c9a8b */
      _ZN4core3ptr463drop_in_place_LT_core__iter__adapters__enumerate__Enumerate_LT_core__iter__adapters__map__Map_LT_alloc__vec__into_iter__IntoIter_LT_uu_sort__merge__ClosedCompressedTmpFile_GT__C_alloc__boxed__Box_LT_dyn_u20_core__ops__function__FnMut_LT__LP_uu_sort__merge__ClosedCompressedTmpFile_C__RP__GT__u2b_Output_u20__u3d__u20_core__result__Result_LT_uu_sort__merge__CompressedTmpMergeInput_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT__GT__GT_17h68222a5a85c081c0E
                (&local_108);
      lVar3 = local_2a8;
      if (local_2a8 != 0) {
        lVar8 = 0;
        do {
                    /* try { // try from 001c9700 to 001c970c has its CatchHandler @ 001c9af9 */
          _ZN7uu_sort6chunks13RecycledChunk3new17hb2d00041a3f0fa31E(local_d0,0x2000);
          local_228 = lVar8;
          (*(code *)PTR_memcpy_00296e48)(&lStack_220,local_d0,0x90);
                    /* try { // try from 001c9726 to 001c9745 has its CatchHandler @ 001c9af9 */
          _ZN3std4sync4mpmc15Sender_LT_T_GT_4send17h3b2f74fb04f1ee0cE
                    (local_d0,lVar4,lVar6,&local_228);
          _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h251beb4d5478fb09E
                    (local_d0,&PTR_s_src_uu_sort_src_merge_rs_0028c910);
          lVar8 = lVar8 + 1;
        } while (lVar3 != lVar8);
      }
                    /* try { // try from 001c974e to 001c9761 has its CatchHandler @ 001c9a8b */
      _ZN62__LT_uu_sort__GlobalSettings_u20_as_u20_core__clone__Clone_GT_5clone17h43265696f2462bc6E
                (local_d0,local_2c0);
      local_228 = local_280;
      lStack_220 = local_288;
      local_208 = local_2a8;
      local_218 = local_2b8;
      (*(code *)PTR_memcpy_00296e48)(&local_200,local_d0,0xa0);
      local_c0 = 0x8000000000000000;
      local_d0[0] = 0;
      local_a8 = 0;
                    /* try { // try from 001c97d9 to 001c980c has its CatchHandler @ 001c9a8b */
      _ZN3std6thread7Builder15spawn_unchecked17hcad965377b0ba44fE(&local_160,local_d0,&local_228);
      _ZN4core6result19Result_LT_T_C_E_GT_6expect17h12022375ebf47b21E(&local_108,&local_160);
      local_248 = 0;
      local_240 = 8;
      local_238 = 0;
      _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17h162218b9ede24dc7E
                (local_d0,local_2a0);
      local_b0 = 0;
      _ZN110__LT_core__iter__adapters__enumerate__Enumerate_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h2dd4f5ee12df4679E
                (&local_160,local_d0);
      if (local_158 != 3) {
        do {
          lVar7 = local_150;
          lVar8 = local_158;
          lVar3 = local_160;
          local_2e0 = local_158;
          local_2d8 = local_150;
                    /* try { // try from 001c99b7 to 001c99f6 has its CatchHandler @ 001c9abf */
          local_230 = _ZN3std4sync4mpmc17Receiver_LT_T_GT_4recv17h60814cb01a26dc76E
                                (local_158,local_150);
          if (local_230 == 0) {
                    /* try { // try from 001c9a40 to 001c9a4c has its CatchHandler @ 001c9abf */
            _ZN4core3ptr100drop_in_place_LT_core__result__Result_LT_uu_sort__chunks__Chunk_C_std__sync__mpsc__RecvError_GT__GT_17h7ff86e8d0d3ee6b2E
                      (&local_230);
                    /* try { // try from 001c9a4d to 001c9a56 has its CatchHandler @ 001c9a97 */
            _ZN4core3ptr76drop_in_place_LT_std__sync__mpsc__Receiver_LT_uu_sort__chunks__Chunk_GT__GT_17h46cfb158905bad70E
                      (&local_2e0);
          }
          else {
            local_228 = 1;
            lStack_220 = 1;
            local_218._0_8_ = local_230;
            local_218._0_8_ = _ZN5alloc5boxed12Box_LT_T_GT_3new17h380512f813d0cda3E(&local_228);
            local_218._8_8_ = 0;
            local_228 = lVar8;
            lStack_220 = lVar7;
            local_208 = lVar3;
                    /* try { // try from 001c9a23 to 001c9a32 has its CatchHandler @ 001c9a99 */
            _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h8e51dcbac507e55aE(&local_248,&local_228);
          }
          _ZN110__LT_core__iter__adapters__enumerate__Enumerate_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h2dd4f5ee12df4679E
                    (&local_160,local_d0);
        } while (local_158 != 3);
      }
                    /* try { // try from 001c9874 to 001c9880 has its CatchHandler @ 001c9a6e */
      _ZN4core3ptr165drop_in_place_LT_core__iter__adapters__enumerate__Enumerate_LT_alloc__vec__into_iter__IntoIter_LT_std__sync__mpsc__Receiver_LT_uu_sort__chunks__Chunk_GT__GT__GT__GT_17h8bcba2f41827e630E
                (local_d0);
                    /* try { // try from 001c9881 to 001c989a has its CatchHandler @ 001c9a69 */
      _ZN16binary_heap_plus11binary_heap23BinaryHeap_LT_T_C_C_GT_16from_vec_cmp_raw17h24b3bd304cf4e3d6E
                (&local_228,&local_248,local_2c0);
      local_2d0[8] = local_f8;
      local_2d0[6] = local_108;
      local_2d0[7] = lStack_100;
      local_2d0[2] = local_228;
      local_2d0[3] = lStack_220;
      *(undefined (*) [16])(local_2d0 + 4) = local_218;
      *local_2d0 = lVar4;
      local_2d0[1] = lVar6;
      local_2d0[9] = 0;
      return;
    }
    local_270 = local_160;
                    /* try { // try from 001c9573 to 001c9582 has its CatchHandler @ 001c9a9e */
    _ZN3std4sync4mpmc12sync_channel17hb189ed79e26d1c27E(&local_228,2);
    lVar5 = local_228;
    local_2e0 = local_228;
    local_2d8 = lStack_220;
                    /* try { // try from 001c95ad to 001c95b6 has its CatchHandler @ 001c9aa3 */
    _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h201a3de33b24f801E
              (local_2a0,local_218._0_8_,local_218._8_8_);
    if (lVar3 == -0x8000000000000000) break;
    local_1d0 = local_110;
    local_1e0 = local_120;
    uStack_1dc = uStack_11c;
    uStack_1d8 = uStack_118;
    uStack_1d4 = uStack_114;
    local_1f0 = local_130;
    uStack_1ec = uStack_12c;
    uStack_1e8 = uStack_128;
    uStack_1e4 = uStack_124;
    local_200 = local_140;
    uStack_1fc = uStack_13c;
    uStack_1f8 = uStack_138;
    uStack_1f4 = uStack_134;
    local_218._0_8_ = lVar3;
    local_218._8_8_ = lVar8;
    local_208 = lVar7;
    local_1c8 = 0;
    local_1c0 = 1;
    local_1b8 = 0;
                    /* try { // try from 001c9645 to 001c9669 has its CatchHandler @ 001c9b03 */
    local_228 = lVar5;
    _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h8111662257f0ee55E(local_2b8,&local_228);
    _ZN7uu_sort6chunks13RecycledChunk3new17hb2d00041a3f0fa31E(local_d0,0x2000);
    local_228 = local_270;
    (*(code *)PTR_memcpy_00296e48)(&lStack_220,local_d0,0x90);
                    /* try { // try from 001c9690 to 001c96b3 has its CatchHandler @ 001c9b03 */
    _ZN3std4sync4mpmc15Sender_LT_T_GT_4send17h3b2f74fb04f1ee0cE(local_d0,lVar4,lVar6,&local_228);
    _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h251beb4d5478fb09E
              (local_d0,&PTR_s_src_uu_sort_src_merge_rs_0028c958);
  }
  local_2d0[1] = lVar8;
  local_2d0[2] = lVar7;
  *local_2d0 = 3;
                    /* try { // try from 001c98ff to 001c9908 has its CatchHandler @ 001c9a64 */
  _ZN4core3ptr78drop_in_place_LT_std__sync__mpsc__SyncSender_LT_uu_sort__chunks__Chunk_GT__GT_17h11dcc279d58efe5dE
            (&local_2e0);
                    /* try { // try from 001c990b to 001c9917 has its CatchHandler @ 001c9a8b */
  _ZN4core3ptr463drop_in_place_LT_core__iter__adapters__enumerate__Enumerate_LT_core__iter__adapters__map__Map_LT_alloc__vec__into_iter__IntoIter_LT_uu_sort__merge__ClosedCompressedTmpFile_GT__C_alloc__boxed__Box_LT_dyn_u20_core__ops__function__FnMut_LT__LP_uu_sort__merge__ClosedCompressedTmpFile_C__RP__GT__u2b_Output_u20__u3d__u20_core__result__Result_LT_uu_sort__merge__CompressedTmpMergeInput_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT__GT__GT_17h68222a5a85c081c0E
            (&local_108);
                    /* try { // try from 001c991a to 001c9923 has its CatchHandler @ 001c9a7b */
  _ZN4core3ptr99drop_in_place_LT_alloc__vec__Vec_LT_std__sync__mpsc__Receiver_LT_uu_sort__chunks__Chunk_GT__GT__GT_17h800b8e41f5635b1cE
            (local_2a0);
                    /* try { // try from 001c9926 to 001c992f has its CatchHandler @ 001c9a83 */
  _ZN4core3ptr145drop_in_place_LT_alloc__vec__Vec_LT_core__option__Option_LT_uu_sort__merge__ReaderFile_LT_uu_sort__merge__CompressedTmpMergeInput_GT__GT__GT__GT_17h5ead729a5d9da4e6E
            (local_2b8);
                    /* try { // try from 001c9930 to 001c993c has its CatchHandler @ 001c9a5c */
  _ZN4core3ptr100drop_in_place_LT_std__sync__mpsc__Receiver_LT__LP_usize_C_uu_sort__chunks__RecycledChunk_RP__GT__GT_17h8226a8f17c574481E
            (&local_258);
  _ZN4core3ptr98drop_in_place_LT_std__sync__mpsc__Sender_LT__LP_usize_C_uu_sort__chunks__RecycledChunk_RP__GT__GT_17hc042c6d348025020E
            (&local_268);
  return;
}