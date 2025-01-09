long __rustcall uu_tail::follow::files::FileHandling::get_mut(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined auStack_28 [24];
  
  canonicalize_path(auStack_28);
                    /* try { // try from 0020e829 to 0020e833 has its CatchHandler @ 0020e860 */
  lVar1 = hashbrown::map::HashMap<K,V,S,A>::get_inner_mut(param_1 + 0x18,auStack_28);
  if (lVar1 != 0) {
    core::ptr::drop_in_place<std::path::PathBuf>(auStack_28);
    return lVar1 + 0x18;
  }
                    /* try { // try from 0020e853 to 0020e85f has its CatchHandler @ 0020e860 */
  uVar2 = core::option::unwrap_failed(&PTR_s_src_uu_tail_src_follow_files_rs_002bc4b0);
                    /* catch() { ... } // from try @ 0020e829 with catch @ 0020e860
                       catch() { ... } // from try @ 0020e853 with catch @ 0020e860 */
                    /* try { // try from 0020e863 to 0020e86a has its CatchHandler @ 0020e873 */
  core::ptr::drop_in_place<std::path::PathBuf>(auStack_28);
  lVar1 = _Unwind_Resume(uVar2);
  return lVar1;
}