
  fn alacritty::gl::CopyBufferSubData::load_with::h22d31ef0c583f2ec(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glCopyBufferSubDataglCopyTexImag…", 0x13, &data_c85b20, 1);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::CopyBufferSubData::hebdac682f6d908a4 = result_1;
    data_ce5800 = result != 0;
    result
}
