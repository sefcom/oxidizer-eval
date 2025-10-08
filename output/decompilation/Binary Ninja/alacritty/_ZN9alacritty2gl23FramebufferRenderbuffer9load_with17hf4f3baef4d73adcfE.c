
  void (*)() __noreturn alacritty::gl::FramebufferRenderbuffer::load_with::hf4f3baef4d73adcf(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glFramebufferRenderbufferglFrame…", 0x19, &data_c85ed0, 1);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::FramebufferRenderbuffer::h7e6ce890db0683ba = result_1;
    data_ce5ac8 = result;
    return result;
}
