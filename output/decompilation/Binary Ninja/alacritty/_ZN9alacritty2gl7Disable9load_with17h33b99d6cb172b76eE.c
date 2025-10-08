
  void (*)() __noreturn alacritty::gl::Disable::load_with::h33b99d6cb172b76e(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glDisableglDisableVertexAttribAr…", 9, 8, 0);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::Disable::hf4c00c194e4ca1d5 = result_1;
    data_ce5988 = result;
    return result;
}
