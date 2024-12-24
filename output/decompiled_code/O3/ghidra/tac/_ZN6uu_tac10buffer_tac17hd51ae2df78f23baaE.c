long __rustcall
uu_tac::buffer_tac(undefined8 param_1,long param_2,char param_3,undefined8 param_4,long param_5)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined auVar5 [16];
  long local_108;
  long local_100;
  long local_f8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  long local_90;
  undefined8 local_88;
  long local_80;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_e0 = std::io::stdio::stdout();
  uVar1 = std::io::stdio::Stderr::lock(&local_e0);
  std::io::buffered::bufwriter::BufWriter<W>::with_capacity(&local_108,0x2000,uVar1);
  local_d8 = CONCAT31(local_d8._1_3_,1);
                    /* try { // try from 0029f7fa to 0029f811 has its CatchHandler @ 0029fa0f */
  ::memchr::memmem::FinderBuilder::build_reverse(&local_70,&local_d8,param_4,param_5);
  local_a8 = local_40;
  uStack_a0 = uStack_38;
  local_b8 = local_50;
  uStack_b0 = uStack_48;
  local_c8 = local_60;
  uStack_c0 = uStack_58;
  local_d8 = local_70;
  uStack_d4 = uStack_6c;
  uStack_d0 = uStack_68;
  uStack_cc = uStack_64;
  local_98 = 1;
  lVar4 = param_2;
  local_90 = param_2;
  local_88 = param_1;
  local_80 = param_2;
  if (param_3 == '\0') {
    do {
      while( true ) {
                    /* try { // try from 0029f920 to 0029f969 has its CatchHandler @ 0029fa14 */
        auVar5 = _<memchr::memmem::FindRevIter_as_core::iter::traits::iterator::Iterator>::next
                           (&local_d8);
        if (auVar5._0_8_ == 0) goto LAB_0029f981;
        lVar3 = auVar5._8_8_ + param_5;
        auVar5 = _<core::ops::range::Range<usize>as_core::slice::index::SliceIndex<[T]>>::index
                           (lVar3,lVar4,param_1,param_2,&PTR_s_src_uu_tac_src_tac_rs_003c90c8);
        lVar2 = local_f8;
        lVar4 = lVar3;
        if ((ulong)(local_108 - local_f8) <= auVar5._8_8_) break;
        (*(code *)PTR_memcpy_00406d58)(local_100 + local_f8,auVar5._0_8_);
        local_f8 = auVar5._8_8_ + lVar2;
      }
      lVar2 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(&local_108,auVar5._0_8_);
    } while (lVar2 == 0);
  }
  else {
    do {
      while( true ) {
                    /* try { // try from 0029f8a0 to 0029f8e8 has its CatchHandler @ 0029fa16 */
        auVar5 = _<memchr::memmem::FindRevIter_as_core::iter::traits::iterator::Iterator>::next
                           (&local_d8);
        lVar2 = auVar5._8_8_;
        if (auVar5._0_8_ == 0) goto LAB_0029f981;
        auVar5 = _<core::ops::range::Range<usize>as_core::slice::index::SliceIndex<[T]>>::index
                           (lVar2,lVar4,param_1,param_2,&PTR_s_src_uu_tac_src_tac_rs_003c90e0);
        lVar3 = local_f8;
        lVar4 = lVar2;
        if ((ulong)(local_108 - local_f8) <= auVar5._8_8_) break;
        (*(code *)PTR_memcpy_00406d58)(local_100 + local_f8,auVar5._0_8_);
        local_f8 = auVar5._8_8_ + lVar3;
      }
      lVar2 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(&local_108,auVar5._0_8_);
    } while (lVar2 == 0);
  }
  core::ptr::drop_in_place<memchr::memmem::FindRevIter>(&local_d8);
LAB_0029f9e5:
  core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutLock>>
            (&local_108);
  return lVar2;
LAB_0029f981:
  core::ptr::drop_in_place<memchr::memmem::FindRevIter>(&local_d8);
                    /* try { // try from 0029f98b to 0029f9a1 has its CatchHandler @ 0029fa0f */
  auVar5 = _<core::ops::range::Range<usize>as_core::slice::index::SliceIndex<[T]>>::index
                     (0,lVar4,param_1,param_2,&PTR_s_src_uu_tac_src_tac_rs_003c90b0);
  lVar4 = local_f8;
  if (auVar5._8_8_ < (ulong)(local_108 - local_f8)) {
    (*(code *)PTR_memcpy_00406d58)(local_100 + local_f8,auVar5._0_8_);
    local_f8 = auVar5._8_8_ + lVar4;
  }
  else {
                    /* try { // try from 0029f9d2 to 0029f9dc has its CatchHandler @ 0029fa0f */
    lVar2 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(&local_108,auVar5._0_8_);
    if (lVar2 != 0) goto LAB_0029f9e5;
  }
  core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutLock>>
            (&local_108);
  return 0;
}