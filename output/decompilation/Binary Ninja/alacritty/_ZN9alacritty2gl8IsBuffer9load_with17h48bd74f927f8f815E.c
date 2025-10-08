
  void (*)() __noreturn alacritty::gl::IsBuffer::load_with::h48bd74f927f8f815(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glIsBufferglIsEnabledglIsEnabled…", 0xa, &data_c86390, 1);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::IsBuffer::hec06dc1791eb2c85 = result_1;
    data_ce6060 = result;
    return result;
}
