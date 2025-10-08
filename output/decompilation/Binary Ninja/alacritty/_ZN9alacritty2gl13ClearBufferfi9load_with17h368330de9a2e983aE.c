
  void (*)() __noreturn alacritty::gl::ClearBufferfi::load_with::h368330de9a2e983a(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glClearBufferfiglClearBufferfvgl…", 0xf, 8, 0);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::ClearBufferfi::h1c59dccfa49aac43 = result_1;
    data_ce56c0 = result;
    return result;
}
