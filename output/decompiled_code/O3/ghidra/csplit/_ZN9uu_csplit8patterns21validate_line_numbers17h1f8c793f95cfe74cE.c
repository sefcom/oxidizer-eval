void __rustcall uu_csplit::patterns::validate_line_numbers(long *param_1,long param_2,long param_3)

{
  long local_40;
  long local_38;
  long local_30;
  long local_28;
  long local_20;
  long lStack_18;
  long local_10;
  
  local_38 = param_3 * 0x38 + param_2;
  local_40 = param_2;
  core::iter::traits::iterator::Iterator::try_fold(&local_30,&local_40);
  if (local_30 != 0xc) {
    param_1[4] = local_10;
    param_1[2] = local_20;
    param_1[3] = lStack_18;
    param_1[1] = local_28;
  }
  *param_1 = local_30;
  return;
}