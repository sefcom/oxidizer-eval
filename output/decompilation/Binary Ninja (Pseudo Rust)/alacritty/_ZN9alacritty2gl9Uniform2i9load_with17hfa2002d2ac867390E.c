
  fn alacritty::gl::Uniform2i::load_with::hfa2002d2ac867390(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glUniform2iglUniform2ivARBglUnif…", 0xb, &data_c867b0, 1);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::Uniform2i::h481e8dfa4be20b4a = result_1;
    data_ce66b8 = result != 0;
    result
}
