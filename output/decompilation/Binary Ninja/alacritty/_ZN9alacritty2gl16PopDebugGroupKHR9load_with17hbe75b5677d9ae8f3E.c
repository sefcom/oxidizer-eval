
  void (*)() __noreturn alacritty::gl::PopDebugGroupKHR::load_with::hbe75b5677d9ae8f3(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glPopDebugGroupKHRglPopDebugGrou…", 0x12, 8, 0);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::PopDebugGroupKHR::hb68a5112280ca12b = result_1;
    data_ce6310 = result;
    return result;
}
