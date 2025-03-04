bool _ZN7uu_sort5merge10FileMerger10write_next17he2ac8a6be71eabc9E
               (long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long *local_180;
  undefined local_178 [16];
  long local_168;
  undefined8 uStack_160;
  long local_158;
  long local_148;
  long local_140;
  long *plStack_138;
  undefined8 local_130;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  long local_c8;
  undefined uStack_c0;
  undefined7 uStack_bf;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  if (*(long *)(param_1 + 0x20) == 0) {
    return false;
  }
  lVar3 = *(long *)(param_1 + 0x18);
  lVar4 = *(long *)(lVar3 + 0x10);
  _ZN5alloc2rc10RcInnerPtr10inc_strong17h8fe141990fba5bf1E(lVar4);
  local_48 = *(undefined4 *)(lVar3 + 0x18);
  uStack_44 = *(undefined4 *)(lVar3 + 0x1c);
  uStack_40 = *(undefined4 *)(lVar3 + 0x20);
  uStack_3c = *(undefined4 *)(lVar3 + 0x24);
  local_158 = *(long *)(param_1 + 0x58);
  local_168 = *(long *)(param_1 + 0x48);
  uStack_160 = *(undefined8 *)(param_1 + 0x50);
  *(long *)(param_1 + 0x48) = lVar4;
  *(undefined4 *)(param_1 + 0x50) = local_48;
  *(undefined4 *)(param_1 + 0x54) = uStack_44;
  *(undefined4 *)(param_1 + 0x58) = uStack_40;
  *(undefined4 *)(param_1 + 0x5c) = uStack_3c;
  plStack_138 = &local_168;
                    /* try { // try from 00233526 to 0023355d has its CatchHandler @ 002337f3 */
  local_148 = lVar3;
  local_140 = param_2;
  local_130 = param_3;
  _ZN7uu_sort5merge10FileMerger10write_next28__u7b__u7b_closure_u7d__u7d_17hbda58f71ec655e68E
            (&local_148,*(undefined8 *)(*(long *)(lVar4 + 0x10) + 0x20),
             *(undefined8 *)(*(long *)(lVar4 + 0x10) + 0x28));
  lVar1 = param_1 + 0x10;
  if (*(long *)(*(long *)(lVar4 + 0x10) + 0x28) == CONCAT44(uStack_44,local_48) + 1) {
    local_180 = (long *)_ZN3std4sync4mpmc17Receiver_LT_T_GT_4recv17h9149d09d652eba4aE(lVar3);
    if (local_180 == (long *)0x0) {
                    /* try { // try from 00233741 to 00233757 has its CatchHandler @ 002337c3 */
      _ZN16binary_heap_plus11binary_heap23BinaryHeap_LT_T_C_C_GT_3pop17h1b5dad5285ed3f15E
                (&local_148,lVar1);
      _ZN4core3ptr78drop_in_place_LT_core__option__Option_LT_uu_sort__merge__MergeableFile_GT__GT_17h316dd26c56c05b22E
                (&local_148);
      if (local_180 != (long *)0x0) {
                    /* try { // try from 00233766 to 00233783 has its CatchHandler @ 002337f3 */
        _ZN4core3ptr43drop_in_place_LT_uu_sort__chunks__Chunk_GT_17h110e2935f03a115dE(&local_180);
      }
    }
    else {
      local_178._0_8_ = local_180;
      if (*(long *)(param_1 + 0x20) == 0) {
                    /* try { // try from 00233786 to 00233792 has its CatchHandler @ 002337b4 */
        uVar5 = _ZN4core6option13unwrap_failed17h0e11329e76906eaaE(&PTR_DAT_00300468);
        goto LAB_00233793;
      }
      uStack_c0 = 0;
      local_148 = 1;
      local_140 = 1;
                    /* try { // try from 002335a3 to 002335ac has its CatchHandler @ 002337a2 */
      plStack_138 = local_180;
      local_c8 = lVar1;
      uVar5 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h36e8c18cbcced5daE(&local_148);
      uStack_c0 = 1;
      puVar6 = (undefined8 *)(*(long *)(param_1 + 0x18) + 0x10);
                    /* try { // try from 002335c0 to 002335c7 has its CatchHandler @ 0023379a */
      _ZN4core3ptr64drop_in_place_LT_alloc__rc__Rc_LT_uu_sort__chunks__Chunk_GT__GT_17h7ede764e698186a0E
                (puVar6);
      *puVar6 = uVar5;
      uStack_c0 = 1;
      *(undefined8 *)(*(long *)(local_c8 + 8) + 0x18) = 0;
                    /* try { // try from 002335e7 to 002335f3 has its CatchHandler @ 00233793 */
      _ZN4core3ptr129drop_in_place_LT_binary_heap_plus__binary_heap__PeekMut_LT_uu_sort__merge__MergeableFile_C_uu_sort__merge__FileComparator_GT__GT_17hf0db7d8e5ea22ad1E
                (&local_c8);
    }
  }
  else {
    if (*(long *)(param_1 + 0x20) == 0) {
      uVar5 = _ZN4core6option13unwrap_failed17h0e11329e76906eaaE(&PTR_DAT_00300450);
LAB_00233793:
                    /* catch() { ... } // from try @ 002335e7 with catch @ 00233793 */
      if (local_168 != 0) {
        _ZN4core3ptr49drop_in_place_LT_uu_sort__merge__PreviousLine_GT_17h8f825fbf3a7b4072E
                  (&local_168);
      }
                    /* WARNING: Subroutine does not return */
      _Unwind_Resume(uVar5);
    }
    local_140 = CONCAT71(local_140._1_7_,1);
    plVar2 = (long *)(*(long *)(param_1 + 0x18) + 0x18);
    *plVar2 = *plVar2 + 1;
                    /* try { // try from 0023361c to 00233640 has its CatchHandler @ 002337f3 */
    local_148 = lVar1;
    _ZN4core3ptr129drop_in_place_LT_binary_heap_plus__binary_heap__PeekMut_LT_uu_sort__merge__MergeableFile_C_uu_sort__merge__FileComparator_GT__GT_17hf0db7d8e5ea22ad1E
              (&local_148);
  }
  lVar1 = local_158;
  if (local_168 != 0) {
    local_178 = _ZN5alloc2rc15Rc_LT_T_C_A_GT_10try_unwrap17h35cd3ab5a059c06fE();
    if (local_178._0_8_ == 0) {
                    /* try { // try from 00233654 to 00233714 has its CatchHandler @ 002337dc */
      _ZN7uu_sort6chunks5Chunk7recycle17h5f1e538d67d10031E(&local_c8,local_178._8_8_);
      local_148 = lVar1;
      plStack_138 = (long *)CONCAT71(uStack_bf,uStack_c0);
      local_140 = local_c8;
      local_130 = CONCAT44(uStack_b4,local_b8);
      uStack_128 = uStack_b0;
      uStack_124 = uStack_ac;
      local_120 = local_a8;
      uStack_11c = uStack_a4;
      uStack_118 = uStack_a0;
      uStack_114 = uStack_9c;
      local_110 = local_98;
      uStack_10c = uStack_94;
      uStack_108 = uStack_90;
      uStack_104 = uStack_8c;
      local_100 = local_88;
      uStack_f8 = uStack_80;
      local_f0 = local_78;
      uStack_e8 = uStack_70;
      local_e0 = local_68;
      uStack_d8 = uStack_60;
      local_d0 = local_58;
      _ZN3std4sync4mpmc15Sender_LT_T_GT_4send17h182581e942b1a4b7E(&local_c8,param_1,&local_148);
      if (CONCAT71(uStack_bf,uStack_c0) != -0x8000000000000000) {
        _ZN4core3ptr140drop_in_place_LT_core__result__Result_LT__LP__RP__C_std__sync__mpsc__SendError_LT__LP_usize_C_uu_sort__chunks__RecycledChunk_RP__GT__GT__GT_17h16ae8ac4e9019932E
                  (&local_c8);
      }
      if (local_178._0_8_ == 0) goto LAB_00233727;
    }
                    /* try { // try from 0023371d to 00233726 has its CatchHandler @ 002337f3 */
    _ZN4core3ptr117drop_in_place_LT_core__result__Result_LT_uu_sort__chunks__Chunk_C_alloc__rc__Rc_LT_uu_sort__chunks__Chunk_GT__GT__GT_17hd45d81f964b4d346E
              (local_178);
  }
LAB_00233727:
  return *(long *)(param_1 + 0x20) != 0;
}