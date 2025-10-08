
  fn alacritty::gl::VertexAttrib1f::load_with::h8acf32b994ea2a53(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glVertexAttrib1ffloating point `…", 0x10, &data_c869c0, 2);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::VertexAttrib1f::h7d74ddfab19e989f = result_1;
    data_ce6898 = result != 0;
    result
}
