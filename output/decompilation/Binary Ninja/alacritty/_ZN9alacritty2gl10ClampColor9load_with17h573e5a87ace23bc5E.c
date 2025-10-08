
  void (*)() __noreturn alacritty::gl::ClampColor::load_with::h573e5a87ace23bc5(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glClampColorglClearglClearBuffer…", 0xc, &data_c85a60, 1);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::ClampColor::h3e27505c02aa7f21 = result_1;
    data_ce56a8 = result;
    return result;
}
