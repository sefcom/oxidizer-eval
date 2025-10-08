
  void (*)() __noreturn alacritty::gl::Uniform2fv::load_with::hfdea0c5f72d8364b(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glUniform2fvglUniform2iARBglUnif…", 0xc, &data_c867a0, 1);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::Uniform2fv::hf6723474c13e973c = result_1;
    data_ce66a8 = result;
    return result;
}
