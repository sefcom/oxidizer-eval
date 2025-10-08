
  fn alacritty::gl::BindTexture::load_with::h9f5e0bd669658377(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glBindTextureglBindVertexArrayOE…", 0xd, &data_c859a0, 1);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    *alacritty::gl::storage::BindTexture::h1bc957198888829c.0 = result_1;
    result
}
