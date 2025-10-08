
  fn alacritty::gl::VertexAttribI4usv::load_with::h6a85f82c16d104f7(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glVertexAttribI4usvglVertexAttri…", 0x13, &data_c86ed0, 1);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::VertexAttribI4usv::h5e885ac7b8f9682e = result_1;
    data_ce6bf0 = result != 0;
    result
}
