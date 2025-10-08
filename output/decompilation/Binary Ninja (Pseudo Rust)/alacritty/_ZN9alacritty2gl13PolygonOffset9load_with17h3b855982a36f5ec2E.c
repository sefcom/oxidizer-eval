
  fn alacritty::gl::PolygonOffset::load_with::h3b855982a36f5ec2(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glPolygonOffsetglPopDebugGroupKH…", 0xf, 8, 0);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::PolygonOffset::hefb84d9b0e0d4750 = result_1;
    data_ce62f0 = result != 0;
    result
}
