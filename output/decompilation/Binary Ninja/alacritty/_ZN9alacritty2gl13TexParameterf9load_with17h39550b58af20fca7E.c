
  void (*)() __noreturn alacritty::gl::TexParameterf::load_with::h39550b58af20fca7(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glTexParameterfglTexParameterigl…", 0xf, 8, 0);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::TexParameterf::hbea3a1c777bc437f = result_1;
    data_ce65e0 = result;
    return result;
}
