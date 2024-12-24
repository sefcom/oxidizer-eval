void __rustcall
uu_cat::splice::write_fast_using_splice(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  int local_50;
  undefined4 local_4c;
  undefined8 *local_48;
  int local_40 [2];
  long local_38;
  
  uVar3 = uucore::features::pipes::pipe();
  local_50 = (int)uVar3;
  local_4c = (undefined4)((ulong)uVar3 >> 0x20);
  if (local_50 == -1) {
    *param_1 = 0x8000000000000001;
    *(undefined4 *)(param_1 + 1) = local_4c;
  }
  else {
    local_48 = param_1;
    do {
                    /* try { // try from 001ae8f0 to 001ae92e has its CatchHandler @ 001ae9cf */
      nix::fcntl::splice(local_40,param_2,0,&local_4c,0,0x20000,0);
      lVar1 = local_38;
      if (local_40[0] != 0) {
        *(undefined *)(local_48 + 1) = 1;
LAB_001ae98e:
        *local_48 = 0x8000000000000006;
        goto LAB_001ae99b;
      }
      if (local_38 == 0) {
        *(undefined *)(local_48 + 1) = 0;
        goto LAB_001ae98e;
      }
      iVar2 = uucore::features::pipes::splice_exact(&local_50,param_3,local_38);
    } while (iVar2 == 0x86);
                    /* try { // try from 001ae93a to 001ae944 has its CatchHandler @ 001ae9cd */
    iVar2 = copy_exact(local_50,param_3,lVar1);
    if (iVar2 == 0x86) {
      *(undefined *)(local_48 + 1) = 1;
      *local_48 = 0x8000000000000006;
    }
    else {
      *local_48 = 0x8000000000000001;
      *(int *)(local_48 + 1) = iVar2;
    }
LAB_001ae99b:
    core::ptr::drop_in_place<std::fs::File>(local_4c);
    core::ptr::drop_in_place<std::fs::File>(local_50);
  }
  return;
}