
  void (*)() __noreturn alacritty::gl::ClearStencil::load_with::hebf30dcc0a1859ba(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glClearStencilglClientWaitSyncAP…", 0xe, 8, 0);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::ClearStencil::h3be52056f27eada0 = result_1;
    data_ce5718 = result;
    return result;
}
