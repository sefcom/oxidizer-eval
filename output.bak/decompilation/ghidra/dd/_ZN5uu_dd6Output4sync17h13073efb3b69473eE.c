undefined8 __rustcall uu_dd::Output::sync(byte *param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(*(long *)(param_1 + 0x10) + 0x95) != '\0') {
                    /* WARNING: Could not recover jumptable at 0x001d7331. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(&DAT_00123b4c + *(int *)(&DAT_00123b4c + (ulong)*param_1 * 4)))();
    return uVar1;
  }
  if (*(char *)(*(long *)(param_1 + 0x10) + 0x94) == '\0') {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x001d7361. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(&DAT_00123b5c + *(int *)(&DAT_00123b5c + (ulong)*param_1 * 4)))();
  return uVar1;
}