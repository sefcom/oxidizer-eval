
  fn alacritty::gl::VertexAttribP1ui::load_with::h3a7fe3dee6557d92(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glVertexAttribP1uiglVertexAttrib…", 0x12, 8, 0);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::VertexAttribP1ui::h284cd810fb912d5c = result_1;
    data_ce6c10 = result != 0;
    result
}
