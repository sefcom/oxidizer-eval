
  void (*)() __noreturn alacritty::gl::DebugMessageCallbackKHR::load_with::heb7edec1b6a9e840(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glDebugMessageCallbackKHRglDebug…", 0x19, 8, 0);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::DebugMessageCallbackKHR::hcd1ba2b86e268d6c = result_1;
    data_ce5888 = result;
    return result;
}
