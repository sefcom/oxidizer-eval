
  void (*)() __noreturn alacritty::gl::CheckFramebufferStatus::load_with::h573e3b55b0d90fc0(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glCheckFramebufferStatusglClampC…", 0x18, &data_c85a50, 1);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::CheckFramebufferStatus::h4ae9c5d4798cb900 = result_1;
    data_ce5698 = result;
    return result;
}
