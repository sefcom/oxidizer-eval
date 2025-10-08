
  void (*)() __noreturn alacritty::gl::PixelStoref::load_with::h2c87780d6ecd8692(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glPixelStorefglPixelStoreiglPoin…", 0xd, 8, 0);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::PixelStoref::h78a5d3606f7b1c29 = result_1;
    data_ce6278 = result;
    return result;
}
