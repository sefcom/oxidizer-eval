void __rustcall uu_rmdir::dir_not_empty(undefined8 *param_1)

{
  byte local_40 [48];
  
  std::io::error::repr_bitpacked::decode_repr(local_40,*param_1);
                    /* WARNING: Could not recover jumptable at 0x001aa56d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_0011be04 + *(int *)(&DAT_0011be04 + (ulong)local_40[0] * 4)))();
  return;
}