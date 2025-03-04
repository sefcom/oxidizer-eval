long * _ZN7uu_sort15numeric_str_cmp7NumInfo5parse17h2d1625adef450396E
                 (long *param_1,long param_2,long param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  char cVar4;
  undefined8 uVar5;
  undefined7 uVar6;
  byte bVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  undefined auVar13 [16];
  byte local_85;
  undefined4 local_84;
  long local_80;
  long local_78;
  ulong local_70;
  long *local_68;
  ulong local_60;
  long local_58;
  long local_50;
  long local_48;
  undefined8 local_40;
  uint *local_38;
  
  local_85 = 0;
  local_48 = param_2 + param_3;
  local_40 = 0;
  local_50 = param_2;
  auVar13 = _ZN87__LT_core__str__iter__CharIndices_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17he645eee637d411aeE
                      (&local_50);
  local_68 = param_1;
  if (auVar13._8_4_ != 0x110000) {
    uVar1 = *param_4;
    uVar2 = param_4[1];
    local_84 = (undefined4)CONCAT71(auVar13._1_7_,1);
    local_80 = -1;
    uVar8 = 0;
    bVar3 = true;
    uVar11 = 0;
    local_58 = param_3;
    local_38 = param_4;
LAB_0027092c:
    lVar12 = auVar13._0_8_;
    uVar10 = auVar13._8_8_ & 0xffffffff;
    local_70 = uVar11;
    if (uVar11 != 1) {
      local_60 = uVar8;
      do {
        uVar9 = (uint)uVar10;
        if (!bVar3) goto LAB_00270a23;
        if ((4 < uVar9 - 9) && (uVar9 != 0x20)) {
          if (uVar9 < 0x80) {
            if (uVar9 != 0x2d) goto LAB_00270a23;
            bVar3 = false;
            local_84 = 0;
          }
          else {
            cVar4 = _ZN4core7unicode12unicode_data11white_space6lookup17hc2937f3d40e148abE(uVar10);
            if (cVar4 == '\0') {
LAB_00270a23:
              if ((uVar1 == 0x110000) || (uVar1 != uVar9)) {
                uVar5 = _ZN7uu_sort15numeric_str_cmp7NumInfo15is_invalid_char17hbc2ad2d78102039cE
                                  (uVar10,&local_85,uVar2);
                if ((char)uVar5 != '\0') {
                  if (local_70 != 0) goto LAB_00270b99;
                  local_80 = 0;
                  local_78 = lVar12;
                  if ((local_60 & 1) == 0) {
                    local_78 = local_80;
                  }
                  bVar7 = 1;
                  lVar12 = local_78;
                  goto LAB_00270bd7;
                }
                if ((uVar2 == 0x110000) || (uVar9 != uVar2)) {
                  if (uVar9 != 0x30) {
                    uVar9 = 0;
                    bVar7 = local_85;
                    goto LAB_00270ae7;
                  }
                  uVar6 = (undefined7)((ulong)uVar5 >> 8);
                  if (local_85 != 0) goto LAB_00270ad1;
                  local_60 = CONCAT71(uVar6,1);
                }
              }
              bVar3 = false;
            }
          }
        }
        auVar13 = _ZN87__LT_core__str__iter__CharIndices_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17he645eee637d411aeE
                            (&local_50);
        lVar12 = auVar13._0_8_;
        uVar10 = auVar13._8_8_ & 0xffffffff;
        uVar8 = local_60;
        uVar11 = local_70;
        if (auVar13._8_4_ == 0x110000) goto LAB_00270b42;
      } while( true );
    }
    do {
      uVar9 = (uint)uVar10;
      if (!bVar3) goto LAB_00270973;
      if ((4 < uVar9 - 9) && (uVar9 != 0x20)) {
        if (uVar9 < 0x80) {
          if (uVar9 != 0x2d) goto LAB_00270973;
          bVar3 = false;
          local_84 = 0;
        }
        else {
          cVar4 = _ZN4core7unicode12unicode_data11white_space6lookup17hc2937f3d40e148abE(uVar10);
          if (cVar4 == '\0') {
LAB_00270973:
            if ((uVar1 == 0x110000) || (uVar1 != uVar9)) {
              uVar5 = _ZN7uu_sort15numeric_str_cmp7NumInfo15is_invalid_char17hbc2ad2d78102039cE
                                (uVar10,&local_85,uVar2);
              if ((char)uVar5 != '\0') {
LAB_00270b99:
                if (((*(char *)(local_38 + 2) != '\0') && (uVar9 - 0x45 < 0x27)) &&
                   ((0x4000308945U >> ((ulong)(uVar9 - 0x45) & 0x3f) & 1) != 0)) {
                  lVar12 = lVar12 + 1;
                }
                bVar7 = (byte)local_84 & 1;
LAB_00270bd7:
                *local_68 = local_80;
                *(byte *)(local_68 + 1) = bVar7;
                local_68[2] = local_78;
                local_68[3] = lVar12;
                return local_68;
              }
              if ((uVar2 == 0x110000) || (uVar9 != uVar2)) goto LAB_00270ab0;
            }
            bVar3 = false;
          }
        }
      }
      auVar13 = _ZN87__LT_core__str__iter__CharIndices_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17he645eee637d411aeE
                          (&local_50);
      lVar12 = auVar13._0_8_;
      uVar10 = auVar13._8_8_ & 0xffffffff;
      if (auVar13._8_4_ == 0x110000) goto LAB_00270b60;
    } while( true );
  }
  uVar8 = 0;
LAB_002708e6:
  local_80 = 0;
  local_78 = param_3;
  if ((uVar8 & 1) == 0) {
    local_78 = local_80;
  }
  bVar7 = 1;
  local_58 = local_78;
LAB_00270b71:
  *local_68 = local_80;
  *(byte *)(local_68 + 1) = bVar7;
  local_68[2] = local_78;
  local_68[3] = local_58;
  return local_68;
LAB_00270ad1:
  local_80 = local_80 + -1;
  uVar9 = (uint)CONCAT71(uVar6,1);
  bVar7 = 1;
  goto LAB_00270ae7;
LAB_00270ab0:
  uVar9 = (uint)CONCAT71((int7)((ulong)uVar5 >> 8),uVar9 == 0x30);
  bVar7 = local_85;
LAB_00270ae7:
  local_80 = local_80 + (ulong)(bVar7 ^ 1);
  uVar8 = (ulong)uVar9 ^ 1;
  if ((char)uVar9 != '\0') {
    lVar12 = local_78;
  }
  if (local_70 != 1) {
    local_78 = lVar12;
  }
  uVar11 = (ulong)(byte)(local_70 == 1 | (byte)uVar8);
  auVar13 = _ZN87__LT_core__str__iter__CharIndices_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17he645eee637d411aeE
                      (&local_50);
  uVar8 = CONCAT71((int7)(uVar8 >> 8),1);
  bVar3 = false;
  if (auVar13._8_4_ == 0x110000) goto LAB_00270b42;
  goto LAB_0027092c;
LAB_00270b42:
  param_3 = local_58;
  if (uVar11 != 0) {
LAB_00270b60:
    bVar7 = (byte)local_84 & 1;
    goto LAB_00270b71;
  }
  goto LAB_002708e6;
}