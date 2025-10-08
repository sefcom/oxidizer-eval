
  void (*)() __noreturn alacritty::gl::CompressedTexImage2D::load_with::h2f2d435bf15c7749(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glCompressedTexImage2DglCompress…", 0x16, &data_c85ad0, 1);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::CompressedTexImage2D::hbf634024f6928135 = result_1;
    data_ce57b0 = result;
    return result;
}
