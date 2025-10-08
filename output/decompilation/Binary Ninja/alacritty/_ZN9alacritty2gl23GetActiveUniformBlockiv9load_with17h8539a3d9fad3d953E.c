
  void (*)() __noreturn alacritty::gl::GetActiveUniformBlockiv::load_with::h8539a3d9fad3d953(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glGetActiveUniformBlockivglGetAc…", 0x19, 8, 0);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::GetActiveUniformBlockiv::h0b166381c699fe0a = result_1;
    data_ce5bd0 = result;
    return result;
}
