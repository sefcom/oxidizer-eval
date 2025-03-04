/* WARNING: Removing unreachable block (ram,0x00268b5e) */

void _ZN7uu_sort8ext_sort15read_write_loop17hb7505e9f57c3babeE
               (long *param_1,undefined8 param_2,undefined8 param_3,ulong param_4,ulong param_5,
               long param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long local_1f0;
  ulong local_1e8;
  long local_1e0;
  long local_1d8;
  undefined8 local_1d0;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  undefined8 uStack_190;
  long local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  long local_168;
  char local_160;
  undefined7 uStack_15f;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined local_e0 [24];
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
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
  long local_50;
  long local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  local_1a8 = (undefined4)param_8;
  uStack_1a4 = param_8._4_4_;
  uStack_1a0 = (undefined4)param_9;
  uStack_19c = param_9._4_4_;
                    /* try { // try from 002685d5 to 002685e1 has its CatchHandler @ 00268b10 */
  local_1b0 = param_2;
  _ZN72__LT__RF_mut_u20_I_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h1c21dc3d4ffd3568E
            (&local_158);
  if (local_158 == 2) {
                    /* try { // try from 00268ac7 to 00268ad3 has its CatchHandler @ 00268b10 */
    uVar6 = _ZN4core6option13unwrap_failed17h0e11329e76906eaaE
                      (&PTR_s_src_uu_sort_src_ext_sort_rs_00301e70);
                    /* catch() { ... } // from try @ 00268a03 with catch @ 00268ad4 */
                    /* catch() { ... } // from try @ 00268a54 with catch @ 00268aea */
    _ZN4core3ptr106drop_in_place_LT_core__option__Option_LT_std__sync__mpsc__SyncSender_LT_uu_sort__chunks__Chunk_GT__GT__GT_17h5e99902b231fa387E
              (&local_1d0);
    _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h026152d332835070E(&local_180);
    _ZN4core3ptr90drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_std__io__Read_u2b_core__marker__Send_GT__GT_17hda4324549e97968aE
              (local_1e0,local_1d8);
                    /* WARNING: Subroutine does not return */
    _Unwind_Resume(uVar6);
  }
  local_1e0 = CONCAT44(uStack_14c,uStack_150);
  local_1d8 = CONCAT44(uStack_144,local_148);
  if (local_158 == 0) {
    local_180 = 0;
    local_178 = 1;
    local_170 = 0;
    uVar7 = 8000;
    if (param_5 < 8000) {
      uVar7 = param_5;
    }
    iVar3 = 0;
    local_1e8 = param_4 & 0xff;
    local_1c0 = param_3;
    do {
      iVar3 = _ZN47__LT_i32_u20_as_u20_core__iter__range__Step_GT_17forward_unchecked17h712e9cb68f36e349E
                        (iVar3);
                    /* try { // try from 00268689 to 002686cb has its CatchHandler @ 00268b3a */
      _ZN7uu_sort6chunks13RecycledChunk3new17hf2a77065c2da2656E(&local_158,uVar7);
      _ZN7uu_sort6chunks4read17h2d67c43200642cfdE
                (&local_c8,&local_1a8,&local_158,1,param_5,&local_180,&local_1e0,&local_1b0,
                 local_1e8,param_6);
      uVar6 = local_1c0;
      lVar2 = CONCAT44(uStack_c4,local_c8);
      if (lVar2 != 0) {
        param_1[1] = lVar2;
        param_1[2] = CONCAT44(uStack_bc,uStack_c0);
        *param_1 = -0x7ffffffffffffffd;
        goto LAB_00268a6a;
      }
      if ((char)uStack_c0 == '\0') {
        local_158 = CONCAT44(uStack_1a4,local_1a8);
        uStack_150 = uStack_1a0;
        uStack_14c = uStack_19c;
                    /* try { // try from 00268767 to 00268780 has its CatchHandler @ 00268afd */
        _ZN4core3ptr78drop_in_place_LT_std__sync__mpsc__SyncSender_LT_uu_sort__chunks__Chunk_GT__GT_17h65b4bf175f2f49afE
                  (&local_158);
        lVar4 = _ZN3std4sync4mpmc17Receiver_LT_T_GT_4recv17h9149d09d652eba4aE(param_7);
        if (lVar4 == 0) {
          *param_1 = -0x8000000000000000;
        }
        else {
          local_158 = lVar4;
                    /* try { // try from 00268795 to 002687a1 has its CatchHandler @ 00268ad8 */
          lVar5 = _ZN3std4sync4mpmc17Receiver_LT_T_GT_4recv17h9149d09d652eba4aE(param_7);
          *param_1 = -0x7ffffffffffffffe - (ulong)(lVar5 == 0);
          param_1[1] = lVar4;
          param_1[2] = lVar5;
        }
        goto LAB_00268a6a;
      }
    } while (iVar3 < 2);
    local_1d0 = CONCAT44(uStack_1a4,local_1a8);
    uStack_1c8 = uStack_1a0;
    uStack_1c4 = uStack_19c;
    local_198 = 0;
    uStack_190 = 8;
    local_188 = 0;
    if (*(long *)(param_6 + 0x30) == -0x8000000000000000) {
      local_1b8 = 0;
    }
    else {
      local_1b8 = *(undefined8 *)(param_6 + 0x38);
    }
    uVar1 = *(undefined8 *)(param_6 + 0x40);
                    /* try { // try from 002687f8 to 00268804 has its CatchHandler @ 00268b09 */
    while (local_158 = _ZN3std4sync4mpmc17Receiver_LT_T_GT_4recv17h9149d09d652eba4aE(param_7),
          local_158 != 0) {
                    /* try { // try from 0026881b to 002688d0 has its CatchHandler @ 00268b15 */
      local_1f0 = local_158;
      _ZN7uu_sort7tmp_dir13TmpDirWrapper9next_file17h05b3ad075068705fE(&local_158,uVar6);
      if (CONCAT44(uStack_14c,uStack_150) == -0x8000000000000000) {
        *(undefined4 *)(param_1 + 1) = local_148;
        *(undefined4 *)((long)param_1 + 0xc) = uStack_144;
        *(undefined4 *)(param_1 + 2) = uStack_140;
        *(undefined4 *)((long)param_1 + 0x14) = uStack_13c;
        *param_1 = -0x7ffffffffffffffd;
LAB_00268a4a:
                    /* try { // try from 00268a4a to 00268a53 has its CatchHandler @ 00268ad6 */
        _ZN4core3ptr43drop_in_place_LT_uu_sort__chunks__Chunk_GT_17h110e2935f03a115dE(&local_1f0);
LAB_00268a54:
                    /* try { // try from 00268a54 to 00268a5d has its CatchHandler @ 00268aea */
        _ZN4core3ptr78drop_in_place_LT_alloc__vec__Vec_LT_uu_sort__merge__ClosedPlainTmpFile_GT__GT_17h67b23147265995e1E
                  (&local_198);
        goto LAB_00268a5e;
      }
      local_50 = local_158;
      local_40 = local_148;
      uStack_3c = uStack_144;
      uStack_38 = uStack_140;
      uStack_34 = uStack_13c;
      local_48 = CONCAT44(uStack_14c,uStack_150);
      _ZN7uu_sort8ext_sort5write17h468c6beb400873d3E
                (&local_c8,local_1f0,&local_50,local_1b8,uVar1,local_1e8);
      if (CONCAT44(uStack_c4,local_c8) == -0x8000000000000000) {
        param_1[1] = CONCAT44(uStack_bc,uStack_c0);
        param_1[2] = CONCAT44(uStack_b4,local_b8);
        *param_1 = -0x7ffffffffffffffd;
        goto LAB_00268a4a;
      }
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h3f59369679f0d1cbE(&local_198,local_e0);
                    /* try { // try from 002688d6 to 0026899f has its CatchHandler @ 00268b0b */
      _ZN7uu_sort6chunks5Chunk7recycle17h5f1e538d67d10031E(&local_c8,local_1f0);
      if ((int)local_1d0 == 3) {
                    /* try { // try from 002687f0 to 002687f7 has its CatchHandler @ 00268b0b */
        _ZN4core3ptr51drop_in_place_LT_uu_sort__chunks__RecycledChunk_GT_17h27a074d6bbea78e7E
                  (&local_c8);
      }
      else {
        local_e8 = local_58;
        local_f8 = local_68;
        uStack_f0 = uStack_60;
        local_108 = local_78;
        uStack_100 = uStack_70;
        local_118 = local_88;
        uStack_110 = uStack_80;
        local_128 = local_98;
        uStack_124 = uStack_94;
        uStack_120 = uStack_90;
        uStack_11c = uStack_8c;
        local_138 = local_a8;
        uStack_134 = uStack_a4;
        uStack_130 = uStack_a0;
        uStack_12c = uStack_9c;
        local_148 = local_b8;
        uStack_144 = uStack_b4;
        uStack_140 = uStack_b0;
        uStack_13c = uStack_ac;
        local_158 = CONCAT44(uStack_c4,local_c8);
        uStack_150 = uStack_c0;
        uStack_14c = uStack_bc;
        _ZN7uu_sort6chunks4read17h2d67c43200642cfdE(&local_168,&local_1d0,&local_158,0);
        if (local_168 != 0) {
          param_1[1] = local_168;
          param_1[2] = CONCAT71(uStack_15f,local_160);
          *param_1 = -0x7ffffffffffffffd;
          goto LAB_00268a54;
        }
        if (local_160 == '\0') {
                    /* try { // try from 002689bf to 002689c8 has its CatchHandler @ 00268aef */
          _ZN4core3ptr106drop_in_place_LT_core__option__Option_LT_std__sync__mpsc__SyncSender_LT_uu_sort__chunks__Chunk_GT__GT__GT_17h5e99902b231fa387E
                    (&local_1d0);
          local_1d0 = 3;
        }
      }
    }
    param_1[2] = local_188;
    *(undefined4 *)param_1 = (undefined4)local_198;
    *(undefined4 *)((long)param_1 + 4) = local_198._4_4_;
    *(undefined4 *)(param_1 + 1) = (undefined4)uStack_190;
    *(undefined4 *)((long)param_1 + 0xc) = uStack_190._4_4_;
                    /* try { // try from 00268a03 to 00268a0f has its CatchHandler @ 00268ad4 */
    _ZN4core3ptr100drop_in_place_LT_core__result__Result_LT_uu_sort__chunks__Chunk_C_std__sync__mpsc__RecvError_GT__GT_17hbe180fe5a9f9be02E
              (&local_158);
LAB_00268a5e:
                    /* try { // try from 00268a5e to 00268a67 has its CatchHandler @ 00268afd */
    _ZN4core3ptr106drop_in_place_LT_core__option__Option_LT_std__sync__mpsc__SyncSender_LT_uu_sort__chunks__Chunk_GT__GT__GT_17h5e99902b231fa387E
              (&local_1d0);
LAB_00268a6a:
                    /* try { // try from 00268a6a to 00268a73 has its CatchHandler @ 00268b04 */
    _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h026152d332835070E(&local_180);
                    /* try { // try from 00268a7e to 00268a82 has its CatchHandler @ 00268b10 */
    _ZN4core3ptr90drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_std__io__Read_u2b_core__marker__Send_GT__GT_17hda4324549e97968aE
              (local_1e0,local_1d8);
    if (lVar2 == 0) {
      return;
    }
  }
  else {
    param_1[1] = local_1e0;
    param_1[2] = local_1d8;
    *param_1 = -0x7ffffffffffffffd;
  }
  _ZN4core3ptr78drop_in_place_LT_std__sync__mpsc__SyncSender_LT_uu_sort__chunks__Chunk_GT__GT_17h65b4bf175f2f49afE
            (&local_1a8);
  return;
}