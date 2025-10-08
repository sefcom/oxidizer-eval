void _ZN18alacritty_terminal4grid6resize57__LT_impl_u20_alacritty_terminal__grid__Grid_LT_T_GT__GT_14shrink_columns17hf025751948d3172fE
               (long param_1,int param_2,ulong param_3)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  long lVar4;
  byte *pbVar5;
  ushort *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  undefined auVar13 [12];
  uint local_1dc;
  char local_1cc;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  ulong local_1b8;
  ulong local_1a8;
  ulong local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  ulong local_188;
  ulong local_180;
  long local_178;
  long lStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  long local_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  ulong local_138;
  undefined local_130 [16];
  long local_120;
  undefined **local_118;
  ulong local_110;
  ulong local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_d8;
  undefined local_d0 [8];
  long local_c8;
  ulong local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  ulong local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulong local_58;
  long local_50;
  long lStack_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  *(ulong *)(param_1 + 0x90) = param_3;
  if ((param_2 != 0) && (*(char *)(param_1 + 0x5c) != '\0')) {
    *(undefined *)(param_1 + 0x5c) = 0;
    *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + 1;
  }
  local_130 = _ZN5alloc7raw_vec20RawVecInner_LT_A_GT_16with_capacity_in17h6d79adff25664689E
                        (*(undefined8 *)(param_1 + 0x28),8,0x20,
                         &PTR_s__home_34r7hm4n_dev_oxidizer_oxid_00977548);
  local_120 = 0;
  local_148 = 0;
  uStack_144 = 0x80000000;
                    /* try { // try from 0046e1cc to 0046e1d3 has its CatchHandler @ 0046e9e9 */
  _ZN18alacritty_terminal4grid7storage16Storage_LT_T_GT_8truncate17h2d132ed67c9d1788E(param_1);
  local_100 = 0;
  uStack_f8 = 8;
  local_f0 = 0;
  _ZN4core10intrinsics25typed_swap_nonoverlapping17h0a04095f3d754e5fE(&local_100,param_1);
  *(undefined8 *)(param_1 + 0x28) = 0;
  local_a8 = local_f0;
  local_b8 = (undefined4)local_100;
  uStack_b4 = local_100._4_4_;
  uStack_b0 = (undefined4)uStack_f8;
  uStack_ac = uStack_f8._4_4_;
  _ZN5alloc3vec16Vec_LT_T_C_A_GT_5drain17hf4265eba2e4a5c57E(&local_100,&local_b8);
  local_d8 = 0;
  local_1a0 = *(ulong *)(param_1 + 0x30);
  local_1a8 = param_3 - 1;
  local_1dc = *(uint *)(param_1 + 0x38);
  local_110 = *(ulong *)(param_1 + 0xa0);
  local_150 = *(long *)(param_1 + 0x98);
  local_118 = &PTR_s__home_34r7hm4n_dev_oxidizer_oxid_009775a8;
  local_180 = param_3;
