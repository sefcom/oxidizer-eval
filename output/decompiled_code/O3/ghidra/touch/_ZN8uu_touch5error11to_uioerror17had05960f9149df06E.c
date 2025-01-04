void __rustcall uu_touch::error::to_uioerror(void)

{
  byte local_20 [16];
  
  std::io::error::repr_bitpacked::decode_repr(local_20);
                    /* WARNING: Could not recover jumptable at 0x002c934a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_00175d74 + *(int *)(&DAT_00175d74 + (ulong)local_20[0] * 4)))();
  return;
}