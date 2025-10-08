long _ZN9uu_expand11expand_line17h49356f72fbe6ed37E
               (long param_1,long *param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  char cVar1;
  undefined uVar2;
  byte bVar3;
  ulong uVar4;
  long lVar5;
  byte bVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  bool bVar11;
  uint uVar12;
  undefined *puVar13;
  char cVar14;
  ulong uVar15;
  ulong uVar16;
  undefined **ppuVar17;
  long lVar18;
  ulong uVar19;
  bool bVar20;
  undefined auVar21 [16];
  long local_98;
  int local_78;
  undefined4 uStack_74;
  long local_70;
  ulong local_68;
  long local_60;
  ulong local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  long local_38;
  
  uVar4 = *(ulong *)(param_1 + 0x10);
  local_50 = param_3;
  local_48 = param_4;
  if (uVar4 != 0) {
    cVar1 = *(char *)(param_5 + 0x49);
    lVar9 = *(long *)(param_1 + 8);
    uVar2 = *(undefined *)(param_5 + 0x4a);
    bVar3 = *(byte *)(param_5 + 0x48);
    local_60 = *(long *)(param_5 + 0x38);
    local_58 = *(ulong *)(param_5 + 0x40);
    bVar11 = true;
    local_98 = 0;
    uVar19 = 0;
    do {
      cVar14 = *(char *)(lVar9 + uVar19);
      if (cVar1 == '\0') {
        if (cVar14 == '\t') {
          lVar18 = 1;
        }
        else {
          cVar14 = (cVar14 != '\b') * '\x02';
LAB_0015d594:
          uVar15 = 1;
          lVar18 = 1;
LAB_0015d59a:
          if (cVar14 != '\x01') {
            if (cVar14 == '\x02') goto LAB_0015d5a8;
            bVar20 = local_98 == 0;
            local_98 = local_98 + -1;
            if (bVar20) {
              local_98 = 0;
            }
            goto LAB_0015d5ad;
          }
        }
        uVar15 = _ZN9uu_expand12next_tabstop17hf3e7dbb48d26e5adE(local_50,local_48,local_98,uVar2);
        local_98 = local_98 + uVar15;
        if (bVar11 || ((bVar3 ^ 1) & 1) != 0) {
          if (uVar15 <= local_58) {
            uVar16 = 0;
            ppuVar17 = &PTR_s_src_uu_expand_src_expand_rs_001e8aa0;
            uVar10 = local_58;
            lVar8 = local_60;
            goto LAB_0015d5d5;
          }
          _ZN5alloc5slice29__LT_impl_u20__u5b_T_u5d__GT_6repeat17h6af23d6fde4d821eE
                    (&local_78,uVar15);
          uVar15 = local_68;
          lVar5 = local_70;
          uVar7 = CONCAT44(uStack_74,local_78);
          lVar8 = param_2[2];
          if (local_68 < (ulong)(*param_2 - lVar8)) {
            (*(code *)PTR_memcpy_001ef0b8)(param_2[1] + lVar8,local_70,local_68);
            param_2[2] = lVar8 + uVar15;
          }
          else {
                    /* try { // try from 0015d845 to 0015d853 has its CatchHandler @ 0015d8a0 */
            lVar8 = (*(code *)
                      PTR__ZN3std2io8buffered9bufwriter18BufWriter_LT_W_GT_14write_all_cold17hecf72c601b7ca3f8E_001ef168
                    )(param_2,local_70,local_68);
            if (lVar8 != 0) {
              _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h2ec05db6bc18b7f0E
                        (uVar7,lVar5);
              return lVar8;
            }
          }
          _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h2ec05db6bc18b7f0E(uVar7,lVar5);
        }
        else {
          auVar21 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_5index17h04d82ad3fffd2dd8E
                              (uVar19,uVar19 + lVar18,lVar9,uVar4,
                               &PTR_s_src_uu_expand_src_expand_rs_001e8a88);
          uVar15 = auVar21._8_8_;
          lVar8 = param_2[2];
          if (uVar15 < (ulong)(*param_2 - lVar8)) {
            (*(code *)PTR_memcpy_001ef0b8)(param_2[1] + lVar8,auVar21._0_8_,uVar15);
            param_2[2] = uVar15 + lVar8;
          }
          else {
            lVar8 = (*(code *)
                      PTR__ZN3std2io8buffered9bufwriter18BufWriter_LT_W_GT_14write_all_cold17hecf72c601b7ca3f8E_001ef168
                    )(param_2,auVar21._0_8_,uVar15);
            if (lVar8 != 0) {
              return lVar8;
            }
          }
          bVar11 = false;
        }
      }
      else {
        uVar15 = (cVar14 < '\0') + uVar19 + 1;
        lVar18 = 1;
        if (uVar4 < uVar15) {
          uVar15 = 1;
        }
        else {
          uVar7 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_5index17h04d82ad3fffd2dd8E
                            (uVar19,uVar15,lVar9,uVar4,&PTR_s_src_uu_expand_src_expand_rs_001e8a70);
          (*(code *)PTR__ZN4core3str8converts9from_utf817h8a6dc80f786921e0E_001ef030)
                    (&local_78,uVar7);
          if (local_78 != 1) {
            lVar18 = (ulong)(cVar14 < '\0') + 1;
            local_38 = local_68 + local_70;
            local_40 = local_70;
            auVar21 = _ZN4core3str11validations15next_code_point17h4b26a3f38a1a709dE(&local_40);
            puVar13 = (undefined *)(auVar21._8_8_ & 0xffffffff);
            if ((auVar21 & (undefined  [16])0x1) == (undefined  [16])0x0) {
              puVar13 = &DAT_00110000;
            }
            uVar12 = (uint)puVar13;
            if (uVar12 == 8) {
              cVar14 = '\0';
              uVar15 = 0;
            }
            else if (uVar12 == 9) {
              cVar14 = '\x01';
              uVar15 = 0;
            }
            else {
              cVar14 = '\x02';
              if (uVar12 == 0x110000) goto LAB_0015d594;
              if (uVar12 < 0x7f) {
                uVar15 = (ulong)(0x1f < uVar12);
              }
              else if (uVar12 < 0xa0) {
                uVar15 = 0;
              }
              else {
                bVar6 = _ZN13unicode_width6tables12lookup_width17h2b8e7fd08bce4cb3E(puVar13);
                uVar15 = (ulong)bVar6;
              }
            }
            goto LAB_0015d59a;
          }
          uVar15 = 1;
        }
LAB_0015d5a8:
        local_98 = local_98 + uVar15;
LAB_0015d5ad:
        bVar11 = (bool)(bVar11 & *(char *)(lVar9 + uVar19) == ' ');
        uVar15 = uVar19 + lVar18;
        ppuVar17 = &PTR_s_src_uu_expand_src_expand_rs_001e8ab8;
        uVar10 = uVar4;
        lVar8 = lVar9;
        uVar16 = uVar19;
LAB_0015d5d5:
        auVar21 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_5index17h04d82ad3fffd2dd8E
                            (uVar16,uVar15,lVar8,uVar10,ppuVar17);
        uVar15 = auVar21._8_8_;
        lVar8 = param_2[2];
        if (uVar15 < (ulong)(*param_2 - lVar8)) {
          (*(code *)PTR_memcpy_001ef0b8)(param_2[1] + lVar8,auVar21._0_8_,uVar15);
          param_2[2] = uVar15 + lVar8;
        }
        else {
          lVar8 = (*(code *)
                    PTR__ZN3std2io8buffered9bufwriter18BufWriter_LT_W_GT_14write_all_cold17hecf72c601b7ca3f8E_001ef168
                  )(param_2,auVar21._0_8_,uVar15);
          if (lVar8 != 0) {
            return lVar8;
          }
        }
      }
      uVar19 = uVar19 + lVar18;
    } while (uVar19 < uVar4);
  }
  lVar9 = _ZN83__LT_std__io__buffered__bufwriter__BufWriter_LT_W_GT__u20_as_u20_std__io__Write_GT_5flush17habf18e17bcf986f2E
                    (param_2);
  if (lVar9 == 0) {
    *(undefined8 *)(param_1 + 0x10) = 0;
    lVar9 = 0;
  }
  return lVar9;
}