long _ZN7uu_tail6chunks16LinesChunkBuffer4fill17hcbed3c945377b024E(ulong *param_1,long param_2)

{
  long *plVar1;
  undefined *puVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  undefined uVar11;
  undefined auVar12 [16];
  undefined local_6060;
  undefined7 uStack_605f;
  long local_6058;
  undefined8 local_6030;
  undefined8 local_5030;
  undefined8 local_4060;
  undefined8 uStack_4058;
  undefined local_4050;
  undefined local_4048 [24];
  undefined8 local_4030;
  undefined8 local_3030;
  undefined local_2048 [24];
  undefined8 local_2030;
  undefined8 local_1030;
  
  puVar2 = PTR_memset_002c2d40;
  local_1030 = 0;
  local_2030 = 0;
  local_3030 = 0;
  local_4030 = 0;
  local_5030 = 0;
  local_6030 = 0;
  uVar11 = *(undefined *)(param_1 + 6);
  (*(code *)PTR_memset_002c2d40)(local_4048,0,0x2000);
  (*(code *)puVar2)(&local_6060,0,0x2010);
LAB_00213805:
  local_4050 = uVar11;
  lVar4 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h0dcddc7dafab587cE(&local_6060);
  do {
                    /* try { // try from 00213818 to 00213825 has its CatchHandler @ 00213a14 */
    _ZN7uu_tail6chunks10LinesChunk4fill17hef4f17e44b226b86E(&local_6060,lVar4,param_2);
    if (CONCAT71(uStack_605f,local_6060) != 0) {
LAB_002139b0:
      _ZN4core3ptr73drop_in_place_LT_alloc__boxed__Box_LT_uu_tail__chunks__LinesChunk_GT__GT_17h0acdc40ea758a305E
                (lVar4);
      return local_6058;
    }
    if (local_6058 != 1) {
      if (param_1[3] == 0) {
        local_6058 = 0;
        goto LAB_002139b0;
      }
      uVar10 = (param_1[3] + param_1[2]) - 1;
      uVar8 = param_1[1];
      uVar7 = 0;
      if (*param_1 <= uVar10) {
        uVar7 = *param_1;
      }
      param_2 = uVar10 - uVar7;
                    /* try { // try from 002138ea to 0021390e has its CatchHandler @ 00213a12 */
      auVar12 = _ZN7uu_tail6chunks10LinesChunk10get_buffer17h4eee912e7ef2e0dbE
                          (*(undefined8 *)(uVar8 + param_2 * 8));
      local_6060 = *(undefined *)(param_1 + 6);
      cVar3 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_9ends_with17hfbf0ee6efda818afE
                        (auVar12._0_8_,auVar12._8_8_,&local_6060,1);
      if (cVar3 == '\0') {
        plVar1 = (long *)(*(long *)(uVar8 + param_2 * 8) + 0x2008);
        *plVar1 = *plVar1 + 1;
        param_1[4] = param_1[4] + 1;
      }
                    /* try { // try from 0021393c to 00213943 has its CatchHandler @ 00213a10 */
      while (lVar5 = _ZN5alloc11collections9vec_deque21VecDeque_LT_T_C_A_GT_9pop_front17heecc59ff273f6cc6E
                               (param_1), lVar5 != 0) {
        uVar8 = param_1[4];
        uVar7 = param_1[5];
        uVar10 = uVar8 - *(long *)(lVar5 + 0x2008);
        if (uVar10 <= uVar7) {
          lVar9 = 0;
          if (uVar7 <= uVar8) {
            lVar9 = uVar8 - uVar7;
          }
                    /* try { // try from 0021396d to 00213997 has its CatchHandler @ 00213a03 */
          _ZN7uu_tail6chunks10LinesChunk10from_chunk17h92082d78e298c7e3E(local_2048,lVar5,lVar9);
          uVar6 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h0dcddc7dafab587cE(local_2048);
          _ZN5alloc11collections9vec_deque21VecDeque_LT_T_C_A_GT_10push_front17h9b636fbd45ca32a9E
                    (param_1,uVar6);
          _ZN4core3ptr73drop_in_place_LT_alloc__boxed__Box_LT_uu_tail__chunks__LinesChunk_GT__GT_17h0acdc40ea758a305E
                    (lVar5);
          _ZN4core3ptr73drop_in_place_LT_alloc__boxed__Box_LT_uu_tail__chunks__LinesChunk_GT__GT_17h0acdc40ea758a305E
                    (lVar4);
          return 0;
        }
        param_1[4] = uVar10;
        _ZN4core3ptr73drop_in_place_LT_alloc__boxed__Box_LT_uu_tail__chunks__LinesChunk_GT__GT_17h0acdc40ea758a305E
                  (lVar5);
      }
LAB_002139e9:
                    /* try { // try from 002139e9 to 002139f5 has its CatchHandler @ 00213a12 */
      _ZN4core6option13unwrap_failed17h0e11329e76906eaaE(&PTR_s_src_uu_tail_src_chunks_rs_002bc8f0);
LAB_002139f6:
      uVar6 = _ZN4core6option13unwrap_failed17h0e11329e76906eaaE
                        (&PTR_s_src_uu_tail_src_chunks_rs_002bc8d8);
                    /* catch() { ... } // from try @ 0021396d with catch @ 00213a03 */
      _ZN4core3ptr73drop_in_place_LT_alloc__boxed__Box_LT_uu_tail__chunks__LinesChunk_GT__GT_17h0acdc40ea758a305E
                (param_2);
      _ZN4core3ptr73drop_in_place_LT_alloc__boxed__Box_LT_uu_tail__chunks__LinesChunk_GT__GT_17h0acdc40ea758a305E
                (lVar4);
      lVar4 = _Unwind_Resume(uVar6);
      return lVar4;
    }
    param_1[4] = param_1[4] + *(long *)(lVar4 + 0x2008);
    _ZN5alloc11collections9vec_deque21VecDeque_LT_T_C_A_GT_9push_back17ha09b0b9d3d64f9d9E
              (param_1,lVar4);
    if (param_1[3] == 0) {
      _ZN4core6option13expect_failed17h9e03a1f6ff88dbcfE
                ("Out of bounds access",0x14,&PTR_s_src_uu_tail_src_chunks_rs_002bc8c0);
      goto LAB_002139e9;
    }
    uVar8 = 0;
    if (*param_1 <= param_1[2]) {
      uVar8 = *param_1;
    }
    if (param_1[4] - *(long *)(*(long *)(param_1[1] + (param_1[2] - uVar8) * 8) + 0x2008) <=
        param_1[5]) break;
    lVar5 = _ZN5alloc11collections9vec_deque21VecDeque_LT_T_C_A_GT_9pop_front17heecc59ff273f6cc6E
                      (param_1);
    if (lVar5 == 0) goto LAB_002139f6;
    param_1[4] = param_1[4] - *(long *)(lVar5 + 0x2008);
    lVar4 = lVar5;
  } while( true );
  uVar11 = *(undefined *)(param_1 + 6);
  (*(code *)PTR_memcpy_002c2760)(&local_6060,local_4048,0x2000);
  local_4060 = 0;
  uStack_4058 = 0;
  goto LAB_00213805;
}