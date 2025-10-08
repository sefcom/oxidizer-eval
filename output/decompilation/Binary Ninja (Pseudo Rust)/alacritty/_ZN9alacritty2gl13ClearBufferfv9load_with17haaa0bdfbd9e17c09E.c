
  fn alacritty::gl::ClearBufferfv::load_with::haaa0bdfbd9e17c09(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glClearBufferfvglClearBufferivgl…", 0xf, 8, 0);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::ClearBufferfv::hc09227fbc7441f60 = result_1;
    data_ce56d0 = result != 0;
    result
}
