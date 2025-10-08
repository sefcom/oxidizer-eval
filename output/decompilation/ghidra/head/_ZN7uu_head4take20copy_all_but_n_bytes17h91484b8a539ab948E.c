undefined  [16]
_ZN7uu_head4take20copy_all_but_n_bytes17h91484b8a539ab948E
          (undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined auVar10 [16];
  undefined8 local_d0;
  long local_c8;
  long local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long local_98;
  ulong local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_50 = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_48 = 8;
  local_d0 = 0;
  local_c8 = 8;
  local_c0 = 0;
  local_98 = 0;
  uVar7 = 0;
  lVar8 = 8;
  lVar9 = 0;
  local_90 = param_3;
  local_60 = param_2;
  local_58 = param_1;
  do {
                    /* try { // try from 00165d2d to 00165d34 has its CatchHandler @ 00165f22 */
    for (; (lVar4 = _ZN5alloc11collections9vec_deque21VecDeque_LT_T_C_A_GT_3get17hcfbc0b54fcac4b80E
                              (&local_50), lVar4 == 0 ||
           (lVar4 = _ZN7uu_head4take13TakeAllBuffer15remaining_bytes17hb388a4c93e1b9bcbE(lVar4),
           uVar7 < lVar4 + local_90)); uVar7 = uVar7 + lVar4) {
      if (lVar9 == 0) {
        uStack_b0 = 1;
        uStack_a8 = 0;
        uStack_a0 = 0;
        local_b8 = 0;
        lVar9 = 0;
      }
      else {
        lVar9 = lVar9 + -1;
        lVar4 = lVar9 * 0x20;
        local_b8 = *(undefined8 *)(lVar8 + lVar4);
        puVar1 = (undefined8 *)(lVar8 + 8 + lVar4);
        local_88 = *(undefined4 *)puVar1;
        uStack_84 = *(undefined4 *)((long)puVar1 + 4);
        uStack_b0 = *puVar1;
        uStack_80 = *(undefined4 *)(puVar1 + 1);
        uStack_7c = *(undefined4 *)((long)puVar1 + 0xc);
        uStack_a8 = puVar1[1];
        uStack_a0 = *(undefined8 *)(lVar8 + 0x18 + lVar4);
        local_78 = uStack_a0;
      }
                    /* try { // try from 00165d9f to 00165db0 has its CatchHandler @ 00165f2e */
      auVar10 = _ZN7uu_head4take13TakeAllBuffer11fill_buffer17hf61126089cbcf29eE(&local_b8,local_58)
      ;
      lVar4 = auVar10._8_8_;
      if ((auVar10 & (undefined  [16])0x1) != (undefined  [16])0x0) {
        local_c0 = lVar9;
        _ZN4core3ptr49drop_in_place_LT_std__sys__os_str__bytes__Buf_GT_17he4bde5d3b504ae9dE
                  (local_b8,uStack_b0);
        uVar6 = 1;
        goto LAB_00165ebd;
      }
      if (lVar4 == 0) {
        _ZN4core3ptr49drop_in_place_LT_std__sys__os_str__bytes__Buf_GT_17he4bde5d3b504ae9dE
                  (local_b8,uStack_b0);
        break;
      }
      local_78 = uStack_a8;
      uStack_70 = (undefined4)uStack_a0;
      uStack_6c = uStack_a0._4_4_;
      local_88 = (undefined4)local_b8;
      uStack_84 = local_b8._4_4_;
      uStack_80 = (undefined4)uStack_b0;
      uStack_7c = uStack_b0._4_4_;
                    /* try { // try from 00165dd5 to 00165de1 has its CatchHandler @ 00165f24 */
      _ZN5alloc11collections9vec_deque21VecDeque_LT_T_C_A_GT_9push_back17hc3973d42ceccac54E
                (&local_50,&local_88);
    }
    lVar4 = uVar7 - local_90;
    if (uVar7 < local_90 || lVar4 == 0) {
      uVar6 = 0;
      lVar4 = local_98;
      local_c0 = lVar9;
      goto LAB_00165ebd;
    }
    lVar5 = _ZN5alloc11collections9vec_deque21VecDeque_LT_T_C_A_GT_3get17hcfbc0b54fcac4b80E
                      (&local_50);
    if (lVar5 == 0) {
      local_c0 = lVar9;
                    /* try { // try from 00165f0d to 00165f12 has its CatchHandler @ 00165f47 */
      (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_001fe6a0)
                (&PTR_s_src_uu_head_src_take_rs_001f7b60);
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
                    /* try { // try from 00165e18 to 00165e42 has its CatchHandler @ 00165f20 */
    auVar10 = _ZN7uu_head4take13TakeAllBuffer17write_bytes_limit17h60c53a9a38fb6265E
                        (lVar5,local_60,lVar4);
    lVar4 = auVar10._8_8_;
    if ((auVar10 & (undefined  [16])0x1) != (undefined  [16])0x0) {
      uVar6 = 1;
      local_c0 = lVar9;
LAB_00165ebd:
      _ZN4core3ptr72drop_in_place_LT_alloc__vec__Vec_LT_uu_head__take__TakeAllBuffer_GT__GT_17h76449acd591f3a78E
                (&local_d0);
      _ZN4core3ptr96drop_in_place_LT_alloc__collections__vec_deque__VecDeque_LT_uu_head__take__TakeAllBuffer_GT__GT_17h0a9a88a05ab26223E
                (&local_50);
      auVar10._8_8_ = lVar4;
      auVar10._0_8_ = uVar6;
      return auVar10;
    }
    cVar3 = _ZN7uu_head4take13TakeAllBuffer8is_empty17hbeb234606ca195c1E
                      (*(undefined8 *)(lVar5 + 0x10),*(undefined8 *)(lVar5 + 0x18));
    local_98 = local_98 + lVar4;
    uVar7 = uVar7 - lVar4;
    if (cVar3 != '\0') {
      local_c0 = lVar9;
      _ZN5alloc11collections9vec_deque21VecDeque_LT_T_C_A_GT_9pop_front17hcb277b723d479f3bE
                (&local_88,&local_50);
      uStack_a8 = local_78;
      uStack_a0 = CONCAT44(uStack_6c,uStack_70);
      local_b8 = CONCAT44(uStack_84,local_88);
      uStack_b0 = CONCAT44(uStack_7c,uStack_80);
                    /* try { // try from 00165e86 to 00165e94 has its CatchHandler @ 00165f1e */
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17ha8e9ce4204a5d833E(&local_d0,&local_b8);
      lVar8 = local_c8;
      lVar9 = local_c0;
    }
  } while( true );
}