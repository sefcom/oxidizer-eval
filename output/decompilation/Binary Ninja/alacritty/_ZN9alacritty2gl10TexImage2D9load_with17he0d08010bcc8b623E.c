
  void (*)() __noreturn alacritty::gl::TexImage2D::load_with::he0d08010bcc8b623(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glTexImage2DglTexImage2DMultisam…", 0xc, 8, 0);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    *alacritty::gl::storage::TexImage2D::hb16e57e790040cbc.0 = result_1;
    return result;
}
