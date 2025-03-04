ulong _ZN5uu_rm10handle_dir17h040a6908c8ea150bE
                (undefined8 **param_1,undefined8 **param_2,long param_3)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char cVar9;
  byte bVar10;
  uint uVar11;
  undefined8 **ppuVar12;
  long lVar13;
  undefined8 unaff_RBP;
  undefined7 uVar15;
  ulong uVar14;
  bool bVar16;
  undefined auVar17 [12];
  undefined8 **local_268;
  undefined8 **ppuStack_260;
  undefined8 **local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 **local_230;
  undefined local_228 [12];
  undefined4 uStack_21c;
  undefined8 **local_218;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  uint local_1e0;
  uint local_1dc;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 **local_180;
  undefined8 **ppuStack_178;
  undefined8 **local_170;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 **local_128;
  undefined8 **local_120;
  undefined8 **ppuStack_118;
  undefined8 **local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 **local_e0;
  long local_d8;
  undefined8 **local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 *local_a8;
  code *local_a0;
  undefined *local_98;
  code *local_90;
  undefined local_88 [16];
  undefined8 **local_78;
  undefined local_70;
  undefined8 **local_68;
  undefined8 **ppuStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  _ZN3std4path4Path10components17h4f3217acf0fc8653E(&local_1d8,param_1,param_2);
  uVar15 = (undefined7)((ulong)unaff_RBP >> 8);
  if ((local_1a0._2_1_ == '\0') && ((byte)((char)local_1c8 - 5U) < 2)) {
    if (*(char *)(param_3 + 3) != '\0') {
LAB_001b726e:
      bVar10 = *(byte *)(param_3 + 5);
      bVar1 = *(byte *)(param_3 + 6);
      local_230 = param_1;
      if ((bVar1 == 2) || (bVar10 != 0)) {
        local_c8 = 0;
        local_b8 = 0;
        uStack_b0 = 0;
        local_c0 = 8;
        local_e8 = 0;
        local_e0 = (undefined8 **)&DAT_00000008;
        local_d8 = 0;
                    /* try { // try from 001b7621 to 001b763d has its CatchHandler @ 001b7d31 */
        local_d0 = param_2;
        _ZN7walkdir7WalkDir3new17h94b43d608c112e6dE(local_228,param_1,param_2);
        ppuVar12 = local_230;
        local_148 = local_1f0;
        uStack_140 = uStack_1e8;
        local_180 = (undefined8 **)local_228._0_8_;
        ppuStack_178 = stack0xfffffffffffffde0;
        local_170 = local_218;
        local_1d8 = (undefined **)0x0;
        local_1c8 = (undefined8 ***)0x0;
        uStack_1c0 = 8;
        local_1b8 = 0;
        uStack_1b0 = 0;
        local_1a8 = 8;
        local_1a0 = 0;
        uStack_198 = 0;
        local_190 = 8;
        local_188 = 0;
        local_138 = 0;
        uStack_130 = 0;
        uVar14 = 0;
        local_1dc = (uint)bVar10;
        local_1e0 = (uint)bVar1;
LAB_001b773d:
        if (bVar1 != 2) {
                    /* try { // try from 001b7747 to 001b775c has its CatchHandler @ 001b7d38 */
          _ZN76__LT_walkdir__IntoIter_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h918699d9fecda50eE
                    (&local_128,&local_1d8);
          if (local_128 == (undefined8 **)0x3) goto LAB_001b7b11;
          local_68 = local_120;
          ppuStack_60 = ppuStack_118;
          local_58 = local_110;
          uStack_50 = uStack_108;
          local_48 = local_100;
          uStack_40 = uStack_f8;
          if ((int)local_128 == 2) {
            local_258 = local_110;
            uStack_250 = uStack_108;
            local_248 = local_100;
            uStack_240 = uStack_f8;
            uVar5 = uStack_240;
            local_268 = local_120;
            ppuStack_260 = ppuStack_118;
            uStack_240._0_4_ = (uint)uStack_f8;
            uVar11 = (uint)uStack_240 & 0xf000;
            uStack_240 = uStack_f8;
            if (uVar11 == 0x4000) {
LAB_001b7710:
              uStack_208 = (undefined4)local_248;
              uStack_204 = local_248._4_4_;
              uStack_200 = (uint)uStack_240;
              uStack_1fc = uStack_240._4_4_;
              local_218 = local_258;
              uStack_210 = (undefined4)uStack_250;
              uStack_20c = uStack_250._4_4_;
              local_228._0_8_ = local_268;
              unique0x10000f2a = ppuStack_260;
                    /* try { // try from 001b772d to 001b773c has its CatchHandler @ 001b7d36 */
              _ZN5alloc11collections9vec_deque21VecDeque_LT_T_C_A_GT_9push_back17ha11ee268e055e361E
                        (&local_c8,local_228);
            }
            else {
LAB_001b7950:
                    /* try { // try from 001b795a to 001b796c has its CatchHandler @ 001b7d4b */
              bVar10 = _ZN5uu_rm11remove_file17hfb41d07f759de271E
                                 (ppuStack_260,local_258,local_1dc,local_1e0);
              uVar14 = (ulong)(byte)((byte)uVar14 | bVar10) & 0xffffffffffffff01;
LAB_001b7974:
                    /* try { // try from 001b7974 to 001b797b has its CatchHandler @ 001b7d3a */
              _ZN4core3ptr44drop_in_place_LT_walkdir__dent__DirEntry_GT_17h372f3c80b2dcbfecE
                        (&local_268);
            }
          }
          else {
LAB_001b7990:
            local_228._0_8_ = local_128;
            local_58._0_4_ = SUB84(local_110,0);
            local_58._4_4_ = (undefined4)((ulong)local_110 >> 0x20);
            uStack_50._0_4_ = (undefined4)uStack_108;
            uStack_50._4_4_ = (undefined4)((ulong)uStack_108 >> 0x20);
            local_48._0_4_ = (undefined4)local_100;
            local_48._4_4_ = (undefined4)((ulong)local_100 >> 0x20);
            uStack_40._0_4_ = (undefined4)uStack_f8;
            uStack_40._4_4_ = (undefined4)((ulong)uStack_f8 >> 0x20);
            uStack_200 = (undefined4)local_48;
            uStack_1fc = local_48._4_4_;
            uStack_1f8 = (undefined4)uStack_40;
            uStack_1f4 = uStack_40._4_4_;
            uStack_210 = (undefined4)local_58;
            uStack_20c = local_58._4_4_;
            uStack_208 = (undefined4)uStack_50;
            uStack_204 = uStack_50._4_4_;
            unique0x10000f6a = local_120;
            local_218 = ppuStack_118;
            local_1f0 = local_f0;
            local_68 = local_120;
            ppuStack_60 = ppuStack_118;
            local_58 = local_110;
            uStack_50 = uStack_108;
            local_48 = local_100;
            uStack_40 = uStack_f8;
                    /* try { // try from 001b79ca to 001b7ad8 has its CatchHandler @ 001b7d3c */
            local_88 = _ZN6uucore9util_name17h60d842bf27b05e82E();
            local_a8 = (undefined8 *)local_88;
            local_a0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h051bb22b4e362819E;
            local_268 = (undefined8 **)&DAT_00227970;
            ppuStack_260 = (undefined8 **)0x2;
            local_248 = 0;
            local_258 = &local_a8;
            uStack_250 = 1;
            _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_268);
            local_88._0_8_ = 1;
            local_88._8_8_ = ppuVar12;
            local_78 = local_d0;
            local_70 = 1;
            local_a8 = (undefined8 *)local_88;
            local_a0 = 
            _ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17h75932a24bee941d9E;
            local_90 = 
            _ZN60__LT_walkdir__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h133db1da499347d6E
            ;
            local_268 = (undefined8 **)&PTR_DAT_00227a00;
            ppuStack_260 = (undefined8 **)0x3;
            local_248 = 0;
            local_258 = &local_a8;
            uStack_250 = 2;
            local_98 = local_228;
            _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_268);
                    /* try { // try from 001b7ad9 to 001b7ae0 has its CatchHandler @ 001b7d3a */
            _ZN4core3ptr42drop_in_place_LT_walkdir__error__Error_GT_17hc1425b400c799960E(local_228);
            uVar14 = 1;
          }
          goto LAB_001b773d;
        }
                    /* try { // try from 001b77e0 to 001b77f5 has its CatchHandler @ 001b7d4d */
        while (_ZN76__LT_walkdir__IntoIter_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h918699d9fecda50eE
                         (&local_128,&local_1d8), local_128 != (undefined8 **)0x3) {
          local_48 = local_100;
          uStack_40 = uStack_f8;
          local_58 = local_110;
          uStack_50 = uStack_108;
          local_68 = local_120;
          ppuStack_60 = ppuStack_118;
          if ((int)local_128 != 2) goto LAB_001b7990;
          local_248 = local_100;
          uStack_240 = uStack_f8;
          local_258 = local_110;
          uStack_250 = uStack_108;
          local_268 = local_120;
          ppuStack_260 = ppuStack_118;
          unique0x00004700 = local_e0 + local_d8 * 3;
          local_228._0_8_ = local_e0;
          do {
            lVar13 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h401dddcc1f8bca7aE
                               (local_228);
            if (lVar13 == 0) {
              uVar11 = (uint)uStack_240 & 0xf000;
              if (uVar11 != 0x4000) goto LAB_001b7950;
                    /* try { // try from 001b78d0 to 001b790b has its CatchHandler @ 001b7d4b */
              _ZN3std2fs8read_dir17h67bbb91b5f22fd39E(local_228,ppuStack_260,local_258);
              auVar17 = _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h16565dcf888e9ebfE
                                  (local_228._0_8_,(ulong)stack0xfffffffffffffde0 & 0xffffffff);
              lVar13 = _ZN4core4iter6traits8iterator8Iterator4fold17h676339c190ac643eE
                                 (auVar17._0_8_,auVar17._8_4_ & 1);
              if (lVar13 == 0) goto LAB_001b7710;
              cVar9 = _ZN5uu_rm14prompt_descend17h39295f8defb4b16aE(ppuStack_260,local_258);
              if (cVar9 == '\0') {
                    /* try { // try from 001b7af3 to 001b7b0b has its CatchHandler @ 001b7d4b */
                _ZN3std3sys3pal4unix2os11split_paths13bytes_to_path17h0549813f23b52483E
                          (local_228,ppuStack_260,local_258);
                _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hc1adebded84362dbE(&local_e8,local_228);
                goto LAB_001b7974;
              }
              uStack_208 = (undefined4)local_248;
              uStack_204 = local_248._4_4_;
              uStack_200 = (uint)uStack_240;
              uStack_1fc = uStack_240._4_4_;
              local_218 = local_258;
              uStack_210 = (undefined4)uStack_250;
              uStack_20c = uStack_250._4_4_;
              local_228._0_8_ = local_268;
              unique0x10000f62 = ppuStack_260;
                    /* try { // try from 001b7931 to 001b7940 has its CatchHandler @ 001b7d36 */
              _ZN5alloc11collections9vec_deque21VecDeque_LT_T_C_A_GT_9push_back17ha11ee268e055e361E
                        (&local_c8,local_228);
              goto LAB_001b773d;
            }
                    /* try { // try from 001b7897 to 001b789e has its CatchHandler @ 001b7d57 */
            cVar9 = _ZN3std4path4Path11starts_with17h2e2f372e672a1657E
                              (ppuStack_260,local_258,lVar13);
          } while (cVar9 == '\0');
                    /* try { // try from 001b78a3 to 001b78aa has its CatchHandler @ 001b7d4d */
          _ZN4core3ptr44drop_in_place_LT_walkdir__dent__DirEntry_GT_17h372f3c80b2dcbfecE(&local_268)
          ;
        }
LAB_001b7b11:
                    /* try { // try from 001b7b11 to 001b7b2f has its CatchHandler @ 001b7d31 */
        _ZN4core3ptr38drop_in_place_LT_walkdir__IntoIter_GT_17h3761202ee7f4baa7E(&local_1d8);
        _ZN5alloc11collections9vec_deque21VecDeque_LT_T_C_A_GT_4iter17h7ec7afdb8ff5890dE
                  (local_228,&local_c8);
        uStack_1c0._0_4_ = uStack_210;
        uStack_1c0._4_4_ = uStack_20c;
        local_1c8 = (undefined8 ***)local_218;
        local_1d8._0_4_ = (undefined4)local_228._0_8_;
        local_1d8._4_4_ = local_228._4_4_;
        uStack_1d0._0_4_ = SUB84(stack0xfffffffffffffde0,0);
        uStack_1d0._4_4_ = uStack_21c;
        do {
          lVar13 = _ZN106__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__double_ended__DoubleEndedIterator_GT_9next_back17hc080de13743d3b84E
                             (&local_1c8);
          uVar8 = uStack_1d0._4_4_;
          uVar7 = (undefined4)uStack_1d0;
          uVar6 = local_1d8._4_4_;
          if (lVar13 == 0) {
            uVar4 = SUB84(local_1c8,0);
            local_1d8._4_4_ = local_1c8._4_4_;
            uStack_1d0._0_4_ = (undefined4)uStack_1c0;
            uStack_1d0._4_4_ = uStack_1c0._4_4_;
            local_1c8 = (undefined8 ***)CONCAT44(uVar6,(undefined4)local_1d8);
            uStack_1c0._0_4_ = uVar7;
            uStack_1c0._4_4_ = uVar8;
            local_1d8._0_4_ = uVar4;
            lVar13 = _ZN106__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__double_ended__DoubleEndedIterator_GT_9next_back17hc080de13743d3b84E
                               (&local_1c8);
            if (lVar13 == 0) goto LAB_001b7bae;
          }
                    /* try { // try from 001b7b9d to 001b7ba4 has its CatchHandler @ 001b7d52 */
          bVar10 = _ZN5uu_rm10remove_dir17h7d132cab7d9f675cE
                             (*(undefined8 *)(lVar13 + 8),*(undefined8 *)(lVar13 + 0x10),param_3);
          uVar14 = (ulong)(byte)((byte)uVar14 | bVar10) & 0xffffffffffffff01;
        } while( true );
      }
      ppuVar12 = (undefined8 **)_ZN3std2fs14remove_dir_all17ha0bf453026099f20E(param_1,param_2);
      if (ppuVar12 == (undefined8 **)0x0) {
        uVar14 = 0;
      }
      else {
        local_268 = ppuVar12;
                    /* try { // try from 001b72af to 001b73e1 has its CatchHandler @ 001b7d24 */
        local_1d8 = (undefined **)_ZN3std2fs10remove_dir17h3ace2cb00c00de8eE(param_1,param_2);
        if (local_1d8 == (undefined **)0x0) {
                    /* try { // try from 001b7bd4 to 001b7cfb has its CatchHandler @ 001b7d24 */
          _ZN4core3ptr81drop_in_place_LT_core__result__Result_LT__LP__RP__C_std__io__error__Error_GT__GT_17hc630b8980b1a585cE
                    (&local_1d8);
          uVar14 = 0;
        }
        else {
          _ZN4core3ptr81drop_in_place_LT_core__result__Result_LT__LP__RP__C_std__io__error__Error_GT__GT_17hc630b8980b1a585cE
                    (&local_1d8);
          cVar9 = _ZN3std2io5error5Error4kind17hb2ff5fa058639b3dE(ppuVar12);
          if (cVar9 == '\x01') {
            _local_228 = _ZN6uucore9util_name17h60d842bf27b05e82E();
            local_120 = (undefined8 **)
                        _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h051bb22b4e362819E;
            local_1d8 = (undefined **)&DAT_00227970;
            uStack_1d0 = 2;
            local_1b8 = 0;
            uStack_1c0 = 1;
            local_1c8 = &local_128;
            local_128 = (undefined8 **)local_228;
            _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_1d8);
            local_228._0_8_ = &DAT_00000001;
            stack0xfffffffffffffde0 = local_230;
            uStack_210 = CONCAT31(uStack_210._1_3_,1);
            local_120 = (undefined8 **)
                        _ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17h75932a24bee941d9E
            ;
            local_1d8 = &PTR_DAT_002279b0;
            uStack_1d0 = 2;
            local_1b8 = 0;
            uStack_1c0 = 1;
            local_218 = param_2;
            local_1c8 = &local_128;
            local_128 = (undefined8 **)local_228;
            _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_1d8);
          }
          else {
            _local_228 = _ZN6uucore9util_name17h60d842bf27b05e82E();
            local_120 = (undefined8 **)
                        _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h051bb22b4e362819E;
            local_1d8 = (undefined **)&DAT_00227970;
            uStack_1d0 = 2;
            local_1b8 = 0;
            uStack_1c0 = 1;
            local_1c8 = &local_128;
            local_128 = (undefined8 **)local_228;
            _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_1d8);
            local_228._0_8_ = &DAT_00000001;
            stack0xfffffffffffffde0 = local_230;
            uStack_210 = CONCAT31(uStack_210._1_3_,1);
            local_120 = (undefined8 **)
                        _ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17h75932a24bee941d9E
            ;
            local_110 = (undefined8 **)
                        _ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h59fe8285afbb4739E
            ;
            local_1d8 = &PTR_DAT_002279d0;
            uStack_1d0 = 3;
            local_1b8 = 0;
            uStack_1c0 = 2;
            local_218 = param_2;
            local_1c8 = &local_128;
            local_128 = (undefined8 **)local_228;
            ppuStack_118 = &local_268;
            _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_1d8);
          }
          uVar14 = CONCAT71(uVar15,1);
        }
        _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h333f14ee3ed91a78E(&local_268);
      }
      goto LAB_001b7d07;
    }
    bVar16 = false;
    cVar9 = *(char *)(param_3 + 4);
