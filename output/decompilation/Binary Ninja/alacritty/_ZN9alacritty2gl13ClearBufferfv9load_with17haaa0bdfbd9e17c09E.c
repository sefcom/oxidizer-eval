
  void (*)() __noreturn alacritty::gl::ClearBufferfv::load_with::haaa0bdfbd9e17c09(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glClearBufferfvglClearBufferivgl…", 0xf, 8, 0);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::ClearBufferfv::hc09227fbc7441f60 = result_1;
    data_ce56d0 = result;
    return result;
}
