undefined8
_ZN21ruff_python_formatter8comments3map21MultiMap_LT_K_C_V_GT_8trailing17hdc749e0acdbc0869E
          (long param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined auVar5 [16];
  
  lVar2 = _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_9get_inner17hfe322db32d3ddec8E
                    (param_1 + 0x30);
  if (lVar2 == 0) {
    return 4;
  }
  if (*(int *)(lVar2 + 0x10) != 0) {
    auVar5 = (*(code *)
               PTR__ZN21ruff_python_formatter8comments3map12InOrderEntry14trailing_range17h32d34cc5d8d5c983E_006bdc20
             )(lVar2 + 0x10);
    uVar3 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_5index17h2681de418ccc56aeE
                      (auVar5._0_8_,auVar5._8_8_,*(undefined8 *)(param_1 + 8),
                       *(undefined8 *)(param_1 + 0x10),&PTR_DAT_0067cf40);
    return uVar3;
  }
  uVar4 = *(long *)(lVar2 + 0x18) + 2;
  if (uVar4 < *(ulong *)(param_1 + 0x28)) {
    return *(undefined8 *)(*(long *)(param_1 + 0x20) + 8 + uVar4 * 0x18);
  }
  (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_006bd360)
            (uVar4,*(ulong *)(param_1 + 0x28),&PTR_DAT_0067cf58);
  pcVar1 = (code *)swi(3);
  uVar3 = (*pcVar1)();
  return uVar3;
}