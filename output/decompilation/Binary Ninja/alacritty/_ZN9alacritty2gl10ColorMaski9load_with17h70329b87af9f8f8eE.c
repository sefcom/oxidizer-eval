
  void (*)() __noreturn alacritty::gl::ColorMaski::load_with::h70329b87af9f8f8e(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glColorMaskiglColorP3uiglColorP3…", 0xc, &data_c85a80, 3);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::ColorMaski::hf7e615dab2bc020a = result_1;
    data_ce5748 = result;
    return result;
}
