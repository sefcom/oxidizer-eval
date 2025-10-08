
  fn uu_dd::BlockWriter::flush::ha2b73a890b58a6a5(arg1: *mut i64, arg2: *mut i64)

{
    if !(0 + -(*arg2))
    {
        /* tailcall */
        return uu_dd::bufferedoutput::BufferedOutput::flush::h230c00bdde1a7659(arg1, arg2);
    }
    
    *arg1 = 0;
    __builtin_memset(&arg1[2], 0, 0x20);
}
