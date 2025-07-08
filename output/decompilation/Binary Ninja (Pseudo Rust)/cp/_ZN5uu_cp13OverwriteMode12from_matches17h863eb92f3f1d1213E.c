
  fn uu_cp::OverwriteMode::from_matches::h863eb92f3f1d1213(arg1: *mut c_void) -> u64

{
    let rax: i64;
    let var_18: i64 = rax;
    let mut rbp: i64;
    rbp = 1;
    
    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg1, 
        "interactiveno-clobberask before …", 0xb) != 0
    {
        uu_cp::ClobberMode::from_matches::h0d784cad540272bc(arg1);
    }
    else if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
        arg1, "no-clobberask before overwriting…", 0xa) == 0
    {
        rbp = 0;
        uu_cp::ClobberMode::from_matches::h0d784cad540272bc(arg1);
    }
    else
    {
        rbp = 2;
    }
    
    rbp
}
