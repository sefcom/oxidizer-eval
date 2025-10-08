bool _ZN7uu_head22find_nth_line_from_end17h2ab1c0c6df65cb6bE
               (undefined8 param_1,long param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  char *pcVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  bool bVar12;
  undefined auVar13 [16];
  undefined auStack_10030 [65536];
  
  puVar3 = &stack0xffffffffffffffd0;
  do {
    puVar9 = puVar3;
    *(undefined8 *)(puVar9 + -0x1000) = 0;
    puVar3 = puVar9 + -0x1000;
  } while (puVar9 + -0x1000 != auStack_10030);
  bVar12 = true;
  *(undefined8 *)(puVar9 + -0x1040) = 0x167568;
  auVar13 = (*(code *)
              PTR__ZN47__LT_std__fs__File_u20_as_u20_std__io__Seek_GT_4seek17h04cf64217ea00d1dE_001fe7e8
            )(param_1,1,0);
  lVar7 = auVar13._8_8_;
  if ((auVar13 & (undefined  [16])0x1) == (undefined  [16])0x0) {
    *(undefined8 *)(puVar9 + -0x1030) = param_1;
    lVar11 = 0;
    *(undefined8 *)(puVar9 + -0x1040) = 0x16758d;
    (*(code *)PTR_memset_001fe810)(puVar9 + -0x1000,0,0x10000);
    lVar10 = 0;
    *(long *)(puVar9 + -0x1020) = lVar7;
    *(undefined4 *)(puVar9 + -0x1024) = param_3;
    *(long *)(puVar9 + -0x1018) = param_2 + 1;
    do {
      *(undefined8 *)(puVar9 + -0x1040) = 0x1675d5;
      lVar4 = _ZN4core3cmp3Ord3min17h08a96a0a44b5e327E(lVar7 - lVar10,0x10000);
      *(undefined8 *)(puVar9 + -0x1040) = 0x1675ed;
      auVar13 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_9index_mut17hafeb32239145e8d7E
                          (lVar4,puVar9 + -0x1000,0x10000,&PTR_s_src_uu_head_src_head_rs_001f7ce8);
      lVar5 = auVar13._0_8_;
      uVar2 = *(undefined8 *)(puVar9 + -0x1030);
      *(undefined8 *)(puVar9 + -0x1040) = 0x167606;
      uVar6 = (*(code *)
                PTR__ZN47__LT_std__fs__File_u20_as_u20_std__io__Seek_GT_4seek17h04cf64217ea00d1dE_001fe7e8
              )(uVar2,0,(lVar7 - lVar10) - lVar4);
      if ((uVar6 & 1) != 0) {
        return true;
      }
      *(undefined8 *)(puVar9 + -0x1040) = 0x16761c;
      lVar7 = _ZN3std2io4Read10read_exact17hc1cd067067766de9E(uVar2,lVar5,auVar13._8_8_);
      if (lVar7 != 0) {
        return true;
      }
      *(long *)(puVar9 + -0x1010) = lVar5;
      *(long *)(puVar9 + -0x1008) = lVar5 + auVar13._8_8_;
      *(undefined8 *)(puVar9 + -0x1040) = 0x16763f;
      pcVar8 = (char *)_ZN106__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__double_ended__DoubleEndedIterator_GT_9next_back17h1cf0d536d1ebcd32E
                                 (puVar9 + -0x1010);
      if (pcVar8 != (char *)0x0) {
        uVar1 = *(undefined4 *)(puVar9 + -0x1024);
        lVar7 = *(long *)(puVar9 + -0x1018);
        do {
          lVar11 = (ulong)(*pcVar8 == (char)uVar1) + lVar11;
          if (lVar11 == lVar7) {
            *(undefined8 *)(puVar9 + -0x1040) = 0x167694;
            lVar7 = _ZN3std2io4Seek6rewind17h5a487aea7136159bE(*(undefined8 *)(puVar9 + -0x1030));
            return lVar7 != 0;
          }
          lVar10 = lVar10 + 1;
          *(undefined8 *)(puVar9 + -0x1040) = 0x167680;
          pcVar8 = (char *)_ZN106__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__double_ended__DoubleEndedIterator_GT_9next_back17h1cf0d536d1ebcd32E
                                     (puVar9 + -0x1010);
        } while (pcVar8 != (char *)0x0);
      }
      lVar7 = *(long *)(puVar9 + -0x1020);
    } while (lVar10 != lVar7);
    *(undefined8 *)(puVar9 + -0x1040) = 0x1676d4;
    lVar7 = _ZN3std2io4Seek6rewind17h5a487aea7136159bE(*(undefined8 *)(puVar9 + -0x1030));
    bVar12 = lVar7 != 0;
  }
  return bVar12;
}