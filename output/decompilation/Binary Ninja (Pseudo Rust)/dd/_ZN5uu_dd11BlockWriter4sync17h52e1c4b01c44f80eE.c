
  fn uu_dd::BlockWriter::sync::h52e1c4b01c44f80e(arg1: *mut i64) -> i64

{
    if *arg1 != -0x8000000000000000
    {
        /* tailcall */
        return uu_dd::bufferedoutput::BufferedOutput::sync::hc76150547a85de18(arg1);
    }
    
    /* tailcall */
    uu_dd::Output::sync::h13073efb3b69473e(&arg1[1])
}
