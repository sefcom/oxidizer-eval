
  void (*)() __noreturn alacritty::gl::PolygonMode::load_with::hfa6a642ab36b7fe9(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glPolygonModeglPolygonOffsetglPo…", 0xd, &data_c86550, 1);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::PolygonMode::h100d3b1bd569f378 = result_1;
    data_ce62e0 = result;
    return result;
}
