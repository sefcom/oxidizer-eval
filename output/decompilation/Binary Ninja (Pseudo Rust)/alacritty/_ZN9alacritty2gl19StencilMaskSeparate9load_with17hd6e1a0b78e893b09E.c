
  fn alacritty::gl::StencilMaskSeparate::load_with::hd6e1a0b78e893b09(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glStencilMaskSeparateglStencilOp…", 0x15, 8, 0);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::StencilMaskSeparate::h5f2c9befa43c2de6 = result_1;
    data_ce64b8 = result != 0;
    result
}
