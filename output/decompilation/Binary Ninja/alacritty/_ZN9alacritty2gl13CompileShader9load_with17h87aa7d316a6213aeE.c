
  void (*)() __noreturn alacritty::gl::CompileShader::load_with::h87aa7d316a6213ae(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glCompileShaderglCompressedTexIm…", 0xf, &data_c85ab0, 1);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    *alacritty::gl::storage::CompileShader::hc7ca431ea497331d.0 = result_1;
    return result;
}
