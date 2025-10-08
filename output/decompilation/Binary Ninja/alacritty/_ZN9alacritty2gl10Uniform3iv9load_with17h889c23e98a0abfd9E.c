
  void (*)() __noreturn alacritty::gl::Uniform3iv::load_with::h889c23e98a0abfd9(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glUniform3ivglUniform3uiEXTglUni…", 0xc, &data_c86820, 1);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::Uniform3iv::h6da0679e59aed939 = result_1;
    data_ce6728 = result;
    return result;
}
