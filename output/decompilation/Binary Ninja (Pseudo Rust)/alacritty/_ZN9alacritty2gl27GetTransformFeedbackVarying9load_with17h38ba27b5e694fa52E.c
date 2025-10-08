
  fn alacritty::gl::GetTransformFeedbackVarying::load_with::h38ba27b5e694fa52(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glGetTransformFeedbackVaryingglG…", 0x1d, &data_c86250, 1);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::GetTransformFeedbackVarying::h34b25757365cf78f = result_1;
    data_ce5f28 = result != 0;
    result
}
