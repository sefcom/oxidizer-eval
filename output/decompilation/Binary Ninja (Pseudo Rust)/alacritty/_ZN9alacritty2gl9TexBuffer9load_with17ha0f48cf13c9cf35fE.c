
  fn alacritty::gl::TexBuffer::load_with::ha0f48cf13c9cf35f(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glTexBufferglTexCoordP1uiglTexCo…", 0xb, &data_c86670, 3);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::TexBuffer::hf1210eeec5e18eb0 = result_1;
    data_ce64e8 = result != 0;
    result
}
