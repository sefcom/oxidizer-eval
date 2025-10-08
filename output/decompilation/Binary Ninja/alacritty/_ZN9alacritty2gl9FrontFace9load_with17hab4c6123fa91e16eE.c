
  void (*)() __noreturn alacritty::gl::FrontFace::load_with::hab4c6123fa91e16e(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glFrontFaceglGenBuffersARBglGenB…", 0xb, 8, 0);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::FrontFace::h06c29dcfdcf3ab41 = result_1;
    data_ce5b28 = result;
    return result;
}
