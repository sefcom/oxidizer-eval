
  void (*)() __noreturn alacritty::gl::AttachShader::load_with::h27518771c425ce3d(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glAttachShaderglBeginConditional…", 0xe, &data_c858d0, 1);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    *alacritty::gl::storage::AttachShader::h785b6ccfbbb3b8d2.0 = result_1;
    return result;
}
