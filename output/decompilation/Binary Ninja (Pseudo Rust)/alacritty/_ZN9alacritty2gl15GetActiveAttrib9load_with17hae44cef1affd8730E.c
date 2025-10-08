
  fn alacritty::gl::GetActiveAttrib::load_with::hae44cef1affd8730(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glGetActiveAttribglGetActiveUnif…", 0x11, &data_c85fd0, 1);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::GetActiveAttrib::hde22c766a35807ee = result_1;
    data_ce5ba0 = result != 0;
    result
}
