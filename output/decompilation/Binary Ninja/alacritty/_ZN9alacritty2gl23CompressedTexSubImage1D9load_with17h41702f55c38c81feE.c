
  void (*)() __noreturn alacritty::gl::CompressedTexSubImage1D::load_with::h41702f55c38c81fe(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glCompressedTexSubImage1DglCompr…", 0x19, &data_c85af0, 1);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::CompressedTexSubImage1D::h0db3d5eec8ad8755 = result_1;
    data_ce57d0 = result;
    return result;
}
