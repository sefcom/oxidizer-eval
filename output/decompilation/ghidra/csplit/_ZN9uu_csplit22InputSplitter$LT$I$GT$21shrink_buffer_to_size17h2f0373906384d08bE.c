void _ZN9uu_csplit22InputSplitter_LT_I_GT_21shrink_buffer_to_size17h2f0373906384d08bE
               (undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(ulong *)(param_2 + 0x50) <= *(ulong *)(param_2 + 0x10)) {
    lVar1 = *(ulong *)(param_2 + 0x10) - *(ulong *)(param_2 + 0x50);
  }
  _ZN5alloc3vec16Vec_LT_T_C_A_GT_5drain17h58787e57b634cf4dE(param_1,param_2,lVar1);
  return;
}