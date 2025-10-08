
  void (*)() __noreturn alacritty::gl::CopyTexSubImage1D::load_with::hcc8668ec2d80ec5b(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glCopyTexSubImage1DglCopyTexSubI…", 0x13, &data_c85b50, 1);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::CopyTexSubImage1D::hadf3eb3526abdf0a = result_1;
    data_ce5830 = result;
    return result;
}
