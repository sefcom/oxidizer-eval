undefined8
_ZN21ruff_python_formatter8comments3map21MultiMap_LT_K_C_V_GT_7leading17hb31877b14c47a989E
          (long param_1)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_9get_inner17hfe322db32d3ddec8E
                    (param_1 + 0x30);
  if (lVar3 == 0) {
    return 4;
  }
  if (*(int *)(lVar3 + 0x10) != 0) {
    uVar4 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_5index17h2681de418ccc56aeE
                      (*(int *)(lVar3 + 0x10) + -1,*(int *)(lVar3 + 0x14) + -1,
                       *(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
                       &PTR_DAT_0067cee0);
    return uVar4;
  }
  uVar1 = *(ulong *)(lVar3 + 0x18);
  if (uVar1 < *(ulong *)(param_1 + 0x28)) {
    return *(undefined8 *)(*(long *)(param_1 + 0x20) + 8 + uVar1 * 0x18);
  }
  (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_006bd360)
            (uVar1,*(ulong *)(param_1 + 0x28),&PTR_DAT_0067cef8);
  pcVar2 = (code *)swi(3);
  uVar4 = (*pcVar2)();
  return uVar4;
}