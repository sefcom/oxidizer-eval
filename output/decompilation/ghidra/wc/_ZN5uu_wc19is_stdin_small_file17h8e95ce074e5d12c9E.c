ulong _ZN5uu_wc19is_stdin_small_file17h8e95ce074e5d12c9E(void)

{
  undefined8 unaff_RBX;
  ulong uVar1;
  undefined4 local_bc;
  long local_b8;
  undefined8 local_b0;
  uint local_80;
  ulong local_68;
  
  (*(code *)PTR__ZN3std2io5stdio5stdin17h9a05a2c3e7544b2aE_001ffcc0)();
  local_bc = 0;
  (*(code *)PTR__ZN3std2fs4File8metadata17h5e84e533705f8c98E_001ffcc8)(&local_b8,&local_bc);
  if (local_b8 == 2) {
    uVar1 = 0;
  }
  else {
    uVar1 = CONCAT71((int7)((ulong)unaff_RBX >> 8),
                     local_68 < 0xa00001 && (local_80 & 0xf000) == 0x8000);
  }
  _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17h92f497ce60e154e1E
            (local_b8,local_b0);
  return uVar1 & 0xffffffff;
}