void _ZN7uu_sort5merge10FileMerger10write_next17h4476abdfc0f97a9bE
               (undefined *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined local_188 [16];
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 *local_168;
  undefined8 *local_160;
  undefined8 local_158;
  undefined4 *local_150;
  undefined8 local_148;
  undefined4 *local_c8 [19];
  
  if (param_2[4] == 0) {
    lVar8 = 0;
    goto LAB_001cdcef;
  }
  puVar2 = (undefined8 *)param_2[3];
  _ZN5alloc2rc10RcInnerPtr10inc_strong17h7130636f556f7f46E(puVar2[2]);
  lVar8 = puVar2[2];
  uVar4 = *(undefined4 *)(puVar2 + 3);
  uVar5 = *(undefined4 *)((long)puVar2 + 0x1c);
  uVar6 = *(undefined4 *)(puVar2 + 4);
  uVar7 = *(undefined4 *)((long)puVar2 + 0x24);
  local_168 = (undefined8 *)param_2[0xb];
  local_178 = *(undefined4 *)(param_2 + 9);
  uStack_174 = *(undefined4 *)((long)param_2 + 0x4c);
  uStack_170 = *(undefined4 *)(param_2 + 10);
  uStack_16c = *(undefined4 *)((long)param_2 + 0x54);
  param_2[9] = lVar8;
  *(undefined4 *)(param_2 + 10) = uVar4;
  *(undefined4 *)((long)param_2 + 0x54) = uVar5;
  *(undefined4 *)(param_2 + 0xb) = uVar6;
  *(undefined4 *)((long)param_2 + 0x5c) = uVar7;
  local_150 = &local_178;
  lVar8 = *(long *)(lVar8 + 0x10);
                    /* try { // try from 001cdb61 to 001cdb6a has its CatchHandler @ 001cdd77 */
  local_160 = puVar2;
  local_158 = param_3;
  local_148 = param_4;
  lVar8 = _ZN7uu_sort5merge10FileMerger10write_next28__u7b__u7b_closure_u7d__u7d_17h3fb3b0a5b3f3e85cE
                    (&local_160,*(undefined8 *)(lVar8 + 0x20),*(undefined8 *)(lVar8 + 0x28));
  if (lVar8 != 0) {
    *(long *)(param_1 + 8) = lVar8;
    *param_1 = 1;
    _ZN4core3ptr77drop_in_place_LT_core__option__Option_LT_uu_sort__merge__PreviousLine_GT__GT_17h58bd2c79d674c36dE
              (&local_178);
    return;
  }
  puVar1 = param_2 + 2;
  if (*(long *)(*(long *)(puVar2[2] + 0x10) + 0x28) == puVar2[3] + 1) {
                    /* try { // try from 001cdbb4 to 001cdbb8 has its CatchHandler @ 001cdd77 */
    local_188._0_8_ =
         _ZN3std4sync4mpmc17Receiver_LT_T_GT_4recv17h60814cb01a26dc76E(*puVar2,puVar2[1]);
    if ((undefined4 *)local_188._0_8_ == (undefined4 *)0x0) {
      _ZN4core3ptr100drop_in_place_LT_core__result__Result_LT_uu_sort__chunks__Chunk_C_std__sync__mpsc__RecvError_GT__GT_17h7ff86e8d0d3ee6b2E
                (local_188);
      _ZN16binary_heap_plus11binary_heap23BinaryHeap_LT_T_C_C_GT_3pop17h873c7241d42d9a89E
                (&local_160,puVar1);
      _ZN4core3ptr78drop_in_place_LT_core__option__Option_LT_uu_sort__merge__MergeableFile_GT__GT_17h297930a2d84fae45E
                (&local_160);
    }
    else {
      local_c8[0] = (undefined4 *)local_188._0_8_;
      if (param_2[4] == 0) {
                    /* try { // try from 001cdd1c to 001cdd28 has its CatchHandler @ 001cdd63 */
        (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_00296f50)
                  (&PTR_s_src_uu_sort_src_merge_rs_0028c9d0);
        goto LAB_001cdd29;
      }
      local_160 = (undefined8 *)&DAT_00000001;
      local_158 = 1;
                    /* try { // try from 001cdbf0 to 001cdbf9 has its CatchHandler @ 001cdd3d */
      local_150 = (undefined4 *)local_188._0_8_;
      uVar9 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h380512f813d0cda3E(&local_160);
      lVar8 = param_2[3];
                    /* try { // try from 001cdc05 to 001cdc0c has its CatchHandler @ 001cdd32 */
      _ZN4core3ptr64drop_in_place_LT_alloc__rc__Rc_LT_uu_sort__chunks__Chunk_GT__GT_17h55706b2d7e48326dE
                ((undefined8 *)(lVar8 + 0x10));
      *(undefined8 *)(lVar8 + 0x10) = uVar9;
      *(undefined8 *)(param_2[3] + 0x18) = 0;
                    /* try { // try from 001cdc1d to 001cdc29 has its CatchHandler @ 001cdd2b */
      _ZN4core3ptr129drop_in_place_LT_binary_heap_plus__binary_heap__PeekMut_LT_uu_sort__merge__MergeableFile_C_uu_sort__merge__FileComparator_GT__GT_17hccd454b3c68f6b80E
                (puVar1,1);
    }
  }
  else {
    if (param_2[4] == 0) {
      (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_00296f50)
                (&PTR_s_src_uu_sort_src_merge_rs_0028c9b8);
LAB_001cdd29:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    *(long *)(param_2[3] + 0x18) = *(long *)(param_2[3] + 0x18) + 1;
                    /* try { // try from 001cdc41 to 001cdc74 has its CatchHandler @ 001cdd77 */
    _ZN4core3ptr129drop_in_place_LT_binary_heap_plus__binary_heap__PeekMut_LT_uu_sort__merge__MergeableFile_C_uu_sort__merge__FileComparator_GT__GT_17hccd454b3c68f6b80E
              (puVar1,1);
  }
  puVar2 = local_168;
  if (CONCAT44(uStack_174,local_178) != 0) {
    local_188 = _ZN5alloc2rc15Rc_LT_T_C_A_GT_10try_unwrap17hc6e69539fca139c0E();
    if ((local_188 & (undefined  [16])0x1) == (undefined  [16])0x0) {
      _ZN7uu_sort6chunks5Chunk7recycle17h028cbe8b563e97c5E(&local_158,local_188._8_8_);
      local_160 = puVar2;
                    /* try { // try from 001cdcaf to 001cdcc0 has its CatchHandler @ 001cdd4f */
      _ZN3std4sync4mpmc15Sender_LT_T_GT_4send17h3b2f74fb04f1ee0cE
                (local_c8,*param_2,param_2[1],&local_160);
      _ZN4core3ptr140drop_in_place_LT_core__result__Result_LT__LP__RP__C_std__sync__mpsc__SendError_LT__LP_usize_C_uu_sort__chunks__RecycledChunk_RP__GT__GT__GT_17h365d1a9066ded07eE
                (local_c8);
      if ((local_188 & (undefined  [16])0x1) == (undefined  [16])0x0) goto LAB_001cdceb;
    }
                    /* try { // try from 001cdce3 to 001cdd19 has its CatchHandler @ 001cdd77 */
    _ZN4core3ptr117drop_in_place_LT_core__result__Result_LT_uu_sort__chunks__Chunk_C_alloc__rc__Rc_LT_uu_sort__chunks__Chunk_GT__GT__GT_17hce4b32ee674dd580E
              (local_188);
  }
LAB_001cdceb:
  lVar8 = param_2[4];
LAB_001cdcef:
  param_1[1] = lVar8 != 0;
  *param_1 = 0;
  return;
}