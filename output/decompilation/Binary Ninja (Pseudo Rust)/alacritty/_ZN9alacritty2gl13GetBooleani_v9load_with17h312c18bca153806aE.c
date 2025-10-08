
  fn alacritty::gl::GetBooleani_v::load_with::h312c18bca153806a(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glGetBooleani_vglGetBooleanvglGe…", 0xf, &data_c86000, 1);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::GetBooleani_v::hd3c07dc036b8d31c = result_1;
    data_ce5c20 = result != 0;
    result
}
