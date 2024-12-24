undefined8 __rustcall
uu_tail::follow::files::FileHandling::remove
          (undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined auStack_108 [24];
  int local_f0 [54];
  
  canonicalize_path(auStack_108,param_3,param_4);
                    /* try { // try from 002026d7 to 002026e6 has its CatchHandler @ 00202726 */
  hashbrown::map::HashMap<K,V,S,A>::remove(local_f0,param_2 + 0x18,auStack_108);
  if (local_f0[0] != 3) {
    (*(code *)PTR_memcpy_002c47b8)(param_1,local_f0,0xd8);
    core::ptr::drop_in_place<std::path::PathBuf>(auStack_108);
    return param_1;
  }
                    /* try { // try from 00202719 to 00202725 has its CatchHandler @ 00202726 */
  uVar1 = core::option::unwrap_failed(&PTR_s_src_uu_tail_src_follow_files_rs_002bd940);
                    /* catch() { ... } // from try @ 002026d7 with catch @ 00202726
                       catch() { ... } // from try @ 00202719 with catch @ 00202726 */
                    /* try { // try from 00202729 to 00202730 has its CatchHandler @ 00202739 */
  core::ptr::drop_in_place<std::path::PathBuf>(auStack_108);
  uVar1 = _Unwind_Resume(uVar1);
  return uVar1;
}