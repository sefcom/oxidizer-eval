undefined8 *
_ZN18alacritty_terminal4term6search11RegexSearch3new17he62c7dc0d18da29aE
          (undefined8 *param_1,long param_2,long param_3)

{
  byte bVar1;
  bool bVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined uVar7;
  undefined auVar8 [16];
  undefined auVar9 [16];
  undefined auVar10 [16];
  undefined auVar11 [16];
  undefined4 local_16f0;
  undefined uStack_16ec;
  byte bStack_16eb;
  undefined2 uStack_16ea;
  undefined2 uStack_16e8;
  undefined uStack_16e6;
  undefined2 uStack_16e5;
  undefined uStack_16e3;
  undefined2 uStack_16e2;
  undefined8 local_16e0;
  undefined8 uStack_16d8;
  undefined local_16d0;
  undefined uStack_16cf;
  undefined4 uStack_16ce;
  undefined2 uStack_16ca;
  undefined8 local_16c8;
  undefined8 uStack_16c0;
  undefined8 local_16b8;
  ulong local_16b0;
  undefined8 local_16a8;
  undefined8 uStack_16a0;
  undefined8 local_1698;
  undefined8 uStack_1690;
  undefined8 local_1668;
  undefined8 local_1658;
  undefined8 local_1650;
  undefined8 local_1648;
  undefined8 local_1640;
  undefined local_1620;
  undefined4 local_1618;
  undefined2 local_1614;
  undefined8 local_1608;
  undefined8 uStack_1600;
  undefined8 local_1578;
  undefined8 uStack_1570;
  undefined8 local_1568;
  undefined local_1560 [1064];
  undefined local_1138 [264];
  undefined8 local_1030;
  long local_cf8;
  long local_cf0;
  undefined8 local_ce8;
  undefined local_ce0 [1064];
  long local_8b8;
  long local_8b0;
  undefined8 local_8a8;
  undefined local_8a0 [664];
  long local_608;
  long local_478;
  long local_470;
  undefined8 local_468;
  undefined local_460 [1072];
  
  local_1030 = 0;
  uStack_1570 = param_2 + param_3;
  local_1578 = param_2;
  uVar7 = _ZN4core4iter6traits8iterator8Iterator8try_fold17hdefa6ae3da21c884E(&local_1578);
  bStack_16eb = _ZN90__LT_core__ops__control_flow__ControlFlow_LT_B_C_C_GT__u20_as_u20_core__cmp__PartialEq_GT_2eq17h136c1d6fa65c5a1cE
                          (uVar7);
  bStack_16eb = bStack_16eb ^ 1;
  local_16f0 = 0xfa;
  uStack_16ec = 10;
  uStack_16ea = 0;
  uStack_16e8 = 0;
  uStack_16e6 = 0;
  uStack_16e5 = 0x101;
  uStack_16e3 = 0;
  local_1698 = 0;
  uStack_1690 = 0;
  local_1668 = 0;
  local_1658 = 1;
  local_1650 = 3;
  local_1648 = 1;
  local_1640 = 10;
  local_1620 = 3;
  local_1618 = 0x2020202;
  local_1614 = 0x202;
  local_16e0 = 1;
  uStack_16d8 = 0x200000;
  local_16d0 = 0;
  uStack_16ce = 0x3020202;
  _ZN74__LT_regex_automata__hybrid__dfa__Config_u20_as_u20_core__clone__Clone_GT_5clone17h9a15dbee266a04f3E
            (&local_cf8,&local_1698);
  _ZN86__LT_regex_automata__nfa__thompson__compiler__Config_u20_as_u20_core__clone__Clone_GT_5clone17h8690ea4c360f1c56E
            (&local_478,&local_16e0);
  local_1608 = CONCAT26(uStack_16ea,CONCAT15(bStack_16eb,CONCAT14(uStack_16ec,local_16f0)));
  uStack_1600 = CONCAT26(uStack_16e2,
                         CONCAT15(uStack_16e3,
                                  CONCAT23(uStack_16e5,CONCAT12(uStack_16e6,uStack_16e8))));
                    /* try { // try from 006bdeb7 to 006bdedf has its CatchHandler @ 006be2fd */
  _ZN18alacritty_terminal4term6search7LazyDfa3new17hf5ca27742a309cb7E
            (&local_1578,param_2,param_3,&local_cf8,&local_1608,&local_478,1,1);
  uVar6 = local_1568;
  lVar5 = uStack_1570;
  lVar4 = local_1578;
  auVar8[0] = -((char)local_1578 == DAT_001e8640);
  auVar8[1] = -(local_1578._1_1_ == UNK_001e8641);
  auVar8[2] = -(local_1578._2_1_ == UNK_001e8642);
  auVar8[3] = -(local_1578._3_1_ == UNK_001e8643);
  auVar8[4] = -(local_1578._4_1_ == UNK_001e8644);
  auVar8[5] = -(local_1578._5_1_ == UNK_001e8645);
  auVar8[6] = -(local_1578._6_1_ == UNK_001e8646);
  auVar8[7] = -(local_1578._7_1_ == UNK_001e8647);
  auVar8[8] = -((char)uStack_1570 == UNK_001e8648);
  auVar8[9] = -(uStack_1570._1_1_ == UNK_001e8649);
  auVar8[10] = -(uStack_1570._2_1_ == UNK_001e864a);
  auVar8[0xb] = -(uStack_1570._3_1_ == UNK_001e864b);
  auVar8[0xc] = -(uStack_1570._4_1_ == UNK_001e864c);
  auVar8[0xd] = -(uStack_1570._5_1_ == UNK_001e864d);
  auVar8[0xe] = -(uStack_1570._6_1_ == UNK_001e864e);
  auVar8[0xf] = -(uStack_1570._7_1_ == UNK_001e864f);
  if ((ushort)((ushort)(SUB161(auVar8 >> 7,0) & 1) | (ushort)(SUB161(auVar8 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar8 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar8 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar8 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar8 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar8 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar8 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar8 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar8 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar8 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar8 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar8 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar8 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar8 >> 0x77,0) & 1) << 0xe | (ushort)(auVar8[0xf] >> 7) << 0xf) ==
      0xffff) {
    param_1[2] = local_1568;
    param_1[1] = 0;
    *param_1 = 2;
  }
  else {
    (*(code *)PTR_memcpy_009de0b0)(local_8a0,local_1560,0x428);
    local_8b0 = lVar5;
    local_8b8 = lVar4;
    local_8a8 = uVar6;
    bVar1 = *(byte *)(local_608 + 0x182);
    _ZN74__LT_regex_automata__hybrid__dfa__Config_u20_as_u20_core__clone__Clone_GT_5clone17h9a15dbee266a04f3E
              (&local_cf8,&local_1698);
    _ZN86__LT_regex_automata__nfa__thompson__compiler__Config_u20_as_u20_core__clone__Clone_GT_5clone17h8690ea4c360f1c56E
              (&local_1608,&local_16e0);
    local_16c8 = CONCAT26(uStack_16ea,CONCAT15(bStack_16eb,CONCAT14(uStack_16ec,local_16f0)));
    uStack_16c0 = CONCAT26(uStack_16e2,
                           CONCAT15(uStack_16e3,
                                    CONCAT23(uStack_16e5,CONCAT12(uStack_16e6,uStack_16e8))));
                    /* try { // try from 006bdfa4 to 006bdfc8 has its CatchHandler @ 006be2e3 */
    _ZN18alacritty_terminal4term6search7LazyDfa3new17hf5ca27742a309cb7E
              (&local_1578,param_2,param_3,&local_cf8,&local_16c8,&local_1608,0,(ulong)bVar1);
    uVar6 = local_1568;
    lVar5 = uStack_1570;
    lVar4 = local_1578;
    auVar9[0] = -((char)local_1578 == DAT_001e8640);
    auVar9[1] = -(local_1578._1_1_ == UNK_001e8641);
    auVar9[2] = -(local_1578._2_1_ == UNK_001e8642);
    auVar9[3] = -(local_1578._3_1_ == UNK_001e8643);
    auVar9[4] = -(local_1578._4_1_ == UNK_001e8644);
    auVar9[5] = -(local_1578._5_1_ == UNK_001e8645);
    auVar9[6] = -(local_1578._6_1_ == UNK_001e8646);
    auVar9[7] = -(local_1578._7_1_ == UNK_001e8647);
    auVar9[8] = -((char)uStack_1570 == UNK_001e8648);
    auVar9[9] = -(uStack_1570._1_1_ == UNK_001e8649);
    auVar9[10] = -(uStack_1570._2_1_ == UNK_001e864a);
    auVar9[0xb] = -(uStack_1570._3_1_ == UNK_001e864b);
    auVar9[0xc] = -(uStack_1570._4_1_ == UNK_001e864c);
    auVar9[0xd] = -(uStack_1570._5_1_ == UNK_001e864d);
    auVar9[0xe] = -(uStack_1570._6_1_ == UNK_001e864e);
    auVar9[0xf] = -(uStack_1570._7_1_ == UNK_001e864f);
    if ((ushort)((ushort)(SUB161(auVar9 >> 7,0) & 1) | (ushort)(SUB161(auVar9 >> 0xf,0) & 1) << 1 |
                 (ushort)(SUB161(auVar9 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar9 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar9 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar9 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar9 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar9 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar9 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar9 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar9 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar9 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar9 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar9 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar9 >> 0x77,0) & 1) << 0xe | (ushort)(auVar9[0xf] >> 7) << 0xf)
        == 0xffff) {
      param_1[2] = local_1568;
      param_1[1] = 0;
      *param_1 = 2;
      bVar2 = true;
    }
    else {
      local_16b0 = (ulong)bVar1;
      (*(code *)PTR_memcpy_009de0b0)(local_460,local_1560,0x428);
      local_470 = lVar5;
      local_478 = lVar4;
      local_468 = uVar6;
      _ZN74__LT_regex_automata__hybrid__dfa__Config_u20_as_u20_core__clone__Clone_GT_5clone17h9a15dbee266a04f3E
                (&local_1608,&local_1698);
      _ZN86__LT_regex_automata__nfa__thompson__compiler__Config_u20_as_u20_core__clone__Clone_GT_5clone17h8690ea4c360f1c56E
                (&local_16c8,&local_16e0);
      local_16a8 = CONCAT26(uStack_16ea,CONCAT15(bStack_16eb,CONCAT14(uStack_16ec,local_16f0)));
      uStack_16a0 = CONCAT26(uStack_16e2,
                             CONCAT15(uStack_16e3,
                                      CONCAT23(uStack_16e5,CONCAT12(uStack_16e6,uStack_16e8))));
                    /* try { // try from 006be083 to 006be0ac has its CatchHandler @ 006be2c9 */
      _ZN18alacritty_terminal4term6search7LazyDfa3new17hf5ca27742a309cb7E
                (&local_1578,param_2,param_3,&local_1608,&local_16a8,&local_16c8,1,local_16b0 & 0xff
                );
      uVar6 = local_1568;
      lVar5 = uStack_1570;
      lVar4 = local_1578;
      auVar10[0] = -((char)local_1578 == DAT_001e8640);
      auVar10[1] = -(local_1578._1_1_ == UNK_001e8641);
      auVar10[2] = -(local_1578._2_1_ == UNK_001e8642);
      auVar10[3] = -(local_1578._3_1_ == UNK_001e8643);
      auVar10[4] = -(local_1578._4_1_ == UNK_001e8644);
      auVar10[5] = -(local_1578._5_1_ == UNK_001e8645);
      auVar10[6] = -(local_1578._6_1_ == UNK_001e8646);
      auVar10[7] = -(local_1578._7_1_ == UNK_001e8647);
      auVar10[8] = -((char)uStack_1570 == UNK_001e8648);
      auVar10[9] = -(uStack_1570._1_1_ == UNK_001e8649);
      auVar10[10] = -(uStack_1570._2_1_ == UNK_001e864a);
      auVar10[0xb] = -(uStack_1570._3_1_ == UNK_001e864b);
      auVar10[0xc] = -(uStack_1570._4_1_ == UNK_001e864c);
      auVar10[0xd] = -(uStack_1570._5_1_ == UNK_001e864d);
      auVar10[0xe] = -(uStack_1570._6_1_ == UNK_001e864e);
      auVar10[0xf] = -(uStack_1570._7_1_ == UNK_001e864f);
      if ((ushort)((ushort)(SUB161(auVar10 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar10 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar10 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar10 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar10 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar10 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar10 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar10 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar10 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar10 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar10 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar10 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar10 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar10 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar10 >> 0x77,0) & 1) << 0xe |
                  (ushort)(auVar10[0xf] >> 7) << 0xf) == 0xffff) {
        param_1[2] = local_1568;
        param_1[1] = 0;
        *param_1 = 2;
        bVar2 = true;
      }
      else {
        (*(code *)PTR_memcpy_009de0b0)(local_ce0,local_1560,0x428);
        puVar3 = PTR_memcpy_009de0b0;
        local_cf0 = lVar5;
        local_cf8 = lVar4;
        local_ce8 = uVar6;
        (*(code *)PTR_memcpy_009de0b0)(&local_1608,&local_1698,0x90);
        local_16b8 = CONCAT26(uStack_16ca,CONCAT42(uStack_16ce,CONCAT11(uStack_16cf,local_16d0)));
        local_16c8 = local_16e0;
        uStack_16c0 = uStack_16d8;
                    /* try { // try from 006be164 to 006be18b has its CatchHandler @ 006be2b0 */
        _ZN18alacritty_terminal4term6search7LazyDfa3new17hf5ca27742a309cb7E
                  (&local_1578,param_2,param_3,&local_1608,&local_16f0,&local_16c8,0,1);
        lVar5 = uStack_1570;
        lVar4 = local_1578;
        auVar11[0] = -((char)local_1578 == DAT_001e8640);
        auVar11[1] = -(local_1578._1_1_ == UNK_001e8641);
        auVar11[2] = -(local_1578._2_1_ == UNK_001e8642);
        auVar11[3] = -(local_1578._3_1_ == UNK_001e8643);
        auVar11[4] = -(local_1578._4_1_ == UNK_001e8644);
        auVar11[5] = -(local_1578._5_1_ == UNK_001e8645);
        auVar11[6] = -(local_1578._6_1_ == UNK_001e8646);
        auVar11[7] = -(local_1578._7_1_ == UNK_001e8647);
        auVar11[8] = -((char)uStack_1570 == UNK_001e8648);
        auVar11[9] = -(uStack_1570._1_1_ == UNK_001e8649);
        auVar11[10] = -(uStack_1570._2_1_ == UNK_001e864a);
        auVar11[0xb] = -(uStack_1570._3_1_ == UNK_001e864b);
        auVar11[0xc] = -(uStack_1570._4_1_ == UNK_001e864c);
        auVar11[0xd] = -(uStack_1570._5_1_ == UNK_001e864d);
        auVar11[0xe] = -(uStack_1570._6_1_ == UNK_001e864e);
        auVar11[0xf] = -(uStack_1570._7_1_ == UNK_001e864f);
        if ((ushort)((ushort)(SUB161(auVar11 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar11 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar11 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar11 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar11 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar11 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar11 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar11 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar11 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar11 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar11 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar11 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar11 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar11 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar11 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar11[0xf] >> 7) << 0xf) != 0xffff) {
          (*(code *)puVar3)(param_1 + 0x113,local_1560,0x428);
          (*(code *)puVar3)(&local_1578,&local_478,0x440);
          (*(code *)puVar3)(local_1138,&local_8b8,0x440);
          (*(code *)puVar3)(param_1 + 0x198,&local_cf8,0x440);
          (*(code *)puVar3)(param_1,&local_1578,0x880);
          param_1[0x111] = lVar5;
          param_1[0x110] = lVar4;
          param_1[0x112] = local_1568;
          return param_1;
        }
        param_1[2] = local_1568;
        param_1[1] = 0;
        *param_1 = 2;
                    /* try { // try from 006be1c3 to 006be1cf has its CatchHandler @ 006be2a9 */
        _ZN4core3ptr62drop_in_place_LT_alacritty_terminal__term__search__LazyDfa_GT_17h68ae3f07dc860637E
                  (&local_cf8);
        bVar2 = false;
      }
                    /* try { // try from 006be1d2 to 006be1de has its CatchHandler @ 006be2c4 */
      _ZN4core3ptr62drop_in_place_LT_alacritty_terminal__term__search__LazyDfa_GT_17h68ae3f07dc860637E
                (&local_478);
    }
                    /* try { // try from 006be1df to 006be1eb has its CatchHandler @ 006be2de */
    _ZN4core3ptr62drop_in_place_LT_alacritty_terminal__term__search__LazyDfa_GT_17h68ae3f07dc860637E
              (&local_8b8);
    if (!bVar2) {
      return param_1;
    }
  }
  _ZN4core3ptr56drop_in_place_LT_regex_automata__hybrid__dfa__Config_GT_17h3c86da7dccd3485aE
            (&local_1698);
  return param_1;
}