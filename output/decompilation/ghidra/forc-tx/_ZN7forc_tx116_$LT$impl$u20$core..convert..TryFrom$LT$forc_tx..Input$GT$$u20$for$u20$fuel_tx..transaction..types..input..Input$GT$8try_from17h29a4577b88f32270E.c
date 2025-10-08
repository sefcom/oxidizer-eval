ulong * _ZN7forc_tx116__LT_impl_u20_core__convert__TryFrom_LT_forc_tx__Input_GT__u20_for_u20_fuel_tx__transaction__types__input__Input_GT_8try_from17h29a4577b88f32270E
                  (ulong *param_1,ulong *param_2)

{
  short sVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined2 uVar7;
  ulong uVar8;
  ulong uVar9;
  ushort uVar10;
  uint uVar11;
  uint uVar13;
  ushort uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ushort uVar20;
  ulong uVar21;
  int iVar22;
  undefined2 local_1c4;
  ulong local_1c0;
  ulong local_1b8;
  ulong local_1b0;
  ulong local_1a8;
  undefined2 local_1a0;
  ulong local_198;
  ulong local_190;
  uint local_188;
  ulong local_180;
  ulong local_178;
  ulong local_170;
  ulong local_168;
  ulong local_160;
  ulong local_158;
  ushort local_150;
  ushort local_148;
  ulong local_140;
  ulong *local_138;
  ulong local_130;
  ulong local_128;
  ulong local_120;
  ulong local_118;
  ulong local_110;
  ulong local_108;
  ulong local_100;
  ulong local_f8;
  ulong local_f0;
  ulong local_e8;
  ulong local_e0;
  ulong local_d8;
  ulong local_d0;
  ulong local_c8;
  ulong local_c0;
  ulong local_b8;
  ulong local_b0;
  ulong local_a8;
  ulong local_a0;
  ulong local_98;
  ulong local_90;
  ulong local_88;
  ulong local_80;
  ulong local_78;
  ulong local_70;
  ulong local_68;
  ulong local_60;
  ulong local_58;
  ulong local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulong local_38;
  ulong uVar12;
  
  uVar19 = 2;
  if ((*param_2 ^ 0x8000000000000000) < 2) {
    uVar19 = *param_2 ^ 0x8000000000000000;
  }
  if (uVar19 == 0) {
    local_140 = param_2[0x13];
    local_190 = param_2[0x14];
    local_80 = param_2[0x16];
    uVar14 = *(ushort *)(param_2 + 0x17);
    uVar19 = param_2[7];
    uVar18 = param_2[8];
    uVar16 = param_2[9];
    local_130 = param_2[10];
    local_1a8 = param_2[0xb];
    local_180 = param_2[0xe];
    local_158 = param_2[0xf];
    local_1b8._0_4_ = *(uint *)(param_2 + 0x10);
    local_1c0 = (ulong)(uint)local_1b8;
    local_148 = *(ushort *)((long)param_2 + 0x84);
    local_188 = (uint)local_148;
    local_118 = param_2[0x11];
    uVar12 = param_2[1];
    uVar2 = param_2[2];
    uVar3 = param_2[4];
    uVar4 = param_2[5];
    if ((*(byte *)(param_2 + 0x12) & 1) == 0) {
      if (uVar3 == 0x8000000000000000 || uVar12 == 0x8000000000000000) goto LAB_0022a796;
      uVar21 = param_2[3];
      uVar15 = param_2[6];
                    /* try { // try from 0022aa1f to 0022aa33 has its CatchHandler @ 0022b214 */
      local_d8 = local_190;
      local_d0 = param_2[0xd];
      local_c8 = param_2[0xc];
      local_90 = param_2[0x15];
      local_78 = uVar12;
      local_70 = uVar2;
      local_68 = uVar21;
      local_60 = uVar3;
      local_58 = uVar4;
      local_50 = uVar15;
      _ZN3std2fs4read17haeaee0c12cdc07fdE(&local_110,&local_78);
      local_120 = local_100;
      local_128 = local_108;
      local_160 = local_110;
      if (local_110 != 0x8000000000000000) {
        _ZN4core3ptr184drop_in_place_LT_forc_tx___LT_impl_u20_core__convert__TryFrom_LT_forc_tx__Input_GT__u20_for_u20_fuel_tx__transaction__types__input__Input_GT___try_from___u7b__u7b_closure_u7d__u7d__GT_17h463f3a0706b0b287E
                  (uVar12,uVar2);
                    /* try { // try from 0022ab09 to 0022ab1d has its CatchHandler @ 0022b1e5 */
        _ZN3std2fs4read17haeaee0c12cdc07fdE(&local_110,&local_60);
        if (local_110 == 0x8000000000000000) {
          param_1[1] = 2;
          param_1[2] = local_108;
          param_1[3] = uVar3;
          param_1[4] = uVar4;
          param_1[5] = uVar15;
          *param_1 = 0x8000000000000006;
          goto LAB_0022adcb;
        }
        local_1c4 = (undefined2)(local_140 >> 0x10);
        local_138 = (ulong *)(local_140 >> 0x20);
        local_88 = (ulong)uVar14;
        _ZN4core3ptr184drop_in_place_LT_forc_tx___LT_impl_u20_core__convert__TryFrom_LT_forc_tx__Input_GT__u20_for_u20_fuel_tx__transaction__types__input__Input_GT___try_from___u7b__u7b_closure_u7d__u7d__GT_17h463f3a0706b0b287E
                  (uVar3,uVar4);
        local_150 = (ushort)(local_130 >> 0x20);
        local_1c0 = local_130 & 0xffffffff;
        local_e0 = local_130 >> 0x30;
        local_1a0 = (undefined2)(local_158 >> 0x10);
        local_188 = (uint)(local_158 >> 0x20);
        local_f0 = 0x8000000000000001;
        local_190 = local_c8;
        local_130 = local_110;
        local_198 = local_180;
        uVar12 = local_108;
        local_1b0 = local_1a8;
        local_1a8 = uVar16;
        local_180 = uVar19;
        local_168 = local_158;
        local_158 = uVar18;
        goto LAB_0022a474;
      }
      param_1[1] = 1;
      param_1[2] = local_108;
      param_1[3] = uVar12;
      param_1[4] = uVar2;
      param_1[5] = uVar21;
      *param_1 = 0x8000000000000006;
    }
    else {
      local_e0 = uVar12 ^ 0x8000000000000000;
      if (uVar3 == 0x8000000000000000 && local_e0 == 0) {
        local_1a0 = *(undefined2 *)((long)param_2 + 0x92);
        local_1c4 = SUB82(param_2,0);
        local_198 = local_80;
        local_d0 = param_2[0x15];
        local_100 = param_2[0xd];
        uVar12 = param_2[0xc];
        local_f0 = 0x8000000000000000;
        local_1b0 = local_140;
        local_168 = (ulong)uVar14;
        local_160 = uVar19;
        local_140 = local_e0;
        local_138 = param_2;
        local_128 = uVar18;
        local_120 = uVar16;
        local_150 = local_148;
LAB_0022a474:
        uVar19 = local_198 >> 0x10;
        uVar14 = (ushort)(local_d0 >> 0x20);
        local_178._0_2_ = (ushort)(local_d0 >> 0x30);
        uVar20 = (ushort)local_140;
        local_170 = local_198;
        local_e8 = local_d0;
        goto LAB_0022a4db;
      }
LAB_0022a796:
      param_1[1] = 3;
      *param_1 = 0x8000000000000006;
      if (uVar12 != 0x8000000000000000) {
        _ZN4core3mem4drop17h395863031f54f8e3E(uVar12,uVar2);
      }
      if (uVar3 == 0x8000000000000000) {
        return param_1;
      }
    }
    _ZN4core3mem4drop17h395863031f54f8e3E(uVar3,uVar4);
  }
  else {
    if (uVar19 == 1) {
      uVar19 = (ulong)*(uint6 *)((long)param_2 + 0x72);
      local_188 = *(uint *)((long)param_2 + 0x7c);
      local_1b8._0_4_ = *(uint *)(param_2 + 0x10);
      local_148 = *(ushort *)((long)param_2 + 0x84);
      local_170 = (ulong)*(ushort *)((long)param_2 + 0x86);
      local_118 = param_2[0x11];
      uVar21 = (ulong)*(ushort *)(param_2 + 0x12);
      local_160 = param_2[1];
      local_f8 = param_2[2];
      uVar18 = param_2[3];
      local_a0 = param_2[4];
      uVar16 = param_2[5];
      local_a8 = param_2[6];
      local_158 = param_2[8];
      uVar13 = *(uint *)(param_2 + 0xd);
      uVar14 = *(ushort *)((long)param_2 + 0x6c);
      uVar11 = *(uint *)(param_2 + 10);
      local_150 = *(ushort *)((long)param_2 + 0x54);
      local_1b0 = param_2[0xb];
      uVar15 = param_2[0xc];
      uVar17 = 0x8000000000000002;
      local_180 = param_2[7];
      local_1a8 = param_2[9];
      uVar2 = (ulong)*(ushort *)(param_2 + 0xe);
      local_190 = uVar15;
      local_178 = uVar15;
      local_168 = (ulong)*(ushort *)(param_2 + 0xf);
      local_e0 = (ulong)*(ushort *)((long)param_2 + 0x56);
      local_1a0 = *(undefined2 *)((long)param_2 + 0x7a);
LAB_0022a33d:
      local_198 = uVar2;
      local_e8 = (ulong)uVar13;
      local_1c0 = (ulong)uVar11;
      uVar20 = (ushort)uVar21;
      local_138._0_4_ = (uint)uVar15;
      local_1c4 = (undefined2)uVar15;
      local_128 = local_f8;
      local_130 = local_a0;
      local_120 = uVar18;
      local_100 = local_a8;
      uVar12 = uVar16;
      local_f0 = uVar17;
    }
    else {
      local_a0 = param_2[9];
      uVar16 = param_2[10];
      local_a8 = param_2[0xb];
      uVar2 = param_2[0xc];
      local_b0 = param_2[0xd];
      uVar3 = param_2[0xe];
      local_168 = param_2[0xf];
      local_b8 = param_2[0x10];
      local_118 = param_2[0x11];
      local_1a8 = param_2[0x12];
      uVar4 = param_2[0x13];
      uVar21 = param_2[0x14];
      local_d8 = param_2[0x15];
      local_38 = param_2[2];
      sVar1 = *(short *)(param_2 + 0x17);
      local_48 = *(undefined4 *)param_2;
      uStack_44 = *(undefined4 *)((long)param_2 + 4);
      uStack_40 = *(undefined4 *)(param_2 + 1);
      uStack_3c = *(undefined4 *)((long)param_2 + 0xc);
      local_198 = (ulong)*(ushort *)((long)param_2 + 0xba);
      local_88 = param_2[0x16];
      uVar19 = param_2[3];
      uVar15 = param_2[4];
      uVar17 = param_2[5];
      uVar5 = param_2[6];
      local_1b8 = param_2[7];
      uVar6 = param_2[8];
                    /* try { // try from 0022a714 to 0022a728 has its CatchHandler @ 0022b23f */
      _ZN3std2fs4read17haeaee0c12cdc07fdE(&local_110,&local_48);
      uVar18 = local_100;
      if (local_110 == 0x8000000000000000) {
        param_1[1] = 0;
        param_1[2] = local_108;
        param_1[3] = CONCAT44(uStack_44,local_48);
        param_1[4] = CONCAT44(uStack_3c,uStack_40);
        param_1[5] = local_38;
        *param_1 = 0x8000000000000006;
        _ZN4core3ptr39drop_in_place_LT_forc_tx__Predicate_GT_17h6c0f0d5c8723ee41E(param_2 + 3);
        return param_1;
      }
      local_f0 = local_110;
      local_1a0 = (undefined2)(local_168 >> 0x10);
      local_c0 = local_168 >> 0x20;
      uVar12 = local_168 >> 0x30;
      uVar10 = (ushort)(local_168 >> 0x30);
      local_98 = local_1a8 >> 0x10;
      uVar14 = (ushort)(local_1a8 >> 0x20);
      local_178 = local_1a8 >> 0x30;
      uVar7 = (undefined2)(uVar21 >> 0x10);
      local_138._0_4_ = (uint)(uVar21 >> 0x20);
      local_f8 = local_108;
      _ZN4core3ptr184drop_in_place_LT_forc_tx___LT_impl_u20_core__convert__TryFrom_LT_forc_tx__Input_GT__u20_for_u20_fuel_tx__transaction__types__input__Input_GT___try_from___u7b__u7b_closure_u7d__u7d__GT_17h463f3a0706b0b287E
                ();
      iVar22 = (int)(local_168 >> 0x10);
      local_180._0_2_ = (ushort)local_168;
      if (sVar1 == 0) {
        if (uVar19 == 0x8000000000000000 || uVar5 == 0x8000000000000000) goto LAB_0022aa95;
                    /* try { // try from 0022abb8 to 0022abcc has its CatchHandler @ 0022b1a3 */
        local_78 = uVar19;
        local_70 = uVar15;
        local_68 = uVar17;
        local_60 = uVar5;
        local_58 = local_1b8;
        local_50 = uVar6;
        _ZN3std2fs4read17haeaee0c12cdc07fdE(&local_110,&local_78);
        uVar12 = local_100;
        uVar9 = local_108;
        uVar8 = local_110;
        if (local_110 == 0x8000000000000000) {
          param_1[1] = 1;
          param_1[2] = local_108;
          param_1[3] = uVar19;
          param_1[4] = uVar15;
          param_1[5] = uVar17;
          *param_1 = 0x8000000000000006;
          _ZN4core3mem4drop17h395863031f54f8e3E(uVar5,local_1b8);
          local_128 = local_f8;
          local_160 = local_f0;
LAB_0022adcb:
          _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h420b33f3a20bf669E
                    (local_160,local_128);
          return param_1;
        }
        local_160 = local_110;
        local_120 = local_100;
        _ZN4core3ptr184drop_in_place_LT_forc_tx___LT_impl_u20_core__convert__TryFrom_LT_forc_tx__Input_GT__u20_for_u20_fuel_tx__transaction__types__input__Input_GT___try_from___u7b__u7b_closure_u7d__u7d__GT_17h463f3a0706b0b287E
                  (uVar19,uVar15);
                    /* try { // try from 0022ad57 to 0022ad6b has its CatchHandler @ 0022b181 */
        _ZN3std2fs4read17haeaee0c12cdc07fdE(&local_110,&local_60);
        if (local_110 == 0x8000000000000000) {
          param_1[1] = 2;
          param_1[2] = local_108;
          param_1[3] = uVar5;
          param_1[4] = local_1b8;
          param_1[5] = uVar6;
          *param_1 = 0x8000000000000006;
          _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h420b33f3a20bf669E
                    (uVar8,uVar9);
          local_128 = local_f8;
          local_160 = local_f0;
          goto LAB_0022adcb;
        }
        local_130 = local_110;
        local_128 = uVar9;
        _ZN4core3ptr184drop_in_place_LT_forc_tx___LT_impl_u20_core__convert__TryFrom_LT_forc_tx__Input_GT__u20_for_u20_fuel_tx__transaction__types__input__Input_GT___try_from___u7b__u7b_closure_u7d__u7d__GT_17h463f3a0706b0b287E
                  (uVar5,local_1b8);
        uVar20 = (ushort)local_1a8;
        local_1c4 = (undefined2)local_98;
        if (uVar18 == 0) {
          local_d0 = local_100;
          local_e8 = (ulong)((uint)(ushort)local_180 | iVar22 << 0x10);
          uVar19 = local_b8 >> 0x10;
          local_1b8 = (ulong)((uint)uVar20 | (int)local_98 << 0x10);
          local_1a0 = (undefined2)(local_118 >> 0x10);
          local_188 = (uint)(local_118 >> 0x20);
          uVar18 = 0x8000000000000004;
          local_1b0 = local_b0;
          local_198 = local_b8 & 0xffffffff;
          local_1a8 = local_a8;
          local_180 = local_a0;
          local_1c0 = uVar2;
          local_190 = uVar3;
          local_170 = local_178;
          local_158 = uVar16;
          local_c8 = local_108;
          local_178._0_2_ = uVar10;
          local_148 = uVar14;
          local_1c4 = uVar7;
          goto LAB_0022aea0;
        }
        local_188 = CONCAT22(uVar10,(undefined2)local_c0);
        local_138._0_4_ = (uint)(local_1a8 >> 0x20);
        local_150 = (ushort)(uVar16 >> 0x20);
        local_e0 = uVar16 >> 0x30;
        local_178._0_2_ = (ushort)(local_b0 >> 0x30);
        local_198 = uVar3 & 0xffffffff;
        uVar19 = uVar3 >> 0x10;
        local_148 = (ushort)(local_b8 >> 0x20);
        local_170 = local_b8 >> 0x30;
        local_80 = local_d8;
        local_1b8._0_4_ = (uint)local_b8;
        local_1a8 = local_a0;
        uVar14 = (ushort)(local_b0 >> 0x20);
        local_e8 = local_b0 & 0xffffffff;
        local_128 = uVar18;
        local_1b0 = local_a8;
        local_158 = local_100;
        local_130 = uVar9;
        local_180 = local_108;
        local_120 = uVar8;
        local_100 = local_110;
        local_160 = local_f8;
        local_1c0 = uVar16;
        local_190 = uVar2;
        local_d8 = uVar4;
        local_90 = uVar21;
      }
      else {
        if (uVar19 != 0x8000000000000000 || uVar5 != 0x8000000000000000) {
LAB_0022aa95:
          param_1[1] = 3;
          *param_1 = 0x8000000000000006;
          _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h420b33f3a20bf669E
                    (local_f0,local_f8);
          if (uVar19 != 0x8000000000000000) {
            _ZN4core3mem4drop17h395863031f54f8e3E(uVar19,uVar15);
          }
          if (uVar5 == 0x8000000000000000) {
            return param_1;
          }
          _ZN4core3mem4drop17h395863031f54f8e3E(uVar5,local_1b8);
          return param_1;
        }
        if (uVar18 != 0) {
          uVar11 = (uint)(ushort)local_180 | iVar22 << 0x10;
          uVar13 = (uint)local_1a8 & 0xffff | (int)local_98 << 0x10;
          uVar19 = uVar4 >> 0x10;
          local_150 = (ushort)local_c0;
          local_1b8._0_4_ = (uint)local_d8;
          local_148 = (ushort)(local_d8 >> 0x20);
          local_170 = local_d8 >> 0x30;
          uVar17 = 0x8000000000000005;
          uVar15 = uVar21 & 0xffffffff;
          local_1b0 = local_b8;
          local_158 = local_b0;
          local_180 = uVar2;
          local_160 = local_f0;
          local_1a8 = uVar3;
          uVar2 = uVar4 & 0xffffffff;
          local_190 = local_118;
          local_168 = uVar15;
          local_118 = local_198;
          local_e0 = uVar12;
          local_188 = (uint)local_138;
          local_1a0 = uVar7;
          goto LAB_0022a33d;
        }
        local_c0 = local_118 >> 0x20;
        local_170 = local_118 >> 0x30;
        local_178._0_2_ = (ushort)(local_118 >> 0x30);
        uVar18 = 0x8000000000000003;
        local_190 = local_d8;
        local_c8 = local_b0;
        local_158 = local_b8;
        local_120 = local_a8;
        local_160 = local_a0;
        local_188 = (uint)local_a0;
        local_1a0 = (undefined2)local_a0;
        local_1c0 = uVar4;
        uVar19 = uVar4;
        local_1b0 = uVar21;
        local_180 = local_168;
        local_130 = uVar2;
        local_128 = uVar16;
        local_e8 = local_118;
        local_d0 = uVar3;
        local_148 = (ushort)local_178;
        local_1c4 = local_1a0;
        local_138._0_4_ = local_188;
LAB_0022aea0:
        local_150 = (ushort)(local_1c0 >> 0x20);
        local_e0 = local_1c0 >> 0x30;
        _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h420b33f3a20bf669E
                  (local_f0,local_f8);
        uVar20 = (ushort)uVar21;
        uVar14 = (ushort)local_c0;
        local_100 = local_d0;
        uVar12 = local_c8;
        local_f0 = uVar18;
        local_168 = local_118;
        local_118 = uVar4;
        local_90 = local_88;
      }
    }
LAB_0022a4db:
    *param_1 = local_f0;
    param_1[1] = local_160;
    param_1[2] = local_128;
    param_1[3] = local_120;
    param_1[4] = local_130;
    param_1[5] = uVar12;
    param_1[6] = local_100;
    param_1[7] = local_180;
    param_1[8] = local_158;
    param_1[9] = local_1a8;
    *(int *)(param_1 + 10) = (int)local_1c0;
    *(ushort *)((long)param_1 + 0x54) = local_150;
    *(short *)((long)param_1 + 0x56) = (short)local_e0;
    param_1[0xb] = local_1b0;
    param_1[0xc] = local_190;
    *(int *)(param_1 + 0xd) = (int)local_e8;
    *(ushort *)((long)param_1 + 0x6c) = uVar14;
    *(ushort *)((long)param_1 + 0x6e) = (ushort)local_178;
    *(short *)(param_1 + 0xe) = (short)local_198;
    *(int *)((long)param_1 + 0x72) = (int)uVar19;
    *(short *)((long)param_1 + 0x76) = (short)(uVar19 >> 0x20);
    *(short *)(param_1 + 0xf) = (short)local_168;
    *(undefined2 *)((long)param_1 + 0x7a) = local_1a0;
    *(uint *)((long)param_1 + 0x7c) = local_188;
    *(uint *)(param_1 + 0x10) = (uint)local_1b8;
    *(ushort *)((long)param_1 + 0x84) = local_148;
    *(short *)((long)param_1 + 0x86) = (short)local_170;
    param_1[0x11] = local_118;
    *(ushort *)(param_1 + 0x12) = uVar20;
    *(undefined2 *)((long)param_1 + 0x92) = local_1c4;
    *(uint *)((long)param_1 + 0x94) = (uint)local_138;
    param_1[0x13] = local_d8;
    param_1[0x14] = local_90;
    param_1[0x15] = local_80;
    param_1[0x16] = local_88;
  }
  return param_1;
}