
  void (*)() __noreturn alacritty::gl::Uniform1f::load_with::h6a2af1e569c981c9(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glUniform1fglUniform1fvARBglUnif…", 0xb, &data_c86730, 1);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    *alacritty::gl::storage::Uniform1f::he912ff9a2d8e282f.0 = result_1;
    return result;
}
