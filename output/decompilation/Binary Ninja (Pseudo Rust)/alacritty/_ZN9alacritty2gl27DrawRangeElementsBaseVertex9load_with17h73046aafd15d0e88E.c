
  fn alacritty::gl::DrawRangeElementsBaseVertex::load_with::h73046aafd15d0e88(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glDrawRangeElementsBaseVertexglE…", 0x1d, &data_c85de0, 2);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::DrawRangeElementsBaseVertex::he722275c120c2945 = result_1;
    data_ce5a30 = result != 0;
    result
}
