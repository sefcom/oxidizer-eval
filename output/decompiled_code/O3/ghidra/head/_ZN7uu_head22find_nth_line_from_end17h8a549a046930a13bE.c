undefined  [16] __rustcall
uu_head::find_nth_line_from_end(undefined8 param_1,long param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  char *pcVar6;
  long lVar7;
  undefined *puVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  bool bVar12;
  undefined auVar13 [16];
  undefined auStack_10030 [65536];
  
  puVar3 = &stack0xffffffffffffffd0;
  do {
    puVar8 = puVar3;
    *(undefined8 *)(puVar8 + -0x1000) = 0;
    puVar3 = puVar8 + -0x1000;
  } while (puVar8 + -0x1000 != auStack_10030);
  uVar9 = 1;
  *(undefined8 *)(puVar8 + -0x1050) = 0x1b9e67;
  auVar13 = _<std::fs::File_as_std::io::Seek>::seek(param_1,1,0);
  lVar5 = auVar13._8_8_;
  if (auVar13._0_8_ == 0) {
    *(undefined4 *)(puVar8 + -0x1034) = param_3;
    *(undefined8 *)(puVar8 + -0x1040) = param_1;
    lVar10 = 0;
    *(undefined8 *)(puVar8 + -0x1050) = 0x1b9e94;
    (*(code *)PTR_memset_00231958)(puVar8 + -0x1000,0,0x10000);
    *(undefined8 *)(puVar8 + -0x1050) = 0x1b9e9c;
    uVar4 = core::cmp::min_by(lVar5);
    *(undefined8 *)(puVar8 + -0x1050) = 0x1b9ea7;
    auVar13 = _<core::ops::range::Range<usize>as_core::slice::index::SliceIndex<[T]>>::index_mut
                        (uVar4,puVar8 + -0x1000);
    lVar7 = auVar13._8_8_;
    *(long *)(puVar8 + -0x1018) = auVar13._0_8_;
    *(long *)(puVar8 + -0x1028) = auVar13._0_8_ + lVar7;
    lVar11 = 0;
    *(long *)(puVar8 + -0x1020) = lVar5;
    *(long *)(puVar8 + -0x1030) = lVar7;
    do {
      *(undefined8 *)(puVar8 + -0x1050) = 0x1b9ef3;
      lVar5 = core::cmp::min_by(lVar7,lVar5 - lVar11);
      uVar4 = *(undefined8 *)(puVar8 + -0x1040);
      *(undefined8 *)(puVar8 + -0x1050) = 0x1b9f08;
      auVar13 = _<std::fs::File_as_std::io::Seek>::seek(uVar4,2,-lVar5);
      lVar5 = auVar13._8_8_;
      if (auVar13._0_8_ != 0) {
        bVar12 = true;
        goto LAB_001b9fa1;
      }
      uVar2 = *(undefined8 *)(puVar8 + -0x1018);
      *(undefined8 *)(puVar8 + -0x1050) = 0x1b9f24;
      lVar5 = std::io::Read::read_exact(uVar4,uVar2,lVar7);
      if (lVar5 != 0) {
        bVar12 = true;
        goto LAB_001b9fa1;
      }
      *(undefined8 *)(puVar8 + -0x1010) = uVar2;
      *(undefined8 *)(puVar8 + -0x1008) = *(undefined8 *)(puVar8 + -0x1028);
      *(undefined8 *)(puVar8 + -0x1050) = 0x1b9f49;
      pcVar6 = (char *)_<core::slice::iter::Iter<T>as_core::iter::traits::double_ended::DoubleEndedIterator>
                       ::next_back(puVar8 + -0x1010);
      lVar5 = *(long *)(puVar8 + -0x1020);
      uVar1 = *(undefined4 *)(puVar8 + -0x1034);
      while (pcVar6 != (char *)0x0) {
        lVar10 = (ulong)(*pcVar6 == (char)uVar1) + lVar10;
        if (lVar10 == param_2 + 1) {
          *(undefined8 *)(puVar8 + -0x1050) = 0x1b9f94;
          lVar7 = std::io::Seek::rewind(*(undefined8 *)(puVar8 + -0x1040));
          bVar12 = lVar7 != 0;
          lVar5 = lVar5 - lVar11;
          if (bVar12) {
            lVar5 = lVar7;
          }
          goto LAB_001b9fa1;
        }
        lVar11 = lVar11 + 1;
        *(undefined8 *)(puVar8 + -0x1050) = 0x1b9f80;
        pcVar6 = (char *)_<core::slice::iter::Iter<T>as_core::iter::traits::double_ended::DoubleEndedIterator>
                         ::next_back(puVar8 + -0x1010);
      }
      lVar7 = *(long *)(puVar8 + -0x1030);
    } while (lVar11 != lVar5);
    *(undefined8 *)(puVar8 + -0x1050) = 0x1b9fd5;
    lVar5 = std::io::Seek::rewind(*(undefined8 *)(puVar8 + -0x1040));
    bVar12 = lVar5 != 0;
LAB_001b9fa1:
    uVar9 = (ulong)bVar12;
  }
  auVar13._8_8_ = lVar5;
  auVar13._0_8_ = uVar9;
  return auVar13;
}