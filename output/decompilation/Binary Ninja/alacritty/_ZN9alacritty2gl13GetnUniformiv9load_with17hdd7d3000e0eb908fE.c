
  void (*)() __noreturn alacritty::gl::GetnUniformiv::load_with::hdd7d3000e0eb908f(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glGetnUniformivglGetnUniformuivK…", 0xf, &data_c86360, 2);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::GetnUniformiv::h07e86d3e4749fe83 = result_1;
    data_ce6010 = result;
    return result;
}
