
  void (*)() __noreturn alacritty::gl::ColorP3ui::load_with::h9825dbc743e7177b(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glColorP3uiglColorP3uivglColorP4…", 0xb, 8, 0);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::ColorP3ui::h62104f9b30e6ebf1 = result_1;
    data_ce5758 = result;
    return result;
}
