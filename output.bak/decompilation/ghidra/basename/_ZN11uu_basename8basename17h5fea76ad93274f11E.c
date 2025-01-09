undefined8 * __rustcall
uu_basename::basename
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined local_f0 [8];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  char local_98 [56];
  undefined local_60 [56];
  
  auVar6._8_8_ = param_3;
  auVar6._0_8_ = param_2;
  auVar5 = core::str::_<impl_str>::trim_end_matches(param_2,param_3);
  if (auVar5._8_8_ != 0) {
    auVar6 = auVar5;
  }
  std::sys::os_str::bytes::Slice::to_owned(local_f0,auVar6._0_8_,auVar6._8_8_);
                    /* try { // try from 001ab2dd to 001ab3a7 has its CatchHandler @ 001ab3e4 */
  std::path::Path::components(&local_d8,local_e8,local_e0);
  local_60[0] = 10;
  core::iter::traits::iterator::Iterator::fold(local_98,&local_d8,local_60);
  if (local_98[0] == '\n') {
    *param_1 = 0;
    param_1[1] = 1;
    param_1[2] = 0;
  }
  else {
    uVar3 = std::path::Component::as_os_str(local_98);
    std::ffi::os_str::_<impl_core::convert::TryFrom<&std::ffi::os_str::OsStr>for&str>::try_from
              (&local_d8,uVar3);
    uVar3 = local_c8;
    if (CONCAT44(uStack_d4,local_d8) != 0) {
                    /* try { // try from 001ab3d7 to 001ab3e3 has its CatchHandler @ 001ab3e4 */
      uVar3 = core::option::unwrap_failed(&PTR_DAT_0020eaf0);
                    /* catch() { ... } // from try @ 001ab2dd with catch @ 001ab3e4
                       catch() { ... } // from try @ 001ab3d7 with catch @ 001ab3e4 */
                    /* try { // try from 001ab3e7 to 001ab3f0 has its CatchHandler @ 001ab3f9 */
      core::ptr::drop_in_place<std::path::PathBuf>(local_f0);
      puVar4 = (undefined8 *)_Unwind_Resume(uVar3);
      return puVar4;
    }
    uVar1 = CONCAT44(uStack_cc,uStack_d0);
    auVar5._8_8_ = local_c8;
    auVar5._0_8_ = uVar1;
    cVar2 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(uVar1,local_c8,param_4,param_5);
    if (cVar2 == '\0') {
      auVar6 = _<&str_as_core::str::pattern::Pattern>::strip_suffix_of(param_4,param_5,uVar1,uVar3);
      if (auVar6._0_8_ != 0) {
        auVar5 = auVar6;
      }
      _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_d8,auVar5._0_8_,auVar5._8_8_);
    }
    else {
      _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_d8,uVar1,uVar3);
    }
    param_1[2] = local_c8;
    *(undefined4 *)param_1 = local_d8;
    *(undefined4 *)((long)param_1 + 4) = uStack_d4;
    *(undefined4 *)(param_1 + 1) = uStack_d0;
    *(undefined4 *)((long)param_1 + 0xc) = uStack_cc;
  }
  core::ptr::drop_in_place<std::path::PathBuf>(local_f0);
  return param_1;
}