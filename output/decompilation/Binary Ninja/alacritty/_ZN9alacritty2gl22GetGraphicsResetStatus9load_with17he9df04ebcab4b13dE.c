
  void (*)() __noreturn alacritty::gl::GetGraphicsResetStatus::load_with::he9df04ebcab4b13d(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glGetGraphicsResetStatusglGetInt…", 0x18, &data_c860b0, 2);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    *alacritty::gl::storage::GetGraphicsResetStatus::he603977498c441ae.0 = result_1;
    return result;
}
