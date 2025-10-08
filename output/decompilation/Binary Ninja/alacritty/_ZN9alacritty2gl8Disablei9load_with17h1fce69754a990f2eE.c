
  void (*)() __noreturn alacritty::gl::Disablei::load_with::h1fce69754a990f2e(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glDisableiglDrawArraysEXTglDrawA…", 0xa, &data_c85c90, 4);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::Disablei::hd129914ebb8cca12 = result_1;
    data_ce59a8 = result;
    return result;
}
