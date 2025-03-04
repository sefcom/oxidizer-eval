void _ZN6uu_cat6splice23write_fast_using_splice17hbaaa5718090ebd33E
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  int local_50;
  int local_4c;
  undefined8 *local_48;
  int local_40 [2];
  long local_38;
  
  uVar3 = _ZN6uucore8features5pipes4pipe17h14b45b9735c770a8E();
  local_50 = (int)uVar3;
  local_4c = (int)((ulong)uVar3 >> 0x20);
  if (local_50 == -1) {
    *param_1 = 0x8000000000000001;
    *(int *)(param_1 + 1) = local_4c;
  }
  else {
    local_48 = param_1;
    do {
                    /* try { // try from 001ae480 to 001ae4be has its CatchHandler @ 001ae55f */
      _ZN3nix5fcntl6splice17h210f4cbb79b6fbd6E(local_40,param_2,0,&local_4c,0,0x20000,0);
      lVar1 = local_38;
      if (local_40[0] != 0) {
        *(undefined *)(local_48 + 1) = 1;
LAB_001ae51e:
        *local_48 = 0x8000000000000006;
        goto LAB_001ae52b;
      }
      if (local_38 == 0) {
        *(undefined *)(local_48 + 1) = 0;
        goto LAB_001ae51e;
      }
      iVar2 = _ZN6uucore8features5pipes12splice_exact17hf182302f6fbd70e2E
                        (&local_50,param_3,local_38);
    } while (iVar2 == 0x86);
                    /* try { // try from 001ae4ca to 001ae4d4 has its CatchHandler @ 001ae55d */
    iVar2 = _ZN6uu_cat6splice10copy_exact17h7c8774a5e534cde3E(local_50,param_3,lVar1);
    if (iVar2 == 0x86) {
      *(undefined *)(local_48 + 1) = 1;
      *local_48 = 0x8000000000000006;
    }
    else {
      *local_48 = 0x8000000000000001;
      *(int *)(local_48 + 1) = iVar2;
    }
LAB_001ae52b:
    _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17h59c27c7970f16c5fE(local_4c);
    _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17h59c27c7970f16c5fE(local_50);
  }
  return;
}