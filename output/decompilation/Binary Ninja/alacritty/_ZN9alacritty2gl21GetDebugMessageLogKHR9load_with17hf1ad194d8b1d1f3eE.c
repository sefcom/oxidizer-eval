
  void (*)() __noreturn alacritty::gl::GetDebugMessageLogKHR::load_with::hf1ad194d8b1d1f3e(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glGetDebugMessageLogKHRglGetDebu…", 0x17, 8, 0);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::GetDebugMessageLogKHR::h9d2c09e2d01f4078 = result_1;
    data_ce5ca0 = result;
    return result;
}
