void _ZN21ruff_python_formatter8comments3map21MultiMap_LT_K_C_V_GT_25leading_dangling_trailing17h08a799c77fbcf780E
               (undefined (*param_1) [16],long param_2,undefined8 param_3,ulong param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  code *pcVar5;
  long lVar6;
  ulong uVar7;
  int iVar8;
  int iVar9;
  undefined auVar10 [16];
  undefined auVar11 [16];
  undefined auVar12 [16];
  
  lVar6 = _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_9get_inner17hfe322db32d3ddec8E
                    (param_2 + 0x30);
  if (lVar6 == 0) {
    auVar10 = ZEXT816(4);
    auVar11 = ZEXT816(4);
    auVar12 = ZEXT816(4);
LAB_00400d07:
    *param_1 = auVar10;
    param_1[1] = auVar11;
    param_1[2] = auVar12;
    return;
  }
  iVar8 = *(int *)(lVar6 + 0x10);
  if (iVar8 != 0) {
    uVar1 = *(undefined8 *)(param_2 + 8);
    uVar2 = *(undefined8 *)(param_2 + 0x10);
    auVar10 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_5index17h2681de418ccc56aeE
                        (iVar8 + -1,*(int *)(lVar6 + 0x14) + -1,uVar1,uVar2,&PTR_DAT_0067cf70);
    iVar9 = *(int *)(lVar6 + 0x14) + -1;
    iVar8 = *(int *)(lVar6 + 0x18) + -1;
    if (*(int *)(lVar6 + 0x18) == 0) {
      iVar8 = iVar9;
    }
    auVar11 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_5index17h2681de418ccc56aeE
                        (iVar9,iVar8,uVar1,uVar2,&PTR_DAT_0067cf88);
    auVar12 = (*(code *)
                PTR__ZN21ruff_python_formatter8comments3map12InOrderEntry14trailing_range17h32d34cc5d8d5c983E_006bdc20
              )((int *)(lVar6 + 0x10));
    auVar12 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_5index17h2681de418ccc56aeE
                        (auVar12._0_8_,auVar12._8_8_,uVar1,uVar2,&PTR_DAT_0067cfa0);
    goto LAB_00400d07;
  }
  uVar3 = *(ulong *)(lVar6 + 0x18);
  uVar4 = *(ulong *)(param_2 + 0x28);
  if (uVar3 < uVar4) {
    uVar7 = uVar3 + 1;
    if (uVar7 < uVar4) {
      param_4 = uVar3 + 2;
      if (param_4 < uVar4) {
        lVar6 = *(long *)(param_2 + 0x20);
        auVar10._8_8_ = *(undefined8 *)(lVar6 + 0x10 + uVar3 * 0x18);
        auVar10._0_8_ = *(undefined8 *)(lVar6 + 8 + uVar3 * 0x18);
        auVar11._8_8_ = *(undefined8 *)(lVar6 + 0x10 + uVar7 * 0x18);
        auVar11._0_8_ = *(undefined8 *)(lVar6 + 8 + uVar7 * 0x18);
        auVar12._8_8_ = *(undefined8 *)(lVar6 + 0x10 + param_4 * 0x18);
        auVar12._0_8_ = *(undefined8 *)(lVar6 + 8 + param_4 * 0x18);
        goto LAB_00400d07;
      }
      goto LAB_00400d4a;
    }
  }
  else {
    uVar7 = (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_006bd360)
                      (uVar3,uVar4,&PTR_DAT_0067cfb8);
  }
  (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_006bd360)(uVar7);
LAB_00400d4a:
  (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_006bd360)(param_4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}