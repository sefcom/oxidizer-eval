
  void (*)() __noreturn alacritty::gl::RenderbufferStorageMultisample::load_with::h5be253670ab039ec(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glRenderbufferStorageMultisample…", 0x20, &data_c865e0, 2);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::RenderbufferStorageMultisample::h4af9b8f237c454e0 = result_1;
    data_ce63c0 = result;
    return result;
}
