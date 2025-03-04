ulong _ZN7uu_tail8platform4unix9get_errno17hcaebd61abd6c9378E(void)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  char local_28 [4];
  uint local_24;
  
  uVar1 = _ZN3std3sys3pal4unix2os5errno17hddfd8da9c36b1a59E();
  uVar3 = (ulong)uVar1 << 0x20 | 2;
  _ZN3std2io5error14repr_bitpacked11decode_repr17h62460d19c1e0d17bE(local_28,uVar3);
  if (local_28[0] == '\0') {
    _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17hadb3f722d4799b91E(uVar3);
    return (ulong)local_24;
  }
                    /* try { // try from 0020c14a to 0020c156 has its CatchHandler @ 0020c157 */
  uVar2 = _ZN4core6option13unwrap_failed17h0e11329e76906eaaE
                    (&PTR_s_src_uu_tail_src_platform_unix_rs_002bc368);
                    /* catch() { ... } // from try @ 0020c14a with catch @ 0020c157 */
                    /* try { // try from 0020c15a to 0020c161 has its CatchHandler @ 0020c16a */
  _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17hadb3f722d4799b91E(uVar3);
  uVar3 = _Unwind_Resume(uVar2);
  return uVar3;
}