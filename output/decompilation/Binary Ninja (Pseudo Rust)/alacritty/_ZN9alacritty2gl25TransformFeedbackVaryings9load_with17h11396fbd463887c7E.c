
  fn alacritty::gl::TransformFeedbackVaryings::load_with::h11396fbd463887c7(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glTransformFeedbackVaryingsglUni…", 0x1b, &data_c86720, 1);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::TransformFeedbackVaryings::h9d8d51e8d2d61abe = result_1;
    data_ce6640 = result != 0;
    result
}