LAB_0046e2b0:
                    /* try { // try from 0046e2b0 to 0046e2c4 has its CatchHandler @ 0046ea2e */
  _ZN125__LT_core__iter__adapters__enumerate__Enumerate_LT_I_GT__u20_as_u20_core__iter__traits__double_ended__DoubleEndedIterator_GT_9next_back17hb40f1190552b9631E
            (&local_58,&local_100);
  uVar8 = local_58;
  uVar3 = uStack_144;
  uVar1 = local_148;
  local_1cc = (char)param_2;
  if (local_50 != -0x8000000000000000) {
    local_178 = local_50;
    lStack_170 = lStack_48;
    local_168 = CONCAT44(uStack_3c,local_40);
    uStack_160 = CONCAT44(uStack_34,uStack_38);
    local_1c8 = local_148;
    uStack_1c4 = uStack_144;
    uStack_1c0 = uStack_140;
    uStack_1bc = uStack_13c;
    local_1b8 = local_138;
    local_148 = 0;
    uStack_144 = 0x80000000;
    if (CONCAT44(uVar3,uVar1) == -0x8000000000000000) {
                    /* try { // try from 0046e320 to 0046e386 has its CatchHandler @ 0046ea29 */
      _ZN4core3ptr108drop_in_place_LT_core__option__Option_LT_alloc__vec__Vec_LT_alacritty_terminal__term__cell__Cell_GT__GT__GT_17hd425794b6e9b2c11E
                (&local_1c8);
    }
    else {
      local_88 = local_138;
      local_98 = uVar1;
      uStack_94 = uVar3;
      uStack_90 = uStack_140;
      uStack_8c = uStack_13c;
      if (local_58 == (int)~local_1dc + local_150) {
        local_1a0 = local_1a0 + local_138;
        *(ulong *)(param_1 + 0x30) = local_1a0;
      }
      _ZN18alacritty_terminal4grid3row12Row_LT_T_GT_12append_front17he840b6ebdfbe10d4E
                (&local_178,&local_98);
    }
    local_108 = uVar8;
LAB_0046e3c6:
                    /* try { // try from 0046e3c6 to 0046e3d7 has its CatchHandler @ 0046ea3d */
    uVar12 = local_108;
    _ZN18alacritty_terminal4grid3row12Row_LT_T_GT_6shrink17hd1c482736534eb30E
              (&local_1c8,&local_178,param_3);
    uVar8 = local_168;
    if (CONCAT44(uStack_1c4,local_1c8) == -0x8000000000000000) {
      if (((local_1cc == '\0') || (uVar12 != (int)~local_1dc + local_150)) || (local_1a0 <= param_3)
         ) {
LAB_0046e720:
                    /* try { // try from 0046e720 to 0046e738 has its CatchHandler @ 0046ea18 */
        _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h8eb7f3e47ff8baf3E
                  (local_130,&local_178,&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_00977590);
                    /* try { // try from 0046e739 to 0046e742 has its CatchHandler @ 0046ea27 */
        _ZN4core3ptr108drop_in_place_LT_core__option__Option_LT_alloc__vec__Vec_LT_alacritty_terminal__term__cell__Cell_GT__GT__GT_17hd425794b6e9b2c11E
                  (&local_1c8);
        goto LAB_0046e2b0;
      }
      local_198 = 0;
      uStack_190 = 8;
      local_188 = 0;
    }
    else {
      if (local_1cc == '\0') goto LAB_0046e720;
      local_198 = CONCAT44(uStack_1c4,local_1c8);
      uStack_190 = CONCAT44(uStack_1bc,uStack_1c0);
      local_188 = local_1b8;
    }
    if (param_3 <= local_168) {
      if (local_1a8 < local_168) {
        puVar10 = (undefined8 *)(local_1a8 * 0x18 + lStack_170);
        pbVar5 = (byte *)_ZN91__LT_alacritty_terminal__term__cell__Cell_u20_as_u20_alacritty_terminal__grid__GridCell_GT_5flags17hcae42e2ab580f7aeE
                                   (puVar10);
        if ((*pbVar5 & 0x20) != 0) {
          _ZN79__LT_alacritty_terminal__term__cell__Cell_u20_as_u20_core__default__Default_GT_7default17h2206ab58710dae3dE
                    (&local_1c8);
          lVar11 = _ZN91__LT_alacritty_terminal__term__cell__Cell_u20_as_u20_alacritty_terminal__grid__GridCell_GT_9flags_mut17hf1ec2b73cb1258e3E
                             (&local_1c8);
          *(byte *)(lVar11 + 1) = *(byte *)(lVar11 + 1) | 4;
          uStack_160 = _ZN4core3cmp3Ord3max17h20b6d33cbe488162E(uStack_160,param_3);
          local_68 = puVar10[2];
          local_78 = *puVar10;
          uStack_70 = puVar10[1];
          *(undefined4 *)puVar10 = local_1c8;
          *(undefined4 *)((long)puVar10 + 4) = uStack_1c4;
          *(undefined4 *)(puVar10 + 1) = uStack_1c0;
          *(undefined4 *)((long)puVar10 + 0xc) = uStack_1bc;
          puVar10[2] = local_1b8;
                    /* try { // try from 0046e4f3 to 0046e504 has its CatchHandler @ 0046ea33 */
          _ZN5alloc3vec16Vec_LT_T_C_A_GT_6insert17h4455ac7c1c6c20edE(&local_198,&local_78);
        }
        goto LAB_0046e505;
      }
LAB_0046e9a0:
                    /* try { // try from 0046e9a0 to 0046e9b0 has its CatchHandler @ 0046ea35 */
      (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_009de0f0)
                (local_1a8,uVar8,local_118);
      goto LAB_0046e9c0;
    }
LAB_0046e505:
    uVar12 = local_188;
    lVar11 = uStack_190;
    if (local_188 != 0) {
      uVar7 = local_188 - 1;
      lVar4 = _ZN91__LT_alacritty_terminal__term__cell__Cell_u20_as_u20_alacritty_terminal__grid__GridCell_GT_5flags17hcae42e2ab580f7aeE
                        (uStack_190 + uVar7 * 0x18);
      param_3 = local_180;
      if ((*(byte *)(lVar4 + 1) & 4) != 0) {
        if (uVar12 == 1) {
          uStack_160 = _ZN4core3cmp3Ord3max17h20b6d33cbe488162E(uStack_160,local_180);
          if (uVar8 <= local_1a8) {
            local_118 = &PTR_s__home_34r7hm4n_dev_oxidizer_oxid_009775d8;
            goto LAB_0046e9a0;
          }
          pbVar5 = (byte *)_ZN91__LT_alacritty_terminal__term__cell__Cell_u20_as_u20_alacritty_terminal__grid__GridCell_GT_9flags_mut17hf1ec2b73cb1258e3E
                                     (local_1a8 * 0x18 + lStack_170);
          *pbVar5 = *pbVar5 | 0x10;
                    /* try { // try from 0046e788 to 0046e7a0 has its CatchHandler @ 0046ea10 */
          _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h8eb7f3e47ff8baf3E
                    (local_130,&local_178,&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_009775f0);
                    /* try { // try from 0046e7a6 to 0046e7af has its CatchHandler @ 0046ea27 */
          _ZN4core3ptr80drop_in_place_LT_alloc__vec__Vec_LT_alacritty_terminal__term__cell__Cell_GT__GT_17h3a26ff64830026d7E
                    (&local_198);
          goto LAB_0046e2b0;
        }
        pbVar5 = (byte *)_ZN91__LT_alacritty_terminal__term__cell__Cell_u20_as_u20_alacritty_terminal__grid__GridCell_GT_9flags_mut17hf1ec2b73cb1258e3E
                                   (lVar11 + uVar12 * 0x18 + -0x30);
        *pbVar5 = *pbVar5 | 0x10;
        lVar11 = local_188 - uVar7;
        if (uVar7 <= local_188) {
          local_188 = uVar7;
                    /* try { // try from 0046e56b to 0046e6da has its CatchHandler @ 0046ea42 */
          _ZN4core3ptr67drop_in_place_LT__u5b_alacritty_terminal__term__cell__Cell_u5d__GT_17hee3a2d0d3617f058E
                    (uVar7 * 0x18 + uStack_190,lVar11);
        }
      }
    }
    _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h8eb7f3e47ff8baf3E
              (local_130,&local_178,&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_00977608);
    lVar11 = local_120 * 0x20 + local_130._8_8_;
    if (lVar11 != 0x20 && local_120 != 0) {
      lVar4 = *(long *)(lVar11 + -0x10);
      *(long *)(lVar11 + -8) = lVar4;
      if ((lVar4 != 0) && (lVar4 * 0x18 + *(long *)(lVar11 + -0x18) != 0x18)) {
        pbVar5 = (byte *)_ZN91__LT_alacritty_terminal__term__cell__Cell_u20_as_u20_alacritty_terminal__grid__GridCell_GT_9flags_mut17hf1ec2b73cb1258e3E
                                   ();
        *pbVar5 = *pbVar5 | 0x10;
      }
    }
    uVar12 = local_108;
    param_3 = local_180;
    uVar8 = local_188;
    lVar11 = local_188 * 0x18 + uStack_190 + -0x18;
    if (lVar11 != 0 && local_188 != 0) {
      puVar6 = (ushort *)
               _ZN91__LT_alacritty_terminal__term__cell__Cell_u20_as_u20_alacritty_terminal__grid__GridCell_GT_5flags17hcae42e2ab580f7aeE
                         (lVar11);
      if (((uVar12 != 0) && ((*puVar6 & 0x10) != 0)) && (uVar8 < param_3)) goto LAB_0046e7bf;
    }
    uVar7 = (int)~local_1dc + local_150;
    if (uVar12 == uVar7) {
      if (local_1a0 < param_3) {
        local_1dc = _ZN4core3cmp3Ord3max17h3396bb7148673668E(local_1dc - 1,0);
        *(uint *)(param_1 + 0x38) = local_1dc;
      }
      if (param_3 <= local_1a0) {
        *(ulong *)(param_1 + 0x30) = local_1a0 - param_3;
        local_1a0 = local_1a0 - param_3;
      }
    }
    else if (uVar12 < uVar7) {
      local_1dc = _ZN4core3cmp3Ord3max17h3396bb7148673668E(local_1dc - 1,0);
      *(uint *)(param_1 + 0x38) = local_1dc;
    }
    if (uVar8 < param_3) {
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_11resize_with17hc60038c151f2bd82E
                (&local_198,local_180,&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_00977620);
    }
    local_168 = local_188;
    local_178 = local_198;
    lStack_170 = uStack_190;
    param_3 = local_180;
    uStack_160 = uVar8;
    if (local_108 < local_110) {
      local_110 = local_110 + 1;
      *(ulong *)(param_1 + 0xa0) = local_110;
    }
    goto LAB_0046e3c6;
  }
                    /* try { // try from 0046e819 to 0046e84d has its CatchHandler @ 0046e9e1 */
  _ZN4core3ptr219drop_in_place_LT_core__iter__adapters__rev__Rev_LT_core__iter__adapters__enumerate__Enumerate_LT_alloc__vec__drain__Drain_LT_alacritty_terminal__grid__row__Row_LT_alacritty_terminal__term__cell__Cell_GT__GT__GT__GT__GT_17h2f52a59d6e4f951bE
            (&local_100);
  _ZN5alloc3vec16Vec_LT_T_C_A_GT_5drain17hf4265eba2e4a5c57E(&local_100,local_130);
  _ZN4core4iter6traits8iterator8Iterator7collect17hf931c5f72349fc14E(local_d0,&local_100);
  uVar8 = *(long *)(param_1 + 0x98) + *(long *)(param_1 + 0xa8);
  lVar11 = local_c0 - uVar8;
  if (uVar8 <= local_c0) {
    local_c0 = uVar8;
                    /* try { // try from 0046e880 to 0046e884 has its CatchHandler @ 0046e9c2 */
    _ZN4core3ptr109drop_in_place_LT__u5b_alacritty_terminal__grid__row__Row_LT_alacritty_terminal__term__cell__Cell_GT__u5d__GT_17hbdfa2dfef87806d4E
              (uVar8 * 0x20 + local_c8,lVar11);
  }
                    /* try { // try from 0046e885 to 0046e8dc has its CatchHandler @ 0046e9df */
  _ZN18alacritty_terminal4grid7storage16Storage_LT_T_GT_13replace_inner17h4bb3a9570b781689E
            (param_1,local_d0);
  lVar11 = 0;
  if (*(ulong *)(param_1 + 0x98) <= *(ulong *)(param_1 + 0x28)) {
    lVar11 = *(ulong *)(param_1 + 0x28) - *(ulong *)(param_1 + 0x98);
  }
  uVar9 = _ZN4core3cmp3Ord3min17h7c13e9bfb8ea3862E(*(undefined8 *)(param_1 + 0xa0),lVar11);
  uVar12 = local_1a8;
  *(undefined8 *)(param_1 + 0xa0) = uVar9;
  uVar8 = *(ulong *)(param_1 + 0x30);
  if (local_1cc == '\0') {
    uVar9 = _ZN4core3cmp3Ord3min17hffab314b5e6491b1E(uVar8,local_1a8);
    *(undefined8 *)(param_1 + 0x30) = uVar9;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x38);
    if (uVar8 == param_3) {
      lVar11 = _ZN134__LT_alacritty_terminal__grid__storage__Storage_LT_T_GT__u20_as_u20_core__ops__index__Index_LT_alacritty_terminal__index__Line_GT__GT_5index17h367087db943c6406E
                         (param_1,uVar1,&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_00977560);
      if (*(ulong *)(lVar11 + 0x10) <= local_1a8) {
                    /* try { // try from 0046e9b3 to 0046e9bf has its CatchHandler @ 0046e9df */
        (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_009de0f0)
                  (local_1a8,*(ulong *)(lVar11 + 0x10),
                   &PTR_s__home_34r7hm4n_dev_oxidizer_oxid_00977578);
LAB_0046e9c0:
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      pbVar5 = (byte *)_ZN91__LT_alacritty_terminal__term__cell__Cell_u20_as_u20_alacritty_terminal__grid__GridCell_GT_5flags17hcae42e2ab580f7aeE
                                 (local_1a8 * 0x18 + *(long *)(lVar11 + 8));
      if ((*pbVar5 & 0x10) == 0) {
        *(undefined *)(param_1 + 0x5c) = 1;
        *(ulong *)(param_1 + 0x30) = local_1a8;
        uVar12 = local_1a8;
        goto LAB_0046e948;
      }
    }
    auVar13 = _ZN18alacritty_terminal5index5Point10grid_clamp17h0af70e6c7939b3f8E
                        (uVar8,uVar1,param_1);
    *(undefined (*) [12])(param_1 + 0x30) = auVar13;
    uVar12 = local_1a8;
  }
