void _ZN7uu_sort8ext_sort15read_write_loop17h130c0126f6a2bd68E
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined param_4,
               ulong param_5,long param_6,undefined8 param_7,undefined8 param_8,ulong param_9,
               ulong param_10)

{
  code *pcVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong local_228;
  undefined8 local_220;
  ulong local_218;
  char local_210;
  undefined7 uStack_20f;
  undefined8 local_208;
  ulong local_200;
  ulong local_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  ulong local_1d0;
  ulong local_1c8 [5];
  undefined8 local_1a0;
  ulong local_198;
  ulong local_190;
  ulong local_188 [2];
  undefined8 local_178;
  ulong local_170;
  ulong local_168;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  ulong local_e0;
  ulong local_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined local_c0 [144];
  
  local_198 = param_9;
  local_190 = param_10;
                    /* try { // try from 001c420d to 001c4219 has its CatchHandler @ 001c4788 */
  local_1a0 = param_3;
  _ZN72__LT__RF_mut_u20_I_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h27c11185b3259f0cE
            (&local_170);
  if (local_170 == 2) {
                    /* try { // try from 001c4707 to 001c4713 has its CatchHandler @ 001c4788 */
    (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_00296f50)
              (&PTR_s_src_uu_sort_src_ext_sort_rs_0028c700);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  local_220 = CONCAT44(uStack_15c,local_160);
  if ((local_170 & 1) != 0) {
    param_1[1] = local_168;
    param_1[2] = local_220;
    *param_1 = 0x8000000000000003;
    goto LAB_001c44c6;
  }
  local_228 = local_168;
  local_1c8[1] = 0;
  local_1c8[2] = 1;
  local_1c8[3] = 0;
  uVar4 = 8000;
  if (param_5 < 8000) {
    uVar4 = param_5;
  }
                    /* try { // try from 001c4297 to 001c437f has its CatchHandler @ 001c4767 */
  _ZN7uu_sort6chunks13RecycledChunk3new17hb2d00041a3f0fa31E(&local_170,uVar4);
  _ZN7uu_sort6chunks4read17h58a9f38ae3d2e00dE
            (&local_218,param_9,param_10,&local_170,1,param_5,local_1c8 + 1,&local_228,param_2,
             param_4,param_6);
  if (local_218 == 0) {
    if (local_210 == '\0') {
LAB_001c43f2:
      local_170 = param_9;
      local_168 = param_10;
                    /* try { // try from 001c440a to 001c442b has its CatchHandler @ 001c473c */
      _ZN4core3ptr78drop_in_place_LT_std__sync__mpsc__SyncSender_LT_uu_sort__chunks__Chunk_GT__GT_17h11dcc279d58efe5dE
                (&local_170);
      uVar4 = _ZN3std4sync4mpmc17Receiver_LT_T_GT_4recv17h60814cb01a26dc76E(param_7,param_8);
      local_1f0 = uVar4;
      if (uVar4 == 0) {
                    /* try { // try from 001c446f to 001c4478 has its CatchHandler @ 001c473c */
        uVar3 = _ZN4core3ptr100drop_in_place_LT_core__result__Result_LT_uu_sort__chunks__Chunk_C_std__sync__mpsc__RecvError_GT__GT_17h7ff86e8d0d3ee6b2E
                          (&local_1f0);
        uVar5 = 0x8000000000000000;
      }
      else {
        local_218 = uVar4;
                    /* try { // try from 001c443e to 001c4452 has its CatchHandler @ 001c4728 */
        uVar3 = _ZN3std4sync4mpmc17Receiver_LT_T_GT_4recv17h60814cb01a26dc76E(param_7,param_8);
        local_170 = uVar3;
        if (uVar3 == 0) {
                    /* try { // try from 001c4489 to 001c4495 has its CatchHandler @ 001c4728 */
          uVar3 = _ZN4core3ptr100drop_in_place_LT_core__result__Result_LT_uu_sort__chunks__Chunk_C_std__sync__mpsc__RecvError_GT__GT_17h7ff86e8d0d3ee6b2E
                            (&local_170);
          uVar5 = 0x8000000000000001;
        }
        else {
          uVar5 = 0x8000000000000002;
        }
      }
      *param_1 = uVar5;
      param_1[1] = uVar4;
      param_1[2] = uVar3;
    }
    else {
      _ZN7uu_sort6chunks13RecycledChunk3new17hb2d00041a3f0fa31E(&local_170,uVar4);
      _ZN7uu_sort6chunks4read17h58a9f38ae3d2e00dE
                (&local_218,param_9,param_10,&local_170,1,param_5,local_1c8 + 1,&local_228,param_2,
                 param_4,param_6);
      if (local_218 != 0) goto LAB_001c42fe;
      if (local_210 != '\x01') goto LAB_001c43f2;
      local_200 = param_9;
      local_1f8 = param_10;
      local_1f0 = 0;
      uStack_1e8 = 8;
      local_1e0 = 0;
      local_1d0 = 0x8000000000000000;
      if (*(long *)(param_6 + 0x30) == -0x8000000000000000) {
        local_1d8 = 0;
      }
      else {
        local_1d8 = *(undefined8 *)(param_6 + 0x38);
      }
      local_1c8[4] = *(undefined8 *)(param_6 + 0x40);
                    /* try { // try from 001c4509 to 001c451d has its CatchHandler @ 001c4737 */
      while (uVar4 = _ZN3std4sync4mpmc17Receiver_LT_T_GT_4recv17h60814cb01a26dc76E(param_7,param_8),
            local_170 = uVar4, uVar4 != 0) {
                    /* try { // try from 001c4537 to 001c45f6 has its CatchHandler @ 001c4741 */
        local_1c8[0] = uVar4;
        _ZN7uu_sort7tmp_dir13TmpDirWrapper9next_file17he098c4319062daf7E(&local_170,local_1a0);
        if (local_168 == local_1d0) {
          *(undefined4 *)(param_1 + 1) = local_160;
          *(undefined4 *)((long)param_1 + 0xc) = uStack_15c;
          *(undefined4 *)(param_1 + 2) = uStack_158;
          *(undefined4 *)((long)param_1 + 0x14) = uStack_154;
LAB_001c46c0:
          *param_1 = 0x8000000000000003;
          _ZN4core3ptr43drop_in_place_LT_uu_sort__chunks__Chunk_GT_17h49f783d79a42b220E(local_1c8);
LAB_001c46d7:
          _ZN4core3ptr78drop_in_place_LT_alloc__vec__Vec_LT_uu_sort__merge__ClosedPlainTmpFile_GT__GT_17hd5e30e780995eb35E
                    (&local_1f0);
          goto LAB_001c46e1;
        }
        local_e0 = local_170;
        local_d8 = local_168;
        local_d0 = local_160;
        uStack_cc = uStack_15c;
        uStack_c8 = uStack_158;
        uStack_c4 = uStack_154;
        _ZN7uu_sort8ext_sort5write17h98aba9eb6daabd79E
                  (&local_218,uVar4,&local_e0,local_1d8,local_1c8[4],param_4);
        if (local_218 == local_1d0) {
          param_1[1] = CONCAT71(uStack_20f,local_210);
          param_1[2] = local_208;
          goto LAB_001c46c0;
        }
        local_188[0] = local_218;
        local_178 = local_208;
        _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hb4bc2dc398314653E
                  (&local_1f0,local_188,&PTR_s_src_uu_sort_src_ext_sort_rs_0028c718);
        _ZN7uu_sort6chunks5Chunk7recycle17h028cbe8b563e97c5E(local_c0,uVar4);
        if (param_9 == 3) {
          _ZN4core3ptr51drop_in_place_LT_uu_sort__chunks__RecycledChunk_GT_17h1242833000dc0e63E
                    (local_c0);
          goto LAB_001c4504;
        }
                    /* try { // try from 001c4614 to 001c4650 has its CatchHandler @ 001c4726 */
        _ZN7uu_sort6chunks4read17h58a9f38ae3d2e00dE(&local_170,param_9,param_10,local_c0,0);
        if (local_170 != 0) {
          param_1[1] = local_170;
          param_1[2] = local_168;
          *param_1 = 0x8000000000000003;
          goto LAB_001c46d7;
        }
        if ((local_168 & 1) == 0) {
                    /* try { // try from 001c4672 to 001c467b has its CatchHandler @ 001c4718 */
          _ZN4core3ptr106drop_in_place_LT_core__option__Option_LT_std__sync__mpsc__SyncSender_LT_uu_sort__chunks__Chunk_GT__GT__GT_17he35ebd9a2df381cbE
                    (&local_200);
          local_200 = 3;
LAB_001c4504:
          param_9 = 3;
        }
      }
                    /* try { // try from 001c468a to 001c46d6 has its CatchHandler @ 001c4716 */
      _ZN4core3ptr100drop_in_place_LT_core__result__Result_LT_uu_sort__chunks__Chunk_C_std__sync__mpsc__RecvError_GT__GT_17h7ff86e8d0d3ee6b2E
                (&local_170);
      param_1[2] = local_1e0;
      *(undefined4 *)param_1 = (undefined4)local_1f0;
      *(undefined4 *)((long)param_1 + 4) = local_1f0._4_4_;
      *(undefined4 *)(param_1 + 1) = (undefined4)uStack_1e8;
      *(undefined4 *)((long)param_1 + 0xc) = uStack_1e8._4_4_;
LAB_001c46e1:
                    /* try { // try from 001c46e1 to 001c46ea has its CatchHandler @ 001c473c */
      _ZN4core3ptr106drop_in_place_LT_core__option__Option_LT_std__sync__mpsc__SyncSender_LT_uu_sort__chunks__Chunk_GT__GT__GT_17he35ebd9a2df381cbE
                (&local_200);
    }
    bVar2 = false;
  }
  else {
LAB_001c42fe:
    param_1[1] = local_218;
    param_1[2] = CONCAT71(uStack_20f,local_210);
    *param_1 = 0x8000000000000003;
    bVar2 = true;
  }
  _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17hf1471b789cf37b11E(local_1c8 + 1);
                    /* try { // try from 001c44bc to 001c44c0 has its CatchHandler @ 001c4788 */
  _ZN4core3ptr105drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_clap_builder__builder__value_parser__AnyValueParser_GT__GT_17hcc69def0910ab351E
            (local_228,local_220);
  if (!bVar2) {
    return;
  }
LAB_001c44c6:
  _ZN4core3ptr78drop_in_place_LT_std__sync__mpsc__SyncSender_LT_uu_sort__chunks__Chunk_GT__GT_17h11dcc279d58efe5dE
            (&local_198);
  return;
}