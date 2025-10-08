
  void (*)() __noreturn alacritty::gl::Uniform1fv::load_with::h6f9ac41760ba53ff(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glUniform1fvglUniform1iARBglUnif…", 0xc, &data_c86740, 1);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::Uniform1fv::hc6759e9cc6ffe8fb = result_1;
    data_ce6658 = result;
    return result;
}
