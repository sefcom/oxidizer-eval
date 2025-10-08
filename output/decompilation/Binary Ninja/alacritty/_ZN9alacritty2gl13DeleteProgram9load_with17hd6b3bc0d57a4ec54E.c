
  void (*)() __noreturn alacritty::gl::DeleteProgram::load_with::hd6b3bc0d57a4ec54(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glDeleteProgramglDeleteQueriesAR…", 0xf, 8, 0);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    *alacritty::gl::storage::DeleteProgram::hf908dfdf2a1f482d.0 = result_1;
    return result;
}
