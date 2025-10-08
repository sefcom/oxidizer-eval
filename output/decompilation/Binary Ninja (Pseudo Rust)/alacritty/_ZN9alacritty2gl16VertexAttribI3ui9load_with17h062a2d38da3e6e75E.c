
  fn alacritty::gl::VertexAttribI3ui::load_with::h062a2d38da3e6e75(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glVertexAttribI3uiglVertexAttrib…", 0x12, &data_c86e40, 1);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::VertexAttribI3ui::h80ad9a91376f1afd = result_1;
    data_ce6b60 = result != 0;
    result
}
