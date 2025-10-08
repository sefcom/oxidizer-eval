
  void (*)() __noreturn alacritty::gl::IsQuery::load_with::h583614bee6b47b45(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glIsQueryglIsRenderbufferEXTglIs…", 9, &data_c863f0, 1);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::IsQuery::hb69a5fb88e93b091 = result_1;
    data_ce60b0 = result;
    return result;
}
