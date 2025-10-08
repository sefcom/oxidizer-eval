
  void (*)() __noreturn alacritty::gl::IsTexture::load_with::h90de618f2cae0e3b(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glIsTextureglIsVertexArrayAPPLEg…", 0xb, 8, 0);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::IsTexture::h942ddedc1fe11156 = result_1;
    data_ce6100 = result;
    return result;
}
