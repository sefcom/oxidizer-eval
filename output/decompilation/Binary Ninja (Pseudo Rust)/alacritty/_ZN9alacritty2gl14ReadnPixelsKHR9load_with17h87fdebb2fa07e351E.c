
  fn alacritty::gl::ReadnPixelsKHR::load_with::h87fdebb2fa07e351(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glReadnPixelsKHRglVertexAttrib1s", 0x10, 8, 0);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::ReadnPixelsKHR::h44964153e5fd65a0 = result_1;
    data_ce63a0 = result != 0;
    result
}
