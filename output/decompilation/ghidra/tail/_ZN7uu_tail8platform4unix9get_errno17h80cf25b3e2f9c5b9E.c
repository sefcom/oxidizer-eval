undefined4 _ZN7uu_tail8platform4unix9get_errno17h80cf25b3e2f9c5b9E(void)

{
  code *pcVar1;
  uint *puVar2;
  ulong local_20;
  char local_18 [4];
  undefined4 local_14;
  
  puVar2 = (uint *)(*(code *)PTR___errno_location_0027d8e0)();
  local_20 = (ulong)*puVar2 << 0x20 | 2;
  _ZN3std2io5error14repr_bitpacked11decode_repr17h81d2266bae0a83f6E(local_18);
  if (local_18[0] == '\0') {
    _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17hf9bb92bdb8e06921E(&local_20);
    return local_14;
  }
                    /* try { // try from 001a6861 to 001a686d has its CatchHandler @ 001a6870 */
  (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_0027d528)
            (&PTR_s_src_uu_tail_src_platform_unix_rs_00273968);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}