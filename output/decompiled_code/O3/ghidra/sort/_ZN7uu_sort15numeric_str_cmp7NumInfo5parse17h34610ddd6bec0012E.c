undefined8 * __rustcall
uu_sort::numeric_str_cmp::NumInfo::parse
          (undefined8 *param_1,long param_2,long param_3,uint *param_4)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  uint *puVar4;
  uint *puVar5;
  bool bVar6;
  int iVar8;
  ulong uVar7;
  bool bVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  undefined auVar14 [16];
  undefined auVar15 [12];
  undefined local_78;
  ulong local_70;
  long local_68;
  long local_60;
  undefined8 local_58;
  ulong local_50;
  long local_48;
  undefined8 *local_40;
  uint *local_38;
  
  local_60 = param_2 + param_3;
  local_58 = 0;
  local_68 = param_2;
  auVar14 = _<core::str::iter::CharIndices_as_core::iter::traits::iterator::Iterator>::next
                      (&local_68);
  puVar5 = auVar14._0_8_;
  if (auVar14._8_4_ == 0x110000) {
    bVar2 = false;
  }
  else {
    uVar7 = auVar14._8_8_ & 0xffffffff;
    uVar12 = *param_4;
    uVar1 = param_4[1];
    local_48 = param_3;
    local_40 = param_1;
    local_38 = param_4;
    if (uVar1 != 0x110000) {
      local_78 = 1;
      if (uVar12 != 0x110000) {
        puVar13 = (uint *)0xffffffffffffffff;
        local_50 = 0;
        puVar4 = (uint *)0x0;
        bVar2 = false;
        bVar6 = false;
        bVar9 = true;
LAB_002601ce:
        uVar11 = (uint)uVar7;
        if (!bVar9) goto LAB_002601d4;
        puVar4 = (uint *)(ulong)(uVar11 - 9);
        if ((uVar11 - 9 < 5) || (uVar11 == 0x20)) goto LAB_002601b2;
        if (uVar11 < 0x80) {
          if (uVar11 != 0x2d) goto LAB_002601d4;
          bVar9 = false;
          local_78 = 0;
          goto LAB_002601b2;
        }
        puVar4 = (uint *)core::unicode::unicode_data::white_space::lookup(uVar7);
        if ((char)puVar4 != '\0') goto LAB_002601b2;
LAB_002601d4:
        if (uVar12 != uVar11) {
          bVar9 = bVar2;
          if (uVar11 == uVar1) {
            uVar11 = uVar1;
            if ((local_50 & 1) == 0) {
              local_50 = CONCAT71((int7)((ulong)puVar4 >> 8),1);
              goto LAB_002601b0;
            }
            goto LAB_00260598;
          }
          if (uVar11 - 0x3a < 0xfffffff6) goto LAB_00260598;
          uVar10 = local_50 & 0xffffff01;
          cVar3 = (char)uVar10;
          uVar7 = uVar10;
          if ((uVar11 != 0x30) || (bVar6)) {
LAB_00260260:
            puVar13 = (uint *)(((uVar7 ^ 1) & 0xff) + (long)puVar13);
            if (bVar6) {
              puVar5 = param_4;
            }
            if (uVar11 == 0x30) {
              puVar5 = param_4;
            }
            bVar6 = uVar11 != 0x30 || bVar6;
            auVar14 = _<core::str::iter::CharIndices_as_core::iter::traits::iterator::Iterator>::
                      next(&local_68);
            iVar8 = auVar14._8_4_;
            param_4 = puVar5;
            do {
              if (iVar8 == 0x110000) goto LAB_002604ee;
              puVar5 = auVar14._0_8_;
              uVar11 = auVar14._8_4_;
              if (uVar12 == uVar11) goto LAB_002601a4;
              if (uVar11 == uVar1) {
                bVar2 = true;
                uVar11 = uVar1;
                bVar9 = true;
                if (cVar3 != '\0') goto LAB_00260598;
                bVar9 = false;
                local_50 = CONCAT71(auVar14._1_7_,1);
                goto LAB_002601b2;
              }
              if (uVar11 - 0x3a < 0xfffffff6) goto LAB_00260374;
              uVar7 = uVar10;
              if ((uVar11 == 0x30) && (!bVar6)) {
                if (cVar3 == '\0') goto LAB_00260365;
                puVar13 = (uint *)((long)puVar13 + -1);
                uVar7 = 1;
              }
              puVar13 = (uint *)(((uVar7 ^ 1) & 0xff) + (long)puVar13);
              if (bVar6) {
                puVar5 = param_4;
              }
              if (uVar11 == 0x30) {
                puVar5 = param_4;
              }
              bVar6 = uVar11 != 0x30 || bVar6;
              auVar14 = _<core::str::iter::CharIndices_as_core::iter::traits::iterator::Iterator>::
                        next(&local_68);
              iVar8 = auVar14._8_4_;
              param_4 = puVar5;
            } while( true );
          }
          if (cVar3 != '\0') {
            puVar13 = (uint *)((long)puVar13 + -1);
            uVar7 = 1;
            goto LAB_00260260;
          }
LAB_002601a4:
          bVar2 = true;
        }
        goto LAB_002601b0;
      }
      puVar13 = (uint *)0xffffffffffffffff;
      local_70 = 0;
      bVar2 = false;
      bVar6 = false;
      bVar9 = true;
LAB_0025ffc5:
      uVar11 = (uint)uVar7;
      if (!bVar9) goto LAB_0025ffcb;
      if ((4 < uVar11 - 9) && (uVar11 != 0x20)) {
        if (uVar11 < 0x80) {
          if (uVar11 != 0x2d) goto LAB_0025ffcb;
          bVar9 = false;
          local_78 = 0;
        }
        else {
          cVar3 = core::unicode::unicode_data::white_space::lookup(uVar7);
          if (cVar3 == '\0') {
LAB_0025ffcb:
            bVar9 = bVar2;
            if (uVar11 == uVar1) {
              uVar11 = uVar1;
              if (local_70 == 0) {
                local_70 = 1;
                bVar9 = false;
                goto LAB_0025ffa9;
              }
              goto LAB_00260598;
            }
            if (uVar11 - 0x3a < 0xfffffff6) goto LAB_00260598;
            cVar3 = (char)local_70;
            uVar7 = local_70;
            if ((uVar11 != 0x30) || (bVar6)) {
LAB_00260059:
              puVar13 = (uint *)((uVar7 ^ 1) + (long)puVar13);
              if (bVar6) {
                puVar5 = param_4;
              }
              if (uVar11 == 0x30) {
                puVar5 = param_4;
              }
              bVar6 = uVar11 != 0x30 || bVar6;
              auVar14 = _<core::str::iter::CharIndices_as_core::iter::traits::iterator::Iterator>::
                        next(&local_68);
              iVar8 = auVar14._8_4_;
              param_4 = puVar5;
              do {
                if (iVar8 == 0x110000) goto LAB_002604ee;
                puVar5 = auVar14._0_8_;
                uVar11 = auVar14._8_4_;
                if (uVar11 == uVar1) {
                  bVar2 = true;
                  uVar11 = uVar1;
                  bVar9 = true;
                  if (cVar3 != '\0') goto LAB_00260598;
                  bVar9 = false;
                  local_70 = 1;
                  goto LAB_0025ffa9;
                }
                if (uVar11 - 0x3a < 0xfffffff6) goto LAB_00260374;
                uVar7 = local_70;
                if ((uVar11 == 0x30) && (!bVar6)) {
                  if (cVar3 == '\0') goto LAB_0026014e;
                  puVar13 = (uint *)((long)puVar13 + -1);
                  uVar7 = 1;
                }
                puVar13 = (uint *)((uVar7 ^ 1) + (long)puVar13);
                if (bVar6) {
                  puVar5 = param_4;
                }
                if (uVar11 == 0x30) {
                  puVar5 = param_4;
                }
                bVar6 = uVar11 != 0x30 || bVar6;
                auVar14 = _<core::str::iter::CharIndices_as_core::iter::traits::iterator::Iterator>
                          ::next(&local_68);
                iVar8 = auVar14._8_4_;
                param_4 = puVar5;
              } while( true );
            }
            if (cVar3 != '\0') {
              puVar13 = (uint *)((long)puVar13 + -1);
              uVar7 = 1;
              goto LAB_00260059;
            }
            bVar2 = true;
            bVar9 = false;
          }
        }
      }
      goto LAB_0025ffa9;
    }
    if (uVar12 != 0x110000) {
      local_78 = 1;
      puVar13 = (uint *)0xffffffffffffffff;
      bVar2 = false;
      bVar6 = false;
      bVar9 = true;
      do {
        uVar11 = (uint)uVar7;
        if (!bVar9) goto LAB_002603c4;
        if ((4 < uVar11 - 9) && (uVar11 != 0x20)) {
          if (uVar11 < 0x80) {
            if (uVar11 != 0x2d) goto LAB_002603c4;
            bVar9 = false;
            local_78 = 0;
          }
          else {
            cVar3 = core::unicode::unicode_data::white_space::lookup(uVar7);
            if (cVar3 == '\0') {
LAB_002603c4:
              if (uVar12 != uVar11) {
                bVar9 = bVar2;
                if (uVar11 - 0x3a < 0xfffffff6) goto LAB_00260598;
                if ((uVar11 == 0x30) && (!bVar6)) {
                  bVar9 = false;
                  bVar2 = true;
                  goto LAB_002603a2;
                }
                if (bVar6) {
                  puVar5 = param_4;
                }
                if (uVar11 == 0x30) {
                  puVar5 = param_4;
                }
                bVar6 = uVar11 != 0x30 || bVar6;
                auVar14 = _<core::str::iter::CharIndices_as_core::iter::traits::iterator::Iterator>
                          ::next(&local_68);
                iVar8 = auVar14._8_4_;
                param_4 = puVar5;
                while( true ) {
                  puVar13 = (uint *)((long)puVar13 + 1);
                  if (iVar8 == 0x110000) goto LAB_002604ee;
                  puVar5 = auVar14._0_8_;
                  uVar11 = auVar14._8_4_;
                  if (uVar12 == uVar11) {
                    bVar2 = true;
                    bVar9 = false;
                    goto LAB_002603a2;
                  }
                  if (uVar11 - 0x3a < 0xfffffff6) {
                    bVar9 = true;
                    goto LAB_00260598;
                  }
                  if ((uVar11 == 0x30) && (!bVar6)) break;
                  if (bVar6) {
                    puVar5 = param_4;
                  }
                  if (uVar11 != 0x30) {
                    param_4 = puVar5;
                  }
                  bVar6 = uVar11 != 0x30 || bVar6;
                  auVar14 = _<core::str::iter::CharIndices_as_core::iter::traits::iterator::Iterator>
                            ::next(&local_68);
                  iVar8 = auVar14._8_4_;
                }
                bVar6 = false;
                bVar2 = true;
              }
              bVar9 = false;
            }
          }
        }
LAB_002603a2:
        auVar14 = _<core::str::iter::CharIndices_as_core::iter::traits::iterator::Iterator>::next
                            (&local_68);
        puVar5 = auVar14._0_8_;
        uVar7 = auVar14._8_8_ & 0xffffffff;
      } while (auVar14._8_4_ != 0x110000);
      goto LAB_002604f8;
    }
    local_78 = 1;
    bVar6 = true;
    bVar9 = false;
    do {
      param_4 = puVar5;
      uVar12 = (uint)uVar7;
      puVar5 = param_4;
      if (bVar6) {
        bVar2 = bVar9;
        if ((4 < uVar12 - 9) && (uVar12 != 0x20)) {
          if (uVar12 < 0x80) {
            if (uVar12 != 0x2d) goto LAB_0025ff18;
            bVar6 = false;
            local_78 = 0;
          }
          else {
            cVar3 = core::unicode::unicode_data::white_space::lookup(uVar7);
            if (cVar3 == '\0') goto LAB_002605d7;
          }
        }
      }
      else {
LAB_0025ff18:
        if (uVar12 - 0x3a < 0xfffffff6) goto LAB_002605d7;
        if (uVar12 != 0x30) {
          auVar15 = _<core::str::iter::CharIndices_as_core::iter::traits::iterator::Iterator>::next
                              (&local_68);
          if (auVar15._8_4_ == 0x110000) {
            puVar13 = (uint *)0x0;
            goto LAB_00260513;
          }
          puVar13 = (uint *)0x0;
          if (auVar15._8_4_ - 0x3aU < 0xfffffff6) goto LAB_002605a6;
          goto LAB_0026056a;
        }
        bVar6 = false;
        bVar2 = true;
      }
      auVar14 = _<core::str::iter::CharIndices_as_core::iter::traits::iterator::Iterator>::next
                          (&local_68);
      uVar7 = auVar14._8_8_ & 0xffffffff;
      param_3 = local_48;
      puVar5 = auVar14._0_8_;
      bVar9 = bVar2;
    } while (auVar14._8_4_ != 0x110000);
  }
  goto LAB_0025fe71;
