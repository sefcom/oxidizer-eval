
  fn alacritty::gl::UseProgram::load_with::h911aa88e2be10fa8(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glUseProgramglValidateProgramARB…", 0xc, &data_c86960, 1);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    *alacritty::gl::storage::UseProgram::h8c17565e1cab04ca.0 = result_1;
    result
}
