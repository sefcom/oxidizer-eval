
  fn alacritty::gl::CompressedTexSubImage1D::load_with::h41702f55c38c81fe(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glCompressedTexSubImage1DglCompr…", 0x19, &data_c85af0, 1);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::CompressedTexSubImage1D::h0db3d5eec8ad8755 = result_1;
    data_ce57d0 = result != 0;
    result
}
