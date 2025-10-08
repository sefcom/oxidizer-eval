
  void (*)() __noreturn alacritty::gl::TexImage3DMultisample::load_with::h4a5f60bec1f2e2c7(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glTexImage3DMultisampleglTexPara…", 0x17, 8, 0);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::TexImage3DMultisample::haaa0ebcd10ead6b1 = result_1;
    data_ce65b0 = result;
    return result;
}
