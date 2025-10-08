
  void (*)() __noreturn alacritty::gl::ColorMask::load_with::h19afed32d2c78fc3(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glColorMaskglColorMaskIndexedEXT…", 0xb, 8, 0);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::ColorMask::h73d30a41afed983e = result_1;
    data_ce5738 = result;
    return result;
}
