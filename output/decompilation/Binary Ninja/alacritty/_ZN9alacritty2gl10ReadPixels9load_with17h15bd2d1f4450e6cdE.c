
  void (*)() __noreturn alacritty::gl::ReadPixels::load_with::h15bd2d1f4450e6cd(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glReadPixelsglReadnPixelsglRende…", 0xc, 8, 0);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::ReadPixels::h1308f452b1e3e622 = result_1;
    data_ce6380 = result;
    return result;
}
