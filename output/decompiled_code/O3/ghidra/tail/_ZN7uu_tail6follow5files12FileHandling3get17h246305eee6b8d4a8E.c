long __rustcall uu_tail::follow::files::FileHandling::get(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined auStack_28 [24];
  
  canonicalize_path(auStack_28);
                    /* try { // try from 00202759 to 00202763 has its CatchHandler @ 00202790 */
  lVar1 = hashbrown::map::HashMap<K,V,S,A>::get_inner(param_1 + 0x18,auStack_28);
  if (lVar1 != 0) {
    core::ptr::drop_in_place<std::path::PathBuf>(auStack_28);
    return lVar1 + 0x18;
  }
                    /* try { // try from 00202783 to 0020278f has its CatchHandler @ 00202790 */
  uVar2 = core::option::unwrap_failed(&PTR_s_src_uu_tail_src_follow_files_rs_002bd958);
                    /* catch() { ... } // from try @ 00202759 with catch @ 00202790
                       catch() { ... } // from try @ 00202783 with catch @ 00202790 */
                    /* try { // try from 00202793 to 0020279a has its CatchHandler @ 002027a3 */
  core::ptr::drop_in_place<std::path::PathBuf>(auStack_28);
  lVar1 = _Unwind_Resume(uVar2);
  return lVar1;
}