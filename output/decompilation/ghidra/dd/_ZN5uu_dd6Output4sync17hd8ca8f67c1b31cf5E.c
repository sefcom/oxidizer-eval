undefined8 _ZN5uu_dd6Output4sync17hd8ca8f67c1b31cf5E(byte *param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(*(long *)(param_1 + 0x10) + 0x95) != '\0') {
                    /* WARNING: Could not recover jumptable at 0x00190311. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(&DAT_0011f9d8 + *(int *)(&DAT_0011f9d8 + (ulong)*param_1 * 4)))();
    return uVar1;
  }
  if (*(char *)(*(long *)(param_1 + 0x10) + 0x94) == '\0') {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00190341. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(&DAT_0011f9e8 + *(int *)(&DAT_0011f9e8 + (ulong)*param_1 * 4)))();
  return uVar1;
}