
  void (*)() __noreturn alacritty::gl::Uniform3f::load_with::h51ca57091cd7c8b8(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glUniform3fglUniform3fvARBglUnif…", 0xb, &data_c867f0, 1);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::Uniform3f::hc3318fdfdc13a83c = result_1;
    data_ce66f8 = result;
    return result;
}
