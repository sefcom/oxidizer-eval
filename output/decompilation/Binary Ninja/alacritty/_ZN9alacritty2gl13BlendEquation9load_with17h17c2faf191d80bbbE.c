
  void (*)() __noreturn alacritty::gl::BlendEquation::load_with::h17c2faf191d80bbb(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glBlendEquationglBlendEquationSe…", 0xf, &data_c859d0, 1);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::BlendEquation::h5d6b02692ab08a97 = result_1;
    data_ce5648 = result;
    return result;
}
