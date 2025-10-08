
  void (*)() __noreturn alacritty::gl::GetnUniformuiv::load_with::h8fd61899862bb11f(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glGetnUniformuivglSampleCoverage…", 0x10, &data_c86380, 1);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::GetnUniformuiv::h0ab3fd865b99fe75 = result_1;
    data_ce6030 = result;
    return result;
}
