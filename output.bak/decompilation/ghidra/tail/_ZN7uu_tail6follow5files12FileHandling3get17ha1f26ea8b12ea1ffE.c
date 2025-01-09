long __rustcall uu_tail::follow::files::FileHandling::get(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined auStack_28 [24];
  
  canonicalize_path(auStack_28);
                    /* try { // try from 0020e7b9 to 0020e7c3 has its CatchHandler @ 0020e7f0 */
  lVar1 = hashbrown::map::HashMap<K,V,S,A>::get_inner(param_1 + 0x18,auStack_28);
  if (lVar1 != 0) {
    core::ptr::drop_in_place<std::path::PathBuf>(auStack_28);
    return lVar1 + 0x18;
  }
                    /* try { // try from 0020e7e3 to 0020e7ef has its CatchHandler @ 0020e7f0 */
  uVar2 = core::option::unwrap_failed(&PTR_s_src_uu_tail_src_follow_files_rs_002bc498);
                    /* catch() { ... } // from try @ 0020e7b9 with catch @ 0020e7f0
                       catch() { ... } // from try @ 0020e7e3 with catch @ 0020e7f0 */
                    /* try { // try from 0020e7f3 to 0020e7fa has its CatchHandler @ 0020e803 */
  core::ptr::drop_in_place<std::path::PathBuf>(auStack_28);
  lVar1 = _Unwind_Resume(uVar2);
  return lVar1;
}