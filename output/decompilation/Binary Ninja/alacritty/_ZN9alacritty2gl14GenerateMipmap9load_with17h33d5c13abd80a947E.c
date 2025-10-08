
  void (*)() __noreturn alacritty::gl::GenerateMipmap::load_with::h33d5c13abd80a947(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glGenerateMipmapglUnmapBufferARB", 0x10, &data_c85fc0, 1);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::GenerateMipmap::h296e650bec50455d = result_1;
    data_ce5b90 = result;
    return result;
}
