
  void (*)() __noreturn alacritty::gl::BindFramebuffer::load_with::hccd835ed987ac442(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glBindFramebufferglBindRenderbuf…", 0x11, 8, 0);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::BindFramebuffer::hc0e89e311bfc4c8b = result_1;
    data_ce55f8 = result;
    return result;
}
