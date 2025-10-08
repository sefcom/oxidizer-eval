
  fn alacritty::gl::VertexAttrib2s::load_with::h8e7257a61489d720(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glVertexAttrib2sTryFromCharError", 0x10, &data_c86ac0, 2);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::VertexAttrib2s::h9e873e0d785d91a7 = result_1;
    data_ce6918 = result != 0;
    result
}
