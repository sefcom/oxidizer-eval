
  void (*)() __noreturn alacritty::gl::Scissor::load_with::h823eb5a413960601(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glScissorglSecondaryColorP3uiglS…", 9, 8, 0);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::Scissor::h69bc83a191793b41 = result_1;
    data_ce6450 = result;
    return result;
}
