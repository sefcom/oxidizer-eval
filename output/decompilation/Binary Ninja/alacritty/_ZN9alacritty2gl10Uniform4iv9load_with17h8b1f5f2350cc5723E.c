
  void (*)() __noreturn alacritty::gl::Uniform4iv::load_with::h8b1f5f2350cc5723(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glUniform4ivglUniform4uiEXTglUni…", 0xc, &data_c86880, 1);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::Uniform4iv::h5f308a10c3259e7d = result_1;
    data_ce6780 = result;
    return result;
}
