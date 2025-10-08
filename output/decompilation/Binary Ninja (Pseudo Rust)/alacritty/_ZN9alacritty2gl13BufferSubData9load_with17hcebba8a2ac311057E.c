
  fn alacritty::gl::BufferSubData::load_with::hcebba8a2ac311057(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glBufferSubDataglCheckFramebuffe…", 0xf, &data_c85a40, 1);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    *alacritty::gl::storage::BufferSubData::hd84c8d7b7c1dbfc2.0 = result_1;
    result
}
