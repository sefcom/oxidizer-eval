long __rustcall uu_dd::BlockWriter::truncate(long *param_1)

{
  long local_8;
  
  if (*param_1 == -0x8000000000000000) {
    local_8 = Output::truncate(param_1 + 1);
  }
  else {
    local_8 = bufferedoutput::BufferedOutput::truncate();
  }
  if (local_8 != 0) {
    core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(&local_8);
  }
  return local_8;
}