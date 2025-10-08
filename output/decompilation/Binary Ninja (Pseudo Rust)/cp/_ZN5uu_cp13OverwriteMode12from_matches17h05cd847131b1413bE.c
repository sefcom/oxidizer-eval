
  fn uu_cp::OverwriteMode::from_matches::h05cd847131b1413b(arg1: *mut c_void) -> u64

{
    let rax: i64;
    let var_18: i64 = rax;
    let mut rbp: i64;
    rbp = 1;
    
    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg1, 
        "interactiveno-clobberask before …", 0xb) != 0
    {
        uu_cp::ClobberMode::from_matches::h6bc1ef902f3afca6(arg1);
    }
    else if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
        arg1, "no-clobberask before overwriting…", 0xa) == 0
    {
        rbp = 0;
        uu_cp::ClobberMode::from_matches::h6bc1ef902f3afca6(arg1);
    }
    else
    {
        rbp = 2;
    }
    
    rbp
}
