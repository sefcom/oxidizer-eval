
  fn alacritty::gl::VertexAttrib1d::load_with::hafb9b69f1d8f4855(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glVertexAttrib1dunifiedideograph", 0x10, &data_c86980, 2);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::VertexAttrib1d::hfbeecda3dfacb541 = result_1;
    data_ce6878 = result != 0;
    result
}
