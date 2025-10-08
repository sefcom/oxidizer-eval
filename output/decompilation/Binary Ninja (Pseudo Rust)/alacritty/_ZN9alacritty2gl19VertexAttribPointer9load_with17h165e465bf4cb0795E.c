
  fn alacritty::gl::VertexAttribPointer::load_with::h165e465bf4cb0795(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glVertexAttribPointerglVertexP2u…", 0x15, &data_c86ef0, 1);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    *alacritty::gl::storage::VertexAttribPointer::hdd17f62548c1ce0a.0 = result_1;
    result
}