joined_r0x001b73ee:
    bVar3 = true;
    bVar2 = true;
  }
  else {
    lVar13 = _ZN3std4path4Path6parent17h65c9a340a6266f2dE(param_1,param_2);
    bVar16 = lVar13 == 0;
    if (*(char *)(param_3 + 3) == '\0') {
      cVar9 = *(char *)(param_3 + 4);
      goto joined_r0x001b73ee;
    }
    if ((lVar13 != 0) || (*(char *)(param_3 + 2) == '\0')) goto LAB_001b726e;
    bVar3 = false;
    bVar2 = false;
    bVar16 = true;
    cVar9 = *(char *)(param_3 + 4);
  }
  if ((cVar9 == '\0') || (bVar2 = bVar3, (bool)(bVar16 & *(char *)(param_3 + 2) != '\0'))) {
    if (bVar2) {
      _local_228 = _ZN6uucore9util_name17h60d842bf27b05e82E();
      local_128 = (undefined8 **)local_228;
      local_120 = (undefined8 **)
                  _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h051bb22b4e362819E;
      local_1d8 = (undefined **)&DAT_00227970;
      uStack_1d0 = 2;
      local_1b8 = 0;
      local_1c8 = &local_128;
      uStack_1c0 = 1;
      _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_1d8);
      local_1d8 = &PTR_DAT_00227a50;
    }
    else {
      _local_228 = _ZN6uucore9util_name17h60d842bf27b05e82E();
      local_128 = (undefined8 **)local_228;
      local_120 = (undefined8 **)
                  _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h051bb22b4e362819E;
      local_1d8 = (undefined **)&DAT_00227970;
      uStack_1d0 = 2;
      local_1b8 = 0;
      local_1c8 = &local_128;
      uStack_1c0 = 1;
      _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_1d8);
      local_1d8 = &PTR_DAT_00227a30;
    }
    local_128 = (undefined8 **)local_228;
    local_120 = (undefined8 **)
                _ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17h75932a24bee941d9E
    ;
    uStack_210 = CONCAT31(uStack_210._1_3_,1);
    local_228._0_8_ = (undefined8 *)0x1;
    local_1c8 = &local_128;
    uStack_1d0 = 2;
    local_1b8 = 0;
    uStack_1c0 = 1;
    unique0x1000117d = param_1;
    local_218 = param_2;
    _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_1d8);
    uVar14 = CONCAT71(uVar15,1);
  }
  else {
    uVar11 = _ZN5uu_rm10remove_dir17h7d132cab7d9f675cE(param_1,param_2,param_3);
    uVar14 = (ulong)uVar11;
  }
LAB_001b7d07:
  return uVar14 & 0xffffff01;
LAB_001b7bae:
                    /* try { // try from 001b7bae to 001b7bba has its CatchHandler @ 001b7d1f */
  _ZN4core3ptr62drop_in_place_LT_alloc__vec__Vec_LT_std__path__PathBuf_GT__GT_17h0424e9eb358fe413E
            (&local_e8);
  _ZN4core3ptr91drop_in_place_LT_alloc__collections__vec_deque__VecDeque_LT_walkdir__dent__DirEntry_GT__GT_17hf45a67b5be4375a6E
            (&local_c8);
  goto LAB_001b7d07;
}