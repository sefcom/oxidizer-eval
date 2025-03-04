long _ZN7uu_tail6follow5files12FileHandling7get_mut17h1a80ce1ee4fcf7dcE(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined auStack_28 [24];
  
  _ZN7uu_tail6follow5files12FileHandling17canonicalize_path17ha359b021a4419771E(auStack_28);
                    /* try { // try from 0020e829 to 0020e833 has its CatchHandler @ 0020e860 */
  lVar1 = _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_13get_inner_mut17h78f2dc0a7938c5d6E
                    (param_1 + 0x18,auStack_28);
  if (lVar1 != 0) {
    _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hd68403fe0abd735bE(auStack_28);
    return lVar1 + 0x18;
  }
                    /* try { // try from 0020e853 to 0020e85f has its CatchHandler @ 0020e860 */
  uVar2 = _ZN4core6option13unwrap_failed17h0e11329e76906eaaE
                    (&PTR_s_src_uu_tail_src_follow_files_rs_002bc4b0);
                    /* catch() { ... } // from try @ 0020e829 with catch @ 0020e860
                       catch() { ... } // from try @ 0020e853 with catch @ 0020e860 */
                    /* try { // try from 0020e863 to 0020e86a has its CatchHandler @ 0020e873 */
  _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hd68403fe0abd735bE(auStack_28);
  lVar1 = _Unwind_Resume(uVar2);
  return lVar1;
}