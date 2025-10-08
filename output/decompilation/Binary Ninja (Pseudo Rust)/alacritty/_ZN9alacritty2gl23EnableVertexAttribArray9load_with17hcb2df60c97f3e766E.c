
  fn alacritty::gl::EnableVertexAttribArray::load_with::hcb2df60c97f3e766(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glEnableVertexAttribArrayglEnabl…", 0x19, &data_c85e00, 1);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    *alacritty::gl::storage::EnableVertexAttribArray::h9890488787db9662.0 = result_1;
    result
}
