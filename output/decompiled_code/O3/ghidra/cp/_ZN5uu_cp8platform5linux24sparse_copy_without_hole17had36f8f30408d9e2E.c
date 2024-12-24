ulong __rustcall
uu_cp::platform::linux::sparse_copy_without_hole
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined4 uVar9;
  long lVar10;
  undefined auVar11 [16];
  undefined auVar12 [16];
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  long local_130;
  undefined8 local_128;
  undefined local_120 [8];
  undefined8 local_118;
  undefined8 local_110;
  int local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  ulong uStack_f0;
  int local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  ulong uStack_d0;
  ulong local_98;
  
  std::fs::File::open(&local_e8,param_1,param_2);
  if (local_e8 == 0) {
    local_13c = uStack_e4;
                    /* try { // try from 00212620 to 0021262f has its CatchHandler @ 002128a5 */
    std::fs::File::create(&local_e8,param_3,param_4);
    uVar9 = uStack_e4;
    if (local_e8 == 0) {
      local_138 = uStack_e4;
                    /* try { // try from 00212649 to 002126b5 has its CatchHandler @ 002128a0 */
      std::fs::File::metadata(&local_e8,&local_13c);
      if (local_e8 == 2) {
        uVar8 = CONCAT44(uStack_dc,uStack_e0);
      }
      else {
        core::result::Result<T,E>::unwrap
                  (local_98 >> 0x3f,&PTR_s_src_uu_cp_src_platform_linux_rs_002b5dd0);
        iVar3 = (*(code *)PTR_ftruncate_002bb988)(uVar9,local_98);
        uVar2 = local_13c;
        if (iVar3 < 0) {
                    /* try { // try from 00212824 to 00212840 has its CatchHandler @ 002128a0 */
          uVar4 = std::sys::pal::unix::os::errno();
          uVar8 = (ulong)uVar4 << 0x20 | 2;
        }
        else {
          local_128 = core::cmp::min_by(local_98);
          _<u8_as_alloc::vec::spec_from_elem::SpecFromElem>::from_elem(local_120,local_128);
          local_130 = 0;
          local_134 = uVar2;
          while( true ) {
                    /* try { // try from 002126db to 002126e1 has its CatchHandler @ 0021289e */
            uVar9 = local_134;
            puVar1 = PTR_lseek_002bb980;
            core::result::Result<T,E>::unwrap(0,&PTR_s_src_uu_cp_src_platform_linux_rs_002b5de8);
            lVar5 = (*(code *)puVar1)(uVar9,local_130,3);
                    /* try { // try from 002126f4 to 002126fd has its CatchHandler @ 0021289e */
            core::result::Result<T,E>::unwrap(0,&PTR_s_src_uu_cp_src_platform_linux_rs_002b5e00);
            lVar6 = (*(code *)puVar1)(uVar9,lVar5,4);
            if ((lVar5 == -1) || (lVar6 == -1)) {
              core::ptr::drop_in_place<alloc::vec::Vec<u8>>(local_120);
              core::ptr::drop_in_place<std::fs::File>(local_138);
              core::ptr::drop_in_place<std::fs::File>(local_13c);
              return 0;
            }
            if ((lVar5 < -1) || (lVar6 < -1)) break;
            local_130 = lVar6;
                    /* try { // try from 0021273e to 0021274d has its CatchHandler @ 0021289e */
            core::iter::adapters::step_by::StepBy<I>::new(&local_108,lVar6 - lVar5,local_128);
            local_d8 = local_f8;
            uStack_d0 = uStack_f0;
            local_e8 = local_108;
            uStack_e4 = uStack_104;
            uStack_e0 = uStack_100;
            uStack_dc = uStack_fc;
            while( true ) {
              uVar7 = local_d8;
              if ((char)uStack_d0 != '\0') {
                uVar7 = 0;
              }
              uStack_d0 = uStack_d0 & 0xffffffffffffff00;
              auVar11 = _<core::ops::range::Range<T>as_core::iter::range::RangeIteratorImpl>::
                        spec_nth(&local_e8,uVar7);
              if (auVar11._0_8_ == 0) break;
              uVar7 = core::cmp::min_by((lVar6 - lVar5) - auVar11._8_8_,local_128);
                    /* try { // try from 002127b3 to 002127f2 has its CatchHandler @ 002128aa */
              auVar12 = _<core::ops::range::Range<usize>as_core::slice::index::SliceIndex<[T]>>::
                        index_mut(uVar7,local_118,local_110);
              lVar10 = auVar11._8_8_ + lVar5;
              uVar8 = std::os::unix::fs::FileExt::read_exact_at
                                (&local_13c,auVar12._0_8_,auVar12._8_8_,lVar10);
              if ((uVar8 != 0) ||
                 (uVar8 = std::os::unix::fs::FileExt::write_all_at
                                    (&local_138,auVar12._0_8_,auVar12._8_8_,lVar10), uVar8 != 0))
              goto LAB_00212869;
            }
          }
                    /* try { // try from 00212858 to 0021285d has its CatchHandler @ 0021289c */
          uVar4 = std::sys::pal::unix::os::errno();
          uVar8 = (ulong)uVar4 << 0x20 | 2;
LAB_00212869:
                    /* try { // try from 00212869 to 00212872 has its CatchHandler @ 002128a0 */
          core::ptr::drop_in_place<alloc::vec::Vec<u8>>(local_120);
          uVar9 = local_138;
        }
      }
      core::ptr::drop_in_place<std::fs::File>(uVar9);
    }
    else {
      uVar8 = CONCAT44(uStack_dc,uStack_e0);
    }
    core::ptr::drop_in_place<std::fs::File>(local_13c);
  }
  else {
    uVar8 = CONCAT44(uStack_dc,uStack_e0);
  }
  return uVar8;
}