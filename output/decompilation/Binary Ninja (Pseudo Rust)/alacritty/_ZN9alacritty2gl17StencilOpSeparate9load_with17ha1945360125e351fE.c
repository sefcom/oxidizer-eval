
  fn alacritty::gl::StencilOpSeparate::load_with::ha1945360125e351f(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glStencilOpSeparateglTexBufferAR…", 0x13, &data_c86660, 1);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::StencilOpSeparate::h17f20b9e2d5f5ee4 = result_1;
    data_ce64d8 = result != 0;
    result
}
