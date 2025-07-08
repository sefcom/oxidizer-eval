
  int64_t uu_dd::BlockWriter::write_blocks::h4171594e3d4f7075(int64_t* arg1, int64_t* arg2)

{
    void** rdx;
    int64_t rcx;
    
    if (*arg2 != -0x8000000000000000)
        /* tailcall */
        return uu_dd::bufferedoutput::BufferedOutput::write_blocks::h650a144b171239b2(arg1, arg2, 
            rdx, rcx);
    /* tailcall */
    return uu_dd::Output::write_blocks::h78b56ae9a3f355f3(arg1, &arg2[1], rdx);
}
