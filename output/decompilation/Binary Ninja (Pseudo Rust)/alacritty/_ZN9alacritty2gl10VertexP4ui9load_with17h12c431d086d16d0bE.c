
  fn alacritty::gl::VertexP4ui::load_with::h12c431d086d16d0b(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glVertexP4uiglVertexP4uivglViewp…", 0xc, 8, 0);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::VertexP4ui::h363a190d288ec184 = result_1;
    data_ce6cd8 = result != 0;
    result
}
