undefined  [16]
_ZN5uu_wc10count_fast24count_bytes_using_splice17h6c4ad4a8ee75a3f4E(undefined8 param_1)

{
  long lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined auVar6 [16];
  int local_e0;
  int local_dc;
  int local_d8;
  int local_d4;
  undefined8 local_d0;
  undefined8 local_c8;
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
  _ZN3std2fs11OpenOptions4open17h0b5101c42a630ef2E(&local_d8,&local_c8,&DAT_0011e2be,9);
  if (local_d8 != 0) {
    _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h1f47a50be6f5ae8eE(local_d0);
    lVar5 = 0;
    goto LAB_001b854d;
  }
  local_e0 = local_d4;
                    /* try { // try from 001b8453 to 001b84b4 has its CatchHandler @ 001b8586 */
  _ZN3nix3sys4stat5fstat17h5414de4d70a08ddbE(&local_c8,local_d4);
  if ((int)local_c8 == 0) {
    if (((uint)(local_98 >> 0x20) & 0xfffff000 | (uint)(local_98 >> 8) & 0xfff) != 1)
    goto LAB_001b8543;
    cVar2 = _ZN4core3cmp5impls54__LT_impl_u20_core__cmp__PartialEq_u20_for_u20_u32_GT_2ne17h189986e1b215ca81E
                      ((uint)(local_98 >> 0xc) & 0xffffff00 | (uint)local_98 & 0xff);
    if (cVar2 != '\0') goto LAB_001b8543;
    uVar4 = _ZN6uucore8features5pipes4pipe17h14b45b9735c770a8E();
    if ((int)uVar4 == -1) goto LAB_001b8543;
    local_d8 = (int)((ulong)uVar4 >> 0x20);
    lVar5 = 0;
    local_dc = (int)uVar4;
    do {
                    /* try { // try from 001b84e0 to 001b8520 has its CatchHandler @ 001b858b */
      _ZN3nix5fcntl6splice17h04f44a335952f6beE(&local_c8,param_1,0,&local_d8,0,0x20000,0);
      if ((int)local_c8 != 0) break;
      lVar1 = CONCAT26(uStack_ba,
                       CONCAT24(uStack_bc,CONCAT22(uStack_be,CONCAT11(uStack_bf,local_c0))));
      if (lVar1 == 0) {
        _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17h0bf56f1a5b3d62a1E(local_d8);
        _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17h0bf56f1a5b3d62a1E(local_dc);
        _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17h0bf56f1a5b3d62a1E(local_e0);
        uVar4 = 0;
        goto LAB_001b8552;
      }
      iVar3 = _ZN6uucore8features5pipes12splice_exact17hd07514bb204e6b97E(&local_dc,&local_e0,lVar1)
      ;
      lVar5 = lVar5 + lVar1;
    } while (iVar3 == 0x86);
    _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17h0bf56f1a5b3d62a1E(local_d8);
    _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17h0bf56f1a5b3d62a1E(local_dc);
    local_d4 = local_e0;
  }
  else {
LAB_001b8543:
    lVar5 = 0;
  }
  _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17h0bf56f1a5b3d62a1E(local_d4);
LAB_001b854d:
  uVar4 = 1;
LAB_001b8552:
  auVar6._8_8_ = lVar5;
  auVar6._0_8_ = uVar4;
  return auVar6;
}