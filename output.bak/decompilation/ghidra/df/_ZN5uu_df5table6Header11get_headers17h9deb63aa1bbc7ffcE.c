void __rustcall uu_df::table::Header::get_headers(undefined8 *param_1,long param_2)

{
  byte *pbVar1;
  long local_70;
  long local_68;
  
  local_70 = *(long *)(param_2 + 8);
  local_68 = *(long *)(param_2 + 0x10) + local_70;
  pbVar1 = (byte *)_<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next
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