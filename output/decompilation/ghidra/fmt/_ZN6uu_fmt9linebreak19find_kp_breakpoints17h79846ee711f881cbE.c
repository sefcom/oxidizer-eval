void _ZN6uu_fmt9linebreak19find_kp_breakpoints17h79846ee711f881cbE
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined4 *puVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  ulong *puVar8;
  long lVar9;
  bool bVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  bool bVar15;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar16;
  ulong local_1b0;
  undefined local_1a8 [8];
  long local_1a0;
  ulong local_198;
  long local_190;
  long local_188;
  undefined8 local_180;
  undefined8 local_178;
  long local_170;
  undefined8 local_168;
  long local_160;
  long local_158;
  undefined **local_150;
  long local_148;
  long local_140;
  ulong local_138;
  long local_130;
  long local_128;
  undefined local_120 [8];
  long local_118;
  long local_110;
  undefined8 local_108;
  long local_100;
  long local_f8;
  long local_f0;
  ulong local_e8;
  long local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  undefined local_c0 [16];
  ulong local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  undefined4 local_90;
  undefined2 local_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined5 uStack_68;
  char local_63;
  undefined2 local_62;
  undefined local_58 [40];
  
  local_108 = param_1;
  _ZN4core4iter6traits8iterator8Iterator8peekable17h8afc4466af8768bcE(&local_d0);
  puVar5 = (undefined8 *)_ZN5alloc5alloc6Global10alloc_impl17hf61749d460433fffE(0x28);
  if (puVar5 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    _ZN5alloc5alloc18handle_alloc_error17h3816d26e7f8ae8a1E(8,0x28);
  }
  lVar6 = param_4[4];
  *puVar5 = 0;
  puVar5[1] = 0;
  puVar5[2] = 0;
  puVar5[3] = lVar6;
  *(undefined4 *)(puVar5 + 4) = 0;
  *(undefined2 *)((long)puVar5 + 0x24) = 0;
  _ZN5alloc5slice4hack8into_vec17heda36ef041044304E(local_1a8,puVar5,1);
  puVar5 = (undefined8 *)_ZN5alloc5alloc6Global10alloc_impl17hf61749d460433fffE(8);
  if (puVar5 == (undefined8 *)0x0) {
                    /* try { // try from 001bc0d1 to 001bc0e0 has its CatchHandler @ 001bc0eb */
                    /* WARNING: Subroutine does not return */
    _ZN5alloc5alloc18handle_alloc_error17h3816d26e7f8ae8a1E(8,8);
  }
  *puVar5 = 0;
                    /* try { // try from 001bbb5b to 001bbb6f has its CatchHandler @ 001bc0eb */
  _ZN5alloc5slice4hack8into_vec17h3287efa8d919cd9fE(local_120,puVar5,1);
  local_180 = 0;
  local_178 = 8;
  local_170 = 0;
  local_130 = *param_4;
  local_e8 = *(ulong *)(local_130 + 0x30);
  local_f8 = *(long *)(local_130 + 0x38);
  lVar14 = local_e8 - local_f8;
  lVar6 = _ZN4core3cmp6max_by17h34a806462d46b061E(local_f8,lVar14 + 1);
  local_138 = lVar6 - lVar14;
  local_168 = 0;
  local_160 = 8;
  local_158 = 0;
  cVar2 = *(char *)(param_4 + 6);
  local_148 = param_4[5];
  local_150 = &PTR_s_src_uu_fmt_src_linebreak_rs_00226870;
  local_190 = 0;
  bVar10 = false;
  local_100 = lVar14;
  do {
    bVar15 = local_d0 == 0;
    local_d0 = 0;
    lVar6 = local_c8;
    if (bVar15) {
      lVar6 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17ha7b82053f9b8098cE
                        (local_c0);
    }
    if (lVar6 == 0) {
                    /* try { // try from 001bc05a to 001bc066 has its CatchHandler @ 001bc0f2 */
      _ZN6uu_fmt9linebreak15build_best_path17h4613d5d21e8bb56eE
                (local_108,local_1a0,local_198,local_118,local_110);
                    /* try { // try from 001bc067 to 001bc070 has its CatchHandler @ 001bc0e6 */
      _ZN4core3ptr72drop_in_place_LT_alloc__vec__Vec_LT_uu_fmt__linebreak__LineBreak_GT__GT_17hc1a93e97adcb19f9E
                (&local_168);
                    /* try { // try from 001bc071 to 001bc07a has its CatchHandler @ 001bc0e1 */
      _ZN4core3ptr49drop_in_place_LT_alloc__vec__Vec_LT_usize_GT__GT_17h8af847b80d99ba2cE
                (&local_180);
                    /* try { // try from 001bc07b to 001bc087 has its CatchHandler @ 001bc0eb */
      _ZN4core3ptr49drop_in_place_LT_alloc__vec__Vec_LT_usize_GT__GT_17h8af847b80d99ba2cE(local_120)
      ;
      _ZN4core3ptr72drop_in_place_LT_alloc__vec__Vec_LT_uu_fmt__linebreak__LineBreak_GT__GT_17hc1a93e97adcb19f9E
                (local_1a8);
      return;
    }
    plVar7 = (long *)_ZN4core6option15Option_LT_T_GT_18get_or_insert_with17hcbe477171ba51fdbE
                               (&local_d0,local_c0);
    lVar14 = *plVar7;
    cVar4 = '\x01';
    if ((lVar14 != 0) && (*(char *)(lVar14 + 0x38) == '\0')) {
      if (*(char *)(lVar14 + 0x3a) == '\0') {
        cVar4 = '\0';
      }
      else {
        cVar4 = *(char *)(lVar6 + 0x39);
      }
    }
    local_128 = 0;
    if (*(char *)(lVar6 + 0x3a) != '\0' || cVar2 != '\0') {
      local_128 = (ulong)bVar10 + 1;
    }
    local_158 = 0;
    local_170 = 0;
    local_d8 = local_118 + local_110 * 8;
    local_e0 = local_118;
    local_188 = lVar6;
    puVar8 = (ulong *)_ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h6091de4c9f40793fE
                                (&local_e0);
    if (puVar8 == (ulong *)0x0) {
      local_1b0 = 0;
      lVar6 = 0x7fffffffffffffff;
      if (local_170 != 0) goto LAB_001bbc20;
LAB_001bbfbd:
      if (local_198 <= local_1b0) {
        local_150 = &PTR_s_src_uu_fmt_src_linebreak_rs_00226858;
        uVar11 = local_1b0;
LAB_001bc0b3:
                    /* try { // try from 001bc0b3 to 001bc0c0 has its CatchHandler @ 001bc0f2 */
                    /* WARNING: Subroutine does not return */
        _ZN4core9panicking18panic_bounds_check17h25a5330941572dd1E(uVar11,local_198,local_150);
      }
      _ZN6uu_fmt9linebreak21restart_active_breaks17h2b91feff430673acE
                (local_58,local_130,local_148,*(undefined8 *)(local_1a0 + 0x18 + local_1b0 * 0x28),
                 *(undefined *)(local_1a0 + 0x25 + local_1b0 * 0x28),local_1b0,local_188,local_128,
                 local_138);
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h287ff18087d76cdbE(&local_180,local_198);
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hf091c64d56a1d8faE(local_1a8,local_58);
      local_190 = 0;
    }
    else {
      local_1b0 = 0;
      lVar6 = 0x7fffffffffffffff;
      local_140 = 0x7fffffffffffffff;
      local_f0 = lVar14;
      do {
        lVar14 = local_1a0;
        uVar11 = *puVar8;
        if (local_198 <= uVar11) goto LAB_001bc0b3;
        lVar13 = *(long *)(local_1a0 + 0x10 + uVar11 * 0x28) - local_190;
        *(long *)(local_1a0 + 0x10 + uVar11 * 0x28) = lVar13;
        if (lVar13 < lVar6) {
          local_1b0 = uVar11;
          lVar6 = lVar13;
        }
        lVar13 = *(long *)(local_188 + 0x28);
        lVar9 = _ZN6uu_fmt9linebreak9BreakArgs13compute_width17hfc2bd23d7c87d18bE
                          (local_130,local_188,*(undefined8 *)(local_1a0 + 0x18 + uVar11 * 0x28),
                           *(undefined *)(local_1a0 + 0x25 + uVar11 * 0x28));
        lVar14 = lVar14 + uVar11 * 0x28;
        uVar12 = lVar9 + local_128 + lVar13 + *(long *)(lVar14 + 0x18);
        if (uVar12 <= local_e8) {
          _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h287ff18087d76cdbE(&local_180,uVar11);
          *(undefined *)(lVar14 + 0x25) = 0;
          *(ulong *)(lVar14 + 0x18) = uVar12;
          if (local_138 <= uVar12) {
            if (local_f0 == 0) {
              uVar16 = 0;
              lVar13 = 0;
            }
            else {
              lVar13 = _ZN6uu_fmt9linebreak16compute_demerits17he468f5733cc0155bE
                                 (*(undefined4 *)(lVar14 + 0x20),local_f8 - uVar12,local_100,lVar13)
              ;
              uVar16 = extraout_XMM0_Da;
            }
            if (lVar13 < 100000000000000) {
              lVar9 = *(long *)(lVar14 + 0x10);
              lVar14 = lVar9 + lVar13;
              if (lVar14 < local_140) {
                if ((lVar9 < 0) || (-1 < lVar13 && (lVar13 != 0 || lVar9 == 0))) {
                  local_a8 = local_188;
                  local_8c = 0x100;
                  local_98 = local_148;
                    /* try { // try from 001bbd9b to 001bbe6b has its CatchHandler @ 001bc0f4 */
                  local_b0 = uVar11;
                  local_a0 = lVar14;
                  local_90 = uVar16;
                  _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hf091c64d56a1d8faE(&local_168,&local_b0);
                  local_140 = lVar14;
                }
              }
            }
          }
        }
        puVar8 = (ulong *)_ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h6091de4c9f40793fE
                                    (&local_e0);
      } while (puVar8 != (ulong *)0x0);
      if (local_158 != 0) {
        local_158 = local_158 + -1;
        cVar3 = *(char *)(local_160 + 0x25 + local_158 * 0x28);
        if (cVar3 != '\x02') {
          puVar1 = (undefined4 *)(local_160 + local_158 * 0x28);
          local_62 = *(undefined2 *)((long)puVar1 + 0x26);
          uStack_68 = (undefined5)((ulong)*(undefined8 *)((long)puVar1 + 0x1d) >> 0x18);
          local_88 = *puVar1;
          uStack_84 = puVar1[1];
          uStack_80 = puVar1[2];
          uStack_7c = puVar1[3];
          local_78 = puVar1[4];
          uStack_74 = puVar1[5];
          uStack_70 = puVar1[6];
          uStack_6c = puVar1[7];
                    /* try { // try from 001bbf73 to 001bc038 has its CatchHandler @ 001bc0f0 */
          local_63 = cVar3;
          _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h287ff18087d76cdbE(&local_180,local_198);
          _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hf091c64d56a1d8faE(local_1a8,&local_88);
        }
      }
      if (local_170 == 0) goto LAB_001bbfbd;
LAB_001bbc20:
      local_190 = _ZN4core3cmp6max_by17h71cc3e7b7be030ceE(lVar6);
    }
    _ZN4core10intrinsics10typed_swap17h941b9e9a3023958dE(local_120,&local_180);
    bVar10 = cVar4 != '\0';
  } while( true );
}