void _ZN5uu_ls5dired18calculate_subdired17h85725549554709aaE(long param_1,long param_2)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    lVar1 = 2;
  }
  else {
    lVar1 = *(long *)(*(long *)(param_1 + 0x10) * 0x10 + -8 + *(long *)(param_1 + 8)) + 3;
  }
  lVar1 = lVar1 + (ulong)(*(long *)(param_1 + 0x28) != 0) * 2;
  _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h0c7c203ff3f53050E(param_1 + 0x18,lVar1,param_2 + lVar1);
  return;
}