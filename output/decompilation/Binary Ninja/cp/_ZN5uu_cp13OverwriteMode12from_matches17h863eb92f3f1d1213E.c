
  uint64_t uu_cp::OverwriteMode::from_matches::h863eb92f3f1d1213(void* arg1)

{
    int64_t rax;
    int64_t var_18 = rax;
    int64_t rbp;
    rbp = 1;
    
    if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg1, 
            "interactiveno-clobberask before …", 0xb))
        uu_cp::ClobberMode::from_matches::h0d784cad540272bc(arg1);
    else if (!clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
        arg1, "no-clobberask before overwriting…", 0xa))
    {
        rbp = 0;
        uu_cp::ClobberMode::from_matches::h0d784cad540272bc(arg1);
    }
    else
        rbp = 2;
    
    return rbp;
}
