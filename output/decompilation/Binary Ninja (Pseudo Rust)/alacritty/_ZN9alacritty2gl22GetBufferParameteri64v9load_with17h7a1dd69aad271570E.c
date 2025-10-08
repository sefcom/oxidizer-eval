
  fn alacritty::gl::GetBufferParameteri64v::load_with::h7a1dd69aad271570(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glGetBufferParameteri64vglGetBuf…", 0x18, 8, 0);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::GetBufferParameteri64v::h18b4e78f2f763d76 = result_1;
    data_ce5c40 = result != 0;
    result
}
