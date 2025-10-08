
  void (*)() __noreturn alacritty::gl::TexParameterIuiv::load_with::hbe4de809267225a1(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glTexParameterIuivglTexParameter…", 0x12, &data_c866d0, 2);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::TexParameterIuiv::ha4f73ff95a35c7cc = result_1;
    data_ce65d0 = result;
    return result;
}
