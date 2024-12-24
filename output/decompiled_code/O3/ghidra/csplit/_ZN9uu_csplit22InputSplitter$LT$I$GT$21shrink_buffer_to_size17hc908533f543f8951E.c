void __rustcall uu_csplit::InputSplitter<I>::shrink_buffer_to_size(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(ulong *)(param_2 + 0x30) <= *(ulong *)(param_2 + 0x10)) {
    lVar1 = *(ulong *)(param_2 + 0x10) - *(ulong *)(param_2 + 0x30);
  }
  ::alloc::vec::Vec<T,A>::drain(param_1,param_2,lVar1);
  return;
}