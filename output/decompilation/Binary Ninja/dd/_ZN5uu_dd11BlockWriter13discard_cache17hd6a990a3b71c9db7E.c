
  int64_t uu_dd::BlockWriter::discard_cache::hd6a990a3b71c9db7(int64_t* arg1)

{
    off64_t rdx;
    int64_t rsi;
    
    if (*arg1 != -0x8000000000000000)
        /* tailcall */
        return uu_dd::bufferedoutput::BufferedOutput::discard_cache::hcd08e47f1a015446(arg1, rsi, 
            rdx);
    
    /* tailcall */
    return uu_dd::Output::discard_cache::h9654de1740a6c207(&arg1[1], rsi, rdx);
}
