
  fn alacritty::gl::DeleteRenderbuffers::load_with::h783aeb9d4b89efad(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glDeleteRenderbuffersglDeleteSha…", 0x15, &data_c85c30, 1);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::DeleteRenderbuffers::h97f397782406b0f9 = result_1;
    data_ce5908 = result != 0;
    result
}
