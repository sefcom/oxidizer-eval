undefined8 __rustcall uu_dd::Output::sync(byte *param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(*(long *)(param_1 + 0x10) + 0x95) != '\0') {
                    /* WARNING: Could not recover jumptable at 0x001d74a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(&DAT_00123c44 + *(int *)(&DAT_00123c44 + (ulong)*param_1 * 4)))();
    return uVar1;
  }
  if (*(char *)(*(long *)(param_1 + 0x10) + 0x94) == '\0') {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x001d74d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(&DAT_00123c54 + *(int *)(&DAT_00123c54 + (ulong)*param_1 * 4)))();
  return uVar1;
}