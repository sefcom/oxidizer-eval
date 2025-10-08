
  void (*)() __noreturn alacritty::gl::Enablei::load_with::h7241eb81f85d1ac3(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glEnableiglEndConditionalRenderN…", 9, &data_c85e10, 4);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::Enablei::he82b40ba126db879 = result_1;
    data_ce5a50 = result;
    return result;
}
