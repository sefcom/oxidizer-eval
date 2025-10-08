
  void (*)() __noreturn alacritty::gl::DeleteRenderbuffers::load_with::h783aeb9d4b89efad(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glDeleteRenderbuffersglDeleteSha…", 0x15, &data_c85c30, 1);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::DeleteRenderbuffers::h97f397782406b0f9 = result_1;
    data_ce5908 = result;
    return result;
}
