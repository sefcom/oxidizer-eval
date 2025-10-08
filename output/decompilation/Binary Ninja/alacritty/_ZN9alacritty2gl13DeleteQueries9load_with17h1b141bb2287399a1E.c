
  void (*)() __noreturn alacritty::gl::DeleteQueries::load_with::h1b141bb2287399a1(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glDeleteQueriesglDeleteRenderbuf…", 0xf, &data_c85c20, 1);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::DeleteQueries::h44c1a47835377648 = result_1;
    data_ce58f8 = result;
    return result;
}
