ulong _ZN7uu_sort10compare_by17h7242c39af3d6a804E
                (undefined8 *param_1,undefined8 *param_2,long param_3,long param_4,long param_5)

{
  double dVar1;
  double dVar2;
  undefined8 uVar3;
  code *pcVar4;
  char cVar5;
  byte bVar6;
  byte bVar7;
  int iVar8;
  int *piVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  bool bVar16;
  
  uVar15 = param_1[2];
  uVar12 = param_2[2];
  bVar16 = uVar12 < *(ulong *)(param_5 + 0x58);
  piVar9 = (int *)0x0;
  if (bVar16) {
    piVar9 = (int *)(uVar12 * 0x10 + *(long *)(param_5 + 0x50));
  }
  if (bVar16 && uVar15 < *(ulong *)(param_4 + 0x58)) {
    if ((*(int *)(*(long *)(param_4 + 0x50) + uVar15 * 0x10) == 1) && (*piVar9 == 1)) {
      dVar1 = *(double *)(*(long *)(param_4 + 0x50) + uVar15 * 0x10 + 8);
      dVar2 = *(double *)(piVar9 + 2);
      if (dVar1 <= dVar2) {
        bVar7 = 0xff;
        if (dVar2 <= dVar1) {
          cVar5 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hf24dc1420a1402d1E
                            (*param_1,param_1[1],*param_2,param_2[1]);
          if (cVar5 == '\0') goto LAB_001d5c1d;
          bVar7 = 0;
        }
      }
      else {
        bVar7 = 1;
        if (dVar1 < dVar2) goto LAB_001d5c1d;
      }
      cVar5 = *(char *)(param_3 + 0x82);
      goto LAB_001d60fe;
    }
  }
LAB_001d5c1d:
  lVar14 = *(long *)(param_3 + 8);
  uVar15 = *(long *)(param_3 + 0x58) * uVar15;
  uVar12 = *(long *)(param_3 + 0x58) * uVar12;
  uVar13 = *(ulong *)(param_5 + 0x10);
  uVar11 = *(undefined8 *)(param_5 + 0x40);
  uVar3 = *(undefined8 *)(param_5 + 0x28);
  if (lVar14 != *(long *)(param_3 + 0x10) * 0x38 + lVar14) {
    if (*(char *)(lVar14 + 0x37) == '\0') {
                    /* WARNING: Could not recover jumptable at 0x001d5e2b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar15 = (*(code *)(&DAT_00128b30 +
                         *(int *)(&DAT_00128b30 + (ulong)*(byte *)(lVar14 + 0x35) * 4)))();
      return uVar15;
    }
    if (uVar15 < *(ulong *)(param_4 + 0x10)) {
      if (uVar12 < uVar13) {
                    /* WARNING: Could not recover jumptable at 0x001d5df3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar15 = (*(code *)(&DAT_00128b30 +
                           *(int *)(&DAT_00128b30 + (ulong)*(byte *)(lVar14 + 0x35) * 4)))
                           (uVar15 * 0x10 + *(long *)(param_4 + 8),0,
                            *(undefined8 *)(uVar12 * 0x10 + *(long *)(param_5 + 8)));
        return uVar15;
      }
    }
    else {
      uVar12 = (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_00296cb8)
                         (uVar15,*(ulong *)(param_4 + 0x10),&PTR_s_src_uu_sort_src_sort_rs_0028d2d0)
      ;
    }
    (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_00296cb8)
              (uVar12,uVar13,&PTR_s_src_uu_sort_src_sort_rs_0028d2e8);
    uVar10 = (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_00296cb8)();
    (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_00296cb8)
              (uVar10,uVar11,&PTR_s_src_uu_sort_src_sort_rs_0028d378);
    uVar11 = (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_00296cb8)();
    (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_00296cb8)
              (uVar11,uVar3,&PTR_s_src_uu_sort_src_sort_rs_0028d348);
    uVar11 = (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_00296cb8)();
    (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_00296cb8)
              (uVar11,uVar3,&PTR_s_src_uu_sort_src_sort_rs_0028d318);
    pcVar4 = (code *)swi(3);
    uVar15 = (*pcVar4)();
    return uVar15;
  }
  if (((*(char *)(param_3 + 0x98) == '\x05') || (*(char *)(param_3 + 0x83) != '\0')) ||
     (*(char *)(param_3 + 0x84) != '\0')) {
    bVar7 = 0;
  }
  else {
    uVar15 = param_1[1];
    uVar12 = param_2[1];
    uVar13 = uVar12;
    if (uVar15 < uVar12) {
      uVar13 = uVar15;
    }
    iVar8 = (*(code *)PTR_memcmp_00297560)(*param_1,*param_2,uVar13);
    lVar14 = uVar15 - uVar12;
    if (iVar8 != 0) {
      lVar14 = (long)iVar8;
    }
    bVar7 = (0 < lVar14) - (lVar14 < 0);
  }
  cVar5 = *(char *)(param_3 + 0x82);
LAB_001d60fe:
  bVar6 = -bVar7;
  if (cVar5 == '\0') {
    bVar6 = bVar7;
  }
  return (ulong)bVar6;
}