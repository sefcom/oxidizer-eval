
  void (*)() __noreturn alacritty::gl::GetInteger64v::load_with::h5a590f922128e4e5(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glGetInteger64vglGetIntegerIndex…", 0xf, &data_c860d0, 1);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::GetInteger64v::hba43412aa3e82f40 = result_1;
    data_ce5d30 = result;
    return result;
}
