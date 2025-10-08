
  void (*)() __noreturn alacritty::gl::IsSampler::load_with::h6516035f4a29bc26(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glIsSamplerglIsShaderglIsSyncAPP…", 0xb, 8, 0);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::IsSampler::h58fc99206a81bb7f = result_1;
    data_ce60d0 = result;
    return result;
}
