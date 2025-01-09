void __rustcall
uu_od::inputdecoder::MemoryDecoder::clone_buffer(undefined8 *param_1,undefined8 param_2)

{
  _<alloc::vec::Vec<T,A>as_core::clone::Clone>::clone_from(param_2,*param_1);
  ::alloc::vec::Vec<T,A>::resize(param_2,param_1[1],0);
  return;
}