
  void (*)() __noreturn alacritty::gl::IsRenderbuffer::load_with::hbf315b03fd43c816(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glIsRenderbufferglTexParameterfv…", 0x10, &data_c86400, 1);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::IsRenderbuffer::hc8574cc215797119 = result_1;
    data_ce60c0 = result;
    return result;
}
