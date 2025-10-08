
  void (*)() __noreturn alacritty::gl::ActiveTexture::load_with::h7e73e9b2cb553ad3(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glActiveTextureglAttachObjectARB…", 0xf, &data_c858c0, 1);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    *alacritty::gl::storage::ActiveTexture::h5918303c5b4133ec.0 = result_1;
    return result;
}
