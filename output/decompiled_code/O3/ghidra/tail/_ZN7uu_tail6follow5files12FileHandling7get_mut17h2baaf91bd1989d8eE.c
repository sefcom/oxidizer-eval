long __rustcall uu_tail::follow::files::FileHandling::get_mut(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined auStack_28 [24];
  
  canonicalize_path(auStack_28);
                    /* try { // try from 002027c9 to 002027d3 has its CatchHandler @ 00202800 */
  lVar1 = hashbrown::map::HashMap<K,V,S,A>::get_inner_mut(param_1 + 0x18,auStack_28);
  if (lVar1 != 0) {
    core::ptr::drop_in_place<std::path::PathBuf>(auStack_28);
    return lVar1 + 0x18;
  }
                    /* try { // try from 002027f3 to 002027ff has its CatchHandler @ 00202800 */
  uVar2 = core::option::unwrap_failed(&PTR_s_src_uu_tail_src_follow_files_rs_002bd970);
                    /* catch() { ... } // from try @ 002027c9 with catch @ 00202800
                       catch() { ... } // from try @ 002027f3 with catch @ 00202800 */
                    /* try { // try from 00202803 to 0020280a has its CatchHandler @ 00202813 */
  core::ptr::drop_in_place<std::path::PathBuf>(auStack_28);
  lVar1 = _Unwind_Resume(uVar2);
  return lVar1;
}