
  fn alacritty::gl::GetDebugMessageLog::load_with::hadd983d5b377204c(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glGetDebugMessageLogglGetDoublev…", 0x14, &data_c86060, 2);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::GetDebugMessageLog::hc25f95fcd67eba07 = result_1;
    data_ce5c90 = result != 0;
    result
}
