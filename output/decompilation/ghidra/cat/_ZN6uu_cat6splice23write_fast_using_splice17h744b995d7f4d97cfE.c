void _ZN6uu_cat6splice23write_fast_using_splice17h744b995d7f4d97cfE
               (undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  int local_48;
  int local_44;
  int local_40 [2];
  long local_38;
  
  uVar3 = (*(code *)PTR__ZN6uucore8features5pipes4pipe17h49247394f7e7f0ceE_001f2508)();
  local_48 = (int)uVar3;
  local_44 = (int)((ulong)uVar3 >> 0x20);
  if (local_48 == -1) {
    *param_1 = 0x8000000000000001;
    *(int *)(param_1 + 1) = local_44;
  }
  else {
    do {
                    /* try { // try from 0015d320 to 0015d349 has its CatchHandler @ 0015d3d1 */
      _ZN3nix5fcntl6splice17h4fd2eb8ee00667a9E(local_40,param_2,&local_44);
      lVar1 = local_38;
      if (local_40[0] == 1) {
        *(undefined *)(param_1 + 1) = 1;
LAB_0015d396:
        *param_1 = 0x8000000000000006;
        goto LAB_0015d3a3;
      }
      if (local_38 == 0) {
        *(undefined *)(param_1 + 1) = 0;
        goto LAB_0015d396;
      }
      iVar2 = _ZN6uucore8features5pipes12splice_exact17h47606a97f60e2947E(&local_48,local_38);
    } while (iVar2 == 0x86);
                    /* try { // try from 0015d354 to 0015d35b has its CatchHandler @ 0015d3cf */
    iVar2 = _ZN6uu_cat6splice10copy_exact17hb9a3658d2a5b3f83E(local_48,lVar1);
    if (iVar2 == 0x86) {
      *(undefined *)(param_1 + 1) = 1;
      *param_1 = 0x8000000000000006;
    }
    else {
      *param_1 = 0x8000000000000001;
      *(int *)(param_1 + 1) = iVar2;
    }
LAB_0015d3a3:
    _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17hb12cd77b3305f064E(local_44);
    _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17hb12cd77b3305f064E(local_48);
  }
  return;
}