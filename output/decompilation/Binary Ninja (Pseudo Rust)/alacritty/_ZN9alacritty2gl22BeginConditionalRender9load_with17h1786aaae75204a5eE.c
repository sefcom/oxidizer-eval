
  fn alacritty::gl::BeginConditionalRender::load_with::h1786aaae75204a5e(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glBeginConditionalRenderglBeginQ…", 0x18, &data_c858e0, 1);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::BeginConditionalRender::hd2ad6e3bff38f6f3 = result_1;
    data_ce5570 = result != 0;
    result
}
