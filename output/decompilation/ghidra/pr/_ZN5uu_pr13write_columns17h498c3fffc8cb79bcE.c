undefined  [16]
_ZN5uu_pr13write_columns17h498c3fffc8cb79bcE
          (long param_1,ulong param_2,long param_3,undefined8 param_4)

{
  byte bVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  byte bVar15;
  ulong uVar16;
  undefined auVar17 [16];
  long local_198;
  long local_190;
  ulong local_188;
  undefined local_150 [8];
  undefined8 local_148;
  undefined8 local_140;
  long local_138;
  long local_130;
  long local_128;
  undefined8 local_120;
  undefined8 local_118;
  long local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  long local_f0;
  long local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  long local_c0;
  ulong uStack_b8;
  long local_b0;
  ulong uStack_a8;
  ulong local_a0;
  undefined local_98;
  undefined8 local_90;
  ulong local_88;
  long local_78;
  long local_70;
  undefined local_68 [32];
  undefined local_48 [24];
  
  local_78 = *(long *)(param_3 + 0x10);
  uVar12 = *(ulong *)(param_3 + 0x138) >> (*(byte *)(param_3 + 0x140) & 0x3f);
  if (local_78 == 1) {
    local_188 = *(ulong *)(param_3 + 0x18);
    lVar10 = *(long *)(param_3 + 0x100);
  }
  else {
    lVar10 = *(long *)(param_3 + 0x100);
    local_188 = 1;
    if (lVar10 != -0x8000000000000000) {
      local_188 = *(ulong *)(param_3 + 0x120);
    }
  }
  uVar8 = 0;
  if (lVar10 != -0x8000000000000000) {
    uVar8 = (undefined)*(undefined4 *)(param_3 + 0x128);
  }
  local_118 = *(undefined8 *)(param_3 + 0x68);
  local_120 = *(undefined8 *)(param_3 + 0x70);
  uVar7 = *(undefined8 *)(param_3 + 0x20);
  uVar2 = *(undefined8 *)(param_3 + 0x28);
  bVar1 = *(byte *)(param_3 + 0x142);
  local_108 = 0;
  local_100 = 8;
  local_f8 = 0;
  local_110 = param_1;
  if ((local_78 != 0) && (local_188 != 0)) {
    local_70 = param_2 << 6;
    uVar16 = 0;
    uVar14 = 1;
    uVar9 = 0;
    do {
      uVar5 = uVar14;
      if (param_2 < uVar16) {
                    /* try { // try from 002377d8 to 002377ec has its CatchHandler @ 00237845 */
        (*(code *)PTR__ZN4core5slice5index26slice_start_index_len_fail17h5fe115fcacae7da6E_00398bb8)
                  (uVar16,param_2,&PTR_DAT_003695d8);
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      if (uVar16 == param_2) {
        lVar13 = 0;
      }
      else {
        lVar10 = local_110 + uVar16 * 0x40;
        lVar11 = local_70 + uVar16 * -0x40;
        lVar13 = 0;
        do {
          if (*(ulong *)(lVar10 + 0x18) != uVar9) break;
                    /* try { // try from 00237306 to 00237317 has its CatchHandler @ 00237841 */
          _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h6f336ffbc5993d7aE
                    (&local_108,lVar10,&PTR_DAT_003695a8);
          lVar13 = lVar13 + 1;
          lVar10 = lVar10 + 0x40;
          lVar11 = lVar11 + -0x40;
        } while (lVar11 != 0);
      }
      uVar16 = uVar16 + lVar13;
      uVar14 = lVar13 - 1;
      while (uVar14 = uVar14 + 1, uVar14 < uVar12) {
                    /* try { // try from 0023734c to 00237358 has its CatchHandler @ 00237843 */
        _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h6f336ffbc5993d7aE(&local_108,0,&PTR_DAT_003695c0);
      }
      uVar14 = uVar5 + (uVar5 < local_188);
      uVar9 = uVar5;
    } while (uVar5 < local_188);
  }
  local_c8 = local_f8;
  local_d8 = local_108;
  local_d0 = local_100;
  local_90 = 0;
  local_c0 = local_110;
  uStack_a8 = local_188;
  uStack_b8 = param_2;
  local_b0 = param_3;
  local_a0 = uVar12;
  local_98 = uVar8;
  local_88 = uVar12;
  _ZN4core4iter6traits8iterator8Iterator7collect17hb2811d645e461af0E(local_48,&local_d8);
  local_d8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_d0 = 1;
  local_c8 = 0;
  local_a0 = 0;
  _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17h50f63d40442afdcfE
            (local_68,local_48);
  _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h30afe659be7f021eE
            (&local_138,local_68);
  puVar4 = 
  PTR__ZN61__LT_std__io__stdio__StdoutLock_u20_as_u20_std__io__Write_GT_9write_all17hb8477e4d9e0e6d9bE_00398de0
  ;
  if (local_138 == -0x8000000000000000) {
    lVar10 = 0;
  }
  else if (local_78 == 0) {
    lVar10 = 0;
    bVar15 = 0;
    do {
      lVar13 = local_128;
      lVar11 = local_130;
      local_198 = local_138;
      local_e8 = local_130 + local_128 * 8;
      local_190 = local_130;
      local_f0 = local_130;
      local_e0 = 0;
      auVar17 = _ZN110__LT_core__iter__adapters__enumerate__Enumerate_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hfd7eb24b40152fb8E
                          (&local_f0);
      while( true ) {
        if (auVar17._8_8_ == (long *)0x0) break;
        lVar6 = *auVar17._8_8_;
        if (lVar6 == 0) {
          bVar15 = 1;
          if (bVar1 == 0) goto LAB_00237714;
          goto LAB_002377c4;
        }
                    /* try { // try from 00237698 to 002376ba has its CatchHandler @ 002377fc */
        _ZN5uu_pr21get_line_for_printing17hd1db5805a3293521E
                  (local_150,param_3,lVar6,local_188,auVar17._0_8_,uVar7,uVar2,lVar13);
                    /* try { // try from 002376c5 to 002376cc has its CatchHandler @ 002377fa */
        lVar6 = (*(code *)puVar4)(param_4,local_148,local_140);
        if (lVar6 != 0) goto LAB_00237777;
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h5b204ce323401e77E(local_150);
        lVar10 = lVar10 + 1;
        auVar17 = _ZN110__LT_core__iter__adapters__enumerate__Enumerate_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hfd7eb24b40152fb8E
                            (&local_f0);
      }
      if ((bVar15 & bVar1) != 0) {
LAB_002377c4:
        _ZN4core3ptr117drop_in_place_LT_alloc__vec__Vec_LT_core__option__Option_LT_regex_automata__util__primitives__NonMaxUsize_GT__GT__GT_17hba68b8d98b64866dE
                  (local_198,lVar11);
        break;
      }
LAB_00237714:
                    /* try { // try from 00237714 to 0023772b has its CatchHandler @ 002377ef */
      lVar6 = (*(code *)puVar4)(param_4,local_118,local_120);
      if (lVar6 != 0) goto LAB_00237781;
      _ZN4core3ptr117drop_in_place_LT_alloc__vec__Vec_LT_core__option__Option_LT_regex_automata__util__primitives__NonMaxUsize_GT__GT__GT_17hba68b8d98b64866dE
                (local_198,lVar11);
      _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h30afe659be7f021eE
                (&local_138,local_68);
    } while (local_138 != -0x8000000000000000);
  }
  else {
    lVar10 = 0;
    do {
      lVar13 = local_128;
      lVar11 = local_130;
      local_198 = local_138;
      local_e8 = local_130 + local_128 * 8;
      local_190 = local_130;
      local_f0 = local_130;
      local_e0 = 0;
      while( true ) {
        auVar17 = _ZN110__LT_core__iter__adapters__enumerate__Enumerate_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hfd7eb24b40152fb8E
                            (&local_f0);
        if (auVar17._8_8_ == (long *)0x0) break;
        lVar6 = *auVar17._8_8_;
        if (lVar6 == 0) {
                    /* try { // try from 00237570 to 0023759b has its CatchHandler @ 0023780d */
          _ZN5uu_pr21get_line_for_printing17hd1db5805a3293521E
                    (local_150,param_3,&local_d8,local_188,auVar17._0_8_,uVar7,uVar2,lVar13);
                    /* try { // try from 002375a6 to 002375ad has its CatchHandler @ 002377f8 */
          lVar6 = (*(code *)puVar4)(param_4,local_148,local_140);
          _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h5b204ce323401e77E(local_150);
          if (lVar6 != 0) goto LAB_00237781;
        }
        else {
                    /* try { // try from 00237524 to 00237547 has its CatchHandler @ 0023780d */
          _ZN5uu_pr21get_line_for_printing17hd1db5805a3293521E
                    (local_150,param_3,lVar6,local_188,auVar17._0_8_,uVar7,uVar2,lVar13);
                    /* try { // try from 00237552 to 00237559 has its CatchHandler @ 002377fe */
          lVar6 = (*(code *)puVar4)(param_4,local_148,local_140);
          if (lVar6 != 0) goto LAB_00237777;
          _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h5b204ce323401e77E(local_150);
          lVar10 = lVar10 + 1;
        }
      }
                    /* try { // try from 002375d0 to 002375e7 has its CatchHandler @ 002377f1 */
      lVar6 = (*(code *)puVar4)(param_4,local_118,local_120);
      if (lVar6 != 0) goto LAB_00237781;
      _ZN4core3ptr117drop_in_place_LT_alloc__vec__Vec_LT_core__option__Option_LT_regex_automata__util__primitives__NonMaxUsize_GT__GT__GT_17hba68b8d98b64866dE
                (local_198,lVar11);
      _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h30afe659be7f021eE
                (&local_138,local_68);
    } while (local_138 != -0x8000000000000000);
  }
                    /* try { // try from 0023747a to 00237486 has its CatchHandler @ 002377f3 */
  _ZN4core3ptr130drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT_alloc__vec__Vec_LT_core__option__Option_LT__RF_uu_pr__FileLine_GT__GT__GT__GT_17he7e9f21517bd1d76E
            (local_68);
  _ZN4core3ptr36drop_in_place_LT_uu_pr__FileLine_GT_17hfc12aa566782b908E(&local_d8);
  uVar7 = 0;
  lVar6 = lVar10;
LAB_002377af:
  auVar17._8_8_ = lVar6;
  auVar17._0_8_ = uVar7;
  return auVar17;
LAB_00237777:
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h5b204ce323401e77E(local_150);
LAB_00237781:
  _ZN4core3ptr117drop_in_place_LT_alloc__vec__Vec_LT_core__option__Option_LT_regex_automata__util__primitives__NonMaxUsize_GT__GT__GT_17hba68b8d98b64866dE
            (local_198,local_190);
                    /* try { // try from 00237790 to 0023779c has its CatchHandler @ 002377f3 */
  _ZN4core3ptr130drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT_alloc__vec__Vec_LT_core__option__Option_LT__RF_uu_pr__FileLine_GT__GT__GT__GT_17he7e9f21517bd1d76E
            (local_68);
  _ZN4core3ptr36drop_in_place_LT_uu_pr__FileLine_GT_17hfc12aa566782b908E(&local_d8);
  uVar7 = 1;
  goto LAB_002377af;
}