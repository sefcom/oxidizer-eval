void __rustcall uu_dd::BlockWriter::sync(long *param_1)

{
  if (*param_1 == -0x8000000000000000) {
    Output::sync(param_1 + 1);
    return;
  }
  bufferedoutput::BufferedOutput::sync();
  return;
}