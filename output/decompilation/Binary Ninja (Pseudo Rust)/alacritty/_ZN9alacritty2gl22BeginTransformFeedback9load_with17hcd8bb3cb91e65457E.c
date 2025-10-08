
  fn alacritty::gl::BeginTransformFeedback::load_with::hcd8bb3cb91e65457(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glBeginTransformFeedbackglBindAt…", 0x18, &data_c85900, 2);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::BeginTransformFeedback::he846a889d1fe1100 = result_1;
    data_ce5590 = result != 0;
    result
}