LAB_00260365:
  bVar2 = true;
  bVar6 = false;
LAB_002601b0:
  bVar9 = false;
LAB_002601b2:
  auVar14 = _<core::str::iter::CharIndices_as_core::iter::traits::iterator::Iterator>::next
                      (&local_68);
  puVar4 = auVar14._0_8_;
  uVar7 = auVar14._8_8_ & 0xffffffff;
  puVar5 = puVar4;
  if (auVar14._8_4_ == 0x110000) goto LAB_002604f8;
  goto LAB_002601ce;
LAB_00260374:
  bVar9 = true;
LAB_00260598:
  auVar15._8_4_ = uVar11;
  auVar15._0_8_ = puVar5;
  param_1 = local_40;
  if (!bVar6) {
LAB_002605d7:
    puVar13 = (uint *)0x0;
    if (!bVar9) {
      puVar5 = puVar13;
    }
    local_78 = 1;
    param_4 = puVar5;
    goto LAB_002605eb;
  }
  goto LAB_002605a6;
LAB_0026014e:
  bVar2 = true;
  bVar6 = false;
  bVar9 = false;
LAB_0025ffa9:
  auVar14 = _<core::str::iter::CharIndices_as_core::iter::traits::iterator::Iterator>::next
                      (&local_68);
  puVar5 = auVar14._0_8_;
  uVar7 = auVar14._8_8_ & 0xffffffff;
  if (auVar14._8_4_ == 0x110000) goto LAB_002604f8;
  goto LAB_0025ffc5;
  while (0xfffffff5 < auVar15._8_4_ - 0x3aU) {
LAB_0026056a:
    puVar13 = (uint *)((long)puVar13 + 1);
    auVar15 = _<core::str::iter::CharIndices_as_core::iter::traits::iterator::Iterator>::next
                        (&local_68);
    if (auVar15._8_4_ == 0x110000) goto LAB_00260513;
  }
