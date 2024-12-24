void __rustcall
uu_csplit::do_csplit(int *param_1,long param_2,undefined8 param_3,undefined8 param_4)

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
  
  _<alloc::vec::Vec<T,A>as_core::iter::traits::collect::IntoIterator>::into_iter(local_88,param_3);
  _<alloc::vec::into_iter::IntoIter<T,A>as_core::iter::traits::iterator::Iterator>::next
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
      core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<uu_csplit::patterns::Pattern>>
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
                    /* try { // try from 00261c07 to 00261c0d has its CatchHandler @ 00262115 */
    uVar2 = _<T_as_alloc::string::ToString>::to_string(local_170,&local_e8);
    if (local_e8 == 2) {
      uVar6 = (undefined4)CONCAT71((int7)((ulong)uVar2 >> 8),1);
LAB_00261c4d:
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
        if (local_e8 == 2) goto LAB_00261ca0;
LAB_00261cf7:
                    /* try { // try from 00261cf7 to 00261d3b has its CatchHandler @ 00262113 */
        lVar3 = (*(code *)PTR_new_writer_004206e0)(param_2);
        if (lVar3 == 0) goto LAB_00261d09;
LAB_00261f17:
        param_1[0] = 0;
        param_1[1] = 0;
        *(long *)(param_1 + 2) = lVar3;
LAB_00261fd5:
                    /* try { // try from 00261fd5 to 00261fe1 has its CatchHandler @ 002620fe */
        core::ptr::drop_in_place<regex::regex::string::Regex>(&local_a8);
        goto LAB_002620b1;
      }
      uVar2 = 1;
      if (local_b8 != 0) {
        if (local_e8 != 2) goto LAB_00261cf7;
LAB_00261ca0:
        *(undefined *)(param_2 + 0x38) = 1;
LAB_00261d09:
        SplitWriter::do_to_match
                  (&local_110,param_2,local_168,local_160,CONCAT44(uStack_a4,local_a8),
                   CONCAT44(uStack_9c,uStack_a0),local_118,param_4,uVar6);
        local_138 = local_f0;
        uStack_140 = uStack_f8;
        uStack_13c = uStack_f4;
        lVar3 = CONCAT44(iStack_10c,local_110);
        local_130 = uVar2;
        if (lVar3 != 0xc) {
          lVar5 = 0;
LAB_00261f36:
          if (lVar1 == 0) {
            if ((int)lVar3 != 3) goto LAB_00261fb6;
            param_1[0] = 0xc;
            param_1[1] = 0;
          }
          else {
            if (((lVar5 == 0) || ((int)lVar3 != 3)) || (local_b8 == 1)) {
LAB_00261fb6:
              *(undefined8 *)(param_1 + 8) = local_138;
              *(ulong *)(param_1 + 4) = CONCAT44(uStack_fc,local_100);
              *(ulong *)(param_1 + 6) = CONCAT44(uStack_13c,uStack_140);
              *param_1 = local_110;
              param_1[1] = iStack_10c;
              param_1[2] = iStack_108;
              param_1[3] = iStack_104;
              goto LAB_00261fd5;
            }
                    /* try { // try from 00261f57 to 00261f66 has its CatchHandler @ 002620e9 */
            local_158 = local_110;
            (*(code *)PTR_clone_00420740)(&local_110,local_170);
            *(ulong *)(param_1 + 8) = CONCAT44(uStack_fc,local_100);
            param_1[4] = local_110;
            param_1[5] = iStack_10c;
            param_1[6] = iStack_108;
            param_1[7] = iStack_104;
            param_1[0] = 4;
            param_1[1] = 0;
            *(long *)(param_1 + 2) = lVar5;
            if (local_158 == 0xc) goto LAB_00261fd5;
          }
                    /* try { // try from 00261faa to 00261fb3 has its CatchHandler @ 002620f8 */
          core::ptr::drop_in_place<uu_csplit::csplit_error::CsplitError>(&local_158);
          goto LAB_00261fd5;
        }
        lVar5 = 1;
        if (lVar1 == 0) goto LAB_00261db0;
LAB_00261d90:
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
          if (local_e8 != 2) goto LAB_00261db7;
          do {
            *(undefined *)(param_2 + 0x38) = 1;
            while( true ) {
              SplitWriter::do_to_match
                        (&local_110,param_2,local_168,local_160,CONCAT44(uStack_a4,local_a8),
                         CONCAT44(uStack_9c,uStack_a0),local_118,param_4);
              local_138 = local_f0;
              uStack_140 = uStack_f8;
              uStack_13c = uStack_f4;
              lVar3 = CONCAT44(iStack_10c,local_110);
              local_130 = uVar2;
              if (lVar3 != 0xc) goto LAB_00261f36;
              lVar5 = lVar5 + 1;
              if (lVar1 != 0) goto LAB_00261d90;
LAB_00261db0:
              uVar2 = 0;
              if (local_e8 == 2) break;
LAB_00261db7:
                    /* try { // try from 00261db7 to 00261dfb has its CatchHandler @ 00262131 */
              uStack_140 = uStack_f8;
              uStack_13c = uStack_f4;
              local_138 = local_f0;
              lVar3 = (*(code *)PTR_new_writer_004206e0)(param_2);
              if (lVar3 != 0) goto LAB_00261f17;
            }
          } while( true );
        }
      }
                    /* try { // try from 00261e50 to 00261e5c has its CatchHandler @ 002620fc */
      core::ptr::drop_in_place<regex::regex::string::Regex>(&local_a8);
    }
    else {
      if (local_e8 == 1) {
        uVar6 = 0;
        goto LAB_00261c4d;
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
                    /* try { // try from 00261ec0 to 00261ef0 has its CatchHandler @ 00262121 */
          lVar4 = (*(code *)PTR_new_writer_004206e0)(param_2);
          if (lVar4 != 0) goto LAB_00262030;
          SplitWriter::do_to_line(&local_158,param_2,local_168,local_160,lVar3,param_4);
          lVar4 = CONCAT44(iStack_154,local_158);
          if (lVar4 != 0xc) goto LAB_00262042;
          lVar5 = lVar5 + 1;
          lVar3 = lVar3 + lVar1;
        } while (CONCAT44(uStack_cc,uStack_d0) != lVar5);
      }
    }
                    /* try { // try from 00261e69 to 00261e72 has its CatchHandler @ 00262115 */
    core::ptr::drop_in_place<alloc::string::String>(local_170);
    _<alloc::vec::into_iter::IntoIter<T,A>as_core::iter::traits::iterator::Iterator>::next
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
LAB_00261ff2:
                    /* try { // try from 00261ff2 to 0026201c has its CatchHandler @ 002620fa */
  lVar4 = (*(code *)PTR_new_writer_004206e0)(param_2);
  if (lVar4 != 0) goto LAB_00262030;
  SplitWriter::do_to_line(&local_158,param_2,local_168,local_160,lVar3,param_4);
  lVar4 = CONCAT44(iStack_154,local_158);
  if (lVar4 != 0xc) goto LAB_00262042;
  lVar3 = lVar3 + lVar1;
  lVar5 = lVar5 + 1;
  goto LAB_00261ff2;
LAB_00262030:
  param_1[0] = 0;
  param_1[1] = 0;
  *(long *)(param_1 + 2) = lVar4;
  goto LAB_002620b1;
LAB_00262042:
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
                    /* try { // try from 00262051 to 00262060 has its CatchHandler @ 002620da */
    (*(code *)PTR_clone_00420740)(&local_110,local_170);
    *(ulong *)(param_1 + 8) = CONCAT44(uStack_fc,local_100);
    param_1[4] = local_110;
    param_1[5] = iStack_10c;
    param_1[6] = iStack_108;
    param_1[7] = iStack_104;
    param_1[0] = 2;
    param_1[1] = 0;
    *(long *)(param_1 + 2) = lVar5;
                    /* try { // try from 00262083 to 0026208f has its CatchHandler @ 002620fe */
    core::ptr::drop_in_place<uu_csplit::csplit_error::CsplitError>(&local_158);
  }
LAB_002620b1:
                    /* try { // try from 002620b1 to 002620ba has its CatchHandler @ 0026210a */
  core::ptr::drop_in_place<alloc::string::String>(local_170);
  core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<uu_csplit::patterns::Pattern>>(local_88);
  return;
}