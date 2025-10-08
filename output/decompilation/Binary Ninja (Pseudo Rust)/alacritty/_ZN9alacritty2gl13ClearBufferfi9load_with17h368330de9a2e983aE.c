
  fn alacritty::gl::ClearBufferfi::load_with::h368330de9a2e983a(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glClearBufferfiglClearBufferfvgl…", 0xf, 8, 0);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::ClearBufferfi::h1c59dccfa49aac43 = result_1;
    data_ce56c0 = result != 0;
    result
}
