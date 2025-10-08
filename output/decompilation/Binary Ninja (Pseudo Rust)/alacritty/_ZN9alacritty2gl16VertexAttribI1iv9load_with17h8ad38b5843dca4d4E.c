
  fn alacritty::gl::VertexAttribI1iv::load_with::h8ad38b5843dca4d4(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glVertexAttribI1ivglVertexAttrib…", 0x12, &data_c86db0, 1);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::VertexAttribI1iv::h8d7bf11f20bdd03c = result_1;
    data_ce6ad0 = result != 0;
    result
}
