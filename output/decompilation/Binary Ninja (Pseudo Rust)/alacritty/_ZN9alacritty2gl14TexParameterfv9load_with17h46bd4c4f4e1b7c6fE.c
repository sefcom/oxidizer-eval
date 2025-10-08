
  fn alacritty::gl::TexParameterfv::load_with::h46bd4c4f4e1b7c6f(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glTexParameterfvglVertexAttrib3f…", 0x10, 8, 0);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::TexParameterfv::h64b4e79b95b6c4e5 = result_1;
    data_ce65f0 = result != 0;
    result
}
