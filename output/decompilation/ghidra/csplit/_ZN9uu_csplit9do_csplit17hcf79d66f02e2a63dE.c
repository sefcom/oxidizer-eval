void _ZN9uu_csplit9do_csplit17hcf79d66f02e2a63dE
               (int *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined4 uVar6;
  undefined local_170 [8];
  undefined8 local_168;
  undefined8 local_160;
  int local_158;
  int iStack_154;
  int iStack_150;
  int iStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined8 local_130;
  ulong local_118;
  int local_110;
  int iStack_10c;
  int iStack_108;
  int iStack_104;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined8 local_f0;
  int local_e8;
  uint uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  long local_b8;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined local_88 [32];
  int local_68;
  uint uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  long local_38;
  
  _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17h8cfd37faa97e5c9aE
            (local_88,param_3);
  _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h3521a3a7c64a9732E
            (&local_68,local_88);
  local_e8 = local_68;
  uStack_e4 = uStack_64;
  uStack_e0 = uStack_60;
  uStack_dc = uStack_5c;
  local_d8 = local_58;
  uStack_d4 = uStack_54;
  uStack_d0 = uStack_50;
  uStack_cc = uStack_4c;
  local_c8 = local_48;
  uStack_c4 = uStack_44;
  uStack_c0 = uStack_40;
  uStack_bc = uStack_3c;
  local_b8 = local_38;
  do {
    if (local_e8 == 3) {
      _ZN4core3ptr88drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT_uu_csplit__patterns__Pattern_GT__GT_17h8e8634bf2625820fE
                (local_88);
      param_1[0] = 0xc;
      param_1[1] = 0;
      return;
    }
    local_68 = local_e8;
    uStack_64 = uStack_e4;
    uStack_60 = uStack_e0;
    uStack_5c = uStack_dc;
    local_58 = local_d8;
    uStack_54 = uStack_d4;
    uStack_50 = uStack_d0;
    uStack_4c = uStack_cc;
    local_48 = local_c8;
    uStack_44 = uStack_c4;
    uStack_40 = uStack_c0;
    uStack_3c = uStack_bc;
    local_38 = local_b8;
                    /* try { // try from 00261ea7 to 00261ead has its CatchHandler @ 002623b5 */
    uVar2 = _ZN45__LT_T_u20_as_u20_alloc__string__ToString_GT_9to_string17hf41bf485036a1869E
                      (local_170,&local_e8);
    if (local_e8 == 2) {
      uVar6 = 0;
LAB_00261eed:
      local_98 = uStack_d0;
      uStack_94 = uStack_cc;
      uStack_90 = local_c8;
      uStack_8c = uStack_c4;
      local_a8 = uStack_e0;
      uStack_a4 = uStack_dc;
      uStack_a0 = local_d8;
      uStack_9c = uStack_d4;
      local_118 = (ulong)uStack_e4;
      lVar1 = CONCAT44(uStack_bc,uStack_c0);
      if (lVar1 == 0) {
        uVar2 = 0;
        if (local_e8 == 2) goto LAB_00261f40;
LAB_00261f97:
                    /* try { // try from 00261f97 to 00261fdb has its CatchHandler @ 002623b3 */
        lVar3 = (*(code *)PTR__ZN9uu_csplit11SplitWriter10new_writer17hf8bcfdadfd914b2eE_0041f8d0)
                          (param_2);
        if (lVar3 == 0) goto LAB_00261fa9;
LAB_002621b7:
        param_1[0] = 0;
        param_1[1] = 0;
        *(long *)(param_1 + 2) = lVar3;
LAB_00262275:
                    /* try { // try from 00262275 to 00262281 has its CatchHandler @ 0026239e */
        _ZN4core3ptr48drop_in_place_LT_regex__regex__string__Regex_GT_17h5dc1738b513e4abaE
                  (&local_a8);
        goto LAB_00262351;
      }
      uVar2 = 1;
      if (local_b8 != 0) {
        if (local_e8 != 2) goto LAB_00261f97;
LAB_00261f40:
        *(undefined *)(param_2 + 0x38) = 1;
LAB_00261fa9:
        _ZN9uu_csplit11SplitWriter11do_to_match17h378726aac675a0d1E
                  (&local_110,param_2,local_168,local_160,CONCAT44(uStack_a4,local_a8),
                   CONCAT44(uStack_9c,uStack_a0),local_118,param_4,uVar6);
        local_138 = local_f0;
        uStack_140 = uStack_f8;
        uStack_13c = uStack_f4;
        lVar3 = CONCAT44(iStack_10c,local_110);
        local_130 = uVar2;
        if (lVar3 != 0xc) {
          lVar5 = 0;
LAB_002621d6:
          if (lVar1 == 0) {
            if ((int)lVar3 != 3) goto LAB_00262256;
            param_1[0] = 0xc;
            param_1[1] = 0;
          }
          else {
            if ((((int)lVar3 != 3) || (local_b8 == 1)) || (lVar5 == 0)) {
LAB_00262256:
              *(undefined8 *)(param_1 + 8) = local_138;
              *(ulong *)(param_1 + 4) = CONCAT44(uStack_fc,local_100);
              *(ulong *)(param_1 + 6) = CONCAT44(uStack_13c,uStack_140);
              *param_1 = local_110;
              param_1[1] = iStack_10c;
              param_1[2] = iStack_108;
              param_1[3] = iStack_104;
              goto LAB_00262275;
            }
                    /* try { // try from 002621f7 to 00262206 has its CatchHandler @ 00262389 */
            local_158 = local_110;
            (*(code *)
              PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h8f45b0d02f4dafdaE_0041f930
            )(&local_110,local_170);
            *(ulong *)(param_1 + 8) = CONCAT44(uStack_fc,local_100);
            param_1[4] = local_110;
            param_1[5] = iStack_10c;
            param_1[6] = iStack_108;
            param_1[7] = iStack_104;
            param_1[0] = 4;
            param_1[1] = 0;
            *(long *)(param_1 + 2) = lVar5;
            if (local_158 == 0xc) goto LAB_00262275;
          }
                    /* try { // try from 0026224a to 00262253 has its CatchHandler @ 00262398 */
          _ZN4core3ptr57drop_in_place_LT_uu_csplit__csplit_error__CsplitError_GT_17hc5d4aca3759c7b16E
                    (&local_158);
          goto LAB_00262275;
        }
        lVar5 = 1;
        if (lVar1 == 0) goto LAB_00262050;
LAB_00262030:
        uVar2 = 1;
        local_158 = local_110;
        iStack_154 = iStack_10c;
        iStack_150 = iStack_108;
        iStack_14c = iStack_104;
        local_148 = local_100;
        uStack_144 = uStack_fc;
        uStack_140 = uStack_f8;
        uStack_13c = uStack_f4;
        local_138 = local_f0;
        if (local_b8 != lVar5) {
          if (local_e8 != 2) goto LAB_00262057;
          do {
            *(undefined *)(param_2 + 0x38) = 1;
            while( true ) {
              _ZN9uu_csplit11SplitWriter11do_to_match17h378726aac675a0d1E
                        (&local_110,param_2,local_168,local_160,CONCAT44(uStack_a4,local_a8),
                         CONCAT44(uStack_9c,uStack_a0),local_118,param_4);
              local_138 = local_f0;
              uStack_140 = uStack_f8;
              uStack_13c = uStack_f4;
              lVar3 = CONCAT44(iStack_10c,local_110);
              local_130 = uVar2;
              if (lVar3 != 0xc) goto LAB_002621d6;
              lVar5 = lVar5 + 1;
              if (lVar1 != 0) goto LAB_00262030;
LAB_00262050:
              uVar2 = 0;
              if (local_e8 == 2) break;
LAB_00262057:
                    /* try { // try from 00262057 to 0026209b has its CatchHandler @ 002623d1 */
              uStack_140 = uStack_f8;
              uStack_13c = uStack_f4;
              local_138 = local_f0;
              lVar3 = (*(code *)
                        PTR__ZN9uu_csplit11SplitWriter10new_writer17hf8bcfdadfd914b2eE_0041f8d0)
                                (param_2);
              if (lVar3 != 0) goto LAB_002621b7;
            }
          } while( true );
        }
      }
                    /* try { // try from 002620f0 to 002620fc has its CatchHandler @ 0026239c */
      _ZN4core3ptr48drop_in_place_LT_regex__regex__string__Regex_GT_17h5dc1738b513e4abaE(&local_a8);
    }
    else {
      if (local_e8 == 1) {
        uVar6 = (undefined4)CONCAT71((int7)((ulong)uVar2 >> 8),1);
        goto LAB_00261eed;
      }
      lVar1 = CONCAT44(uStack_dc,uStack_e0);
      if ((CONCAT44(uStack_d4,local_d8) == 0) || (CONCAT44(uStack_cc,uStack_d0) != 0)) {
        if (CONCAT44(uStack_d4,local_d8) == 0) {
          lVar5 = 0;
          lVar3 = lVar1;
          break;
        }
        lVar5 = 0;
        lVar3 = lVar1;
        do {
                    /* try { // try from 00262160 to 00262190 has its CatchHandler @ 002623c1 */
          lVar4 = (*(code *)PTR__ZN9uu_csplit11SplitWriter10new_writer17hf8bcfdadfd914b2eE_0041f8d0)
                            (param_2);
          if (lVar4 != 0) goto LAB_002622d0;
          _ZN9uu_csplit11SplitWriter10do_to_line17h079b38feb919ada0E
                    (&local_158,param_2,local_168,local_160,lVar3,param_4);
          lVar4 = CONCAT44(iStack_154,local_158);
          if (lVar4 != 0xc) goto LAB_002622e2;
          lVar5 = lVar5 + 1;
          lVar3 = lVar3 + lVar1;
        } while (CONCAT44(uStack_cc,uStack_d0) != lVar5);
      }
    }
                    /* try { // try from 00262109 to 00262112 has its CatchHandler @ 002623b5 */
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h43f353fdb3e00327E(local_170);
    _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h3521a3a7c64a9732E
              (&local_68,local_88);
    local_e8 = local_68;
    uStack_e4 = uStack_64;
    uStack_e0 = uStack_60;
    uStack_dc = uStack_5c;
    local_d8 = local_58;
    uStack_d4 = uStack_54;
    uStack_d0 = uStack_50;
    uStack_cc = uStack_4c;
    local_c8 = local_48;
    uStack_c4 = uStack_44;
    uStack_c0 = uStack_40;
    uStack_bc = uStack_3c;
    local_b8 = local_38;
  } while( true );
LAB_00262292:
                    /* try { // try from 00262292 to 002622bc has its CatchHandler @ 0026239a */
  lVar4 = (*(code *)PTR__ZN9uu_csplit11SplitWriter10new_writer17hf8bcfdadfd914b2eE_0041f8d0)
                    (param_2);
  if (lVar4 != 0) goto LAB_002622d0;
  _ZN9uu_csplit11SplitWriter10do_to_line17h079b38feb919ada0E
            (&local_158,param_2,local_168,local_160,lVar3,param_4);
  lVar4 = CONCAT44(iStack_154,local_158);
  if (lVar4 != 0xc) goto LAB_002622e2;
  lVar3 = lVar3 + lVar1;
  lVar5 = lVar5 + 1;
  goto LAB_00262292;
LAB_002622d0:
  param_1[0] = 0;
  param_1[1] = 0;
  *(long *)(param_1 + 2) = lVar4;
  goto LAB_00262351;
LAB_002622e2:
  if ((lVar5 == 0) || ((int)lVar4 != 1)) {
    *(undefined8 *)(param_1 + 8) = local_138;
    *(ulong *)(param_1 + 4) = CONCAT44(uStack_144,local_148);
    *(ulong *)(param_1 + 6) = CONCAT44(uStack_13c,uStack_140);
    *param_1 = local_158;
    param_1[1] = iStack_154;
    param_1[2] = iStack_150;
    param_1[3] = iStack_14c;
  }
  else {
                    /* try { // try from 002622f1 to 00262300 has its CatchHandler @ 0026237a */
    (*(code *)
      PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h8f45b0d02f4dafdaE_0041f930
    )(&local_110,local_170);
    *(ulong *)(param_1 + 8) = CONCAT44(uStack_fc,local_100);
    param_1[4] = local_110;
    param_1[5] = iStack_10c;
    param_1[6] = iStack_108;
    param_1[7] = iStack_104;
    param_1[0] = 2;
    param_1[1] = 0;
    *(long *)(param_1 + 2) = lVar5;
                    /* try { // try from 00262323 to 0026232f has its CatchHandler @ 0026239e */
    _ZN4core3ptr57drop_in_place_LT_uu_csplit__csplit_error__CsplitError_GT_17hc5d4aca3759c7b16E
              (&local_158);
  }
LAB_00262351:
                    /* try { // try from 00262351 to 0026235a has its CatchHandler @ 002623aa */
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h43f353fdb3e00327E(local_170);
  _ZN4core3ptr88drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT_uu_csplit__patterns__Pattern_GT__GT_17h8e8634bf2625820fE
            (local_88);
  return;
}