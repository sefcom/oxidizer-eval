undefined  [16] _ZN5uu_wc10count_fast24count_bytes_using_splice17h131ffe0d704d0ba2E(void)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined auVar5 [16];
  int local_e0;
  int local_dc;
  int local_d8;
  int local_d4;
  undefined8 local_d0;
  ulong local_c8;
  undefined local_c0;
  undefined uStack_bf;
  undefined2 uStack_be;
  undefined2 uStack_bc;
  undefined2 uStack_ba;
  ulong local_98;
  
  local_c8 = 0x1b600000000;
  local_c0 = 0;
  uStack_be = 0;
  uStack_bc = 0;
  uStack_bf = 1;
  _ZN3std2fs11OpenOptions4open17h8efffdd82d909b7eE(&local_d8,&local_c8);
  if (local_d8 == 1) {
    _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17hb3643e18d0a3be8dE(local_d0);
    uVar3 = 1;
    lVar4 = 0;
    goto LAB_001631ea;
  }
  local_e0 = local_d4;
                    /* try { // try from 00163108 to 00163164 has its CatchHandler @ 0016321e */
  (*(code *)PTR__ZN3nix3sys4stat5fstat17h932ea0f7705da4a5E_001ffc28)(&local_c8,local_d4);
  if ((local_c8 & 1) == 0) {
    if ((((uint)(local_98 >> 0x20) & 0xfffff000 | (uint)(local_98 >> 8) & 0xfff) != 1) ||
       (((uint)(local_98 >> 0xc) & 0xffffff00 | (uint)local_98 & 0xff) != 3)) goto LAB_001631dc;
    uVar3 = (*(code *)PTR__ZN6uucore8features5pipes4pipe17h49247394f7e7f0ceE_001ffc30)();
    if ((int)uVar3 == -1) goto LAB_001631dc;
    local_d8 = (int)((ulong)uVar3 >> 0x20);
    lVar4 = 0;
    local_dc = (int)uVar3;
    do {
                    /* try { // try from 00163190 to 001631b9 has its CatchHandler @ 00163230 */
      _ZN3nix5fcntl6splice17h2b33ac4e3c6d9a50E(&local_c8,&local_d8);
      if ((local_c8 & 1) != 0) break;
      lVar1 = CONCAT26(uStack_ba,
                       CONCAT24(uStack_bc,CONCAT22(uStack_be,CONCAT11(uStack_bf,local_c0))));
      if (lVar1 == 0) {
        _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17h10ceb594d39f53a5E(local_d8);
        _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17h10ceb594d39f53a5E(local_dc);
        _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17h10ceb594d39f53a5E(local_e0);
        uVar3 = 0;
        goto LAB_001631ea;
      }
      iVar2 = _ZN6uucore8features5pipes12splice_exact17h5944a560648a0e2aE(&local_dc,&local_e0,lVar1)
      ;
      lVar4 = lVar4 + lVar1;
    } while (iVar2 == 0x86);
    _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17h10ceb594d39f53a5E(local_d8);
    _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17h10ceb594d39f53a5E(local_dc);
    local_d4 = local_e0;
  }
  else {
LAB_001631dc:
    lVar4 = 0;
  }
  _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17h10ceb594d39f53a5E(local_d4);
  uVar3 = 1;
LAB_001631ea:
  auVar5._8_8_ = lVar4;
  auVar5._0_8_ = uVar3;
  return auVar5;
}