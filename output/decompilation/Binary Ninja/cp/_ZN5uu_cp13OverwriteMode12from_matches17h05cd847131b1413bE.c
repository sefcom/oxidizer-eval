
  uint64_t uu_cp::OverwriteMode::from_matches::h05cd847131b1413b(void* arg1)

{
    int64_t rax;
    int64_t var_18 = rax;
    int64_t rbp;
    rbp = 1;
    
    if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg1, 
            "interactiveno-clobberask before …", 0xb))
        uu_cp::ClobberMode::from_matches::h6bc1ef902f3afca6(arg1);
    else if (!clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
        arg1, "no-clobberask before overwriting…", 0xa))
    {
        rbp = 0;
        uu_cp::ClobberMode::from_matches::h6bc1ef902f3afca6(arg1);
    }
    else
        rbp = 2;
    
    return rbp;
}
