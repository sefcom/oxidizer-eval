
  void (*)() __noreturn alacritty::gl::BeginConditionalRender::load_with::h1786aaae75204a5e(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glBeginConditionalRenderglBeginQ…", 0x18, &data_c858e0, 1);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::BeginConditionalRender::hd2ad6e3bff38f6f3 = result_1;
    data_ce5570 = result;
    return result;
}
