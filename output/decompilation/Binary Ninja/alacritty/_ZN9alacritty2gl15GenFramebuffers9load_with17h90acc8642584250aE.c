
  void (*)() __noreturn alacritty::gl::GenFramebuffers::load_with::h90acc8642584250a(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glGenFramebuffersglGenQueriesARB…", 0x11, &data_c85f70, 1);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::GenFramebuffers::h2a7521f1e6ffe3d5 = result_1;
    data_ce5b40 = result;
    return result;
}
