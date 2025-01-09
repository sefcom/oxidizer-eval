void __rustcall uu_du::file_as_vec(undefined8 param_1)

{
  undefined4 uVar1;
  undefined local_50 [16];
  undefined local_40 [48];
  
  std::fs::File::open(local_50);
  uVar1 = core::result::Result<T,E>::expect(local_50);
  std::io::buffered::bufreader::BufReader<R>::with_capacity(local_40,0x2000,uVar1);
  _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(param_1,local_40)
  ;
  return;
}