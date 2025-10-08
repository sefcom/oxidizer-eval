
  void (*)() __noreturn alacritty::gl::GetTransformFeedbackVarying::load_with::h38ba27b5e694fa52(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glGetTransformFeedbackVaryingglG…", 0x1d, &data_c86250, 1);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::GetTransformFeedbackVarying::h34b25757365cf78f = result_1;
    data_ce5f28 = result;
    return result;
}
