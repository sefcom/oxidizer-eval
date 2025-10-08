
  void (*)() __noreturn alacritty::gl::ShaderSource::load_with::hc8c45c011191b0ca(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glShaderSourceglStencilFuncglSte…", 0xe, &data_c86650, 1);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    *alacritty::gl::storage::ShaderSource::h36e3f9f07e0e8e33.0 = result_1;
    return result;
}
