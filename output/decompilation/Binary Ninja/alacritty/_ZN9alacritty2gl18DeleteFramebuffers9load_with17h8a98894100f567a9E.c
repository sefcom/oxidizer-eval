
  void (*)() __noreturn alacritty::gl::DeleteFramebuffers::load_with::h8a98894100f567a9(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glDeleteFramebuffersglDeleteProg…", 0x14, &data_c85c10, 1);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::DeleteFramebuffers::haa7700682ecdc84a = result_1;
    data_ce58e0 = result;
    return result;
}
