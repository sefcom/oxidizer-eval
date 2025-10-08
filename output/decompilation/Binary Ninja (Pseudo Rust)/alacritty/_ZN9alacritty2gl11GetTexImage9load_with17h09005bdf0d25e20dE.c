
  fn alacritty::gl::GetTexImage::load_with::h09005bdf0d25e20d(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glGetTexImageglGetTexLevelParame…", 0xd, 8, 0);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::GetTexImage::h3b4a7afd64bed8c7 = result_1;
    data_ce5eb8 = result != 0;
    result
}
