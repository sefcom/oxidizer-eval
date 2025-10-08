void _ZN6uu_fmt9linebreak19find_kp_breakpoints17h8e1b34bce65123f0E
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined4 *puVar1;
  byte bVar2;
  char cVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  code *pcVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  uint uVar15;
  ulong uVar16;
  uint uVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar21;
  ulong local_198;
  ulong local_190;
  undefined8 local_180;
  undefined8 *local_178;
  ulong local_170;
  undefined8 local_168;
  undefined8 local_160;
  long local_158;
  long local_150;
  undefined8 local_148;
  long local_140;
  long local_138;
  undefined8 local_130;
  undefined8 *local_128;
  long local_120;
  undefined **local_118;
  long local_110;
  long local_108;
  ulong local_100;
  long local_f8;
  undefined8 local_f0;
  long local_e8;
  long local_e0;
  long local_d8;
  ulong local_d0;
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
  
  local_f0 = param_1;
  _ZN4core4iter6traits8iterator8Iterator8peekable17h5f288455ab1c5feeE(&local_d0);
  puVar10 = (undefined8 *)_ZN5alloc5alloc6Global10alloc_impl17h6fb1b6049873c120E(8,0x28);
  if (puVar10 == (undefined8 *)0x0) {
    (*(code *)PTR__ZN5alloc5alloc18handle_alloc_error17h88aa4f4f9d19c4f9E_001f6e80)(8,0x28);
  }
  else {
    lVar4 = param_4[4];
    *puVar10 = 0;
    puVar10[1] = 0;
    puVar10[2] = 0;
    puVar10[3] = lVar4;
    *(undefined4 *)(puVar10 + 4) = 0;
    *(undefined2 *)((long)puVar10 + 0x24) = 0;
    local_180 = 1;
    local_170 = 1;
    local_178 = puVar10;
    puVar10 = (undefined8 *)_ZN5alloc5alloc6Global10alloc_impl17h6fb1b6049873c120E(8,8);
    if (puVar10 != (undefined8 *)0x0) {
      *puVar10 = 0;
      local_130 = 1;
      local_120 = 1;
      local_168 = 0;
      local_160 = 8;
      local_158 = 0;
      lVar4 = *param_4;
      lVar20 = *(long *)(lVar4 + 0x30) - *(long *)(lVar4 + 0x38);
      local_128 = puVar10;
      lVar11 = _ZN4core3cmp3Ord3max17hec69546a31dcf558E(*(long *)(lVar4 + 0x38),lVar20 + 1);
      local_100 = lVar11 - lVar20;
      local_148 = 0;
      local_140 = 8;
      local_138 = 0;
      bVar2 = *(byte *)(param_4 + 6);
      local_110 = param_4[5];
      local_150 = 0;
      local_118 = &PTR_s_src_uu_fmt_src_linebreak_rs_001f03b0;
      local_e8 = lVar20;
      uVar15 = 0;
      do {
        uVar8 = local_d0 & 1;
        local_d0 = 0;
        lVar11 = local_c8;
        if (uVar8 == 0) {
          lVar11 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h686fc6b9d9a31eabE
                             (local_c0);
        }
        puVar9 = local_128;
        puVar10 = local_178;
        if (lVar11 == 0) {
                    /* try { // try from 00162180 to 00162192 has its CatchHandler @ 00162248 */
          _ZN6uu_fmt9linebreak15build_best_path17h2478ba822abd2f37E
                    (local_f0,local_178,local_170,local_128,local_120);
          _ZN4core3ptr72drop_in_place_LT_alloc__vec__Vec_LT_uu_fmt__linebreak__LineBreak_GT__GT_17h01ccd16f2d847b8dE
                    (local_148,local_140);
          _ZN4core3ptr49drop_in_place_LT_alloc__vec__Vec_LT_usize_GT__GT_17hd6f642ba435ff10eE
                    (local_168,local_160);
          _ZN4core3ptr49drop_in_place_LT_alloc__vec__Vec_LT_usize_GT__GT_17hd6f642ba435ff10eE
                    (local_130,puVar9);
          _ZN4core3ptr72drop_in_place_LT_alloc__vec__Vec_LT_uu_fmt__linebreak__LineBreak_GT__GT_17h01ccd16f2d847b8dE
                    (local_180,puVar10);
          return;
        }
        plVar12 = (long *)_ZN4core6option15Option_LT_T_GT_18get_or_insert_with17h63c7918c86c6958eE
                                    (&local_d0,local_c0);
        puVar9 = local_128;
        uVar8 = local_170;
        puVar10 = local_178;
        lVar20 = *plVar12;
        uVar17 = 1;
        if ((lVar20 != 0) && (*(char *)(lVar20 + 0x38) != '\x01')) {
          if (*(char *)(lVar20 + 0x3a) == '\x01') {
            uVar17 = (uint)*(byte *)(lVar11 + 0x39);
          }
          else {
            uVar17 = 0;
          }
        }
        lVar13 = (ulong)(uVar15 & 1) + 1;
        local_f8 = 0;
        if ((bVar2 & 1) != 0) {
          local_f8 = lVar13;
        }
        if (bVar2 != *(byte *)(lVar11 + 0x3a)) {
          local_f8 = lVar13;
        }
        local_138 = 0;
        local_158 = 0;
        lVar13 = 0x7fffffffffffffff;
        uVar16 = 0;
        if (local_120 != 0) {
          local_198 = local_170;
          local_d8 = local_120 << 3;
          lVar19 = 0;
          local_108 = 0x7fffffffffffffff;
          local_190 = 0;
          lVar14 = lVar13;
          local_e0 = lVar20;
          do {
            uVar5 = *(ulong *)((long)puVar9 + lVar19);
            uVar16 = uVar5;
            if (uVar8 <= uVar5) goto LAB_00162216;
            lVar13 = puVar10[uVar5 * 5 + 2] - local_150;
            puVar10[uVar5 * 5 + 2] = lVar13;
            if (lVar14 <= lVar13) {
              lVar13 = lVar14;
              uVar16 = local_190;
            }
            lVar20 = *(long *)(lVar11 + 0x28);
                    /* try { // try from 00161f55 to 00162097 has its CatchHandler @ 0016224d */
            lVar14 = _ZN6uu_fmt9linebreak9BreakArgs13compute_width17h78d96ea40f73ab18E
                               (lVar4,lVar11,puVar10[uVar5 * 5 + 3],
                                *(undefined *)((long)puVar10 + uVar5 * 0x28 + 0x25));
            uVar18 = lVar20 + local_f8 + lVar14 + puVar10[uVar5 * 5 + 3];
            if (uVar18 <= *(ulong *)(lVar4 + 0x30)) {
              _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h45fd097459a66f62E
                        (&local_168,uVar5,&PTR_s_src_uu_fmt_src_linebreak_rs_001f03c8);
              *(undefined *)((long)puVar10 + uVar5 * 0x28 + 0x25) = 0;
              puVar10[uVar5 * 5 + 3] = uVar18;
              if (local_100 <= uVar18) {
                if (local_e0 == 0) {
                  uVar21 = 0;
                  lVar20 = 0;
                }
                else {
                  lVar20 = _ZN6uu_fmt9linebreak16compute_demerits17hbbee1174f2c8e20dE
                                     (*(undefined4 *)(puVar10 + uVar5 * 5 + 4),
                                      *(long *)(lVar4 + 0x38) - uVar18,local_e8,
                                      *(undefined8 *)(lVar11 + 0x28));
                  uVar21 = extraout_XMM0_Da;
                  if (99999999999999 < lVar20) goto LAB_00161ef0;
                }
                lVar6 = puVar10[uVar5 * 5 + 2];
                lVar14 = lVar6 + lVar20;
                if ((lVar14 < local_108) &&
                   ((char)((0 < lVar6) - (lVar6 < 0)) <= (char)((0 < lVar20) - (lVar20 < 0)))) {
                  local_8c = 0x100;
                  local_98 = local_110;
                  local_b0 = uVar5;
                  local_a8 = lVar11;
                  local_a0 = lVar14;
                  local_90 = uVar21;
                  _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hd06750a8c7e97312E
                            (&local_148,&local_b0,&PTR_s_src_uu_fmt_src_linebreak_rs_001f03e0);
                  local_108 = lVar14;
                }
              }
            }
LAB_00161ef0:
            lVar19 = lVar19 + 8;
            lVar14 = lVar13;
            local_190 = uVar16;
          } while (local_d8 != lVar19);
          if (local_138 != 0) {
            local_138 = local_138 + -1;
            cVar3 = *(char *)(local_140 + 0x25 + local_138 * 0x28);
            if (cVar3 != '\x02') {
              puVar1 = (undefined4 *)(local_140 + local_138 * 0x28);
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
                    /* try { // try from 00162137 to 00162160 has its CatchHandler @ 0016222e */
              local_63 = cVar3;
              _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h45fd097459a66f62E
                        (&local_168,local_170,&PTR_s_src_uu_fmt_src_linebreak_rs_001f0338);
              _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hd06750a8c7e97312E
                        (&local_180,&local_88,&PTR_s_src_uu_fmt_src_linebreak_rs_001f0350);
            }
          }
        }
        uVar8 = local_170;
        if (local_158 == 0) {
          local_198 = local_170;
          if (local_170 <= uVar16) goto LAB_00162202;
                    /* try { // try from 00161dc7 to 00161e2a has its CatchHandler @ 0016222e */
          _ZN6uu_fmt9linebreak21restart_active_breaks17h7c37ac9084c76f9eE
                    (local_58,lVar4,local_110,local_178[uVar16 * 5 + 3],
                     *(undefined *)((long)local_178 + uVar16 * 0x28 + 0x25),uVar16,lVar11,local_f8,
                     local_100);
          _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h45fd097459a66f62E
                    (&local_168,uVar8,&PTR_s_src_uu_fmt_src_linebreak_rs_001f0380);
          _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hd06750a8c7e97312E
                    (&local_180,local_58,&PTR_s_src_uu_fmt_src_linebreak_rs_001f0398);
          local_150 = 0;
        }
        else {
          local_150 = _ZN4core3cmp3Ord3max17hb4e4eb600e630cd2E(lVar13);
        }
        _ZN4core10intrinsics25typed_swap_nonoverlapping17h77cfee96c4607c98E(&local_130,&local_168);
        uVar15 = uVar17;
      } while( true );
    }
  }
                    /* try { // try from 001621f0 to 001621ff has its CatchHandler @ 00162230 */
  (*(code *)PTR__ZN5alloc5alloc18handle_alloc_error17h88aa4f4f9d19c4f9E_001f6e80)(8,8);
LAB_0016222c:
                    /* WARNING: Does not return */
  pcVar7 = (code *)invalidInstructionException();
  (*pcVar7)();
LAB_00162202:
  local_118 = &PTR_s_src_uu_fmt_src_linebreak_rs_001f0368;
LAB_00162216:
                    /* try { // try from 00162216 to 0016222b has its CatchHandler @ 00162248 */
  (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_001f6fb0)
            (uVar16,local_198,local_118);
  goto LAB_0016222c;
}