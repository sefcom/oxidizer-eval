
  fn alacritty::gl::GetActiveUniformName::load_with::h6c6da3e1a3fb9390(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glGetActiveUniformNameglGetActiv…", 0x16, 8, 0);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::GetActiveUniformName::h59aa9f2b4e3b9638 = result_1;
    data_ce5be0 = result != 0;
    result
}
