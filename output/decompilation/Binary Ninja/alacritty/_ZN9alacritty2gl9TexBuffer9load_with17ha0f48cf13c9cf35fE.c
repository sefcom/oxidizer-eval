
  void (*)() __noreturn alacritty::gl::TexBuffer::load_with::ha0f48cf13c9cf35f(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glTexBufferglTexCoordP1uiglTexCo…", 0xb, &data_c86670, 3);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::TexBuffer::hf1210eeec5e18eb0 = result_1;
    data_ce64e8 = result;
    return result;
}
