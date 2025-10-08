
  fn alacritty::gl::GetQueryObjectui64v::load_with::h26e9e40f5a8e99e1(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glGetQueryObjectui64vglGetQueryO…", 0x15, &data_c86170, 1);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::GetQueryObjectui64v::h9e9ba89aaec0d7fc = result_1;
    data_ce5df8 = result != 0;
    result
}
