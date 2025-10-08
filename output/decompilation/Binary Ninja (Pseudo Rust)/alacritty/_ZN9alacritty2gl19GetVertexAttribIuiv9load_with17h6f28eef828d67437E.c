
  fn alacritty::gl::GetVertexAttribIuiv::load_with::h6f28eef828d67437(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glGetVertexAttribIuivglGetVertex…", 0x15, &data_c862b0, 1);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::GetVertexAttribIuiv::hf1602ab5d5ee2b1e = result_1;
    data_ce5fa0 = result != 0;
    result
}
