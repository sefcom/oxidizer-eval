
  fn alacritty::gl::LinkProgram::load_with::h7128b2108679e8a4(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glLinkProgramglLogicOpglMapBuffe…", 0xd, &data_c86440, 1);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    *alacritty::gl::storage::LinkProgram::hbaa61d8d0ce34338.0 = result_1;
    result
}
