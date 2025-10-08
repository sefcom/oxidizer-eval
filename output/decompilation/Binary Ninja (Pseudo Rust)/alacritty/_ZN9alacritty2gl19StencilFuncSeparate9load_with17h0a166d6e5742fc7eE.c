
  fn alacritty::gl::StencilFuncSeparate::load_with::h0a166d6e5742fc7e(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glStencilFuncSeparateglStencilMa…", 0x15, 8, 0);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::StencilFuncSeparate::h835b621e9f927136 = result_1;
    data_ce6498 = result != 0;
    result
}
