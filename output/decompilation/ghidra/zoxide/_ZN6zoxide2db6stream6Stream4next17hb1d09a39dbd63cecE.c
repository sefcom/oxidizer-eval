long _ZN6zoxide2db6stream6Stream4next17hb1d09a39dbd63cecE(long param_1)

{
  ulong uVar1;
  code *pcVar2;
  char cVar3;
  long lVar4;
  ulong uVar5;
  
  uVar5 = *(ulong *)(param_1 + 0x70);
  if (*(ulong *)(param_1 + 0x68) < uVar5) {
    do {
      uVar5 = uVar5 - 1;
      *(ulong *)(param_1 + 0x70) = uVar5;
      uVar1 = *(ulong *)(*(long *)(param_1 + 0x60) + 0x10);
      if (uVar1 <= uVar5) {
        (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_0023b4b8)
                  (uVar5,uVar1,&PTR_DAT_002349b0);
LAB_001913b6:
        (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_0023b4b8)(uVar5);
        pcVar2 = (code *)swi(3);
        lVar4 = (*pcVar2)();
        return lVar4;
      }
      lVar4 = *(long *)(*(long *)(param_1 + 0x60) + 8);
      cVar3 = _ZN6zoxide2db6stream6Stream18filter_by_keywords17hfa6dd4ec6611dd54E
                        (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
                         *(undefined8 *)(lVar4 + 8 + uVar5 * 0x28),
                         *(undefined8 *)(lVar4 + 0x10 + uVar5 * 0x28));
      if (cVar3 != '\0') {
        lVar4 = lVar4 + uVar5 * 0x28;
        cVar3 = _ZN6zoxide2db6stream6Stream18filter_by_base_dir17h40436340d7146c85E
                          (param_1,*(undefined8 *)(lVar4 + 8),*(undefined8 *)(lVar4 + 0x10));
        if (cVar3 != '\0') {
          cVar3 = _ZN6zoxide2db6stream6Stream17filter_by_exclude17h56276cfa98379766E
                            (*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                             *(undefined8 *)(lVar4 + 8),*(undefined8 *)(lVar4 + 0x10));
          if (cVar3 != '\0') {
            cVar3 = _ZN6zoxide2db6stream6Stream16filter_by_exists17h7f6b4e7bfdd84ce2E
                              (*(undefined4 *)(param_1 + 0x58),*(undefined *)(param_1 + 0x59),
                               *(undefined8 *)(lVar4 + 8),*(undefined8 *)(lVar4 + 0x10));
            if (cVar3 != '\0') {
              if (uVar5 < *(ulong *)(*(long *)(param_1 + 0x60) + 0x10)) {
                return uVar5 * 0x28 + *(long *)(*(long *)(param_1 + 0x60) + 8);
              }
              goto LAB_001913b6;
            }
            if (*(ulong *)(param_1 + 0x50) <= *(ulong *)(lVar4 + 0x20)) goto LAB_001912d0;
          }
          _ZN6zoxide2db63__LT_impl_u20_zoxide__db__ouroboros_impl_database__Database_GT_11swap_remove17h9faf7a74dd04c2f3E
                    (*(undefined8 *)(param_1 + 0x60),uVar5);
        }
      }
LAB_001912d0:
      uVar5 = *(ulong *)(param_1 + 0x70);
    } while (*(ulong *)(param_1 + 0x68) < uVar5);
  }
  return 0;
}