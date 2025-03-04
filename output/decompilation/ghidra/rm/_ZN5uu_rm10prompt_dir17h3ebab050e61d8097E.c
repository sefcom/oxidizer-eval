ulong _ZN5uu_rm10prompt_dir17h3ebab050e61d8097E(undefined8 param_1,undefined8 param_2,char param_3)

{
  uint uVar1;
  undefined8 unaff_RBX;
  undefined7 uVar3;
  ulong uVar2;
  int local_d0 [14];
  undefined4 local_98;
  
  uVar3 = (undefined7)((ulong)unaff_RBX >> 8);
  if (param_3 == '\0') {
    uVar2 = CONCAT71(uVar3,1);
  }
  else {
    _ZN3std2fs8metadata17h6df0603967c240bbE(local_d0,param_1,param_2);
    uVar2 = CONCAT71(uVar3,1);
    if (local_d0[0] != 2) {
                    /* try { // try from 001b86b7 to 001b86c5 has its CatchHandler @ 001b86e6 */
      uVar1 = _ZN5uu_rm25handle_writable_directory17hdb36aba62dc09786E
                        (param_1,param_2,param_3,local_98);
      uVar2 = (ulong)uVar1;
    }
    _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17h539b7fb1f87034caE
              (local_d0);
  }
  return uVar2 & 0xffffffff;
}