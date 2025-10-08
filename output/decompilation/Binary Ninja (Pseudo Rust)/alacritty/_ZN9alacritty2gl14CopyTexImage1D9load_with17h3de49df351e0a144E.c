
  fn alacritty::gl::CopyTexImage1D::load_with::h3de49df351e0a144(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        &data_4e8a10[0x60], 0x10, &data_c85b30, 1);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::CopyTexImage1D::h93119a74dca5025d = result_1;
    data_ce5810 = result != 0;
    result
}
