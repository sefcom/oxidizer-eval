void _ZN21ruff_python_formatter8comments3map21MultiMap_LT_K_C_V_GT_12push_leading17he90569e9276cd544E
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong *puVar8;
  undefined **ppuVar9;
  long lVar10;
  undefined8 local_60;
  undefined8 local_58;
  undefined local_50 [16];
  undefined local_40 [24];
  
  local_60 = param_2;
  local_58 = param_3;
  lVar7 = _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_13get_inner_mut17h87cf0787e596fc53E
                    (param_1 + 0x30,&local_60);
  if (lVar7 == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h6db36899efacabdbE(param_1,param_4,&PTR_DAT_0067cca0);
    uVar6 = local_58;
    uVar5 = local_60;
    _ZN21ruff_python_formatter8comments3map12InOrderEntry7leading17hb1749f99636007f0E
              (local_50,uVar2,*(undefined8 *)(param_1 + 0x10));
    _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_6insert17h9b127e050614fcb6E
              (local_40,param_1 + 0x30,uVar5,uVar6,local_50);
  }
  else {
    if (*(int *)(lVar7 + 0x10) == 0) {
      uVar3 = *(ulong *)(lVar7 + 0x18);
      if (*(ulong *)(param_1 + 0x28) <= uVar3) {
        (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_006bd360)
                  (uVar3,*(ulong *)(param_1 + 0x28),&PTR_DAT_0067cd00);
        goto LAB_00400692;
      }
      lVar7 = uVar3 * 0x18 + *(long *)(param_1 + 0x20);
      ppuVar9 = &PTR_DAT_0067cd18;
    }
    else {
      lVar10 = lVar7 + 0x10;
      lVar1 = *(long *)(param_1 + 0x10);
      if ((*(int *)(lVar7 + 0x18) == 0) &&
         (lVar7 = _ZN21ruff_python_formatter8comments3map12InOrderEntry5range17h6e360fb934eb8131E
                            (lVar10), lVar1 == lVar7)) {
        _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h6db36899efacabdbE(param_1,param_4,&PTR_DAT_0067cce8);
        _ZN21ruff_python_formatter8comments3map12InOrderEntry23increment_leading_range17h8eafbb6d1a816b39E
                  (lVar10);
        return;
      }
      puVar8 = (ulong *)_ZN21ruff_python_formatter8comments3map21MultiMap_LT_K_C_V_GT_21entry_to_out_of_order17h99c7313a90e9d36bE
                                  (lVar10,*(undefined8 *)(param_1 + 8),lVar1,param_1 + 0x18);
      if (*(ulong *)(param_1 + 0x28) <= *puVar8) {
LAB_00400692:
        (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_006bd360)();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar7 = *puVar8 * 0x18 + *(long *)(param_1 + 0x20);
      ppuVar9 = &PTR_DAT_0067ccd0;
    }
    _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h6db36899efacabdbE(lVar7,param_4,ppuVar9);
  }
  return;
}