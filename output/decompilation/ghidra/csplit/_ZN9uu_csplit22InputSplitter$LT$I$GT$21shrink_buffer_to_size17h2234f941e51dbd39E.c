void _ZN9uu_csplit22InputSplitter_LT_I_GT_21shrink_buffer_to_size17h2234f941e51dbd39E
               (undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(ulong *)(param_2 + 0x30) <= *(ulong *)(param_2 + 0x10)) {
    lVar1 = *(ulong *)(param_2 + 0x10) - *(ulong *)(param_2 + 0x30);
  }
  _ZN5alloc3vec16Vec_LT_T_C_A_GT_5drain17hf05c69479bb889beE(param_1,param_2,lVar1);
  return;
}