
  fn alacritty::gl::GetnUniformfv::load_with::hde0f3670d79c674a(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glGetnUniformfvglGetnUniformivEX…", 0xf, &data_c86340, 2);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::GetnUniformfv::ha2536f5ad7db1398 = result_1;
    data_ce5ff0 = result != 0;
    result
}
