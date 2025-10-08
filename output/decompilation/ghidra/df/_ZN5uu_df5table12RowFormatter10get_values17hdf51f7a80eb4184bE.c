void _ZN5uu_df5table12RowFormatter10get_values17hdf51f7a80eb4184bE
               (undefined8 *param_1,long *param_2)

{
  long lVar1;
  
  if (*(long *)(param_2[1] + 0x10) != 0) {
    lVar1 = *param_2;
                    /* WARNING: Could not recover jumptable at 0x0016c032. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_0011a880 + *(int *)(&DAT_0011a880 + (ulong)**(byte **)(param_2[1] + 8) * 4)))
              (lVar1 + 8,lVar1 + 0x68,lVar1,lVar1 + 0x20,
               &DAT_0011a880 + *(int *)(&DAT_0011a880 + (ulong)**(byte **)(param_2[1] + 8) * 4));
    return;
  }
  param_1[2] = 0;
  *param_1 = 0;
  param_1[1] = 8;
  return;
}