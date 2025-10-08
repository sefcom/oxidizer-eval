
  fn alacritty::gl::VertexP3uiv::load_with::h8d6371a4a74735ec(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glVertexP3uivglVertexP4uiglVerte…", 0xd, 8, 0);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::VertexP3uiv::hb6d0fa4ee7a9260b = result_1;
    data_ce6cc8 = result != 0;
    result
}