LAB_0046e948:
  uVar9 = _ZN4core3cmp3Ord3min17hffab314b5e6491b1E(*(undefined8 *)(param_1 + 0x60),uVar12);
  *(undefined8 *)(param_1 + 0x60) = uVar9;
                    /* try { // try from 0046e958 to 0046e964 has its CatchHandler @ 0046e9e9 */
  _ZN4core3ptr122drop_in_place_LT_alloc__vec__Vec_LT_alacritty_terminal__grid__row__Row_LT_alacritty_terminal__term__cell__Cell_GT__GT__GT_17h27df7d3e70b8b5deE
            (&local_b8);
                    /* try { // try from 0046e965 to 0046e971 has its CatchHandler @ 0046e9d7 */
  _ZN4core3ptr108drop_in_place_LT_core__option__Option_LT_alloc__vec__Vec_LT_alacritty_terminal__term__cell__Cell_GT__GT__GT_17hd425794b6e9b2c11E
            (&local_148);
  _ZN4core3ptr122drop_in_place_LT_alloc__vec__Vec_LT_alacritty_terminal__grid__row__Row_LT_alacritty_terminal__term__cell__Cell_GT__GT__GT_17h27df7d3e70b8b5deE
            (local_130);
  return;
LAB_0046e7bf:
  pbVar5 = (byte *)_ZN91__LT_alacritty_terminal__term__cell__Cell_u20_as_u20_alacritty_terminal__grid__GridCell_GT_9flags_mut17hf1ec2b73cb1258e3E
                             (lVar11);
  *pbVar5 = *pbVar5 & 0xef;
  local_1b8 = local_188;
  local_1c8 = (undefined4)local_198;
  uStack_1c4 = local_198._4_4_;
  uStack_1c0 = (undefined4)uStack_190;
  uStack_1bc = uStack_190._4_4_;
                    /* try { // try from 0046e7de to 0046e7ea has its CatchHandler @ 0046e9f1 */
  _ZN4core3ptr108drop_in_place_LT_core__option__Option_LT_alloc__vec__Vec_LT_alacritty_terminal__term__cell__Cell_GT__GT__GT_17hd425794b6e9b2c11E
            (&local_148);
  local_138 = local_1b8;
  uStack_140 = uStack_1c0;
  uStack_13c = uStack_1bc;
  local_148 = local_1c8;
  uStack_144 = uStack_1c4;
  goto LAB_0046e2b0;
}