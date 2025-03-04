void _ZN5uu_df5table12RowFormatter10get_values17h6dce5b584cdc4209E
               (undefined8 *param_1,long *param_2)

{
  long lVar1;
  byte *pbVar2;
  long local_40;
  long local_38;
  
  local_40 = *(long *)(param_2[1] + 8);
  local_38 = *(long *)(param_2[1] + 0x10) + local_40;
  pbVar2 = (byte *)_ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hd80283963ca975b5E
                             (&local_40);
  if (pbVar2 != (byte *)0x0) {
    lVar1 = *param_2;
                    /* WARNING: Could not recover jumptable at 0x001caf07. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_00115aa0 + *(int *)(&DAT_00115aa0 + (ulong)*pbVar2 * 4)))
              (lVar1 + 8,lVar1 + 0x68,lVar1,lVar1 + 0x30,
               &DAT_00115aa0 + *(int *)(&DAT_00115aa0 + (ulong)*pbVar2 * 4));
    return;
  }
  param_1[2] = 0;
  *param_1 = 0;
  param_1[1] = 8;
  return;
}