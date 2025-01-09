void __rustcall uu_dd::BlockWriter::write_blocks(undefined8 param_1,long *param_2)

{
  if (*param_2 == -0x8000000000000000) {
    Output::write_blocks(param_1,param_2 + 1);
    return;
  }
  bufferedoutput::BufferedOutput::write_blocks();
  return;
}