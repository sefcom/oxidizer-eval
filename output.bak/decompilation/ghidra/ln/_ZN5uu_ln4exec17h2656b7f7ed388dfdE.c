undefined8 __rustcall uu_ln::exec(long param_1,ulong param_2,long param_3)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
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
                      ("assertion failed: !files.is_empty(): ",0x23,
                       &PTR_s_src_uu_ln_src_ln_rs_0022cf50);
          }
          goto LAB_001b99ea;
        }
        _<alloc::vec::Vec<T,A>as_core::clone::Clone>::clone(local_50,param_1 + 0x30);
        local_38 = 0x8000000000000004;
      }
      uVar2 = ::alloc::boxed::Box<T>::new(local_50);
      return uVar2;
    }
    lVar3 = param_2 - 1;
    if (lVar3 == 0) {
      std::sys::os_str::bytes::Slice::to_owned(local_50,".",1);
                    /* try { // try from 001b990e to 001b991d has its CatchHandler @ 001b9a1b */
      uVar2 = link_files_in_dir(param_1,1,local_48,local_40,param_3);
    }
    else {
      if (param_2 == 0) {
        uVar2 = core::option::unwrap_failed(&PTR_s_src_uu_ln_src_ln_rs_0022ce78);
                    /* catch() { ... } // from try @ 001b990e with catch @ 001b9a1b */
                    /* try { // try from 001b9a1e to 001b9a45 has its CatchHandler @ 001b9a4e */
        core::ptr::drop_in_place<std::path::PathBuf>(local_50);
        uVar2 = _Unwind_Resume(uVar2);
        return uVar2;
      }
      std::sys::os_str::bytes::Slice::to_owned
                (local_50,*(undefined8 *)(param_1 + 8 + lVar3 * 0x18),
                 *(undefined8 *)(param_1 + 0x10 + lVar3 * 0x18));
                    /* try { // try from 001b998a to 001b99bc has its CatchHandler @ 001b9a2a */
      if ((param_2 < 3) && (cVar1 = std::path::Path::is_dir(local_48,local_40), cVar1 == '\0')) {
        core::ptr::drop_in_place<std::path::PathBuf>(local_50);
LAB_001b99ea:
        uVar2 = link(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
                     *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),param_3);
        return uVar2;
      }
      auVar4 = _<core::ops::range::Range<usize>as_core::slice::index::SliceIndex<[T]>>::index
                         (lVar3,param_1,param_2);
      uVar2 = link_files_in_dir(auVar4._0_8_,auVar4._8_8_,local_48,local_40,param_3);
    }
  }
  else {
    std::sys::os_str::bytes::Slice::to_owned
              (local_50,*(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x28));
                    /* try { // try from 001b98ba to 001b98c7 has its CatchHandler @ 001b9a39 */
    uVar2 = link_files_in_dir(param_1,param_2,local_48,local_40,param_3);
  }
  core::ptr::drop_in_place<std::path::PathBuf>(local_50);
  return uVar2;
}