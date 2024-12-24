ulong __rustcall
uu_cp::platform::linux::sparse_copy
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined4 uVar7;
  ulong uVar8;
  undefined auVar9 [16];
  undefined4 local_f8;
  undefined4 local_f4;
  long local_f0;
  long local_e8;
  int local_e0;
  undefined4 local_dc;
  ulong local_d8;
  undefined8 local_d0;
  ulong local_90;
  undefined8 local_88;
  
  std::fs::File::open(&local_e0,param_1,param_2);
  uVar7 = local_dc;
  if (local_e0 == 0) {
    local_f8 = local_dc;
                    /* try { // try from 0021291f to 0021292e has its CatchHandler @ 00212aa9 */
    std::fs::File::create(&local_e0,param_3,param_4);
    if (local_e0 == 0) {
      local_f4 = local_dc;
                    /* try { // try from 00212948 to 002129c9 has its CatchHandler @ 00212aa4 */
      std::fs::File::metadata(&local_e0,&local_f8);
      if (local_e0 != 2) {
        core::result::Result<T,E>::unwrap
                  (local_90 >> 0x3f,&PTR_s_src_uu_cp_src_platform_linux_rs_002b5e30);
        iVar2 = (*(code *)PTR_ftruncate_002bb988)(local_dc,local_90);
        if (iVar2 < 0) {
          uVar3 = std::sys::pal::unix::os::errno();
          local_d8 = (ulong)uVar3 << 0x20 | 2;
        }
        else {
          std::fs::File::metadata(&local_e0,&local_f4);
          if (local_e0 != 2) {
            _<u8_as_alloc::vec::spec_from_elem::SpecFromElem>::from_elem(&local_e0,local_88);
            if (local_90 != 0) {
              uVar8 = 0;
              do {
                    /* try { // try from 002129f1 to 00212a47 has its CatchHandler @ 00212aae */
                auVar9 = _<std::fs::File_as_std::io::Read>::read(&local_f8,local_d8,local_d0);
                uVar6 = auVar9._8_8_;
                uVar5 = uVar6;
                if (auVar9._0_8_ != 0) {
LAB_00212a50:
                    /* try { // try from 00212a50 to 00212a8d has its CatchHandler @ 00212aa4 */
                  core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&local_e0);
                  local_d8 = uVar5;
                  local_dc = local_f4;
                  goto LAB_00212a5e;
                }
                auVar9 = _<core::ops::range::Range<usize>as_core::slice::index::SliceIndex<[T]>>::
                         index(uVar6,local_d8,local_d0);
                lVar4 = auVar9._0_8_;
                local_e8 = lVar4 + auVar9._8_8_;
                local_f0 = lVar4;
                cVar1 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::any
                                  (&local_f0);
                if ((cVar1 != '\0') &&
                   (uVar5 = std::os::unix::fs::FileExt::write_all_at
                                      (&local_f4,lVar4,auVar9._8_8_,uVar8), uVar5 != 0))
                goto LAB_00212a50;
                uVar8 = uVar8 + uVar6;
              } while (uVar8 < local_90);
            }
            core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&local_e0);
            core::ptr::drop_in_place<std::fs::File>(local_f4);
            core::ptr::drop_in_place<std::fs::File>(local_f8);
            return 0;
          }
        }
      }
LAB_00212a5e:
      core::ptr::drop_in_place<std::fs::File>(local_dc);
      uVar7 = local_f8;
    }
    core::ptr::drop_in_place<std::fs::File>(uVar7);
  }
  return local_d8;
}