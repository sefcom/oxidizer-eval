
  void (*)() __noreturn alacritty::gl::ClientWaitSync::load_with::hfa9ab213eac5dfd7(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glClientWaitSynceglReleaseThread…", 0x10, &data_c85a70, 1);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::ClientWaitSync::h76466dc75020a46a = result_1;
    data_ce5728 = result;
    return result;
}
