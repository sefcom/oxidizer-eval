
  fn alacritty::gl::GetDebugMessageLogKHR::load_with::hf1ad194d8b1d1f3e(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glGetDebugMessageLogKHRglGetDebu…", 0x17, 8, 0);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::GetDebugMessageLogKHR::h9d2c09e2d01f4078 = result_1;
    data_ce5ca0 = result != 0;
    result
}
