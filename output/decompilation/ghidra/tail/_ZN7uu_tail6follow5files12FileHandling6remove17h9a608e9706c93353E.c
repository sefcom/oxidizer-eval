undefined8
_ZN7uu_tail6follow5files12FileHandling6remove17h9a608e9706c93353E
          (undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined auStack_108 [24];
  int local_f0 [54];
  
  _ZN7uu_tail6follow5files12FileHandling17canonicalize_path17ha359b021a4419771E
            (auStack_108,param_3,param_4);
                    /* try { // try from 0020e737 to 0020e746 has its CatchHandler @ 0020e786 */
  _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_6remove17h60eda5622c421fc6E
            (local_f0,param_2 + 0x18,auStack_108);
  if (local_f0[0] != 3) {
    (*(code *)PTR_memcpy_002c2760)(param_1,local_f0,0xd8);
    _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hd68403fe0abd735bE(auStack_108);
    return param_1;
  }
                    /* try { // try from 0020e779 to 0020e785 has its CatchHandler @ 0020e786 */
  uVar1 = _ZN4core6option13unwrap_failed17h0e11329e76906eaaE
                    (&PTR_s_src_uu_tail_src_follow_files_rs_002bc480);
                    /* catch() { ... } // from try @ 0020e737 with catch @ 0020e786
                       catch() { ... } // from try @ 0020e779 with catch @ 0020e786 */
                    /* try { // try from 0020e789 to 0020e790 has its CatchHandler @ 0020e799 */
  _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hd68403fe0abd735bE(auStack_108);
  uVar1 = _Unwind_Resume(uVar1);
  return uVar1;
}