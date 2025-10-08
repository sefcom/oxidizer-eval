
  void (*)() __noreturn alacritty::gl::GetActiveUniformBlockName::load_with::h7e434e28f279c55e(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glGetActiveUniformBlockNameglGet…", 0x1b, 8, 0);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::GetActiveUniformBlockName::h31005f8343536302 = result_1;
    data_ce5bc0 = result;
    return result;
}
