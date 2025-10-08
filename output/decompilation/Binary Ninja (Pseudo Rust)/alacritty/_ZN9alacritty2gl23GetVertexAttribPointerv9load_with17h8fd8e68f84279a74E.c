
  fn alacritty::gl::GetVertexAttribPointerv::load_with::h8fd8e68f84279a74(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glGetVertexAttribPointervglGetVe…", 0x19, &data_c862c0, 2);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::GetVertexAttribPointerv::hb6d2cce05f144474 = result_1;
    data_ce5fb0 = result != 0;
    result
}
