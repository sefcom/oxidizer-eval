
  void (*)() __noreturn alacritty::gl::FenceSync::load_with::h013bcceb805b2607(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glFenceSyncglFlushglFlushMappedB…", 0xb, &data_c85ea0, 1);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::FenceSync::h6884f10fbdb58d6a = result_1;
    data_ce5a90 = result;
    return result;
}
