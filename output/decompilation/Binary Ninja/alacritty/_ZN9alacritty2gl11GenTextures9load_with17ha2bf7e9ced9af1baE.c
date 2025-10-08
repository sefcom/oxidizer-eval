
  void (*)() __noreturn alacritty::gl::GenTextures::load_with::ha2bf7e9ced9af1ba(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glGenTexturesglGenVertexArraysAP…", 0xd, 8, 0);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    *alacritty::gl::storage::GenTextures::hb4d686c2057792ad.0 = result_1;
    return result;
}
