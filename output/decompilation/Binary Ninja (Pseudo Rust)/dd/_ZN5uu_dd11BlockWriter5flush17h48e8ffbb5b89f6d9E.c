
  fn uu_dd::BlockWriter::flush::h48e8ffbb5b89f6d9(arg1: *mut i64, arg2: *mut i64)

{
    if *arg2 != -0x8000000000000000
    {
        /* tailcall */
        return uu_dd::bufferedoutput::BufferedOutput::flush::hf0f2f33e15e5593b(arg1, arg2);
    }
    
    *arg1 = 0;
    __builtin_memset(&arg1[2], 0, 0x20);
}
