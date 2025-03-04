ulong _ZN5uu_wc19is_stdin_small_file17hda862548f32829d1E(void)

{
  undefined8 unaff_RBX;
  ulong uVar1;
  undefined4 local_bc;
  long local_b8;
  undefined8 local_b0;
  uint local_80;
  ulong local_68;
  
  _ZN3std2io5stdio5stdin17h7215cc131abb55d8E();
  local_bc = 0;
  _ZN3std2fs4File8metadata17he899a18112e6f19eE(&local_b8,&local_bc);
  if (local_b8 == 2) {
    uVar1 = 0;
  }
  else {
    uVar1 = CONCAT71((int7)((ulong)unaff_RBX >> 8),
                     local_68 < 0xa00001 && (local_80 & 0xf000) == 0x8000);
  }
  _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17hc7378430642e479dE
            (local_b8,local_b0);
  return uVar1 & 0xffffffff;
}