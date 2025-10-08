
  void (*)() __noreturn alacritty::gl::ProvokingVertex::load_with::h0084cd286d951122(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glProvokingVertexglPushDebugGrou…", 0x11, &data_c86570, 1);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::ProvokingVertex::h7655e8304ad3ff7b = result_1;
    data_ce6330 = result;
    return result;
}
