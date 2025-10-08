void _ZN18alacritty_terminal4term6search57__LT_impl_u20_alacritty_terminal__term__Term_LT_T_GT__GT_21regex_search_internal17h6112248bcc16e983E
               (ulong *param_1,long param_2,ulong param_3,undefined4 param_4,ulong param_5,
               uint param_6,long param_7)

{
  code *pcVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong extraout_RDX;
  ulong extraout_RDX_00;
  ulong uVar6;
  undefined **ppuVar7;
  undefined4 uVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  bool bVar13;
  undefined auVar14 [16];
  uint local_140;
  undefined4 local_13c;
  ulong local_138;
  ulong local_130;
  ulong local_128;
  long local_120;
  ulong local_118;
  uint local_110;
  uint uStack_10c;
  undefined8 local_108;
  ulong local_f8;
  ulong local_f0;
  uint local_e8;
  uint local_e4;
  ulong *local_e0;
  ulong local_d8;
  int local_d0;
  undefined4 local_cc;
  long local_c8;
  ulong local_c0;
  uint local_b8;
  ulong local_b0;
  int local_a8;
  ulong local_a0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  ulong local_78;
  code *local_70;
  long local_68;
  uint local_60 [2];
  undefined8 local_58;
  undefined8 local_50;
  undefined uStack_48;
  undefined7 uStack_47;
  undefined uStack_40;
  undefined8 uStack_3f;
  
  local_118 = CONCAT44(local_118._4_4_,param_4);
  uVar5 = *(ulong *)(param_2 + 0xc0);
  local_130 = 0;
  local_80 = *(ulong *)(param_2 + 0x50) - uVar5;
  if (*(ulong *)(param_2 + 0x50) < uVar5) {
    local_80 = 0;
  }
  uVar10 = *(long *)(param_2 + 0xb8) - 1;
  local_70 = 
  _ZN115__LT_alacritty_terminal__grid__GridIterator_LT_T_GT__u20_as_u20_alacritty_terminal__grid__BidirectionalIterator_GT_4prev17h095ab9c52e150b73E
  ;
  if (*(char *)(param_7 + 0x430) != '\0') {
    local_70 = 
    _ZN106__LT_alacritty_terminal__grid__GridIterator_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hccebf77f76d7c458E
    ;
  }
  local_60[0] = (uint)*(byte *)(param_7 + 0x431);
  local_58 = 1;
  local_50 = 0;
  uStack_48 = 0;
  uStack_47 = 0;
  uStack_40 = 0;
  uStack_3f = 0;
  local_120 = param_7 + 0x2d0;
  local_f0 = param_3;
  local_e4 = param_6;
  local_e0 = param_1;
  local_a0 = param_5;
  _ZN14regex_automata6hybrid3dfa3DFA19start_state_forward17h8dd0a7b4d9c1667dE
            (&local_c8,param_7,local_120,local_60);
  uVar2 = _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h0c28f10e710e8b0cE(&local_c8);
  uVar6 = (ulong)uVar2;
  local_d0 = (int)uVar5 + -1;
  local_c0 = local_f0;
  local_b8 = (uint)local_118;
  local_d8 = uVar10;
  local_c8 = param_2 + 0x28;
  local_b0 = uVar10;
  local_a8 = local_d0;
  local_88 = param_2 + 0x28;
  local_78 = uVar5;
  local_98 = _ZN18alacritty_terminal4grid21GridIterator_LT_T_GT_4cell17h5c2417f3cd861f7eE(&local_c8)
  ;
  local_68 = param_2;
  _ZN18alacritty_terminal4term6search57__LT_impl_u20_alacritty_terminal__term__Term_LT_T_GT__GT_14skip_fullwidth17h604d4a2591bbfa58E
            (param_2,&local_c8,&local_98,*(undefined *)(param_7 + 0x430));
  uVar8 = *(undefined4 *)(local_98 + 0x10);
  lVar3 = _ZN18alacritty_terminal4grid21GridIterator_LT_T_GT_4cell17h5c2417f3cd861f7eE(&local_c8);
  local_e8 = (uint)(*(byte *)(lVar3 + 0x14) >> 4);
  uVar10 = (ulong)local_b8;
  local_118 = local_c0;
  local_f0 = 0;
  local_138 = 0;
  uVar5 = local_c0;
  local_f8 = uVar10;
  do {
    uVar11 = local_118;
    uVar4 = local_f8 & 0xffffffff;
    local_13c = 0;
    local_118 = uVar5;
    local_f8 = uVar10;
    _ZN4core4char7methods15encode_utf8_raw17h5e8f6d90a161f6f4E(uVar8,&local_13c);
    uVar12 = local_128;
    if (extraout_RDX != 0) {
      if (*(char *)(param_7 + 0x430) == '\0') {
        uVar5 = extraout_RDX - 1;
        if (4 < extraout_RDX) goto LAB_00472f04;
      }
      else {
        uVar5 = 0;
      }
      auVar14 = _ZN14regex_automata6hybrid3dfa3DFA10next_state17hdd82322cf44e217bE
                          (param_7,local_120,uVar6,*(undefined *)((long)&local_13c + uVar5));
      if ((auVar14 & (undefined  [16])0x1) != (undefined  [16])0x0) {
LAB_00472dd8:
        ppuVar7 = (undefined **)&DAT_00977b88;
        uVar5 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h314575a5fb231377E();
        goto LAB_00472df7;
      }
      uVar6 = auVar14._8_8_ & 0xffffffff;
      uVar2 = (int)local_130 + 1;
      uVar10 = extraout_RDX;
      uVar12 = uVar11;
      if ((auVar14 & (undefined  [16])0x8000000) == (undefined  [16])0x0) {
        if ((auVar14 & (undefined  [16])0x40000000) == (undefined  [16])0x0) {
          local_130 = (ulong)uVar2;
          uVar4 = (ulong)local_140;
          uVar12 = local_128;
        }
        else {
          uVar9 = local_140;
          if (uVar2 != 2) goto LAB_00472eb1;
          _ZN14regex_automata6hybrid3dfa3DFA19start_state_forward17h8dd0a7b4d9c1667dE
                    (&local_110,param_7,local_120,local_60);
          if ((local_110 & 1) != 0) goto LAB_00472de6;
          uVar6 = (ulong)uStack_10c;
          local_13c = 0;
          uVar2 = _ZN4core4char7methods15encode_utf8_raw17h5e8f6d90a161f6f4E(uVar8,&local_13c);
          if (extraout_RDX_00 == 0) {
            local_130 = 0;
            local_138 = 0;
            uVar12 = uVar4;
            local_140 = uVar2;
            goto LAB_00472ae4;
          }
          uVar5 = extraout_RDX_00 - 1;
          uVar10 = 0;
          if ((*(char *)(param_7 + 0x430) == '\0') && (uVar10 = uVar5, 4 < extraout_RDX_00))
          goto LAB_00472f04;
          auVar14 = _ZN14regex_automata6hybrid3dfa3DFA10next_state17hdd82322cf44e217bE
                              (param_7,local_120,uVar6,*(undefined *)((long)&local_13c + uVar10));
          if ((auVar14 & (undefined  [16])0x1) != (undefined  [16])0x0) goto LAB_00472dd8;
          uVar6 = auVar14._8_8_ & 0xffffffff;
          local_130 = 1;
          uVar10 = extraout_RDX_00;
          if ((auVar14 & (undefined  [16])0x8000000) != (undefined  [16])0x0) goto LAB_00472815;
          local_138 = 0;
          if ((auVar14 & (undefined  [16])0x40000000) != (undefined  [16])0x0) goto LAB_00472eb1;
        }
      }
      else {
        local_130 = (ulong)uVar2;
LAB_00472815:
        local_138 = 1;
      }
      local_140 = (uint)uVar4;
      if (uVar10 == 1) goto LAB_00472ae4;
      uVar5 = 1;
      if ((*(char *)(param_7 + 0x430) == '\0') && (uVar5 = uVar10 - 2, 3 < uVar5)) {
LAB_00472f04:
        (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_009de0f0)
                  (uVar5,4,&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_00977be0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      auVar14 = _ZN14regex_automata6hybrid3dfa3DFA10next_state17hdd82322cf44e217bE
                          (param_7,local_120,uVar6,*(undefined *)((long)&local_13c + uVar5));
      if ((auVar14 & (undefined  [16])0x1) != (undefined  [16])0x0) goto LAB_00472dd8;
      uVar6 = auVar14._8_8_ & 0xffffffff;
      uVar2 = (int)local_130 + 1;
      uVar9 = local_140;
      if ((auVar14 & (undefined  [16])0x40000000) == (undefined  [16])0x0) {
        local_130 = (ulong)uVar2;
      }
      else {
        local_128 = uVar12;
        if (uVar2 != 2) goto LAB_00472eb1;
        _ZN14regex_automata6hybrid3dfa3DFA19start_state_forward17h8dd0a7b4d9c1667dE
                  (&local_110,param_7,local_120,local_60);
        if ((local_110 & 1) != 0) {
LAB_00472de6:
          uVar5 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h75a6ccb79f8e3d96E(local_108);
          ppuVar7 = &
                    PTR__ZN4core3ptr61drop_in_place_LT_regex_automata__util__search__MatchError_GT_17h85c3a0e1ab0da8c5E_00977b10
          ;
LAB_00472df7:
          local_e0[1] = uVar5;
          local_e0[2] = (ulong)ppuVar7;
LAB_00472e04:
          *local_e0 = 2;
          return;
        }
        uVar6 = (ulong)uStack_10c;
        local_138 = 0;
        local_130 = 0;
        uVar12 = uVar4;
      }
      if (uVar10 != 2) {
        local_128 = uVar12;
        uVar5 = 2;
        if ((*(char *)(param_7 + 0x430) == '\0') && (uVar5 = uVar10 - 3, 3 < uVar5))
        goto LAB_00472f04;
        auVar14 = _ZN14regex_automata6hybrid3dfa3DFA10next_state17hdd82322cf44e217bE
                            (param_7,local_120,uVar6,*(undefined *)((long)&local_13c + uVar5));
        if ((auVar14 & (undefined  [16])0x1) != (undefined  [16])0x0) goto LAB_00472dd8;
        uVar6 = auVar14._8_8_ & 0xffffffff;
        uVar2 = (int)local_130 + 1;
        if ((auVar14 & (undefined  [16])0x40000000) == (undefined  [16])0x0) {
          local_130 = (ulong)uVar2;
          uVar12 = local_128;
        }
        else {
          if (uVar2 != 2) goto LAB_00472eb1;
          _ZN14regex_automata6hybrid3dfa3DFA19start_state_forward17h8dd0a7b4d9c1667dE
                    (&local_110,param_7,local_120,local_60);
          if ((local_110 & 1) != 0) goto LAB_00472de6;
          uVar6 = (ulong)uStack_10c;
          local_138 = 0;
          local_130 = 0;
        }
        if (uVar10 != 3) {
          local_128 = uVar12;
          uVar5 = 3;
          if ((*(char *)(param_7 + 0x430) == '\0') && (uVar5 = uVar10 - 4, 3 < uVar5))
          goto LAB_00472f04;
          auVar14 = _ZN14regex_automata6hybrid3dfa3DFA10next_state17hdd82322cf44e217bE
                              (param_7,local_120,uVar6,*(undefined *)((long)&local_13c + uVar5));
          if ((auVar14 & (undefined  [16])0x1) != (undefined  [16])0x0) goto LAB_00472dd8;
          uVar6 = auVar14._8_8_ & 0xffffffff;
          uVar2 = (int)local_130 + 1;
          if ((auVar14 & (undefined  [16])0x40000000) == (undefined  [16])0x0) {
            local_130 = (ulong)uVar2;
            uVar12 = local_128;
          }
          else {
            if (uVar2 != 2) goto LAB_00472eb1;
            _ZN14regex_automata6hybrid3dfa3DFA19start_state_forward17h8dd0a7b4d9c1667dE
                      (&local_110,param_7,local_120,local_60);
            if ((local_110 & 1) != 0) goto LAB_00472de6;
            uVar6 = (ulong)uStack_10c;
            local_138 = 0;
            local_130 = 0;
          }
          if (uVar10 != 4) {
            uVar5 = uVar10 - 5;
            lVar3 = 4;
            do {
              while( true ) {
                if (*(char *)(param_7 + 0x430) != '\0') {
                  (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_009de0f0)
                            (lVar3,4,&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_00977bf8);
                  goto LAB_00472f04;
                }
                local_128 = uVar12;
                uVar9 = (uint)uVar4;
                if (3 < uVar5) goto LAB_00472f04;
                auVar14 = _ZN14regex_automata6hybrid3dfa3DFA10next_state17hdd82322cf44e217bE
                                    (param_7,local_120,uVar6,
                                     *(undefined *)((long)&local_13c + uVar5));
                if ((auVar14 & (undefined  [16])0x1) != (undefined  [16])0x0) goto LAB_00472dd8;
                uVar6 = auVar14._8_8_ & 0xffffffff;
                uVar2 = (int)local_130 + 1;
                if ((auVar14 & (undefined  [16])0x40000000) != (undefined  [16])0x0) break;
                local_130 = (ulong)uVar2;
                uVar4 = uVar4 & 0xffffffff;
                lVar3 = lVar3 + 1;
                bVar13 = uVar5 == 0;
                uVar5 = uVar5 - 1;
                uVar12 = local_128;
                local_140 = uVar9;
                if (bVar13) goto LAB_00472ae4;
              }
              if (uVar2 != 2) goto LAB_00472eb1;
              uVar4 = _ZN14regex_automata6hybrid3dfa3DFA19start_state_forward17h8dd0a7b4d9c1667dE
                                (&local_110,param_7,local_120,local_60);
              local_140 = (uint)uVar4;
              if (local_110 == 1) goto LAB_00472de6;
              uVar6 = (ulong)uStack_10c;
              local_130 = 0;
              local_138 = 0;
              lVar3 = lVar3 + 1;
              bVar13 = uVar5 != 0;
              uVar5 = uVar5 - 1;
            } while (bVar13);
          }
        }
      }
    }
LAB_00472ae4:
    uVar11 = local_138;
    if (local_118 == local_a0 && (uint)local_f8 == local_e4 || (local_f0 & 1) != 0) {
      auVar14 = _ZN14regex_automata6hybrid3dfa3DFA14next_eoi_state17h2ed661a61e1f79b1E
                          (param_7,local_120,uVar6);
      if ((auVar14 & (undefined  [16])0x1) == (undefined  [16])0x0) {
        local_138 = 1;
        local_128 = local_118;
        uVar9 = (uint)local_f8;
        if ((((auVar14 & (undefined  [16])0x8000000) == (undefined  [16])0x0) &&
            (uVar9 = local_140, local_138 = uVar11, local_128 = uVar12,
            (auVar14 & (undefined  [16])0x40000000) != (undefined  [16])0x0)) &&
           ((int)local_130 == 1)) {
          local_138 = 0;
        }
LAB_00472eb1:
        local_140 = uVar9;
        *local_e0 = local_138;
        local_e0[1] = local_128;
        *(uint *)(local_e0 + 2) = local_140;
        return;
      }
      uVar5 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h314575a5fb231377E();
      local_e0[1] = uVar5;
      local_e0[2] = (ulong)&DAT_00977b88;
      goto LAB_00472e04;
    }
    (*local_70)(&local_110,&local_c8);
    lVar3 = CONCAT44(uStack_10c,local_110);
    if (lVar3 == 0) {
      local_b8 = ~((int)local_80 + (int)local_f8) + (int)local_78;
      local_c0 = local_d8 - local_118;
      local_c8 = local_88;
      local_b0 = local_d8;
      local_a8 = local_d0;
      lVar3 = _ZN18alacritty_terminal4grid21GridIterator_LT_T_GT_4cell17h5c2417f3cd861f7eE
                        (&local_c8);
    }
    local_f0 = (ulong)CONCAT31((int3)(local_e4 >> 8),local_b8 == local_e4);
    local_138 = CONCAT71(local_138._1_7_,local_c0 == local_a0);
    local_90 = lVar3;
    _ZN18alacritty_terminal4term6search57__LT_impl_u20_alacritty_terminal__term__Term_LT_T_GT__GT_14skip_fullwidth17h604d4a2591bbfa58E
              (local_68,&local_c8,&local_90,*(undefined *)(param_7 + 0x430));
    local_cc = *(undefined4 *)(local_90 + 0x10);
    lVar3 = _ZN18alacritty_terminal4grid21GridIterator_LT_T_GT_4cell17h5c2417f3cd861f7eE(&local_c8);
    uVar2 = local_b8;
    uVar5 = local_c0;
    uVar9 = *(ushort *)(lVar3 + 0x14) & 0x10;
    if (((local_d8 == local_118 && local_c0 == 0) && ((local_e8 & 1) == 0)) ||
       ((local_118 == 0 && ((local_c0 == local_d8 && ((short)uVar9 == 0)))))) {
      auVar14 = _ZN14regex_automata6hybrid3dfa3DFA14next_eoi_state17h2ed661a61e1f79b1E
                          (param_7,local_120,uVar6);
      if ((auVar14 & (undefined  [16])0x1) != (undefined  [16])0x0) goto LAB_00472dd8;
      if ((auVar14 & (undefined  [16])0x8000000) != (undefined  [16])0x0) {
        uVar11 = 1;
      }
      if ((((uVar11 & 1) != 0) && (((byte)(auVar14._8_8_ >> 0x1e) & 3 & (int)local_130 < 2) == 0))
         && ((int)local_130 != 0)) {
        uVar9 = (uint)local_f8;
        local_138 = uVar11;
        local_128 = local_118;
        if ((auVar14 & (undefined  [16])0x8000000) == (undefined  [16])0x0) {
          uVar9 = local_140;
          local_128 = uVar12;
        }
        goto LAB_00472eb1;
      }
      _ZN14regex_automata6hybrid3dfa3DFA19start_state_forward17h8dd0a7b4d9c1667dE
                (&local_110,param_7,local_120,local_60);
      if ((local_110 & 1) != 0) goto LAB_00472de6;
      local_130 = 0;
      uVar11 = 0;
      uVar6 = (ulong)uStack_10c;
    }
    uVar10 = (ulong)uVar2;
    local_f0 = CONCAT71((int7)(local_f0 >> 8),(byte)local_f0 & (byte)local_138);
    local_e8 = uVar9 >> 4;
    uVar8 = local_cc;
    local_138 = uVar11;
    local_128 = uVar12;
  } while( true );
}