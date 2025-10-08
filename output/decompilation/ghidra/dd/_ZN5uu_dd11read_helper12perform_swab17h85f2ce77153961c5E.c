void _ZN5uu_dd11read_helper12perform_swab17h85f2ce77153961c5E(long param_1,ulong param_2)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  ulong local_48;
  long local_40;
  long local_38;
  
  _ZN4core4iter8adapters7step_by15StepBy_LT_I_GT_3new17hc206f71f6fe0b664E(&local_48);
  if (local_40 != 0) {
    lVar2 = local_40;
    uVar3 = local_48;
    do {
      if (param_2 <= uVar3) {
LAB_00191d77:
        (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_002466a8)
                  (uVar3,param_2,&PTR_DAT_0023ded0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (param_2 <= uVar3 - 1) {
        (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_002466a8)
                  (uVar3 - 1,param_2,&PTR_DAT_0023ded0);
        goto LAB_00191d77;
      }
      lVar2 = lVar2 + -1;
      _ZN4core3ptr4swap17h905a97f5e78b1d89E(param_1 + uVar3,param_1 + uVar3 + -1);
      uVar3 = uVar3 + local_38 + 1;
    } while (lVar2 != 0);
  }
  return;
}