
  int64_t uu_dd::BlockWriter::write_blocks::hb7310594a23c1026(int64_t* arg1, int64_t* arg2)

{
    void** rdx;
    int64_t rcx;
    
    if (!(0 + -(*arg2)))
        /* tailcall */
        return uu_dd::bufferedoutput::BufferedOutput::write_blocks::h5d07776a954ba78d(arg1, arg2, 
            rdx, rcx);
    /* tailcall */
    return uu_dd::Output::write_blocks::hd1d1fad151688f0b(arg1, &arg2[1], rdx);
}
