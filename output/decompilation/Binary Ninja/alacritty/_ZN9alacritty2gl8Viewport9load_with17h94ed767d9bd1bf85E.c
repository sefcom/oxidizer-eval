
  void (*)() __noreturn alacritty::gl::Viewport::load_with::h94ed767d9bd1bf85(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glViewportglWaitSyncAPPLEglWaitS…", 0xa, 8, 0);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    *alacritty::gl::storage::Viewport::h10fb47e81d67ad16.0 = result_1;
    return result;
}
