
  void (*)() __noreturn alacritty::gl::Uniform3fv::load_with::hcfb2b9f32abf6b99(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glUniform3fvglUniform3iARBglUnif…", 0xc, &data_c86800, 1);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::Uniform3fv::h0de6f39461648b19 = result_1;
    data_ce6708 = result;
    return result;
}
