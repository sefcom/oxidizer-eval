
  void (*)() __noreturn alacritty::gl::GetDoublev::load_with::h301a22ec3ab16dac(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glGetDoublevglGetErrorglGetFloat…", 0xc, 8, 0);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::GetDoublev::he0bbbbc1251172af = result_1;
    data_ce5cb0 = result;
    return result;
}
