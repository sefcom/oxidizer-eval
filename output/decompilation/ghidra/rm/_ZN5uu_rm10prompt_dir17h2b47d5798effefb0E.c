ulong _ZN5uu_rm10prompt_dir17h2b47d5798effefb0E
                (undefined8 param_1,undefined8 param_2,undefined param_3,ulong param_4)

{
  uint uVar1;
  undefined7 uVar3;
  ulong uVar2;
  long local_d8;
  undefined8 local_d0;
  undefined4 local_a0;
  
  uVar3 = (undefined7)((param_4 & 0xffffffff) >> 8);
  if ((char)(param_4 & 0xffffffff) == '\0') {
    uVar2 = CONCAT71(uVar3,1);
  }
  else {
    _ZN3std2fs8metadata17h578d377c5d8d0272E(&local_d8,param_1,param_2);
    if (local_d8 == 2) {
      uVar2 = CONCAT71(uVar3,1);
      local_d8 = 2;
    }
    else {
                    /* try { // try from 0015d9ab to 0015d9bd has its CatchHandler @ 0015d9df */
      uVar1 = _ZN5uu_rm25handle_writable_directory17ha4e75ec62de4407cE
                        (param_1,param_2,param_3,param_4 & 0xff,local_a0);
      uVar2 = (ulong)uVar1;
    }
    _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17h33062896cdc75427E
              (local_d8,local_d0);
  }
  return uVar2;
}