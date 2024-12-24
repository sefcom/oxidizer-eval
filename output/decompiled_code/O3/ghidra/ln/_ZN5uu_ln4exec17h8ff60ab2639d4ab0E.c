undefined8 __rustcall uu_ln::exec(long param_1,ulong param_2,long param_3)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined auVar4 [16];
  undefined local_50 [8];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  if (*(long *)(param_3 + 0x18) == -0x8000000000000000) {
    if (*(char *)(param_3 + 0x33) != '\0') {
      if (param_2 == 1) {
        _<alloc::vec::Vec<T,A>as_core::clone::Clone>::clone(local_50,param_1);
        local_38 = 0x8000000000000003;
      }
      else {
        if (param_2 < 3) {
          if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
            core::panicking::panic
                      ("assertion failed: !files.is_empty()",0x23,
                       &PTR_s_src_uu_ln_src_ln_rs_0022d678);
          }
          goto LAB_001b96ce;
        }
        _<alloc::vec::Vec<T,A>as_core::clone::Clone>::clone(local_50,param_1 + 0x30);
        local_38 = 0x8000000000000004;
      }
      uVar3 = ::alloc::boxed::Box<T>::new(local_50);
      return uVar3;
    }
    if (param_2 == 1) {
      std::sys::os_str::bytes::Slice::to_owned(local_50,".",1);
                    /* try { // try from 001b95eb to 001b95fa has its CatchHandler @ 001b96ff */
      uVar3 = link_files_in_dir(param_1,1,local_48,local_40,param_3);
    }
    else {
      if (param_2 == 0) {
        uVar3 = core::option::unwrap_failed(&PTR_s_src_uu_ln_src_ln_rs_0022d5a0);
                    /* catch() { ... } // from try @ 001b95eb with catch @ 001b96ff */
                    /* try { // try from 001b9702 to 001b9729 has its CatchHandler @ 001b9732 */
        core::ptr::drop_in_place<std::path::PathBuf>(local_50);
        uVar3 = _Unwind_Resume(uVar3);
        return uVar3;
      }
      lVar1 = param_2 - 1;
      std::sys::os_str::bytes::Slice::to_owned
                (local_50,*(undefined8 *)(param_1 + 8 + lVar1 * 0x18),
                 *(undefined8 *)(param_1 + 0x10 + lVar1 * 0x18));
                    /* try { // try from 001b966e to 001b96a0 has its CatchHandler @ 001b970e */
      if ((param_2 < 3) && (cVar2 = std::path::Path::is_dir(local_48,local_40), cVar2 == '\0')) {
        core::ptr::drop_in_place<std::path::PathBuf>(local_50);
LAB_001b96ce:
        uVar3 = link(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
                     *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),param_3);
        return uVar3;
      }
      auVar4 = _<core::ops::range::Range<usize>as_core::slice::index::SliceIndex<[T]>>::index
                         (lVar1,param_1,param_2);
      uVar3 = link_files_in_dir(auVar4._0_8_,auVar4._8_8_,local_48,local_40,param_3);
    }
  }
  else {
    std::sys::os_str::bytes::Slice::to_owned
              (local_50,*(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x28));
                    /* try { // try from 001b959a to 001b95a7 has its CatchHandler @ 001b971d */
    uVar3 = link_files_in_dir(param_1,param_2,local_48,local_40,param_3);
  }
  core::ptr::drop_in_place<std::path::PathBuf>(local_50);
  return uVar3;
}