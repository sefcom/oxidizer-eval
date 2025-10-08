
  void (*)() __noreturn alacritty::gl::CreateShader::load_with::h02e3e528805ad282(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glCreateShaderglCullFaceglDebugM…", 0xe, &data_c85b90, 1);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    *alacritty::gl::storage::CreateShader::hcd73aa42dce6e632.0 = result_1;
    return result;
}
