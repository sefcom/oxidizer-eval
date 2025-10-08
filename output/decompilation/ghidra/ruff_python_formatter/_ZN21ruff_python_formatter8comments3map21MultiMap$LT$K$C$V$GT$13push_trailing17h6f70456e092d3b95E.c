void _ZN21ruff_python_formatter8comments3map21MultiMap_LT_K_C_V_GT_13push_trailing17h6f70456e092d3b95E
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined **ppuVar8;
  ulong uVar9;
  undefined8 local_60;
  undefined8 local_58;
  undefined local_50 [16];
  undefined local_40 [24];
  
  local_60 = param_2;
  local_58 = param_3;
  lVar5 = _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_13get_inner_mut17h87cf0787e596fc53E
                    (param_1 + 0x30,&local_60);
  if (lVar5 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h6db36899efacabdbE(param_1,param_4,&PTR_DAT_0067cdc0);
    uVar4 = local_58;
    uVar3 = local_60;
    _ZN21ruff_python_formatter8comments3map12InOrderEntry8trailing17h53cfc87c4bce3868E
              (local_50,uVar1,*(undefined8 *)(param_1 + 0x10));
    _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_6insert17h9b127e050614fcb6E
              (local_40,param_1 + 0x30,uVar3,uVar4,local_50);
  }
  else {
    if (*(int *)(lVar5 + 0x10) == 0) {
      uVar9 = *(long *)(lVar5 + 0x18) + 2;
      if (*(ulong *)(param_1 + 0x28) <= uVar9) {
        (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_006bd360)
                  (uVar9,*(ulong *)(param_1 + 0x28),&PTR_DAT_0067ce20);
        goto LAB_0040093d;
      }
      lVar5 = uVar9 * 0x18 + *(long *)(param_1 + 0x20);
      ppuVar8 = &PTR_DAT_0067ce38;
    }
    else {
      lVar5 = lVar5 + 0x10;
      lVar6 = _ZN21ruff_python_formatter8comments3map12InOrderEntry5range17h6e360fb934eb8131E(lVar5)
      ;
      if (lVar6 == *(long *)(param_1 + 0x10)) {
        _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h6db36899efacabdbE(param_1,param_4,&PTR_DAT_0067ce08);
        _ZN21ruff_python_formatter8comments3map12InOrderEntry24increment_trailing_range17h83d85426b5e834dbE
                  (lVar5);
        return;
      }
      plVar7 = (long *)_ZN21ruff_python_formatter8comments3map21MultiMap_LT_K_C_V_GT_21entry_to_out_of_order17h99c7313a90e9d36bE
                                 (lVar5,*(undefined8 *)(param_1 + 8),*(long *)(param_1 + 0x10),
                                  param_1 + 0x18);
      if (*(ulong *)(param_1 + 0x28) <= *plVar7 + 2U) {
LAB_0040093d:
        (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_006bd360)();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar5 = (*plVar7 + 2U) * 0x18 + *(long *)(param_1 + 0x20);
      ppuVar8 = &PTR_DAT_0067cdf0;
    }
    _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h6db36899efacabdbE(lVar5,param_4,ppuVar8);
  }
  return;
}