
  fn alacritty::gl::TexImage3DMultisample::load_with::h4a5f60bec1f2e2c7(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glTexImage3DMultisampleglTexPara…", 0x17, 8, 0);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::TexImage3DMultisample::haaa0ebcd10ead6b1 = result_1;
    data_ce65b0 = result != 0;
    result
}
