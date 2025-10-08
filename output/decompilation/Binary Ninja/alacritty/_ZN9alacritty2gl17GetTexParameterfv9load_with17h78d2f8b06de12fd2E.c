
  void (*)() __noreturn alacritty::gl::GetTexParameterfv::load_with::h78d2f8b06de12fd2(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glGetTexParameterfvglGetTexParam…", 0x13, 8, 0);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::GetTexParameterfv::hfb57d1fd247607ad = result_1;
    data_ce5f08 = result;
    return result;
}
