long __rustcall uu_head::read_but_last_n_bytes(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined auVar10 [16];
  undefined auStack_10030 [65536];
  
  puVar1 = &stack0xffffffffffffffd0;
  do {
    puVar7 = puVar1;
    *(undefined8 *)(puVar7 + -0x1000) = 0;
    puVar1 = puVar7 + -0x1000;
  } while (puVar7 + -0x1000 != auStack_10030);
  if (param_2 == 0) {
    lVar9 = read_n_bytes(param_1);
    return lVar9;
  }
  *(long *)(puVar7 + -0x1020) = param_2;
  *(undefined8 *)(puVar7 + -0x1050) = 0x1b97a3;
  uVar3 = std::io::stdio::stdout();
  *(undefined8 *)(puVar7 + -0x1008) = uVar3;
  *(undefined8 *)(puVar7 + -0x1050) = 0x1b97b3;
  uVar3 = std::io::stdio::Stderr::lock(puVar7 + -0x1008);
  *(undefined8 *)(puVar7 + -0x1040) = uVar3;
  *(undefined8 *)(puVar7 + -0x1038) = 0;
  *(undefined8 *)(puVar7 + -0x1030) = 1;
  *(undefined8 *)(puVar7 + -0x1028) = 0;
  puVar1 = puVar7 + -0x1000;
  *(undefined8 *)(puVar7 + -0x1018) = 0;
  *(undefined8 *)(puVar7 + -0x1050) = 0x1b97ef;
  (*(code *)PTR_memset_00231160)(puVar1,0,0x10000);
  while( true ) {
    while( true ) {
                    /* try { // try from 001b9800 to 001b9834 has its CatchHandler @ 001b9965 */
      *(undefined8 *)(puVar7 + -0x1050) = 0x1b9810;
      auVar10 = _<std::io::buffered::bufreader::BufReader<R>as_std::io::Read>::read
                          (param_1,puVar1,0x10000);
      lVar9 = auVar10._8_8_;
      if (auVar10._0_8_ != 0) break;
      if (lVar9 == 0) {
                    /* try { // try from 001b9945 to 001b994e has its CatchHandler @ 001b995e */
        *(undefined8 *)(puVar7 + -0x1050) = 0x1b994f;
        core::ptr::drop_in_place<alloc::vec::Vec<u8>>(puVar7 + -0x1038);
        *(undefined8 *)(puVar7 + -0x1050) = 0x1b9959;
        core::ptr::drop_in_place<std::io::stdio::StdoutLock>(*(undefined8 *)(puVar7 + -0x1040));
        return 0;
      }
      uVar5 = *(long *)(puVar7 + -0x1018) + lVar9;
      *(ulong *)(puVar7 + -0x1018) = uVar5;
      if (*(ulong *)(puVar7 + -0x1020) < uVar5) {
                    /* try { // try from 001b9861 to 001b98f8 has its CatchHandler @ 001b9963 */
        *(undefined8 *)(puVar7 + -0x1050) = 0x1b986c;
        lVar4 = _<std::io::stdio::StdoutLock_as_std::io::Write>::write_all
                          (puVar7 + -0x1040,*(undefined8 *)(puVar7 + -0x1030),
                           *(undefined8 *)(puVar7 + -0x1028));
        if (lVar4 != 0) goto LAB_001b9903;
        lVar8 = lVar9 - *(long *)(puVar7 + -0x1020);
        *(undefined8 *)(puVar7 + -0x1050) = 0x1b9899;
        uVar3 = _<core::ops::range::Range<usize>as_core::slice::index::SliceIndex<[T]>>::index
                          (0,*(long *)(puVar7 + -0x1028) + lVar8,puVar1,
                           &PTR_s_src_uu_head_src_head_rs_0022ce90);
        *(undefined8 *)(puVar7 + -0x1050) = 0x1b98a7;
        lVar4 = _<std::io::stdio::StdoutLock_as_std::io::Write>::write_all(puVar7 + -0x1040,uVar3);
        if (lVar4 != 0) goto LAB_001b9903;
        *(undefined8 *)(puVar7 + -0x1028) = 0;
        ppuVar6 = &PTR_s_src_uu_head_src_head_rs_0022cea8;
      }
      else {
        lVar9 = (lVar9 + *(ulong *)(puVar7 + -0x1020)) - uVar5;
        lVar8 = 0;
        ppuVar6 = &PTR_s_src_uu_head_src_head_rs_0022cec0;
      }
      *(undefined8 *)(puVar7 + -0x1050) = 0x1b98de;
      auVar10 = _<core::ops::range::Range<usize>as_core::slice::index::SliceIndex<[T]>>::index
                          (lVar8,lVar9,puVar1,ppuVar6);
      *(undefined8 *)(puVar7 + -0x1050) = 0x1b98ec;
      uVar3 = core::slice::iter::Iter<T>::make_slice(auVar10._0_8_,auVar10._8_8_ + auVar10._0_8_);
      *(undefined8 *)(puVar7 + -0x1050) = 0x1b98f9;
      ::alloc::vec::Vec<T,A>::append_elements(puVar7 + -0x1038,uVar3);
    }
    *(long *)(puVar7 + -0x1010) = lVar9;
    *(undefined8 *)(puVar7 + -0x1050) = 0x1b9825;
    cVar2 = std::io::error::Error::kind(lVar9);
    if (cVar2 != '#') break;
    *(undefined8 *)(puVar7 + -0x1050) = 0x1b9835;
    core::ptr::drop_in_place<std::io::error::Error>(puVar7 + -0x1010);
  }
  lVar4 = *(long *)(puVar7 + -0x1010);
LAB_001b9903:
                    /* try { // try from 001b9903 to 001b990c has its CatchHandler @ 001b995e */
  *(undefined8 *)(puVar7 + -0x1050) = 0x1b990d;
  core::ptr::drop_in_place<alloc::vec::Vec<u8>>(puVar7 + -0x1038);
  *(undefined8 *)(puVar7 + -0x1050) = 0x1b9917;
  core::ptr::drop_in_place<std::io::stdio::StdoutLock>(*(undefined8 *)(puVar7 + -0x1040));
  return lVar4;
}