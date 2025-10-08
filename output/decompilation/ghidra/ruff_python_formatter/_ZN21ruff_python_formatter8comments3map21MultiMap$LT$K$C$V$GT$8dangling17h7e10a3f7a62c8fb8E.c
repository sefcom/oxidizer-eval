undefined8
_ZN21ruff_python_formatter8comments3map21MultiMap_LT_K_C_V_GT_8dangling17h7e10a3f7a62c8fb8E
          (long param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  
  lVar2 = _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_9get_inner17hfe322db32d3ddec8E
                    (param_1 + 0x30);
  if (lVar2 == 0) {
    return 4;
  }
  if (*(int *)(lVar2 + 0x10) != 0) {
    iVar5 = *(int *)(lVar2 + 0x14) + -1;
    iVar4 = *(int *)(lVar2 + 0x18) + -1;
    if (*(int *)(lVar2 + 0x18) == 0) {
      iVar4 = iVar5;
    }
    uVar3 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_5index17h2681de418ccc56aeE
                      (iVar5,iVar4,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
                       &PTR_DAT_0067cf10);
    return uVar3;
  }
  uVar6 = *(long *)(lVar2 + 0x18) + 1;
  if (uVar6 < *(ulong *)(param_1 + 0x28)) {
    return *(undefined8 *)(*(long *)(param_1 + 0x20) + 8 + uVar6 * 0x18);
  }
  (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_006bd360)
            (uVar6,*(ulong *)(param_1 + 0x28),&PTR_DAT_0067cf28);
  pcVar1 = (code *)swi(3);
  uVar3 = (*pcVar1)();
  return uVar3;
}