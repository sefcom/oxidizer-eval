
  void (*)() __noreturn alacritty::gl::RenderbufferStorage::load_with::h1bfa6755a0362934(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glRenderbufferStorageglRenderbuf…", 0x15, &data_c865d0, 1);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::RenderbufferStorage::hbb1cd6ab2c197fe4 = result_1;
    data_ce63b0 = result;
    return result;
}
