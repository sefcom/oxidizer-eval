
  fn alacritty::gl::GetBooleanv::load_with::hf77839f6f14d487c(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glGetBooleanvglGetBufferParamete…", 0xd, 8, 0);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::GetBooleanv::h6db99f3d1b83bc06 = result_1;
    data_ce5c30 = result != 0;
    result
}