LAB_002605a6:
  puVar5 = auVar15._0_8_;
  param_1 = local_40;
  if (((*(char *)(local_38 + 2) != '\0') && (uVar12 = auVar15._8_4_ - 0x45, uVar12 < 0x27)) &&
     ((0x4000308945U >> ((ulong)uVar12 & 0x3f) & 1) != 0)) {
    puVar5 = (uint *)((long)puVar5 + 1);
  }
LAB_002605eb:
  *param_1 = puVar13;
  *(undefined *)(param_1 + 1) = local_78;
  param_1[2] = param_4;
  param_1[3] = puVar5;
  return param_1;
LAB_002604ee:
  bVar2 = true;
LAB_002604f8:
  param_3 = local_48;
  param_1 = local_40;
  if (bVar6) {
LAB_00260513:
    *local_40 = puVar13;
    *(undefined *)(local_40 + 1) = local_78;
    local_40[2] = param_4;
    param_1 = local_40;
    goto LAB_0025fe8a;
  }
LAB_0025fe71:
  local_48 = param_3;
  if (!bVar2) {
    local_48 = 0;
  }
  *param_1 = 0;
  *(undefined *)(param_1 + 1) = 1;
  param_1[2] = local_48;
LAB_0025fe8a:
  param_1[3] = local_48;
  return param_1;
}