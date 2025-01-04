undefined  [16] __rustcall uu_shred::BytesWriter::bytes_for_pass(char *param_1,long param_2)

{
  undefined auVar1 [16];
  
  if (*param_1 == '\0') {
    auVar1 = _<core::ops::range::Range<usize>as_core::slice::index::SliceIndex<[T]>>::index_mut
                       (param_2,param_1 + 0x150);
    rand::rng::Rng::fill(param_1 + 0x10,auVar1._0_8_);
  }
  else {
    auVar1 = _<core::ops::range::Range<usize>as_core::slice::index::SliceIndex<[T]>>::index
                       (*(long *)(param_1 + 0x10008),*(long *)(param_1 + 0x10008) + param_2,
                        param_1 + 1);
    *(ulong *)(param_1 + 0x10008) = (ulong)(param_2 + *(long *)(param_1 + 0x10008)) % 3;
  }
  return auVar1;
}