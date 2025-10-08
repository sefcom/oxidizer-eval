long _ZN7uu_sort5merge6reader17h436d4a119678df03E
               (undefined8 param_1,long param_2,ulong param_3,undefined8 param_4,undefined param_5)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  ulong local_c8;
  long local_c0 [18];
  
  _ZN89__LT_std__sync__mpsc__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h0bc5d0c600556333E
            (&local_c8,param_1);
  do {
    if (param_3 <= local_c8) {
LAB_001cd219:
                    /* try { // try from 001cd219 to 001cd228 has its CatchHandler @ 001cd24b */
      (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_00296cb8)();
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar1 = *(long *)(param_2 + local_c8 * 0x38);
    if (lVar1 == 3) {
      _ZN4core3ptr51drop_in_place_LT_uu_sort__chunks__RecycledChunk_GT_17h1242833000dc0e63E
                (local_c0);
    }
    else {
      plVar5 = (long *)(local_c8 * 0x38 + param_2);
      _ZN7uu_sort6chunks4read17he8360ac327e09de7E
                (&local_100,lVar1,plVar5[1],local_c0,plVar5 + 2,plVar5 + 5,param_5,param_4);
      if (local_100 != 0) {
        return local_100;
      }
      if ((char)local_f8 == '\0') {
        lVar1 = *plVar5;
        *plVar5 = 3;
        if (lVar1 == 3) {
          (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_00296f50)
                    (&PTR_s_src_uu_sort_src_merge_rs_0028c988);
          goto LAB_001cd219;
        }
        local_f8 = *(undefined4 *)(plVar5 + 1);
        uStack_f4 = *(undefined4 *)((long)plVar5 + 0xc);
        uStack_f0 = *(undefined4 *)(plVar5 + 2);
        uStack_ec = *(undefined4 *)((long)plVar5 + 0x14);
        local_e8 = *(undefined4 *)(plVar5 + 3);
        uStack_e4 = *(undefined4 *)((long)plVar5 + 0x1c);
        uStack_e0 = *(undefined4 *)(plVar5 + 4);
        uStack_dc = *(undefined4 *)((long)plVar5 + 0x24);
        local_d8 = *(undefined4 *)(plVar5 + 5);
        uStack_d4 = *(undefined4 *)((long)plVar5 + 0x2c);
        lVar3 = plVar5[5];
        uStack_d0 = *(undefined4 *)(plVar5 + 6);
        uStack_cc = *(undefined4 *)((long)plVar5 + 0x34);
        lVar4 = plVar5[6];
                    /* try { // try from 001cd1bc to 001cd1c5 has its CatchHandler @ 001cd22b */
        local_100 = lVar1;
        _ZN4core3ptr78drop_in_place_LT_std__sync__mpsc__SyncSender_LT_uu_sort__chunks__Chunk_GT__GT_17h11dcc279d58efe5dE
                  (&local_100);
        _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17hf1471b789cf37b11E(&uStack_f0)
        ;
        _ZN87__LT_uu_sort__merge__PlainMergeInput_LT_R_GT__u20_as_u20_uu_sort__merge__MergeInput_GT_16finished_reading17h344a5f7361947118E
                  (lVar3,lVar4);
      }
    }
    _ZN89__LT_std__sync__mpsc__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h0bc5d0c600556333E
              (&local_c8,param_1);
    if (local_c0[0] == -0x8000000000000000) {
      return 0;
    }
  } while( true );
}