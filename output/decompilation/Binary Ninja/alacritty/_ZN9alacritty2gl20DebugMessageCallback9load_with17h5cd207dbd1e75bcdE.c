
  void (*)() __noreturn alacritty::gl::DebugMessageCallback::load_with::h5cd207dbd1e75bcd(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glDebugMessageCallbackglDebugMes…", 0x16, &data_c85ba0, 2);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    *alacritty::gl::storage::DebugMessageCallback::hf8622d353bcde498.0 = result_1;
    return result;
}
