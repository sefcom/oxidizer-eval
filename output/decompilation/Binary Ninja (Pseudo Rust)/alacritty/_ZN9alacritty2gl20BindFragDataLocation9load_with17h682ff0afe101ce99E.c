
  fn alacritty::gl::BindFragDataLocation::load_with::h682ff0afe101ce99(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glBindFragDataLocationglBindFrag…", 0x16, &data_c85980, 1);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::BindFragDataLocation::hdfa47aa2f60249a3 = result_1;
    data_ce55d8 = result != 0;
    result
}
