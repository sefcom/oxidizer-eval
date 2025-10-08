
  void (*)() __noreturn alacritty::gl::GetCompressedTexImage::load_with::h1a5d41815a0b025f(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glGetCompressedTexImageglGetDebu…", 0x17, &data_c86050, 1);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::GetCompressedTexImage::hf5667a511e730112 = result_1;
    data_ce5c80 = result;
    return result;
}
