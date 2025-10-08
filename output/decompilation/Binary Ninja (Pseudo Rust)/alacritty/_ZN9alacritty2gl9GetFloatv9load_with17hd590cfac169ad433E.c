
  fn alacritty::gl::GetFloatv::load_with::hd590cfac169ad433(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glGetFloatvglGetFragDataIndexEXT…", 0xb, 8, 0);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::GetFloatv::h7c6b8395b08e5690 = result_1;
    data_ce5cc8 = result != 0;
    result
}
