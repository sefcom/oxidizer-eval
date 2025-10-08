
  fn alacritty::gl::RenderbufferStorageMultisample::load_with::h5be253670ab039ec(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glRenderbufferStorageMultisample…", 0x20, &data_c865e0, 2);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::RenderbufferStorageMultisample::h4af9b8f237c454e0 = result_1;
    data_ce63c0 = result != 0;
    result
}
