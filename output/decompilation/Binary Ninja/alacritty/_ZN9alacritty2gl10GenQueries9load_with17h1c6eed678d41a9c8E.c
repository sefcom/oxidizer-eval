
  void (*)() __noreturn alacritty::gl::GenQueries::load_with::h1c6eed678d41a9c8(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glGenQueriesglGenRenderbuffersEX…", 0xc, &data_c85f80, 1);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::GenQueries::h74bd1393ed18c842 = result_1;
    data_ce5b50 = result;
    return result;
}
