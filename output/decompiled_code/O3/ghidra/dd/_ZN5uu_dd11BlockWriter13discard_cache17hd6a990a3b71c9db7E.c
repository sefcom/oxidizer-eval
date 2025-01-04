void __rustcall uu_dd::BlockWriter::discard_cache(long *param_1)

{
  if (*param_1 == -0x8000000000000000) {
    Output::discard_cache(param_1 + 1);
    return;
  }
  bufferedoutput::BufferedOutput::discard_cache();
  return;
}