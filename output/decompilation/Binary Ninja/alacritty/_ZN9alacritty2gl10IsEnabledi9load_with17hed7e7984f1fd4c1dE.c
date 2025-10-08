
  void (*)() __noreturn alacritty::gl::IsEnabledi::load_with::hed7e7984f1fd4c1d(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glIsEnablediglIsFramebufferEXTgl…", 0xc, &data_c863a0, 4);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::IsEnabledi::h3de75527ac85a397 = result_1;
    data_ce6080 = result;
    return result;
}
