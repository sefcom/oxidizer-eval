void _ZN18alacritty_terminal4grid6resize57__LT_impl_u20_alacritty_terminal__grid__Grid_LT_T_GT__GT_12grow_columns17hda8ffb581183d2c1E
               (long param_1,int param_2,ulong param_3)

{
  code *pcVar1;
  char cVar2;
  undefined4 uVar3;
  byte *pbVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *puVar8;
  undefined8 uVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  bool bVar16;
  undefined auVar17 [16];
  undefined auVar18 [12];
  uint local_1b8;
  char local_1b1;
  ulong local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  uint local_184;
  undefined local_180 [16];
  ulong local_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined8 uStack_150;
  ulong local_140;
  undefined8 local_138;
  ulong local_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  ulong local_118;
  long local_108;
  long local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  ulong local_b8;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  ulong local_98;
  undefined local_90 [16];
  undefined8 local_80;
  ulong local_78;
  undefined8 local_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  local_1b1 = (char)param_2;
  *(ulong *)(param_1 + 0x90) = param_3;
  local_140 = param_3;
  local_180 = _ZN5alloc7raw_vec20RawVecInner_LT_A_GT_16with_capacity_in17h6d79adff25664689E
                        (*(undefined8 *)(param_1 + 0x28),8,0x20,
                         &PTR_s__home_34r7hm4n_dev_oxidizer_oxid_00977458);
  local_170 = 0;
  if ((param_2 != 0) && (*(char *)(param_1 + 0x5c) != '\0')) {
    *(undefined *)(param_1 + 0x5c) = 0;
    *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + 1;
  }
                    /* try { // try from 0046d795 to 0046d79c has its CatchHandler @ 0046df81 */
  _ZN18alacritty_terminal4grid7storage16Storage_LT_T_GT_8truncate17h2d132ed67c9d1788E(param_1);
  local_f8 = 0;
  uStack_f0 = 8;
  local_e8 = 0;
  _ZN4core10intrinsics25typed_swap_nonoverlapping17h0a04095f3d754e5fE(&local_f8,param_1);
  *(undefined8 *)(param_1 + 0x28) = 0;
  local_38 = local_e8;
  local_48 = (undefined4)local_f8;
  uStack_44 = local_f8._4_4_;
  uStack_40 = (undefined4)uStack_f0;
  uStack_3c = uStack_f0._4_4_;
  _ZN5alloc3vec16Vec_LT_T_C_A_GT_5drain17hf4265eba2e4a5c57E(&local_f8,&local_48);
  local_d0 = 0;
  local_1b8 = *(uint *)(param_1 + 0x38);
  uVar15 = 0;
  local_138 = *(undefined8 *)(param_1 + 0x30);
  uVar7 = *(ulong *)(param_1 + 0xa0);
  local_184 = local_1b8;
  local_108 = param_1;
  while( true ) {
                    /* try { // try from 0046d871 to 0046d885 has its CatchHandler @ 0046dffb */
    _ZN125__LT_core__iter__adapters__enumerate__Enumerate_LT_I_GT__u20_as_u20_core__iter__traits__double_ended__DoubleEndedIterator_GT_9next_back17hb40f1190552b9631E
              (&local_78,&local_f8);
    if (local_70 == 0x8000000000000000) break;
    local_130 = local_78;
    local_168 = (undefined4)local_70;
    uStack_164 = local_70._4_4_;
    uStack_160 = uStack_68;
    uStack_15c = uStack_64;
    local_158 = local_60;
    uStack_154 = uStack_5c;
    uStack_150 = CONCAT44(uStack_54,uStack_58);
    lVar14 = local_170 * 0x20 + local_180._8_8_;
    lVar12 = lVar14 + -0x20;
    local_1b0 = uVar7;
    if (lVar12 == 0 || local_170 == 0) {
LAB_0046d850:
                    /* try { // try from 0046d850 to 0046d868 has its CatchHandler @ 0046dff9 */
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h8eb7f3e47ff8baf3E
                (local_180,&local_70,&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_00977530);
      uVar7 = local_1b0;
    }
    else {
      lVar5 = *(long *)(lVar14 + -0x18);
      lVar13 = *(long *)(lVar14 + -0x10);
      cVar2 = _ZN18alacritty_terminal4grid6resize57__LT_impl_u20_alacritty_terminal__grid__Grid_LT_T_GT__GT_12grow_columns28__u7b__u7b_closure_u7d__u7d_17h2385699e42aeb800E
                        (&local_1b1,&local_140,lVar5,lVar13);
      if (cVar2 == '\0') goto LAB_0046d850;
      *(long *)(lVar14 + -8) = lVar13;
      local_100 = lVar12;
      if (lVar13 == 0) {
LAB_0046d989:
        lVar13 = 0;
      }
      else {
        if (lVar5 + lVar13 * 0x18 != 0x18) {
          pbVar4 = (byte *)_ZN91__LT_alacritty_terminal__term__cell__Cell_u20_as_u20_alacritty_terminal__grid__GridCell_GT_9flags_mut17hf1ec2b73cb1258e3E
                                     ();
          *pbVar4 = *pbVar4 & 0xef;
          lVar13 = *(long *)(lVar14 + -0x10);
          if (lVar13 == 0) goto LAB_0046d989;
        }
        lVar12 = lVar13 + -1;
        lVar5 = _ZN91__LT_alacritty_terminal__term__cell__Cell_u20_as_u20_alacritty_terminal__grid__GridCell_GT_5flags17hcae42e2ab580f7aeE
                          (lVar12 * 0x18 + *(long *)(lVar14 + -0x18));
        if ((*(byte *)(lVar5 + 1) & 4) != 0) {
                    /* try { // try from 0046d965 to 0046da61 has its CatchHandler @ 0046dfea */
          _ZN18alacritty_terminal4grid3row12Row_LT_T_GT_6shrink17hd1c482736534eb30E
                    (&local_1a8,local_100,lVar12);
          _ZN4core3ptr108drop_in_place_LT_core__option__Option_LT_alloc__vec__Vec_LT_alacritty_terminal__term__cell__Cell_GT__GT__GT_17hd425794b6e9b2c11E
                    (&local_1a8);
          lVar13 = lVar12;
        }
      }
      lVar13 = local_140 - lVar13;
      uVar11 = CONCAT44(uStack_154,local_158);
      uVar6 = _ZN4core3cmp3Ord3min17h7c13e9bfb8ea3862E(uVar11,lVar13);
      uVar7 = uVar6 - 1;
      if (uVar11 <= uVar7) {
                    /* try { // try from 0046df59 to 0046df6b has its CatchHandler @ 0046dfaf */
        (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_009de0f0)
                  (uVar7,uVar11,&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_009774d0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      pbVar4 = (byte *)_ZN91__LT_alacritty_terminal__term__cell__Cell_u20_as_u20_alacritty_terminal__grid__GridCell_GT_5flags17hcae42e2ab580f7aeE
                                 (uVar7 * 0x18 + CONCAT44(uStack_15c,uStack_160));
      param_1 = local_108;
      if ((*pbVar4 & 0x20) == 0) {
        bVar16 = uVar6 <= uStack_150;
        uVar7 = uStack_150 - uVar6;
        uStack_150 = 0;
        if (bVar16) {
          uStack_150 = uVar7;
        }
        _ZN5alloc3vec16Vec_LT_T_C_A_GT_9split_off17h4284604988914e8fE
                  (&local_1a8,&local_168,uVar6,&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_009774e8);
        _ZN4core10intrinsics25typed_swap_nonoverlapping17h0a04095f3d754e5fE(&local_1a8,&local_168);
        local_118 = local_198;
        local_128 = (undefined4)local_1a8;
        uStack_124 = local_1a8._4_4_;
        uStack_120 = (undefined4)uStack_1a0;
        uStack_11c = uStack_1a0._4_4_;
      }
      else {
        bVar16 = uVar7 <= uStack_150;
        uVar11 = uStack_150 - uVar7;
        uStack_150 = 0;
        if (bVar16) {
          uStack_150 = uVar11;
        }
        _ZN5alloc3vec16Vec_LT_T_C_A_GT_9split_off17h4284604988914e8fE
                  (&local_1a8,&local_168,uVar7,&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_009774e8);
        _ZN4core10intrinsics25typed_swap_nonoverlapping17h0a04095f3d754e5fE(&local_1a8,&local_168);
        local_98 = local_198;
        local_a8 = (undefined4)local_1a8;
        uStack_a4 = local_1a8._4_4_;
        uStack_a0 = (undefined4)uStack_1a0;
        uStack_9c = uStack_1a0._4_4_;
        _ZN79__LT_alacritty_terminal__term__cell__Cell_u20_as_u20_core__default__Default_GT_7default17h2206ab58710dae3dE
                  (&local_c8);
        lVar12 = _ZN91__LT_alacritty_terminal__term__cell__Cell_u20_as_u20_alacritty_terminal__grid__GridCell_GT_9flags_mut17hf1ec2b73cb1258e3E
                           (&local_c8);
        *(byte *)(lVar12 + 1) = *(byte *)(lVar12 + 1) | 4;
        local_198 = local_b8;
        local_1a8 = CONCAT44(uStack_c4,local_c8);
        uStack_1a0 = CONCAT44(uStack_bc,uStack_c0);
                    /* try { // try from 0046dac7 to 0046dad6 has its CatchHandler @ 0046df8e */
        _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hbddf951762aec067E(&local_a8,&local_1a8);
        lVar13 = lVar13 + -1;
        local_128 = local_a8;
        uStack_124 = uStack_a4;
        uStack_120 = uStack_a0;
        uStack_11c = uStack_9c;
        local_118 = local_98;
      }
      *(long *)(lVar14 + -8) = *(long *)(lVar14 + -8) + local_118;
                    /* try { // try from 0046db0e to 0046dbb1 has its CatchHandler @ 0046dfd0 */
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_15append_elements17h3cb2cc92e418e783E
                (local_100,CONCAT44(uStack_11c,uStack_120));
      local_118 = 0;
      uVar11 = (long)(int)~local_1b8 + *(long *)(param_1 + 0x98);
      if ((local_130 == uVar11) && (local_1b1 == '\x01')) {
        auVar17 = _ZN18alacritty_terminal5index5Point3sub17h2a90a9a53ccead04E
                            (local_138,local_1b8,param_1,lVar13);
        uVar7 = local_1b0;
        auVar18 = auVar17._0_12_;
        if (auVar17._0_8_ == 0) {
          local_1a8 = CONCAT44(uStack_15c,uStack_160);
          uStack_1a0 = local_1a8 + CONCAT44(uStack_154,local_158) * 0x18;
          cVar2 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_3all17h4877859599ecbfecE
                            (&local_1a8);
          if (cVar2 == '\0') {
            auVar18._4_8_ = 0;
            auVar18._0_4_ = auVar17._8_4_;
            auVar18 = auVar18 << 0x40;
          }
          else {
            *(undefined *)(param_1 + 0x5c) = 1;
            auVar18 = _ZN18alacritty_terminal5index5Point3sub17h2a90a9a53ccead04E
                                (0,auVar17._8_8_ & 0xffffffff,param_1,1);
          }
        }
        local_138 = auVar18._0_8_;
        *(undefined8 *)(param_1 + 0x30) = local_138;
        uVar10 = local_1b8;
        if (local_1b8 != auVar18._8_4_) {
          local_1a8 = CONCAT44(uStack_15c,uStack_160);
          uStack_1a0 = local_1a8 + CONCAT44(uStack_154,local_158) * 0x18;
          cVar2 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_3all17h4877859599ecbfecE
                            (&local_1a8);
          uVar10 = auVar18._8_4_;
          if (cVar2 != '\0') goto LAB_0046dc68;
        }
        uVar15 = uVar15 + (long)(int)(local_1b8 - uVar10);
        lVar12 = *(long *)(lVar14 + -0x10);
        *(long *)(lVar14 + -8) = lVar12;
joined_r0x0046dc94:
        if ((lVar12 != 0) && (lVar12 * 0x18 + *(long *)(lVar14 + -0x18) != 0x18)) {
          pbVar4 = (byte *)_ZN91__LT_alacritty_terminal__term__cell__Cell_u20_as_u20_alacritty_terminal__grid__GridCell_GT_9flags_mut17hf1ec2b73cb1258e3E
                                     ();
          *pbVar4 = *pbVar4 | 0x10;
        }
                    /* try { // try from 0046dcc9 to 0046dcde has its CatchHandler @ 0046df73 */
        _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h8eb7f3e47ff8baf3E
                  (local_180,&local_168,&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_00977518);
                    /* try { // try from 0046dcdf to 0046dceb has its CatchHandler @ 0046df6e */
        _ZN4core3ptr80drop_in_place_LT_alloc__vec__Vec_LT_alacritty_terminal__term__cell__Cell_GT__GT_17h3a26ff64830026d7E
                  (&local_128);
        local_138 = *(undefined8 *)(param_1 + 0x30);
        local_1b8 = local_184;
      }
      else {
        local_1a8 = CONCAT44(uStack_15c,uStack_160);
        uStack_1a0 = local_1a8 + CONCAT44(uStack_154,local_158) * 0x18;
        cVar2 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_3all17h4877859599ecbfecE
                          (&local_1a8);
        if (cVar2 == '\0') {
          lVar12 = *(long *)(lVar14 + -0x10);
          *(long *)(lVar14 + -8) = lVar12;
          uVar7 = local_1b0;
          goto joined_r0x0046dc94;
        }
        if (local_130 < local_1b0) {
          local_1b0 = local_1b0 - 1;
          *(ulong *)(param_1 + 0xa0) = local_1b0;
        }
        uVar7 = local_1b0;
        if (local_130 < uVar11) {
          local_1b8 = local_1b8 + 1;
          *(uint *)(param_1 + 0x38) = local_1b8;
          local_184 = local_1b8;
        }
LAB_0046dc68:
                    /* try { // try from 0046dc68 to 0046dc74 has its CatchHandler @ 0046dfea */
        _ZN4core3ptr80drop_in_place_LT_alloc__vec__Vec_LT_alacritty_terminal__term__cell__Cell_GT__GT_17h3a26ff64830026d7E
                  (&local_128);
                    /* try { // try from 0046dc75 to 0046dc7e has its CatchHandler @ 0046dffb */
        _ZN4core3ptr99drop_in_place_LT_alacritty_terminal__grid__row__Row_LT_alacritty_terminal__term__cell__Cell_GT__GT_17hef77f428462e73abE
                  (&local_168);
      }
    }
  }
                    /* try { // try from 0046dd04 to 0046ddc6 has its CatchHandler @ 0046df89 */
  _ZN4core3ptr219drop_in_place_LT_core__iter__adapters__rev__Rev_LT_core__iter__adapters__enumerate__Enumerate_LT_alloc__vec__drain__Drain_LT_alacritty_terminal__grid__row__Row_LT_alacritty_terminal__term__cell__Cell_GT__GT__GT__GT__GT_17h2f52a59d6e4f951bE
            (&local_f8);
  uVar7 = *(ulong *)(param_1 + 0x98);
  if (local_170 < uVar7) {
    local_1b8 = _ZN4core3cmp3Ord3max17h3396bb7148673668E
                          (local_1b8 + ((int)local_170 - (int)uVar7),0);
    *(uint *)(param_1 + 0x38) = local_1b8;
    _ZN5alloc3vec16Vec_LT_T_C_A_GT_11resize_with17hc66dcacd0408d3ffE(local_180,uVar7,&local_140);
  }
  uVar11 = local_170;
  if (uVar15 != 0) {
    uVar7 = _ZN4core3cmp3Ord3min17h7c13e9bfb8ea3862E
                      ((long)(int)~local_1b8 + uVar7,local_170 - uVar7);
    lVar12 = 0;
    if (uVar7 <= uVar15) {
      lVar12 = uVar15 - uVar7;
    }
    uVar15 = (uVar11 - uVar15) + lVar12;
    if (uVar15 <= uVar11) {
      local_170 = uVar15;
      _ZN4core3ptr109drop_in_place_LT__u5b_alacritty_terminal__grid__row__Row_LT_alacritty_terminal__term__cell__Cell_GT__u5d__GT_17hbdfa2dfef87806d4E
                (uVar15 * 0x20 + local_180._8_8_);
      uVar11 = local_170;
    }
    uVar3 = _ZN4core3cmp3Ord3max17h3396bb7148673668E(local_1b8 - (int)lVar12,0);
    *(undefined4 *)(param_1 + 0x38) = uVar3;
  }
  local_90 = _ZN5alloc7raw_vec20RawVecInner_LT_A_GT_16with_capacity_in17h6d79adff25664689E
                       (uVar11,8,0x20,&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_00977488);
  local_80 = 0;
  _ZN5alloc3vec16Vec_LT_T_C_A_GT_5drain17hf4265eba2e4a5c57E(&local_f8,local_180);
  puVar8 = (ulong *)_ZN106__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__double_ended__DoubleEndedIterator_GT_9next_back17hb6b908aca71d9116E
                              (&local_f8);
  if (puVar8 != (ulong *)0x0) {
    do {
      uVar15 = *puVar8;
      local_b8 = puVar8[3];
      local_c8 = *(undefined4 *)(puVar8 + 1);
      uStack_c4 = *(undefined4 *)((long)puVar8 + 0xc);
      uVar7 = puVar8[1];
      uStack_c0 = *(undefined4 *)(puVar8 + 2);
      uStack_bc = *(undefined4 *)((long)puVar8 + 0x14);
      uVar11 = puVar8[2];
      if (uVar15 == 0x8000000000000000) break;
      local_1a8 = uVar15;
      uStack_1a0 = uVar7;
      local_198 = uVar11;
      uStack_190 = local_b8;
      if (uVar11 < local_140) {
                    /* try { // try from 0046de92 to 0046dea0 has its CatchHandler @ 0046dfa0 */
        _ZN5alloc3vec16Vec_LT_T_C_A_GT_11resize_with17hc60038c151f2bd82E
                  (&local_1a8,local_140,&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_009774a0);
      }
      uStack_68 = (undefined4)local_198;
      uStack_64 = local_198._4_4_;
      local_60 = (undefined4)uStack_190;
      uStack_5c = uStack_190._4_4_;
      local_78 = local_1a8;
      local_70 = uStack_1a0;
                    /* try { // try from 0046dec8 to 0046ded5 has its CatchHandler @ 0046dfb1 */
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h8eb7f3e47ff8baf3E
                (local_90,&local_78,&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_009774b8);
      puVar8 = (ulong *)_ZN106__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__double_ended__DoubleEndedIterator_GT_9next_back17hb6b908aca71d9116E
                                  (&local_f8);
    } while (puVar8 != (ulong *)0x0);
  }
                    /* try { // try from 0046dee7 to 0046def3 has its CatchHandler @ 0046df7c */
  _ZN4core3ptr169drop_in_place_LT_core__iter__adapters__rev__Rev_LT_alloc__vec__drain__Drain_LT_alacritty_terminal__grid__row__Row_LT_alacritty_terminal__term__cell__Cell_GT__GT__GT__GT_17h0a661189e2851256E
            (&local_f8);
  lVar12 = local_108;
                    /* try { // try from 0046def4 to 0046df0b has its CatchHandler @ 0046df7a */
  _ZN18alacritty_terminal4grid7storage16Storage_LT_T_GT_13replace_inner17h4bb3a9570b781689E
            (local_108,local_90);
  lVar14 = 0;
  if (*(ulong *)(lVar12 + 0x98) <= *(ulong *)(lVar12 + 0x28)) {
    lVar14 = *(ulong *)(lVar12 + 0x28) - *(ulong *)(lVar12 + 0x98);
  }
  uVar9 = _ZN4core3cmp3Ord3min17h7c13e9bfb8ea3862E(*(undefined8 *)(lVar12 + 0xa0),lVar14);
  *(undefined8 *)(lVar12 + 0xa0) = uVar9;
                    /* try { // try from 0046df30 to 0046df3c has its CatchHandler @ 0046df81 */
  _ZN4core3ptr122drop_in_place_LT_alloc__vec__Vec_LT_alacritty_terminal__grid__row__Row_LT_alacritty_terminal__term__cell__Cell_GT__GT__GT_17h27df7d3e70b8b5deE
            (&local_48);
  _ZN4core3ptr122drop_in_place_LT_alloc__vec__Vec_LT_alacritty_terminal__grid__row__Row_LT_alacritty_terminal__term__cell__Cell_GT__GT__GT_17h27df7d3e70b8b5deE
            (local_180);
  return;
}