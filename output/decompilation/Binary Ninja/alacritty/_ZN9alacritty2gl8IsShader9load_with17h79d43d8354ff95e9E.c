
  void (*)() __noreturn alacritty::gl::IsShader::load_with::h79d43d8354ff95e9(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glIsShaderglIsSyncAPPLEglIsTextu…", 0xa, 8, 0);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::IsShader::he7ee9b2903e9fd2b = result_1;
    data_ce60e0 = result;
    return result;
}
