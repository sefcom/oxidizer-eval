void _ZN7uu_sort15numeric_str_cmp7NumInfo5parse17h9568947bf0c3d82dE
               (long *param_1,long param_2,long param_3,uint *param_4)

{
  uint uVar1;
  undefined uVar2;
  char cVar3;
  undefined8 uVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  undefined uVar8;
  long lVar9;
  bool bVar10;
  undefined auVar11 [16];
  byte local_85;
  uint local_84;
  long local_80;
  ulong local_78;
  ulong local_70;
  long local_68;
  long *local_60;
  long local_58;
  long local_50;
  long local_48;
  undefined8 local_40;
  uint *local_38;
  
  local_85 = 0;
  local_48 = param_2 + param_3;
  local_40 = 0;
  local_58 = param_3;
  local_50 = param_2;
  auVar11 = _ZN87__LT_core__str__iter__CharIndices_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h3a48939ae6ec65bfE
                      (&local_50);
  if (auVar11._8_4_ != 0x110000) {
    local_84 = *param_4;
    uVar1 = param_4[1];
    uVar8 = 1;
    local_80 = -1;
    local_70 = 0;
    bVar10 = true;
    uVar5 = 0;
    local_38 = param_4;
LAB_001cf2e3:
    lVar9 = auVar11._0_8_;
    uVar7 = auVar11._8_8_ & 0xffffffff;
    local_78 = uVar5;
    if (uVar5 == 0) {
      do {
        uVar6 = (uint)uVar7;
        if (!bVar10) goto LAB_001cf4b0;
        bVar10 = true;
        if ((4 < uVar6 - 9) && (uVar6 != 0x20)) {
          if (uVar6 < 0x80) {
            bVar10 = false;
            if (uVar6 != 0x2d) goto LAB_001cf4b0;
            uVar8 = 0;
          }
          else {
            cVar3 = _ZN4core7unicode12unicode_data11white_space6lookup17hae563f9e204d99aeE(uVar7);
            if (cVar3 == '\0') {
LAB_001cf4b0:
              if ((local_84 == 0x110000) || (local_84 != uVar6)) {
                uVar4 = _ZN7uu_sort15numeric_str_cmp7NumInfo15is_invalid_char17he29b1e8f7debbd61E
                                  (uVar7,&local_85,uVar1);
                if ((char)uVar4 != '\0') {
                  local_68 = 0;
                  if ((local_70 & 1) != 0) {
                    local_68 = lVar9;
                  }
                  *param_1 = 0;
                  *(undefined *)(param_1 + 1) = 1;
                  lVar9 = local_68;
                  goto LAB_001cf620;
                }
                if ((uVar1 == 0x110000) || (uVar6 != uVar1)) {
                  if (uVar6 != 0x30) {
                    bVar10 = false;
                    goto LAB_001cf52a;
                  }
                  if (local_85 == 1) goto LAB_001cf586;
                  local_70 = CONCAT71((int7)((ulong)uVar4 >> 8),1);
                }
              }
              bVar10 = false;
            }
          }
        }
        auVar11 = _ZN87__LT_core__str__iter__CharIndices_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h3a48939ae6ec65bfE
                            (&local_50);
        lVar9 = auVar11._0_8_;
        uVar7 = auVar11._8_8_ & 0xffffffff;
        if (auVar11._8_4_ == 0x110000) goto LAB_001cf27f;
      } while( true );
    }
    local_60 = param_1;
    if (local_84 == 0x110000) {
      do {
        uVar6 = (uint)uVar7;
        uVar2 = uVar8;
        if (!bVar10) goto LAB_001cf3f0;
        bVar10 = true;
        if ((4 < uVar6 - 9) && (uVar6 != 0x20)) {
          if (uVar6 < 0x80) {
            bVar10 = false;
            uVar2 = 0;
            if (uVar6 != 0x2d) goto LAB_001cf3f0;
          }
          else {
            cVar3 = _ZN4core7unicode12unicode_data11white_space6lookup17hae563f9e204d99aeE(uVar7);
            if (cVar3 == '\0') {
LAB_001cf3f0:
              cVar3 = _ZN7uu_sort15numeric_str_cmp7NumInfo15is_invalid_char17he29b1e8f7debbd61E
                                (uVar7,&local_85,uVar1);
              if (cVar3 != '\0') goto LAB_001cf5c2;
              if ((uVar1 == 0x110000) || (uVar6 != uVar1)) goto LAB_001cf50c;
              bVar10 = false;
              uVar2 = uVar8;
            }
          }
        }
        uVar8 = uVar2;
        auVar11 = _ZN87__LT_core__str__iter__CharIndices_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h3a48939ae6ec65bfE
                            (&local_50);
        lVar9 = auVar11._0_8_;
        uVar7 = auVar11._8_8_ & 0xffffffff;
        param_1 = local_60;
        if (auVar11._8_4_ == 0x110000) goto LAB_001cf5a1;
      } while( true );
    }
    do {
      uVar6 = (uint)uVar7;
      uVar2 = uVar8;
      if (!bVar10) goto LAB_001cf350;
      bVar10 = true;
      if ((4 < uVar6 - 9) && (uVar6 != 0x20)) {
        if (uVar6 < 0x80) {
          bVar10 = false;
          uVar2 = 0;
          if (uVar6 != 0x2d) goto LAB_001cf350;
        }
        else {
          cVar3 = _ZN4core7unicode12unicode_data11white_space6lookup17hae563f9e204d99aeE(uVar7);
          if (cVar3 == '\0') {
LAB_001cf350:
            if (local_84 != uVar6) {
              cVar3 = _ZN7uu_sort15numeric_str_cmp7NumInfo15is_invalid_char17he29b1e8f7debbd61E
                                (uVar7,&local_85,uVar1);
              if (cVar3 != '\0') {
LAB_001cf5c2:
                if (((*(char *)(local_38 + 2) != '\0') && (uVar6 - 0x45 < 0x27)) &&
                   ((0x400030b945U >> ((ulong)(uVar6 - 0x45) & 0x3f) & 1) != 0)) {
                  lVar9 = lVar9 + 1;
                }
                *local_60 = local_80;
                *(undefined *)(local_60 + 1) = uVar8;
                param_1 = local_60;
LAB_001cf620:
                param_1[2] = local_68;
                param_1[3] = lVar9;
                return;
              }
              if ((uVar1 == 0x110000) || (uVar6 != uVar1)) goto LAB_001cf50c;
            }
            bVar10 = false;
            uVar2 = uVar8;
          }
        }
      }
      uVar8 = uVar2;
      auVar11 = _ZN87__LT_core__str__iter__CharIndices_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h3a48939ae6ec65bfE
                          (&local_50);
      lVar9 = auVar11._0_8_;
      uVar7 = auVar11._8_8_ & 0xffffffff;
      param_1 = local_60;
      if (auVar11._8_4_ == 0x110000) goto LAB_001cf5a1;
    } while( true );
  }
  local_70 = 0;
LAB_001cf27f:
  local_80 = 0;
  local_68 = local_58;
  if ((local_70 & 1) == 0) {
    local_68 = local_80;
  }
  uVar8 = 1;
  local_58 = local_68;
LAB_001cf295:
  *param_1 = local_80;
  *(undefined *)(param_1 + 1) = uVar8;
  param_1[2] = local_68;
  param_1[3] = local_58;
  return;
LAB_001cf586:
  local_80 = local_80 + -1;
  bVar10 = true;
  goto LAB_001cf52a;
LAB_001cf50c:
  bVar10 = uVar6 == 0x30;
  param_1 = local_60;
LAB_001cf52a:
  local_80 = local_80 + (ulong)(local_85 ^ 1);
  uVar5 = local_78;
  if (local_78 == 0 && !bVar10) {
    uVar5 = 1;
    local_68 = lVar9;
  }
  auVar11 = _ZN87__LT_core__str__iter__CharIndices_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h3a48939ae6ec65bfE
                      (&local_50);
  local_70 = CONCAT71(auVar11._1_7_,1);
  bVar10 = false;
  local_78 = uVar5;
  if (auVar11._8_4_ == 0x110000) goto LAB_001cf5a1;
  goto LAB_001cf2e3;
LAB_001cf5a1:
  if ((local_78 & 1) != 0) goto LAB_001cf295;
  goto LAB_001cf27f;
}