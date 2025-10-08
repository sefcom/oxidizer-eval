
  fn alacritty::gl::DepthFunc::load_with::h70f425ec38dd9c80(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glDepthFuncglDepthMaskglDepthRan…", 0xb, 8, 0);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::DepthFunc::h69011b81afa8e0d6 = result_1;
    data_ce5950 = result != 0;
    result
}
