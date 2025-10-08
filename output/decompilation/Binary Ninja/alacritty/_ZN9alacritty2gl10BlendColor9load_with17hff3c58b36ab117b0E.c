
  void (*)() __noreturn alacritty::gl::BlendColor::load_with::hff3c58b36ab117b0(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glBlendColorglBlendEquationEXTgl…", 0xc, &data_c859c0, 1);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::BlendColor::h3193f3dce4adb5fe = result_1;
    data_ce5638 = result;
    return result;
}
