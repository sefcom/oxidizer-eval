
  void (*)() __noreturn alacritty::gl::TexImage2DMultisample::load_with::hd465daf1c871fde7(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glTexImage2DMultisampleglTexImag…", 0x17, 8, 0);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::TexImage2DMultisample::h73b1a5fb05592a4c = result_1;
    data_ce6590 = result;
    return result;
}
