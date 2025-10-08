void _ZN21ruff_python_formatter6string9docstring11Indentation8from_str17hcb1a24e2ab546984E
               (undefined4 *param_1,long param_2,long param_3)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  int iVar9;
  ulong uVar10;
  undefined auVar11 [12];
  undefined8 local_60;
  undefined8 uStack_58;
  uint local_50 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  uint local_38;
  
  uStack_58 = param_3 + param_2;
  local_50[0] = 0x110001;
  local_60 = param_2;
  lVar2 = _ZN4core4iter6traits8iterator8Iterator4fold17h0e5f0451a9ac8f30E(&local_60);
  lVar3 = _ZN4core4iter6traits8iterator8Iterator4fold17h8c7602d7545806deE(&local_60);
  lVar7 = 8;
  if (lVar3 == 0) {
    uVar5 = 0;
    *(long *)(param_1 + 2) = lVar2;
    goto LAB_004266c1;
  }
  lVar4 = _ZN4core4iter6traits8iterator8Iterator4fold17h0e5f0451a9ac8f30E(&local_60);
  if (lVar2 == 0) {
    if (lVar4 != 0) {
      _ZN4core6option15Option_LT_T_GT_18get_or_insert_with17h8e8d1ab978d36fd6E(local_50,&local_60);
      if (local_50[0] == 9) goto LAB_0042658e;
      uVar5 = 2;
      goto LAB_004266b3;
    }
    uVar5 = 1;
  }
  else {
    if (lVar4 != 0) {
LAB_0042658e:
      uVar8 = lVar2 + lVar3 * 8 + lVar4;
      uVar10 = lVar3 + lVar2 + lVar4;
      _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h1e98140e442e0df8E
                (uVar10 >> 0x20 != 0,&PTR_s_crates_ruff_python_formatter_src_0067f548);
      local_38 = local_50[0];
      local_48 = (undefined4)local_60;
      uStack_44 = local_60._4_4_;
      uStack_40 = (undefined4)uStack_58;
      uStack_3c = uStack_58._4_4_;
LAB_004265e6:
      do {
        while( true ) {
          uVar6 = local_38;
          local_38 = 0x110001;
          iVar9 = (int)uVar10;
          if (uVar6 == 0x110001) {
            auVar11 = _ZN4core3str11validations15next_code_point17hfc8b8c1898281fd8E(&local_48);
            uVar6 = auVar11._8_4_;
            if ((auVar11 & (undefined  [12])0x1) == (undefined  [12])0x0) goto LAB_00426692;
          }
          if (uVar6 != 9) break;
          uVar8 = (uVar8 & 0xfffffffffffffff8) + 8;
          uVar10 = (ulong)(iVar9 + 1);
        }
        if (uVar6 != 0x20) {
          if (uVar6 == 0x110000) goto LAB_00426692;
          if (4 < uVar6 - 9) {
            if ((uVar6 < 0x80) ||
               (cVar1 = _ZN4core7unicode12unicode_data11white_space6lookup17hae563f9e204d99aeE
                                  (uVar6), cVar1 == '\0')) goto LAB_00426692;
            if (uVar6 < 0x800) {
              uVar8 = uVar8 + 2;
              uVar10 = (ulong)(iVar9 + 2);
            }
            else {
              uVar8 = (uVar8 - (uVar6 < 0x10000)) + 4;
              uVar10 = (ulong)(iVar9 + (4 - (uint)(uVar6 < 0x10000)));
            }
            goto LAB_004265e6;
          }
        }
        uVar8 = uVar8 + 1;
        uVar10 = (ulong)(iVar9 + 1);
      } while( true );
    }
    uVar5 = 3;
    lVar4 = lVar3;
    lVar3 = lVar2;
LAB_004266b3:
    *(long *)(param_1 + 2) = lVar3;
    lVar7 = 0x10;
    lVar3 = lVar4;
  }
  *(long *)((long)param_1 + lVar7) = lVar3;
LAB_004266c1:
  *param_1 = uVar5;
  return;
LAB_00426692:
  *(ulong *)(param_1 + 2) = uVar8;
  param_1[1] = iVar9;
  uVar5 = 4;
  goto LAB_004266c1;
}