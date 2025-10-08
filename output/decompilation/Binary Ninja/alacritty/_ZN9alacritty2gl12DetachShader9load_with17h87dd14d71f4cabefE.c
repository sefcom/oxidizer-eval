
  void (*)() __noreturn alacritty::gl::DetachShader::load_with::h87dd14d71f4cabef(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glDetachShaderglDisableglDisable…", 0xe, &data_c85c70, 1);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::DetachShader::h6c8b56069796f9df = result_1;
    data_ce5978 = result;
    return result;
}
