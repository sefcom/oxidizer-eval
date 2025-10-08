uint _ZN7uu_stat6Stater4exec17h69251542c7e1d7abE(long param_1)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  int local_e0 [14];
  uint local_a8;
  
  _ZN3std2fs8metadata17h65b87d3586103590E(local_e0);
  _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17h5bd07a05211b9dc2E
            (local_e0);
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 == 0) {
    uVar4 = 0;
  }
  else {
    lVar2 = *(long *)(param_1 + 8);
    lVar5 = 0;
    uVar4 = 0;
    do {
      uVar3 = _ZN7uu_stat6Stater7do_stat17he2e3ae60926a8076E
                        (param_1,*(undefined8 *)(lVar2 + 8 + lVar5),
                         *(undefined8 *)(lVar2 + 0x10 + lVar5),
                         local_e0[0] != 2 && (local_a8 & 0xf000) == 0x1000);
      uVar4 = uVar4 | uVar3;
      lVar5 = lVar5 + 0x18;
    } while (lVar1 * 0x18 != lVar5);
  }
  return uVar4;
}