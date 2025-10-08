void _ZN21ruff_python_formatter8comments3map21MultiMap_LT_K_C_V_GT_13push_dangling17h037c8b967909d17bE
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined **ppuVar8;
  ulong uVar9;
  long lVar10;
  undefined8 local_60;
  undefined8 local_58;
  undefined local_50 [16];
  undefined local_40 [24];
  
  local_60 = param_2;
  local_58 = param_3;
  lVar6 = _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_13get_inner_mut17h87cf0787e596fc53E
                    (param_1 + 0x30,&local_60);
  if (lVar6 == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h6db36899efacabdbE(param_1,param_4,&PTR_DAT_0067cd30);
    uVar5 = local_58;
    uVar4 = local_60;
    _ZN21ruff_python_formatter8comments3map12InOrderEntry8dangling17he03c914fb1091a07E
              (local_50,uVar2,*(undefined8 *)(param_1 + 0x10));
    _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_6insert17h9b127e050614fcb6E
              (local_40,param_1 + 0x30,uVar4,uVar5,local_50);
  }
  else {
    if (*(int *)(lVar6 + 0x10) == 0) {
      uVar9 = *(long *)(lVar6 + 0x18) + 1;
      if (*(ulong *)(param_1 + 0x28) <= uVar9) {
        (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_006bd360)
                  (uVar9,*(ulong *)(param_1 + 0x28),&PTR_DAT_0067cd90);
        goto LAB_004007e8;
      }
      lVar6 = uVar9 * 0x18 + *(long *)(param_1 + 0x20);
      ppuVar8 = &PTR_DAT_0067cda8;
    }
    else {
      lVar10 = lVar6 + 0x10;
      lVar1 = *(long *)(param_1 + 0x10);
      if ((*(int *)(lVar6 + 0x1c) == 0) &&
         (lVar6 = _ZN21ruff_python_formatter8comments3map12InOrderEntry5range17h6e360fb934eb8131E
                            (lVar10), lVar1 == lVar6)) {
        _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h6db36899efacabdbE(param_1,param_4,&PTR_DAT_0067cd78);
        _ZN21ruff_python_formatter8comments3map12InOrderEntry24increment_dangling_range17h52bd3f95b5426e67E
                  (lVar10);
        return;
      }
      plVar7 = (long *)_ZN21ruff_python_formatter8comments3map21MultiMap_LT_K_C_V_GT_21entry_to_out_of_order17h99c7313a90e9d36bE
                                 (lVar10,*(undefined8 *)(param_1 + 8),lVar1,param_1 + 0x18);
      if (*(ulong *)(param_1 + 0x28) <= *plVar7 + 1U) {
LAB_004007e8:
        (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_006bd360)();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar6 = (*plVar7 + 1U) * 0x18 + *(long *)(param_1 + 0x20);
      ppuVar8 = &PTR_DAT_0067cd60;
    }
    _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h6db36899efacabdbE(lVar6,param_4,ppuVar8);
  }
  return;
}