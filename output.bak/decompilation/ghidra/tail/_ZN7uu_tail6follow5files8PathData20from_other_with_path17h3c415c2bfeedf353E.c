undefined8 __rustcall
uu_tail::follow::files::PathData::from_other_with_path
          (undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined **ppuVar2;
  undefined8 local_190;
  int local_e0 [2];
  undefined8 local_d8;
  
  lVar1 = *(long *)(param_2 + 200);
  ppuVar2 = *(undefined ***)(param_2 + 0xd0);
  if (lVar1 == 0) {
                    /* try { // try from 0020eecd to 0020eeed has its CatchHandler @ 0020efb4 */
    std::fs::File::open(&local_190,param_3,param_4);
    if ((int)local_190 == 0) {
                    /* try { // try from 0020eef7 to 0020ef15 has its CatchHandler @ 0020efb2 */
      std::io::buffered::bufreader::BufReader<R>::with_capacity(local_e0,0x2000,local_190._4_4_);
      lVar1 = ::alloc::boxed::Box<T>::new(local_e0);
    }
    else {
      core::ptr::drop_in_place<core::result::Result<std::fs::File,std::io::error::Error>>
                (&local_190);
      lVar1 = 0;
    }
    ppuVar2 = &PTR_drop_in_place<std_io_buffered_bufreader_BufReader<std_fs_File>>_002bc4c8;
  }
                    /* try { // try from 0020ef20 to 0020ef52 has its CatchHandler @ 0020efbe */
  std::fs::metadata(local_e0,param_3,param_4);
  if (local_e0[0] == 2) {
    local_190 = 2;
    core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>
              (local_d8);
  }
  else {
    (*(code *)PTR_memcpy_002c2760)(&local_190,local_e0,0xb0);
  }
                    /* try { // try from 0020ef7b to 0020ef8d has its CatchHandler @ 0020efb9 */
  new(param_1,lVar1,ppuVar2,&local_190,*(undefined8 *)(param_2 + 0xb8),
      *(undefined8 *)(param_2 + 0xc0));
  core::ptr::drop_in_place<alloc::string::String>(param_2 + 0xb0);
  return param_1;
}