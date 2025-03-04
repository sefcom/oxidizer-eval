void _ZN5uu_df5table6Header11get_headers17h9deb63aa1bbc7ffcE(undefined8 *param_1,long param_2)

{
  byte *pbVar1;
  long local_70;
  long local_68;
  
  local_70 = *(long *)(param_2 + 8);
  local_68 = *(long *)(param_2 + 0x10) + local_70;
  pbVar1 = (byte *)_ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hd80283963ca975b5E
                             (&local_70);
  if (pbVar1 != (byte *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x001cb1e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_00115ad0 + *(int *)(&DAT_00115ad0 + (ulong)*pbVar1 * 4)))();
    return;
  }
  param_1[2] = 0;
  *param_1 = 0;
  param_1[1] = 8;
  return;
}