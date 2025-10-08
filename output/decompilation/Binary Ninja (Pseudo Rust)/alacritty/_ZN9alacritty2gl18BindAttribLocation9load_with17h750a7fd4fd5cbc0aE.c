
  fn alacritty::gl::BindAttribLocation::load_with::h750a7fd4fd5cbc0a(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glBindAttribLocationglBindBuffer…", 0x14, &data_c85920, 1);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::BindAttribLocation::h5e37b10fdb55bdc1 = result_1;
    data_ce55a0 = result != 0;
    result
}
