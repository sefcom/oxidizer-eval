
  void (*)() __noreturn alacritty::gl::GetTexParameterIuiv::load_with::h4a1c8d6069e7b0cf(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glGetTexParameterIuivglGetTexPar…", 0x15, &data_c86230, 2);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::GetTexParameterIuiv::h75eecf50d38226fe = result_1;
    data_ce5ef8 = result;
    return result;
}
