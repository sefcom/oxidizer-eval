
  void (*)() __noreturn alacritty::gl::WaitSync::load_with::h52a09fdcdb15dfc8(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glWaitSyncgl function was not lo…", 0xa, &data_c86f00, 1);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::WaitSync::hdb64d7a02c99ddcc = result_1;
    data_ce6d00 = result;
    return result;
}
