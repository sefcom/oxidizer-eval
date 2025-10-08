void _ZN2rg3run17h4fa263ea092112c0E(undefined *param_1,long *param_2)

{
  ulong uVar1;
  undefined local_3a8 [802];
  byte local_86;
  
  uVar1 = 1;
  if (*param_2 - 2U < 3) {
    uVar1 = *param_2 - 2U;
  }
  if (uVar1 != 0) {
    if (uVar1 == 1) {
      (*(code *)PTR_memcpy_00526658)(local_3a8,param_2,0x398);
                    /* WARNING: Could not recover jumptable at 0x00359b55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&DAT_00163888 + *(int *)(&DAT_00163888 + (ulong)local_86 * 4)))();
      return;
    }
    *(long *)(param_1 + 8) = param_2[1];
    *param_1 = 1;
    return;
  }
  _ZN2rg7special17h2a430c08df28a109E(param_1,*(undefined4 *)(param_2 + 1));
  return;
}