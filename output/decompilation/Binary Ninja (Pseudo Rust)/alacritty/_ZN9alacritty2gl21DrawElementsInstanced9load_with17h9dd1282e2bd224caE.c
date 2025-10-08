
  fn alacritty::gl::DrawElementsInstanced::load_with::h9dd1282e2bd224ca(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glDrawElementsInstancedglDrawEle…", 0x17, &data_c85d70, 4);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    *alacritty::gl::storage::DrawElementsInstanced::hea1d83919bf93ee2.0 = result_1;
    result
}
