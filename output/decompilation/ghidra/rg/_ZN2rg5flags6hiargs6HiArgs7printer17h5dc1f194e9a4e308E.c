void _ZN2rg5flags6hiargs6HiArgs7printer17h5dc1f194e9a4e308E
               (undefined8 *param_1,long param_2,byte param_3,undefined8 param_4)

{
  if (*(char *)(param_2 + 0x38a) != '\0') {
    _ZN2rg5flags6hiargs6HiArgs15printer_summary17h1562db8c3a15b7baE
              (param_1 + 1,param_2,param_4,param_3 == 2 | 4);
    *param_1 = 2;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0034f190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_00162d00 + *(int *)(&DAT_00162d00 + (ulong)param_3 * 4)))();
  return;
}