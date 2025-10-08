void _ZN5uu_df5table6Header11get_headers17h2b6e3eeea1b48b3eE(undefined8 *param_1,long param_2)

{
  if (*(long *)(param_2 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0016c2bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_0011a8b0 + *(int *)(&DAT_0011a8b0 + (ulong)**(byte **)(param_2 + 8) * 4)))();
    return;
  }
  param_1[2] = 0;
  *param_1 = 0;
  param_1[1] = 8;
  return;
}