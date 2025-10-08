
  fn alacritty::gl::CompressedTexSubImage2D::load_with::h44ee0ef65d86aacb(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glCompressedTexSubImage2DglCompr…", 0x19, &data_c85b00, 1);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::CompressedTexSubImage2D::h67082f11015a156a = result_1;
    data_ce57e0 = result != 0;
    result
}
