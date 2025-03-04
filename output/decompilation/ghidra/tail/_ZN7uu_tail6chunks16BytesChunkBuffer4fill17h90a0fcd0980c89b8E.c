long _ZN7uu_tail6chunks16BytesChunkBuffer4fill17h90a0fcd0980c89b8E
               (ulong *param_1,undefined8 param_2)

{
  undefined *puVar1;
  long in_RAX;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long local_4038;
  long local_4030;
  undefined8 local_3030;
  undefined8 local_2038;
  undefined8 local_2030 [512];
  undefined8 local_1030;
  
  puVar1 = PTR_memset_002c2d40;
  local_1030 = 0;
  local_2030[0] = 0;
  local_3030 = 0;
  local_4030 = 0;
  local_4038 = in_RAX;
  (*(code *)PTR_memset_002c2d40)(local_2030,0,0x2000);
  (*(code *)puVar1)(&local_4038,0,0x2008);
  lVar2 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h5d3de1da27eb11e8E(&local_4038);
  puVar1 = PTR_memcpy_002c2760;
  do {
                    /* try { // try from 00212eb4 to 00212ec1 has its CatchHandler @ 0021300c */
    _ZN7uu_tail6chunks10BytesChunk4fill17h4a717c5d739984d3E(&local_4038,lVar2,param_2);
    lVar3 = local_4030;
    if (local_4038 != 0) {
LAB_00212faa:
      _ZN4core3ptr73drop_in_place_LT_alloc__boxed__Box_LT_uu_tail__chunks__BytesChunk_GT__GT_17h186d7d501d28deeeE
                (lVar2);
      return lVar3;
    }
    if (local_4030 == 0) {
      if (param_1[3] != 0) {
                    /* try { // try from 00212f64 to 00212f6b has its CatchHandler @ 00212ffd */
        lVar3 = _ZN5alloc11collections9vec_deque21VecDeque_LT_T_C_A_GT_9pop_front17hf015bc98e843c630E
                          (param_1);
        if (lVar3 == 0) goto LAB_00212ff0;
        lVar6 = 0;
        if (param_1[4] <= param_1[5]) {
          lVar6 = param_1[5] - param_1[4];
        }
                    /* try { // try from 00212f82 to 00212f9f has its CatchHandler @ 00212fff */
        _ZN7uu_tail6chunks10BytesChunk10from_chunk17hb6067992a01f279aE(&local_4038,lVar3,lVar6);
        uVar4 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h5d3de1da27eb11e8E(&local_4038);
        _ZN5alloc11collections9vec_deque21VecDeque_LT_T_C_A_GT_10push_front17hc9231dd819dfa519E
                  (param_1,uVar4);
        _ZN4core3ptr73drop_in_place_LT_alloc__boxed__Box_LT_uu_tail__chunks__BytesChunk_GT__GT_17h186d7d501d28deeeE
                  (lVar3);
      }
      lVar3 = 0;
      goto LAB_00212faa;
    }
    param_1[5] = param_1[5] + *(long *)(lVar2 + 0x2000);
    _ZN5alloc11collections9vec_deque21VecDeque_LT_T_C_A_GT_9push_back17h04022e2c2745389eE
              (param_1,lVar2);
    if (param_1[3] == 0) {
      _ZN4core6option13expect_failed17h9e03a1f6ff88dbcfE
                ("Out of bounds access",0x14,&PTR_s_src_uu_tail_src_chunks_rs_002bc878);
LAB_00212fe3:
      _ZN4core6option13unwrap_failed17h0e11329e76906eaaE(&PTR_s_src_uu_tail_src_chunks_rs_002bc890);
LAB_00212ff0:
                    /* try { // try from 00212ff0 to 00212ffc has its CatchHandler @ 00212ffd */
      uVar4 = _ZN4core6option13unwrap_failed17h0e11329e76906eaaE
                        (&PTR_s_src_uu_tail_src_chunks_rs_002bc8a8);
                    /* catch() { ... } // from try @ 00212f64 with catch @ 00212ffd
                       catch() { ... } // from try @ 00212ff0 with catch @ 00212ffd */
                    /* catch() { ... } // from try @ 00212eb4 with catch @ 0021300c */
      _ZN4core3ptr73drop_in_place_LT_alloc__boxed__Box_LT_uu_tail__chunks__BytesChunk_GT__GT_17h186d7d501d28deeeE
                (lVar2);
      lVar2 = _Unwind_Resume(uVar4);
      return lVar2;
    }
    uVar5 = 0;
    if (*param_1 <= param_1[2]) {
      uVar5 = *param_1;
    }
    if (param_1[4] <
        param_1[5] - *(long *)(*(long *)(param_1[1] + (param_1[2] - uVar5) * 8) + 0x2000)) {
      lVar3 = _ZN5alloc11collections9vec_deque21VecDeque_LT_T_C_A_GT_9pop_front17hf015bc98e843c630E
                        (param_1);
      if (lVar3 == 0) goto LAB_00212fe3;
      param_1[5] = param_1[5] - *(long *)(lVar3 + 0x2000);
      lVar2 = lVar3;
    }
    else {
      (*(code *)puVar1)(&local_4038,local_2030,0x2000);
      local_2038 = 0;
      lVar2 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h5d3de1da27eb11e8E(&local_4038);
    }
  } while( true );
}