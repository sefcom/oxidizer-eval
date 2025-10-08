
  fn alacritty::gl::GetRenderbufferParameteriv::load_with::h2ba0bba95ed6d25e(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glGetRenderbufferParameterivglGe…", 0x1c, &data_c861a0, 1);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::GetRenderbufferParameteriv::h0e5166d1b5a56440 = result_1;
    data_ce5e28 = result != 0;
    result
}
