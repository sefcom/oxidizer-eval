undefined  [16]
_ZN7uu_head4take20copy_all_but_n_lines17h428c48894653b2edE
          (undefined8 param_1,undefined8 param_2,ulong param_3,undefined param_4)

{
  ulong *puVar1;
  code *pcVar2;
  ulong uVar3;
  char cVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined **ppuVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  undefined auVar13 [16];
  undefined8 local_f0;
  long local_e8;
  long local_e0;
  ulong local_d8;
  ulong uStack_d0;
  ulong local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  uint uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  long lStack_90;
  ulong local_88;
  ulong uStack_80;
  ulong uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  uint local_60;
  undefined4 uStack_5c;
  ulong local_50;
  undefined8 local_48;
  ulong local_40;
  undefined8 local_38;
  
  local_a8 = 0;
  local_98 = 0;
  lStack_90 = 0;
  local_a0 = 8;
  local_f0 = 0;
  local_e8 = 8;
  local_e0 = 0;
  local_50 = 0;
  uVar10 = 0;
  lVar8 = 0;
  lVar11 = 8;
  local_48 = param_1;
  local_40 = param_3;
  local_38 = param_2;
LAB_00166200:
  for (; (lVar5 = _ZN5alloc11collections9vec_deque21VecDeque_LT_T_C_A_GT_3get17h5a5c158ece1d5465E
                            (&local_a8,0), lVar5 == 0 ||
         (uVar10 <= *(long *)(lVar5 + 0x20) + param_3)); uVar10 = uVar10 + uVar3) {
    if (lVar8 == 0) {
      lVar8 = 0;
LAB_00166292:
      local_88 = 0;
      uStack_80 = 1;
      uStack_68 = 0;
      uStack_64 = 0;
      local_60 = local_60 & 0xffffff00;
      uStack_78 = 0;
      uStack_70 = 0;
      uStack_6c = 0;
    }
    else {
      lVar8 = lVar8 + -1;
      lVar5 = lVar8 * 0x30;
      local_88 = *(ulong *)(lVar11 + lVar5);
      puVar1 = (ulong *)(lVar11 + 8 + lVar5);
      local_d8 = *puVar1;
      uStack_d0 = puVar1[1];
      puVar1 = (ulong *)(lVar11 + 0x18 + lVar5);
      local_c8 = *puVar1;
      uStack_c0 = puVar1[1];
      local_b8 = *(undefined8 *)(lVar11 + 0x28 + lVar5);
      if (local_88 == 0x8000000000000000) goto LAB_00166292;
      local_60 = (uint)local_b8;
      uStack_5c = (undefined4)((ulong)local_b8 >> 0x20);
      uStack_70 = (undefined4)local_c8;
      uStack_6c = (undefined4)(local_c8 >> 0x20);
      uStack_68 = (undefined4)uStack_c0;
      uStack_64 = (undefined4)(uStack_c0 >> 0x20);
      uStack_80 = local_d8;
      uStack_78 = uStack_d0;
    }
                    /* try { // try from 001662b4 to 001662c9 has its CatchHandler @ 0016652a */
    _ZN7uu_head4take18TakeAllLinesBuffer11fill_buffer17hfa940c1c6239deabE
              (&local_d8,&local_88,param_1,param_4);
    uVar3 = local_c8;
    uVar12 = uStack_d0;
    if ((int)local_d8 == 1) {
      local_e0 = lVar8;
      _ZN4core3ptr47drop_in_place_LT_std__ffi__os_str__OsString_GT_17h8a37dd0e9d5ea0f7E
                (local_88,uStack_80);
      lVar8 = local_e0;
LAB_00166490:
      local_e0 = lVar8;
      _ZN4core3ptr77drop_in_place_LT_alloc__vec__Vec_LT_uu_head__take__TakeAllLinesBuffer_GT__GT_17h290366c11b9828a1E
                (&local_f0);
      _ZN4core3ptr101drop_in_place_LT_alloc__collections__vec_deque__VecDeque_LT_uu_head__take__TakeAllLinesBuffer_GT__GT_17h12acd9d2762baf7eE
                (&local_a8);
      uVar7 = 1;
      local_50 = uVar12;
LAB_001664ac:
      auVar13._8_8_ = local_50;
      auVar13._0_8_ = uVar7;
      return auVar13;
    }
    if (uStack_d0 == 0) {
      _ZN4core3ptr47drop_in_place_LT_std__ffi__os_str__OsString_GT_17h8a37dd0e9d5ea0f7E
                (local_88,uStack_80);
      break;
    }
    local_b8 = CONCAT44(uStack_64,uStack_68);
    uStack_b0 = local_60;
    uStack_ac = uStack_5c;
    local_c8 = uStack_78;
    uStack_c0 = CONCAT44(uStack_6c,uStack_70);
    local_d8 = local_88;
    uStack_d0 = uStack_80;
                    /* try { // try from 00166306 to 00166314 has its CatchHandler @ 00166520 */
    _ZN5alloc11collections9vec_deque21VecDeque_LT_T_C_A_GT_9push_back17hb88475b5b5e73838E(&local_a8)
    ;
  }
  if (uVar10 < param_3) {
LAB_001664be:
    local_e0 = lVar8;
    _ZN4core3ptr77drop_in_place_LT_alloc__vec__Vec_LT_uu_head__take__TakeAllLinesBuffer_GT__GT_17h290366c11b9828a1E
              (&local_f0);
    _ZN4core3ptr101drop_in_place_LT_alloc__collections__vec_deque__VecDeque_LT_uu_head__take__TakeAllLinesBuffer_GT__GT_17h12acd9d2762baf7eE
              (&local_a8);
    uVar7 = 0;
    goto LAB_001664ac;
  }
  lVar5 = lStack_90 + -1;
  if (uVar10 - param_3 == 0) {
    lVar6 = _ZN5alloc11collections9vec_deque21VecDeque_LT_T_C_A_GT_3get17h5a5c158ece1d5465E
                      (&local_a8,lVar5);
    if (lVar6 == 0) {
      ppuVar9 = &PTR_s_src_uu_head_src_take_rs_001f7c10;
      local_e0 = lVar8;
      goto LAB_0016650b;
    }
    if (*(char *)(lVar6 + 0x28) == '\0') goto LAB_001664be;
  }
  lVar5 = _ZN5alloc11collections9vec_deque21VecDeque_LT_T_C_A_GT_3get17h5a5c158ece1d5465E
                    (&local_a8,lVar5);
  if (lVar5 == 0) {
    ppuVar9 = &PTR_s_src_uu_head_src_take_rs_001f7c28;
    local_e0 = lVar8;
  }
  else {
    lVar6 = _ZN5alloc11collections9vec_deque21VecDeque_LT_T_C_A_GT_7get_mut17hd6f6500ac1b3986dE
                      (&local_a8);
    if (lVar6 == 0) {
      ppuVar9 = &PTR_s_src_uu_head_src_take_rs_001f7c40;
      local_e0 = lVar8;
    }
    else {
                    /* try { // try from 001663a1 to 001663df has its CatchHandler @ 0016651e */
      _ZN7uu_head4take18TakeAllLinesBuffer11write_lines17hf88d8b4ac800ff57E
                (&local_d8,lVar6,local_38,(uVar10 - param_3) + (ulong)*(byte *)(lVar5 + 0x28),
                 param_4);
      uVar3 = local_c8;
      uVar12 = uStack_d0;
      if ((local_d8 & 1) != 0) goto LAB_00166490;
      cVar4 = _ZN7uu_head4take18TakeAllLinesBuffer8is_empty17hb5e5799055f3f758E
                        (*(undefined8 *)(lVar6 + 0x10));
      param_3 = local_40;
      param_1 = local_48;
      local_50 = local_50 + uVar12;
      uVar10 = uVar10 - uVar3;
      if (cVar4 == '\0') goto LAB_00166200;
      local_e0 = lVar8;
      _ZN5alloc11collections9vec_deque21VecDeque_LT_T_C_A_GT_9pop_front17h299678ec2b4397c3E
                (&local_d8);
      if (local_d8 != 0x8000000000000000) {
        uStack_68 = (undefined4)local_b8;
        uStack_64 = local_b8._4_4_;
        local_60 = uStack_b0;
        uStack_5c = uStack_ac;
        uStack_78 = local_c8;
        uStack_70 = (undefined4)uStack_c0;
        uStack_6c = uStack_c0._4_4_;
        local_88 = local_d8;
        uStack_80 = uStack_d0;
                    /* try { // try from 00166456 to 00166464 has its CatchHandler @ 0016651c */
        _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h476a1d2b2c01abc7E(&local_f0);
        lVar8 = local_e0;
        lVar11 = local_e8;
        goto LAB_00166200;
      }
      ppuVar9 = &PTR_s_src_uu_head_src_take_rs_001f7c58;
    }
  }
LAB_0016650b:
                    /* try { // try from 0016650b to 00166510 has its CatchHandler @ 00166543 */
  (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_001fe6a0)(ppuVar9);
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}