undefined8 * _ZN7uu_test4eval17hcb90f74be2e11d77E(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (*(long *)(param_2 + 0x10) != 0) {
    lVar1 = *(long *)(param_2 + 0x10) + -1;
    *(long *)(param_2 + 0x10) = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00158626. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar2 = (undefined8 *)
             (*(code *)(&DAT_00117ed8 +
                       *(int *)(&DAT_00117ed8 + *(long *)(*(long *)(param_2 + 8) + lVar1 * 0x28) * 4
                               )))
                       (*(undefined8 *)(*(long *)(param_2 + 8) + 0x20 + lVar1 * 0x28),
                        &DAT_00117ed8 +
                        *(int *)(&DAT_00117ed8 +
                                *(long *)(*(long *)(param_2 + 8) + lVar1 * 0x28) * 4));
    return puVar2;
  }
  *(undefined *)(param_1 + 1) = 0;
  *param_1 = 7;
  return param_1;
}