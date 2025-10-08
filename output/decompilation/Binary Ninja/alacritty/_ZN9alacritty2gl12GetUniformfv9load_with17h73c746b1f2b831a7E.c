
  void (*)() __noreturn alacritty::gl::GetUniformfv::load_with::h73c746b1f2b831a7(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glGetUniformfvglGetUniformivARBg…", 0xe, &data_c86270, 1);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::GetUniformfv::h5380359dc6354903 = result_1;
    data_ce5f60 = result;
    return result;
}
