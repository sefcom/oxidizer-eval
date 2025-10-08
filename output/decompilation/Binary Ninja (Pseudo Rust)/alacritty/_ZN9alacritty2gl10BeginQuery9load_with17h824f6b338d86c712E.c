
  fn alacritty::gl::BeginQuery::load_with::h824f6b338d86c712(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glBeginQueryglBeginTransformFeed…", 0xc, &data_c858f0, 1);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::BeginQuery::h7a632c4bf7db1570 = result_1;
    data_ce5580 = result != 0;
    result
}
