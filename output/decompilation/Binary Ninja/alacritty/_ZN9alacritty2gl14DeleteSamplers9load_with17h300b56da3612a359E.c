
  void (*)() __noreturn alacritty::gl::DeleteSamplers::load_with::h300b56da3612a359(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glDeleteSamplersglFenceSyncAPPLE…", 0x10, 8, 0);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::DeleteSamplers::h915bca570371fac4 = result_1;
    data_ce5918 = result;
    return result;
}
